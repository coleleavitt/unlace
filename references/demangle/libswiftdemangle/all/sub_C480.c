unsigned __int64 __fastcall sub_C480(_QWORD *a1, __int16 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // rax

  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = result;
  if ( !result || (v5 = result + 24, result + 24 > a1[2]) )
  {
    v6 = 2LL * a1[4];
    if ( v6 < 0x20 )
      v6 = 32;
    a1[4] = v6;
    v7 = v6 + 8;
    v8 = malloc(v6 + 8);
    v9 = a1[3];
    a1[3] = v8;
    *v8 = v9;
    result = ((unsigned __int64)v8 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v8 + v7;
    v5 = result + 24;
  }
  a1[1] = v5;
  *(_WORD *)(result + 16) = a2;
  *(_BYTE *)(result + 18) = 2;
  *(_QWORD *)result = a3;
  return result;
}
