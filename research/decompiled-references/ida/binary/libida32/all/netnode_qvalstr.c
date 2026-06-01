__int64 __fastcall netnode_qvalstr(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 *v3; // rax
  unsigned __int16 *v4; // rsi
  __int64 v8; // rdi

  v8 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 )
    JUMPOUT(0x791C90);
  v2 = a2;
  *(_DWORD *)(v8 + 48) = _byteswap_ulong(a1);
  *(_WORD *)(v8 + 45) = 6;
  *(_BYTE *)(v8 + 52) = 86;
  v3 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v8, (unsigned __int16 *)(v8 + 45));
  v4 = v3;
  if ( v3 )
    v4 = (unsigned __int16 *)((char *)v3 + *v3 + 2);
  return sub_78F2E0(v2, v4, 0xFFFFFFFFFFFFFFFFLL);
}

