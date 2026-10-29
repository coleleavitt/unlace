/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004ED18
// Address: 0x000000010004ED18

//----- (000000010004ED18) ----------------------------------------------------
void *__fastcall sub_10004ED18(_QWORD **a1, __int64 a2)
{
  char *v3; // x8
  const char *v4; // x20
  void *result; // x0
  size_t v6; // x21
  _QWORD *v7; // x23
  unsigned __int64 v8; // x22
  _QWORD *v9; // x8
  char v10; // [xsp+7h] [xbp-39h] BYREF

  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(char **)a2;
  else
    v3 = &byte_10007AE40;
  if ( v3 )
    v4 = v3;
  else
    v4 = &byte_1000931E5;
  result = (void *)strlen(v4);
  v6 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v7 = a1[1];
    if ( __CFADD__(v7, v6) )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v8 = (unsigned __int64)v7 + v6;
    if ( (unsigned __int64)v7 >= v8 )
    {
      if ( v7 != (_QWORD *)v8 )
      {
        v10 = 0;
        sub_10001B764(a1, v8, &v10);
      }
    }
    else
    {
      v9 = *a1;
      if ( (unsigned __int64)a1[2] < v8 )
      {
        v9 = qvector_reserve(a1, *a1, v8, 1u);
        *a1 = v9;
      }
      bzero((char *)a1[1] + (_QWORD)v9, v8 - (_QWORD)a1[1]);
      a1[1] = (_QWORD *)v8;
    }
    return memcpy((char *)v7 + (_QWORD)*a1, v4, v6);
  }
  return result;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000931E5: using guessed type char byte_1000931E5;
