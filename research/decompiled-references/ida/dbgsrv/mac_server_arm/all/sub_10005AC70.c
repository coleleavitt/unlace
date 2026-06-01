/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005AC70
// Address: 0x000000010005AC70

//----- (000000010005AC70) ----------------------------------------------------
void *__fastcall sub_10005AC70(_QWORD **a1, _QWORD *a2)
{
  char *v4; // x8
  const char *v5; // x20
  void *result; // x0
  size_t v7; // x21
  _QWORD *v8; // x23
  unsigned __int64 v9; // x22
  _QWORD *v10; // x8
  char v11; // [xsp+7h] [xbp-39h] BYREF

  sub_1000500AC(a1, *a2 + 1LL);
  sub_1000500AC(a1, a2[1] + 1LL);
  if ( a2[3] )
    v4 = (char *)a2[2];
  else
    v4 = &byte_100075A30;
  if ( v4 )
    v5 = v4;
  else
    v5 = &byte_10008E2F5;
  result = (void *)strlen(v5);
  v7 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v8 = a1[1];
    if ( __CFADD__(v8, v7) )
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v9 = (unsigned __int64)v8 + v7;
    if ( (unsigned __int64)v8 >= v9 )
    {
      if ( v8 != (_QWORD *)v9 )
      {
        v11 = 0;
        sub_100019CE4(a1, v9, &v11);
      }
    }
    else
    {
      v10 = *a1;
      if ( (unsigned __int64)a1[2] < v9 )
      {
        v10 = qvector_reserve(a1, *a1, v9, 1u);
        *a1 = v10;
      }
      bzero((char *)a1[1] + (_QWORD)v10, v9 - (_QWORD)a1[1]);
      a1[1] = (_QWORD *)v9;
    }
    return memcpy((char *)v8 + (_QWORD)*a1, v5, v7);
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
