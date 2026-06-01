/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002A544
// Address: 0x000000010002A544

//----- (000000010002A544) ----------------------------------------------------
__int64 __fastcall sub_10002A544(_QWORD *a1)
{
  const char *v2; // x0

  if ( a1[6] )
    v2 = (const char *)a1[5];
  else
    v2 = &byte_10007AE40;
  a1[23] = add_idc_class(v2, 0);
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
