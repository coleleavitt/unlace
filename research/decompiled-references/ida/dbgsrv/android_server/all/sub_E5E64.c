/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5E64
// Address: 0x00000000000E5E64

//----- (00000000000E5E64) ----------------------------------------------------
__int64 __fastcall sub_E5E64(unsigned __int8 **a1)
{
  int v2; // w8
  __int64 v3; // x20
  unsigned __int8 *v5; // x8
  unsigned __int8 *v6; // x21
  size_t v7; // x23
  __int64 v8; // x25
  __int64 v9; // x24
  unsigned __int8 *v10; // x22
  unsigned __int8 *v11; // x0

  if ( a1[1] == *a1 )
    return sub_DE214((__int64)a1);
  v2 = **a1;
  if ( v2 != 68 )
  {
    if ( v2 == 84 )
    {
      v3 = sub_DECA4((__int64)a1);
      if ( !v3 )
        return v3;
LABEL_8:
      v5 = a1[38];
      if ( v5 == a1[39] )
      {
        v6 = a1[37];
        v7 = v5 - v6;
        v8 = (v5 - v6) >> 3;
        v9 = (v5 - v6) >> 2;
        if ( a1 + 40 == (unsigned __int8 **)v6 )
        {
          v11 = (unsigned __int8 *)malloc(2 * v7);
          v10 = v11;
          if ( v7 )
            memmove(v11, v6, v7);
          a1[37] = v10;
        }
        else
        {
          v10 = (unsigned __int8 *)realloc(a1[37], 2 * v7);
          a1[37] = v10;
        }
        v5 = &v10[8 * v8];
        a1[38] = v5;
        a1[39] = &v10[8 * v9];
      }
      a1[38] = v5 + 8;
      *(_QWORD *)v5 = v3;
      return v3;
    }
    return sub_DE214((__int64)a1);
  }
  v3 = (__int64)sub_DEF40((__int64)a1);
  if ( v3 )
    goto LABEL_8;
  return v3;
}
