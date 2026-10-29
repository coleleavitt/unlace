/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000F580
// Address: 0x000000014000F580

//----- (000000014000F580) ----------------------------------------------------
char __fastcall sub_14000F580(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 352;
  if ( *(_QWORD *)(a1 + 352) )
  {
    sub_14001A500((__int64 *)(a1 + 352), 0);
    j_free(*(void **)v1);
    *(_QWORD *)v1 = 0;
    *(_QWORD *)(v1 + 16) = 0;
  }
  return 1;
}
