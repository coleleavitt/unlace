unsigned __int64 __fastcall sub_D400(_QWORD *a1, __int16 a2, const char *a3)
{
  size_t v3; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  v3 = 0;
  if ( a3 )
    v3 = strlen(a3);
  v5 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v5;
  if ( !v5 || (v6 = v5 + 24, v5 + 24 > a1[2]) )
  {
    v7 = 2LL * a1[4];
    if ( v7 < 0x20 )
      v7 = 32;
    a1[4] = v7;
    v8 = v7 + 8;
    v9 = malloc(v7 + 8);
    v10 = a1[3];
    a1[3] = v9;
    *v9 = v10;
    v5 = ((unsigned __int64)v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v9 + v8;
    v6 = v5 + 24;
  }
  a1[1] = v6;
  *(_QWORD *)v5 = a3;
  *(_QWORD *)(v5 + 8) = v3;
  *(_WORD *)(v5 + 16) = 98;
  *(_BYTE *)(v5 + 18) = 1;
  v11 = sub_BAC0(a1, 143, "Swift", (size_t)&byte_5);
  v12 = sub_CE00(a1, a2, v11, v5);
  return sub_CD20(a1, 221, v12);
}
