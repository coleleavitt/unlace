unsigned __int64 __fastcall sub_C400(_QWORD *a1, __int16 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rax

  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = result;
  if ( !result || (v3 = result + 24, result + 24 > a1[2]) )
  {
    v4 = 2LL * a1[4];
    if ( v4 < 0x20 )
      v4 = 32;
    a1[4] = v4;
    v5 = v4 + 8;
    v6 = malloc(v4 + 8);
    v7 = a1[3];
    a1[3] = v6;
    *v6 = v7;
    result = ((unsigned __int64)v6 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v6 + v5;
    v3 = result + 24;
  }
  a1[1] = v3;
  *(_WORD *)(result + 16) = a2;
  *(_BYTE *)(result + 18) = 0;
  return result;
}
