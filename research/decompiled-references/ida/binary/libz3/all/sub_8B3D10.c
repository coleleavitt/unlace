char __fastcall sub_8B3D10(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  char v8; // al
  char result; // al
  _QWORD v10[16]; // [rsp+8h] [rbp-80h] BYREF

  v3 = (__int64)(a1 + 92);
  v5 = a1[199] + 232LL * a2;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182EA00(a1 + 92, v5 + 72, a3);
  }
  else
  {
    v6 = *(_DWORD *)a3;
    *(_BYTE *)(v5 + 76) &= ~1u;
    *(_DWORD *)(v5 + 72) = v6;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182EA00(v3, v5 + 88, a3 + 16);
  }
  else
  {
    v7 = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(v5 + 92) &= ~1u;
    *(_DWORD *)(v5 + 88) = v7;
  }
  sub_8ADE80(v3, v5 + 104, (int *)(a3 + 32));
  v8 = *(_BYTE *)(v5 + 3) | 0x40;
  *(_BYTE *)(v5 + 3) = v8;
  if ( (v8 & 0x20) != 0 )
    goto LABEL_6;
  result = sub_8AEDF0(v3, v5 + 8, a3);
  if ( result )
  {
    v10[0] = 0;
    v10[1] = 0;
    v10[2] = 1;
    memset(&v10[3], 0, 24);
    v10[6] = 1;
    v10[7] = 0;
    sub_8B3C30(v3, a3, v5 + 8, (__int64)v10);
    sub_8B2760(a1, a2, (__int64)v10);
    return sub_8AD4E0(v3, (__int64)v10);
  }
  if ( (*(_BYTE *)(v5 + 3) & 0x20) != 0 )
  {
LABEL_6:
    result = sub_8AEDF0(v3, v5 + 8, a3);
    if ( result )
      return sub_8B12A0((__int64)a1, a2);
  }
  return result;
}

