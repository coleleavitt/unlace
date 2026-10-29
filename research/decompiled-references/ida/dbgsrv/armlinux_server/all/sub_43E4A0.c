/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E4A0
// Address: 0x000000000043E4A0

//----- (000000000043E4A0) ----------------------------------------------------
__int64 __fastcall sub_43E4A0(const char *a1)
{
  pthread_mutex_t *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x20

  v2 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v3 = sub_43CF60();
  v4 = sub_43E380(v3, a1);
  sub_494760(v2);
  return v4;
}
// 522288: using guessed type __int64 qword_522288;
