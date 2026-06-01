/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E590
// Address: 0x000000000043E590

//----- (000000000043E590) ----------------------------------------------------
__int64 __fastcall sub_43E590(__int64 a1, const char *a2)
{
  pthread_mutex_t *v3; // x25
  unsigned __int64 v5; // x23
  __int64 v6; // x0
  __int64 v7; // x24
  int v8; // w19
  __int64 v9; // x20
  const char *v10; // x0

  if ( !a2 )
    return 0;
  v3 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 64);
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 8 * v6);
      v10 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v9 + 64) )
        v10 = *(const char **)(v9 + 56);
      if ( !strcmp(v10, a2) )
        break;
      v6 = ++v8;
      if ( v8 >= v5 )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v9 = 0;
  }
  sub_494760(v3);
  return v9;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522288: using guessed type __int64 qword_522288;
