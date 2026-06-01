__int64 __fastcall netnode_valstr(unsigned int a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rbp
  _BYTE *v4; // rbx
  unsigned __int16 *v5; // rax
  _BYTE *v6; // rsi
  __int64 v11; // rdi

  v11 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 )
    return -1;
  v3 = a3;
  v4 = a2;
  *(_DWORD *)(v11 + 48) = _byteswap_ulong(a1);
  *(_WORD *)(v11 + 45) = 6;
  *(_BYTE *)(v11 + 52) = 86;
  v5 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v11, (unsigned __int16 *)(v11 + 45));
  v6 = v5;
  if ( v5 )
    v6 = (char *)v5 + *v5 + 2;
  return sub_78F220(v4, v6, -1, v3);
}

