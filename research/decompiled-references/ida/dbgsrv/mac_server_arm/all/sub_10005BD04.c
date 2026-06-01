/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BD04
// Address: 0x000000010005BD04

//----- (000000010005BD04) ----------------------------------------------------
_BYTE *__fastcall sub_10005BD04(_QWORD **a1, __int64 a2)
{
  _BYTE *result; // x0
  size_t v5; // x20
  const void *v6; // x21
  _QWORD *v7; // x23
  unsigned __int64 v8; // x22
  _QWORD *v9; // x8
  char v10; // [xsp+7h] [xbp-39h] BYREF

  result = sub_10002CF84(a1, *(_DWORD *)a2 + 3);
  if ( *(_DWORD *)a2 != -3 )
  {
    if ( *(_DWORD *)a2 == -2 )
    {
      return sub_1000500AC(a1, *(_QWORD *)(a2 + 8) + 1LL);
    }
    else
    {
      result = sub_10002CF84(a1, *(_DWORD *)(a2 + 16));
      v5 = *(_QWORD *)(a2 + 16);
      if ( v5 )
      {
        v6 = *(const void **)(a2 + 8);
        v7 = a1[1];
        if ( __CFADD__(v7, v5) )
          v8 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v8 = (unsigned __int64)v7 + v5;
        if ( (unsigned __int64)v7 >= v8 )
        {
          if ( v7 != (_QWORD *)v8 )
          {
            v10 = 0;
            sub_100019CE4(a1, v8, &v10);
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
        return memcpy((char *)v7 + (_QWORD)*a1, v6, v5);
      }
    }
  }
  return result;
}
