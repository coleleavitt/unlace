unsigned __int64 __fastcall netnode_valobj(unsigned int a1, void *a2, signed __int64 a3)
{
  signed __int64 v3; // rbp
  void *v4; // rbx
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rsi
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
    v6 = (unsigned __int16 *)((char *)v5 + *v5 + 2);
  return sub_78F1B0(v4, v6, v3);
}

