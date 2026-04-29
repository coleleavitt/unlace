unsigned __int64 __fastcall sub_C650(_QWORD *a1, __int16 a2, const char *a3)
{
  size_t v3; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v3 = 0;
  if ( a3 )
    v3 = strlen(a3);
  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = result;
  if ( !result || (v6 = result + 24, result + 24 > a1[2]) )
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
    result = ((unsigned __int64)v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v9 + v8;
    v6 = result + 24;
  }
  a1[1] = v6;
  *(_WORD *)(result + 16) = a2;
  *(_BYTE *)(result + 18) = 1;
  *(_QWORD *)result = a3;
  *(_QWORD *)(result + 8) = v3;
  return result;
}
