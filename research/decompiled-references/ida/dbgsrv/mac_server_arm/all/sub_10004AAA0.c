/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004AAA0
// Address: 0x000000010004AAA0

//----- (000000010004AAA0) ----------------------------------------------------
__int64 __fastcall sub_10004AAA0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // x8
  size_t v9; // x19
  unsigned int v10; // w8
  bool v11; // cc
  int v12; // w8
  char *v15; // x8
  char *v16; // x20
  _QWORD *v17; // x1
  _QWORD *v18; // x22
  _QWORD *v19; // x21

  if ( *(_BYTE *)(a2 + 29) == 1 )
  {
    if ( a1 && a1 != (_QWORD *)a2 )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 )
        v9 = v8 - 1;
      else
        v9 = 0;
      if ( v8 >= 2 )
      {
        v16 = *(char **)a2;
        v17 = (_QWORD *)*a1;
        if ( a1[2] <= v9 )
        {
          v18 = a1;
          v17 = qvector_reserve(a1, v17, v9 + 1, 1u);
          a1 = v18;
          *v18 = v17;
        }
        a1[1] = v9 + 1;
        v19 = a1;
        memmove(v17, v16, v9);
        *(_BYTE *)(*v19 + v9) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 0;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 24);
    v11 = v10 > 0x12;
    v12 = (1 << v10) & 0x40C00;
    if ( v11 || v12 == 0 )
    {
      if ( *(_QWORD *)(a2 + 8) )
        v15 = *(char **)a2;
      else
        v15 = &byte_100075A30;
      return sub_1000150D4(
               v15,
               a2 + 2088,
               (__int64 (__fastcall *)(_QWORD *, __int64, const char *, _QWORD *))sub_10004AB9C,
               (__int64)a1);
    }
    else
    {
      return sub_100049284((_QWORD **)a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
}
// 100075A30: using guessed type char byte_100075A30;
