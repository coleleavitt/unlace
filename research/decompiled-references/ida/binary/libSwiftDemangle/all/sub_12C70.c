unsigned __int64 __fastcall sub_12C70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  size_t v6; // rbp
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v2 = 24 * a2;
  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = result;
  if ( !result || (v4 = result + v2, result + v2 > a1[2]) )
  {
    v5 = 2LL * a1[4];
    if ( v5 < v2 + 8 )
      v5 = v2 + 8;
    a1[4] = v5;
    v6 = v5 + 8;
    v7 = malloc(v6);
    v8 = a1[3];
    a1[3] = v7;
    *v7 = v8;
    result = ((unsigned __int64)v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v7 + v6;
    v4 = result + v2;
  }
  a1[1] = v4;
  return result;
}

