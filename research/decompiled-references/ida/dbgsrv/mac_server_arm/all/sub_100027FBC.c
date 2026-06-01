/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027FBC
// Address: 0x0000000100027FBC

//----- (0000000100027FBC) ----------------------------------------------------
__int64 __fastcall sub_100027FBC(_QWORD *a1)
{
  const char *v2; // x0

  if ( a1[6] )
    v2 = (const char *)a1[5];
  else
    v2 = &byte_100075A30;
  a1[23] = add_idc_class(v2, 0);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
