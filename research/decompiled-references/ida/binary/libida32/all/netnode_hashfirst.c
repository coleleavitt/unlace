__int64 __fastcall netnode_hashfirst(unsigned int a1, _BYTE *a2, __int64 a3, int a4)
{
  _BYTE *v4; // r14
  __int64 v5; // r13
  int v6; // r12d
  __int64 v12; // rdi

  v12 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 )
    return -1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  *(_WORD *)(v12 + 45) = 6;
  *(_DWORD *)(v12 + 48) = _byteswap_ulong(a1);
  *(_BYTE *)(v12 + 52) = a4;
  if ( (unsigned __int64)sub_723E90(*(_QWORD *)v12, (unsigned __int16 *)(v12 + 45)) < 2 )
    return sub_78D550(v12, v6, a1, 0, (__int64)v4, v5, 1);
  if ( v4 )
  {
    if ( v5 > 0 )
      *v4 = 0;
  }
  return 0;
}

