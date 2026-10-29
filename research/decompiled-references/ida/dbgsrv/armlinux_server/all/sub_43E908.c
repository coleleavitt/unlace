/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E908
// Address: 0x000000000043E908

//----- (000000000043E908) ----------------------------------------------------
char *__fastcall sub_43E908(char *a1, int *a2)
{
  pthread_mutex_t *v3; // x19
  __int64 *v5; // x0
  __int64 *v6; // x22
  int v7; // w0
  int v8; // w1
  char *v9; // x20

  v3 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v5 = (__int64 *)sub_43CF60();
  v6 = v5;
  if ( a1 )
  {
    v7 = sub_43E818(v5, a1);
    if ( v7 == 0x7FFFFFFF )
    {
      v9 = nullptr;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = -1;
  }
  v8 = *a2;
  *a2 = v7;
  v9 = sub_43E890(v6, v8);
LABEL_4:
  sub_494760(v3);
  return v9;
}
// 522288: using guessed type __int64 qword_522288;
