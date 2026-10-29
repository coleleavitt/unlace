/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052AE0
// Address: 0x0000000100052AE0

//----- (0000000100052AE0) ----------------------------------------------------
__int64 __fastcall sub_100052AE0(__int64 a1, __int64 a2, off_t a3, int a4)
{
  off_t v8; // x8
  __int64 result; // x0
  unsigned int v10; // w8
  off_t v11; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x8
  _BYTE *v14; // x21
  size_t v15; // x0
  void *v16; // x0
  __int64 v17; // x8
  unsigned int v18; // [xsp+4h] [xbp-2Ch] BYREF

  if ( !a3 || (v8 = qlseek(a2, a3, 0), result = 0, v8 == a3) )
  {
    if ( qlread(a2, &v18, 4u) != 4 )
      return 0;
    v10 = v18;
    if ( a4 )
    {
      v10 = bswap32(v18);
      v18 = v10;
    }
    if ( v10 < 5 )
      return 0;
    qlseek(a2, -4, 1);
    v11 = qlseek(a2, 0, 1);
    v12 = qlsize(a2);
    result = 0;
    if ( (v11 & 0x8000000000000000LL) == 0 )
    {
      v13 = v12 - v11;
      if ( (v13 & 0x8000000000000000LL) == 0 )
      {
        if ( v13 >= v18 )
        {
          result = (__int64)qalloc((void *)(v18 + 1));
          if ( !result )
            return result;
          v14 = (_BYTE *)result;
          v15 = qlread(a2, (void *)result, v18);
          if ( v15 == v18 )
          {
            v14[v15] = 0;
            v16 = *(void **)a1;
            if ( *(_QWORD *)a1 )
            {
              *(_QWORD *)(a1 + 8) = 0;
              qfree(v16);
            }
            v17 = v18 + 1;
            *(_QWORD *)(a1 + 8) = v17;
            *(_QWORD *)(a1 + 16) = v17;
            *(_QWORD *)a1 = v14;
            return 1;
          }
          qfree(v14);
        }
        return 0;
      }
    }
  }
  return result;
}
