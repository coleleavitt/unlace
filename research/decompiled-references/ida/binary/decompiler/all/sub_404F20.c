__int64 __fastcall sub_404F20(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // r13
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // eax

  v1 = *(_QWORD *)(a1[1] + 920LL);
  if ( (*(_BYTE *)(v1 + 176) & 0x20) == 0 )
  {
    v2 = a1[5];
    if ( *(_QWORD *)(v1 + 112) )
      return sub_3DEE70((__int64 *)(v1 + 104), v2);
    if ( (unsigned __int8)sub_404740(a1) )
    {
      sub_3EA490((__int64)a1);
      v7 = a1[2];
      v8 = *(_DWORD *)(v7 + 24);
      BYTE1(v8) &= ~2u;
      LOBYTE(v8) = v8 | 0x80;
      *(_DWORD *)(v7 + 24) = v8;
      return sub_3DEE70((__int64 *)(v1 + 104), v2);
    }
    *(_DWORD *)(v1 + 176) |= 0x20u;
    sub_32DD50(a1[1], v2, 18, v4, v5, v6);
  }
  return 0xFFFFFFFFLL;
}
