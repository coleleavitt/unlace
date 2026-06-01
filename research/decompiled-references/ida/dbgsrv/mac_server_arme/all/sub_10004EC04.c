/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004EC04
// Address: 0x000000010004EC04

//----- (000000010004EC04) ----------------------------------------------------
_QWORD **__fastcall sub_10004EC04(_QWORD **a1, const void *a2, size_t a3)
{
  _QWORD *v4; // x21
  unsigned __int64 v5; // x20
  const void *v6; // x22
  size_t v7; // x23
  _QWORD *v8; // x8
  size_t v9; // x22
  const void *v10; // x23
  char v12; // [xsp+7h] [xbp-39h] BYREF

  if ( a3 )
  {
    v4 = a1[1];
    if ( __CFADD__(v4, a3) )
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v5 = (unsigned __int64)v4 + a3;
    if ( (unsigned __int64)v4 >= v5 )
    {
      if ( v4 != (_QWORD *)v5 )
      {
        v12 = 0;
        v9 = a3;
        v10 = a2;
        sub_10001B764(a1, v5, &v12);
        a2 = v10;
        a3 = v9;
      }
    }
    else
    {
      v6 = a2;
      v7 = a3;
      v8 = *a1;
      if ( (unsigned __int64)a1[2] < v5 )
      {
        v8 = qvector_reserve(a1, *a1, v5, 1u);
        *a1 = v8;
      }
      bzero((char *)a1[1] + (_QWORD)v8, v5 - (_QWORD)a1[1]);
      a1[1] = (_QWORD *)v5;
      a3 = v7;
      a2 = v6;
    }
    memcpy((char *)v4 + (_QWORD)*a1, a2, a3);
  }
  return a1;
}
