/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400325E0
// Address: 0x00000001400325E0

//----- (00000001400325E0) ----------------------------------------------------
__int64 __fastcall sub_1400325E0(_QWORD *a1)
{
  char *v2; // rcx

  if ( a1[5] )
    v2 = (char *)a1[4];
  else
    v2 = (char *)Str1;
  a1[22] = sub_14002E6A0(v2, 0);
  return 0;
}
