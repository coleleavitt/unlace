/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F8D4
// Address: 0x000000010005F8D4

//----- (000000010005F8D4) ----------------------------------------------------
_BYTE *__fastcall sub_10005F8D4(_QWORD **a1, __int64 a2)
{
  _BYTE *result; // x0
  __int64 v5; // x1
  size_t v6; // x20
  const void *v7; // x21
  _QWORD *v8; // x23
  unsigned __int64 v9; // x22
  _QWORD *v10; // x8
  char v11; // [xsp+7h] [xbp-39h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  result = sub_10002E2F0(a1, *(_DWORD *)a2 + 3);
  if ( *(_DWORD *)a2 != -3 )
  {
    if ( *(_DWORD *)a2 == -2 )
    {
      v5 = *(_QWORD *)(a2 + 8) + 1LL;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return sub_1000530E4(a1, v5);
    }
    else
    {
      result = sub_10002E2F0(a1, *(_DWORD *)(a2 + 16));
      v6 = *(_QWORD *)(a2 + 16);
      if ( v6 )
      {
        v7 = *(const void **)(a2 + 8);
        v8 = a1[1];
        if ( __CFADD__(v8, v6) )
          v9 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v9 = (unsigned __int64)v8 + v6;
        if ( (unsigned __int64)v8 >= v9 )
        {
          if ( v8 != (_QWORD *)v9 )
          {
            v11 = 0;
            sub_10001B764(a1, v9, &v11);
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
        return memcpy((char *)v8 + (_QWORD)*a1, v7, v6);
      }
    }
  }
  return result;
}
