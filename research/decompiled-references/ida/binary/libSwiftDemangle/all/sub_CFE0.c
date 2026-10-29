unsigned __int64 __fastcall sub_CFE0(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+0h] [rbp-48h]

  if ( !a3 || !a4 || !a5 || !a6 )
    return 0;
  v10 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v10;
  if ( !v10 || (v11 = v10 + 24, v10 + 24 > a1[2]) )
  {
    v12 = 2LL * a1[4];
    if ( v12 < 0x20 )
      v12 = 32;
    a1[4] = v12;
    v16 = v12 + 8;
    v13 = malloc(v12 + 8);
    v14 = a1[3];
    a1[3] = v13;
    *v13 = v14;
    v10 = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v13 + v16;
    v11 = v10 + 24;
  }
  a1[1] = v11;
  *(_WORD *)(v10 + 16) = a2;
  *(_QWORD *)v10 = a3;
  *(_QWORD *)(v10 + 8) = 0;
  *(_BYTE *)(v10 + 18) = 3;
  sub_C080(v10, a4, a1);
  sub_C080(v10, a5, a1);
  sub_C080(v10, a6, a1);
  return v10;
}

