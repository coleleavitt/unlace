__int64 __fastcall sub_40FAA0(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // r13
  __int64 v4; // rdx
  int v5; // eax

  v1 = *(_QWORD *)(a1[1] + 920LL);
  if ( (*(_BYTE *)(v1 + 176) & 0x20) == 0 )
  {
    v2 = a1[5];
    if ( *(_QWORD *)(v1 + 112) )
      return sub_3E9AE0((__int64 *)(v1 + 104), v2);
    if ( (unsigned __int8)sub_40F2C0(a1) )
    {
      sub_3F5050((__int64)a1);
      v4 = a1[2];
      v5 = *(_DWORD *)(v4 + 24);
      BYTE1(v5) &= ~2u;
      LOBYTE(v5) = v5 | 0x80;
      *(_DWORD *)(v4 + 24) = v5;
      return sub_3E9AE0((__int64 *)(v1 + 104), v2);
    }
    *(_DWORD *)(v1 + 176) |= 0x20u;
    sub_3311F0((_QWORD *)a1[1], v2, 0x12u);
  }
  return 0xFFFFFFFFLL;
}
