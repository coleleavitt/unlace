/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439CD0
// Address: 0x0000000000439CD0

//----- (0000000000439CD0) ----------------------------------------------------
void *__fastcall sub_439CD0(char *a1, _DWORD *a2, size_t *a3)
{
  pthread_mutex_t *v6; // x21
  __int64 *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x20
  size_t v10; // x19
  void *v11; // x0
  void *v12; // x22

  v6 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v7 = (__int64 *)sub_43CF60();
  v8 = sub_43DE50(v7, a1);
  if ( v8 == -1 || (v9 = *(_QWORD *)(*v7 + 8 * v8), (v10 = *(_QWORD *)(v9 + 40)) == 0) )
  {
    sub_494760(v6);
    return nullptr;
  }
  else
  {
    if ( a3 )
      *a3 = v10;
    if ( a2 )
      *a2 = *(_DWORD *)(v9 + 24);
    v11 = sub_491040(v10);
    v12 = v11;
    if ( v11 )
      memcpy(v11, *(const void **)(v9 + 32), v10);
    sub_494760(v6);
    return v12;
  }
}
// 522288: using guessed type __int64 qword_522288;
