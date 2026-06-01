/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451390
// Address: 0x0000000000451390

//----- (0000000000451390) ----------------------------------------------------
__int64 __fastcall sub_451390(__int64 a1, __int64 a2, void *src)
{
  unsigned int v3; // w3
  unsigned int v4; // w4
  void *v8; // x1
  size_t v9; // x21

  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( v3 != 3 )
  {
    if ( v3 <= 3 )
    {
      v4 = 1;
      if ( v3 == 2 )
        return v4;
      return v3 > 0x7F;
    }
    if ( v3 - 6 > 2 )
      return v3 > 0x7F;
  }
  v4 = 0;
  if ( !src || *(_QWORD *)(a1 + 8) <= (unsigned __int64)src )
    return v4;
  v8 = *(void **)a2;
  *(_QWORD *)(a2 + 8) = 0;
  v9 = *(_QWORD *)(a1 + 8) - (_QWORD)src;
  if ( v9 + 1 > *(_QWORD *)(a2 + 16) )
  {
    v8 = sub_491288(a2, v8, v9 + 1, 1u);
    *(_QWORD *)a2 = v8;
  }
  *(_QWORD *)(a2 + 8) = v9 + 1;
  *((_BYTE *)v8 + v9) = 0;
  memmove(*(void **)a2, src, v9);
  return 1;
}
