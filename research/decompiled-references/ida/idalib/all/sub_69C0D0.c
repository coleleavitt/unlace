_QWORD *__fastcall sub_69C0D0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  _QWORD *result; // rax

  v2 = a2;
  if ( a2 != -1 && (*(_BYTE *)(*a1 + 940LL) & 8) != 0 )
    v2 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v3 = (_QWORD *)a1[2];
  v4 = 2LL * a1[3];
  v5 = v3;
  v6 = (v4 * 8) >> 4;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6 >> 1;
        v8 = &v5[2 * (v6 >> 1)];
        if ( *v8 >= v2 )
          break;
        v5 = v8 + 2;
        v6 = v6 - 1 - v7;
LABEL_10:
        if ( v6 <= 0 )
        {
LABEL_11:
          if ( v3 != v5 )
            v5 -= 2;
          goto LABEL_13;
        }
      }
      if ( v2 == *v8 && v8[1] < v2 )
      {
        v5 = v8 + 2;
        v6 = v6 - 1 - v7;
        goto LABEL_10;
      }
      v6 >>= 1;
      if ( v7 <= 0 )
        goto LABEL_11;
    }
  }
LABEL_13:
  result = &v3[v4];
  if ( v5 != result )
  {
    while ( v2 >= v5[1] )
    {
      v5 += 2;
      if ( v5 == result )
        return result;
    }
    return v5;
  }
  return result;
}
