unsigned __int64 __fastcall sub_CE00(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  if ( !a3 || !a4 )
    return 0;
  v6 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v6;
  if ( !v6 || (v7 = v6 + 24, v6 + 24 > a1[2]) )
  {
    v8 = 2LL * a1[4];
    if ( v8 < 0x20 )
      v8 = 32;
    a1[4] = v8;
    v9 = v8 + 8;
    v10 = malloc(v8 + 8);
    v11 = a1[3];
    a1[3] = v10;
    *v10 = v11;
    v6 = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v10 + v9;
    v7 = v6 + 24;
  }
  a1[1] = v7;
  *(_WORD *)(v6 + 16) = a2;
  *(_QWORD *)v6 = a3;
  *(_QWORD *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 18) = 3;
  sub_C080(v6, a4, a1);
  return v6;
}

