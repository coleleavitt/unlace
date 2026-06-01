/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_add
// Address: 0x000000010006A12C

//----- (000000010006A12C) ----------------------------------------------------
_QWORD *__fastcall cliopts_t_add(_QWORD *result, __int128 *a2, __int64 a3)
{
  __int64 v3; // x19
  _QWORD *v5; // x21
  __int64 v6; // x8
  _QWORD *v7; // x8
  _QWORD *v8; // x1
  __int128 v9; // [xsp+0h] [xbp-50h]
  __int128 v10; // [xsp+10h] [xbp-40h]
  __int64 v11; // [xsp+20h] [xbp-30h]

  if ( a3 )
  {
    v3 = a3;
    v5 = result;
    v6 = result[1];
    do
    {
      v9 = *a2;
      v10 = a2[1];
      v11 = *((_QWORD *)a2 + 4);
      v8 = (_QWORD *)*v5;
      if ( v5[2] < (unsigned __int64)(v6 + 1) )
      {
        result = qvector_reserve(v5, v8, v6 + 1, 0x28u);
        v8 = result;
        *v5 = result;
        v6 = v5[1];
      }
      v7 = &v8[5 * v6];
      *(_OWORD *)v7 = v9;
      *((_OWORD *)v7 + 1) = v10;
      v7[4] = v11;
      v6 = v5[1] + 1LL;
      v5[1] = v6;
      a2 = (__int128 *)((char *)a2 + 40);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
