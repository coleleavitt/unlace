/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BB10
// Address: 0x000000010005BB10

//----- (000000010005BB10) ----------------------------------------------------
void *__fastcall sub_10005BB10(_QWORD **a1, __int64 a2, int a3)
{
  void *result; // x0
  __int64 v7; // x25
  unsigned __int64 v8; // x26
  _QWORD *v9; // x8
  __int64 v10; // x23
  size_t v11; // x22
  const void *v12; // x23
  _QWORD *v13; // x28
  unsigned __int64 v14; // x24
  char v15; // [xsp+7h] [xbp-59h] BYREF

  result = sub_10002CF84(a1, *(_DWORD *)(a2 + 8));
  if ( *(_QWORD *)(a2 + 8) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v10 = *(_QWORD *)a2 + v7;
      sub_10002CF84(a1, *(_DWORD *)v10);
      result = sub_10002CF84(a1, *(_DWORD *)(v10 + 16));
      if ( a3 )
      {
        result = sub_10002CF84(a1, *(_DWORD *)(v10 + 4));
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          v12 = *(const void **)(v10 + 8);
          v13 = a1[1];
          if ( __CFADD__(v13, v11) )
            v14 = 0x7FFFFFFFFFFFFFFFLL;
          else
            v14 = (unsigned __int64)v13 + v11;
          if ( (unsigned __int64)v13 >= v14 )
          {
            if ( v13 != (_QWORD *)v14 )
            {
              v15 = 0;
              sub_100019CE4(a1, v14, &v15);
            }
          }
          else
          {
            v9 = *a1;
            if ( (unsigned __int64)a1[2] < v14 )
            {
              v9 = qvector_reserve(a1, *a1, v14, 1u);
              *a1 = v9;
            }
            bzero((char *)a1[1] + (_QWORD)v9, v14 - (_QWORD)a1[1]);
            a1[1] = (_QWORD *)v14;
          }
          result = memcpy((char *)v13 + (_QWORD)*a1, v12, v11);
        }
      }
      ++v8;
      v7 += 32;
    }
    while ( v8 < *(_QWORD *)(a2 + 8) );
  }
  return result;
}
