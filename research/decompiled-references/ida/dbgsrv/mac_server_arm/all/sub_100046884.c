/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046884
// Address: 0x0000000100046884

//----- (0000000100046884) ----------------------------------------------------
_QWORD *__usercall sub_100046884@<X0>(_QWORD *result@<X0>, _QWORD *a2@<X1>, __int64 a3@<X8>)
{
  int8x8_t v3; // x10
  unsigned __int64 v4; // x9
  uint8x8_t v5; // d0
  _QWORD *v6; // x12
  _QWORD *v7; // x11
  unsigned __int64 v8; // x15
  unsigned __int64 v9; // x15
  __int64 v10; // x14
  unsigned __int64 v11; // x15

  v3 = (int8x8_t)result[1];
  v4 = a2[1];
  v5 = (uint8x8_t)vcnt_s8(v3);
  v5.i16[0] = vaddlv_u8(v5);
  if ( v5.u32[0] > 1uLL )
  {
    if ( v4 >= *(_QWORD *)&v3 )
      v4 %= *(_QWORD *)&v3;
  }
  else
  {
    v4 &= *(_QWORD *)&v3 - 1LL;
  }
  v6 = *(_QWORD **)(*result + 8 * v4);
  do
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != a2 );
  if ( v7 == result + 2 )
    goto LABEL_18;
  v8 = v7[1];
  if ( v5.u32[0] > 1uLL )
  {
    if ( v8 >= *(_QWORD *)&v3 )
      v8 %= *(_QWORD *)&v3;
  }
  else
  {
    v8 &= *(_QWORD *)&v3 - 1LL;
  }
  if ( v8 != v4 )
  {
LABEL_18:
    if ( !*a2 )
      goto LABEL_19;
    v9 = *(_QWORD *)(*a2 + 8LL);
    if ( v5.u32[0] > 1uLL )
    {
      if ( v9 >= *(_QWORD *)&v3 )
        v9 %= *(_QWORD *)&v3;
    }
    else
    {
      v9 &= *(_QWORD *)&v3 - 1LL;
    }
    if ( v9 != v4 )
LABEL_19:
      *(_QWORD *)(*result + 8 * v4) = 0;
  }
  v10 = *a2;
  if ( *a2 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v5.u32[0] > 1uLL )
    {
      if ( v11 >= *(_QWORD *)&v3 )
        v11 %= *(_QWORD *)&v3;
    }
    else
    {
      v11 &= *(_QWORD *)&v3 - 1LL;
    }
    if ( v11 != v4 )
    {
      *(_QWORD *)(*result + 8 * v11) = v7;
      v10 = *a2;
    }
  }
  *v7 = v10;
  *a2 = 0;
  --result[3];
  *(_QWORD *)a3 = a2;
  *(_QWORD *)(a3 + 8) = result + 2;
  *(_BYTE *)(a3 + 16) = 1;
  return result;
}
