/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024960
// Address: 0x0000000100024960

//----- (0000000100024960) ----------------------------------------------------
__int64 __fastcall sub_100024960(__int64 a1, __int64 a2)
{
  __int64 nsec_stamp; // r14

  nsec_stamp = get_nsec_stamp();
  free_idcv((unsigned __int8 *)a2);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = nsec_stamp;
  return 0;
}
