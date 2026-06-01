/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67710
// Address: 0x0000000000067710

//----- (0000000000067710) ----------------------------------------------------
__int64 __fastcall sub_67710(_QWORD *a1)
{
  const char *v2; // rdi

  if ( a1[6] )
    v2 = (const char *)a1[5];
  else
    v2 = s1;
  a1[23] = add_idc_class(v2, 0);
  return 0;
}
