/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E0D8
// Address: 0x000000000043E0D8

//----- (000000000043E0D8) ----------------------------------------------------
__int64 __fastcall sub_43E0D8(__int64 a1, const char *a2)
{
  pthread_mutex_t *v4; // x22
  __int64 v5; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  const char *v8; // x0
  __int64 v9; // x19

  if ( !a2 )
    return 0;
  v4 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v5 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = v6 + 56 * v5;
  if ( v6 == v7 )
  {
    v9 = 0;
  }
  else
  {
    do
    {
      v8 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v6 + 8) )
        v8 = *(const char **)v6;
      if ( !strcmp(v8, a2) )
      {
        v9 = v6 + 24;
        goto LABEL_9;
      }
      v6 += 56;
    }
    while ( v7 != v6 );
    v9 = 0;
  }
LABEL_9:
  sub_494760(v4);
  return v9;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522288: using guessed type __int64 qword_522288;
