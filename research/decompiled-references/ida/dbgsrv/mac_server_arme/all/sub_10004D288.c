/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D288
// Address: 0x000000010004D288

//----- (000000010004D288) ----------------------------------------------------
__int64 __fastcall sub_10004D288(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x30
  unsigned __int64 v9; // x8
  size_t v10; // x19
  unsigned int v11; // w8
  bool v12; // cc
  int v13; // w8
  char *v16; // x8
  __int64 v17; // x1
  char *v18; // x20
  _QWORD *v19; // x1
  _QWORD *v20; // x22
  _QWORD *v21; // x21

  if ( *(_BYTE *)(a2 + 29) == 1 )
  {
    if ( a1 && a1 != (_QWORD *)a2 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
        v10 = v9 - 1;
      else
        v10 = 0;
      if ( v9 >= 2 )
      {
        v18 = *(char **)a2;
        v19 = (_QWORD *)*a1;
        if ( a1[2] <= v10 )
        {
          v20 = a1;
          v19 = qvector_reserve(a1, v19, v10 + 1, 1u);
          a1 = v20;
          *v20 = v19;
        }
        a1[1] = v10 + 1;
        v21 = a1;
        memmove(v19, v18, v10);
        *(_BYTE *)(*v21 + v10) = 0;
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
    v11 = *(_DWORD *)(a2 + 24);
    v12 = v11 > 0x12;
    v13 = (1 << v11) & 0x40C00;
    if ( v12 || v13 == 0 )
    {
      if ( *(_QWORD *)(a2 + 8) )
        v16 = *(char **)a2;
      else
        v16 = &byte_10007AE40;
      v17 = a2 + 2088;
      if ( ((v8 ^ (2 * v8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return sub_10001640C(
               v16,
               v17,
               (__int64 (__fastcall *)(_QWORD *, __int64, const char *, _QWORD *))sub_10004D3AC,
               (__int64)a1);
    }
    else
    {
      if ( ((v8 ^ (2 * v8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return sub_10004B648((_QWORD **)a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
}
// 10004D2F0: variable 'v8' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
