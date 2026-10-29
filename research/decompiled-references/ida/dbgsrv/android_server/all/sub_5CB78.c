/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CB78
// Address: 0x000000000005CB78

//----- (000000000005CB78) ----------------------------------------------------
__int64 __fastcall sub_5CB78(char *a1, __int64 a2)
{
  char *idcv_attr; // x0
  char *v4; // x20
  size_t v5; // x2

  idcv_attr = last_idcv_attr(a1);
  v4 = idcv_attr;
  if ( idcv_attr )
    v5 = strlen(idcv_attr);
  else
    v5 = 0;
  *(_BYTE *)a2 = 7;
  sub_4968C((pthread_mutex_t *)(a2 + 8), v4, v5);
  return 0;
}
