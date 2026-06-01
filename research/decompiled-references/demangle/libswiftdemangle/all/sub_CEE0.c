unsigned __int64 __fastcall sub_CEE0(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  if ( a5 == 0 || a4 == 0 || !a3 )
    return 0;
  v8 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v8;
  if ( !v8 || (v9 = v8 + 24, v8 + 24 > a1[2]) )
  {
    v10 = 2LL * a1[4];
    if ( v10 < 0x20 )
      v10 = 32;
    a1[4] = v10;
    v11 = v10 + 8;
    v12 = malloc(v10 + 8);
    v13 = a1[3];
    a1[3] = v12;
    *v12 = v13;
    v8 = ((unsigned __int64)v12 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v12 + v11;
    v9 = v8 + 24;
  }
  a1[1] = v9;
  *(_WORD *)(v8 + 16) = a2;
  *(_QWORD *)v8 = a3;
  *(_QWORD *)(v8 + 8) = 0;
  *(_BYTE *)(v8 + 18) = 3;
  sub_C080(v8, a4, a1);
  sub_C080(v8, a5, a1);
  return v8;
}
