/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43ED20
// Address: 0x000000000043ED20

//----- (000000000043ED20) ----------------------------------------------------
__int64 __fastcall sub_43ED20(char *a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x21
  char *v4; // x0
  unsigned int v5; // w19
  const char **v6; // x0

  if ( !a1 )
    return 0;
  v2 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v3 = sub_43CF60();
  v4 = a1;
  v5 = 0;
  v6 = sub_43C678(v4);
  if ( v6 )
  {
    if ( *(_QWORD *)(v3 + 48) <= 0xCCCCCCCCCCCCCCCDLL * (((char *)v6 - (char *)off_520150) >> 3) )
    {
      v5 = 1;
      v6[1] = nullptr;
    }
  }
  sub_494760(v2);
  return v5;
}
// 520150: using guessed type _UNKNOWN **off_520150;
// 522288: using guessed type __int64 qword_522288;
