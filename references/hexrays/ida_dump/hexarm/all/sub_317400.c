bool __fastcall sub_317400(unsigned __int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r9
  __int64 v4; // r10
  unsigned __int64 *v5; // rdi
  __int64 i; // rcx
  __int64 v7; // rsi
  unsigned __int64 *v8; // rdx
  bool result; // al

  v2 = *a1;
  v4 = 2LL * (_QWORD)a1[1];
  v5 = *a1;
  for ( i = (v4 * 8) >> 4; i > 0; i = i - 1 - v7 )
  {
    while ( 1 )
    {
      v7 = i >> 1;
      v8 = &v5[2 * (i >> 1)];
      if ( *v8 + v8[1] - 1 < a2 )
        break;
      i >>= 1;
      if ( v7 <= 0 )
        goto LABEL_5;
    }
    v5 = v8 + 2;
  }
LABEL_5:
  result = 0;
  if ( v5 != &v2[v4] )
    return a2 >= *v5;
  return result;
}
