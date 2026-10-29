/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D020
// Address: 0x000000010002D020

//----- (000000010002D020) ----------------------------------------------------
__int64 __fastcall sub_10002D020(_QWORD *a1)
{
  const char *v2; // rdi

  if ( a1[6] )
    v2 = (const char *)a1[5];
  else
    v2 = _s1;
  a1[23] = add_idc_class(v2, 0);
  return 0;
}
