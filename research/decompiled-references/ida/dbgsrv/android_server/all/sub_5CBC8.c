/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CBC8
// Address: 0x000000000005CBC8

//----- (000000000005CBC8) ----------------------------------------------------
__int64 __fastcall sub_5CBC8(__int64 a1, __int64 a2)
{
  char *v3; // x1
  char *idcv_attr; // x0
  char *v5; // x20
  size_t v6; // x2

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  else
    v3 = &byte_F154B;
  idcv_attr = next_idcv_attr((char *)a1, v3);
  v5 = idcv_attr;
  if ( idcv_attr )
    v6 = strlen(idcv_attr);
  else
    v6 = 0;
  *(_BYTE *)a2 = 7;
  sub_4968C((pthread_mutex_t *)(a2 + 8), v5, v6);
  return 0;
}
// F154B: using guessed type char byte_F154B;
