/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C830
// Address: 0x000000000048C830

//----- (000000000048C830) ----------------------------------------------------
__int64 __fastcall sub_48C830(__int64 a1, void *a2, size_t a3, unsigned __int8 a4)
{
  int v5; // w20
  size_t v7; // x0
  unsigned int v8; // w19

  v5 = a4;
  v7 = sub_48C160(a1, a2, a3);
  if ( v7 == a3 )
  {
    v8 = 0;
    if ( v5 )
      sub_492FC8((char *)a2, v7);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v8;
}
