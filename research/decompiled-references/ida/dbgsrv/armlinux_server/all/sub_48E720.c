/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E720
// Address: 0x000000000048E720

//----- (000000000048E720) ----------------------------------------------------
_BYTE *__fastcall sub_48E720(unsigned __int8 **a1, unsigned __int64 a2, unsigned __int8 a3)
{
  int v5; // w24
  size_t v6; // x19
  unsigned __int8 *v7; // x20
  _BYTE *v9; // x0
  _BYTE *v10; // x22

  v5 = a3;
  v6 = (unsigned int)sub_48E5A8(a1, a2);
  v7 = &(*a1)[v6];
  if ( *a1 > v7 || a2 < (unsigned __int64)v7 )
    return nullptr;
  if ( v5 && (!v6 || !**a1) )
    return nullptr;
  v9 = sub_491040(v6 + 1);
  v10 = v9;
  if ( !v9 )
    sub_43CEB8("unpack_ds");
  memcpy(v9, *a1, v6);
  v10[(unsigned int)v6] = 0;
  *a1 = v7;
  return v10;
}
