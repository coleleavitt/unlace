/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48AA60
// Address: 0x000000000048AA60

//----- (000000000048AA60) ----------------------------------------------------
__int64 __fastcall sub_48AA60(__int64 a1)
{
  unsigned __int64 v2; // x21
  const void *v3; // x20
  void *v4; // x0
  size_t v5; // x21
  unsigned int v6; // w22
  __int64 *v7; // x0
  const char **v8; // x24
  const char *v9; // x3
  const char *v10; // t1
  size_t v12; // x0
  size_t v13; // x22
  unsigned __int64 v14; // x24
  void *v15; // x0
  pthread_mutex_t *v16[2]; // [xsp+40h] [xbp-1020h] BYREF
  __int64 v17; // [xsp+50h] [xbp-1010h] BYREF
  unsigned __int8 v18[4096]; // [xsp+58h] [xbp-1008h] BYREF

  sub_494748(v16);
  v2 = qword_5224B0;
  if ( (unsigned __int64)qword_5224B0 > 1 )
    goto LABEL_2;
  v16[1] = (pthread_mutex_t *)".idapro";
  v17 = 0;
  v7 = sub_48A910();
  sub_493350((unsigned __int64)v18, (unsigned __int8 *)v7, 4096);
  if ( v18[0] )
  {
    v8 = (const char **)&v17;
    v9 = ".idapro";
    do
    {
      sub_48F278((char *)v18, 4096, v18, v9, 0);
      if ( !(unsigned __int8)sub_490268((const char *)v18) )
        sub_490180((const char *)v18, 0x1FFu);
      v10 = *v8++;
      v9 = v10;
    }
    while ( v10 );
    v12 = strlen((const char *)v18);
    v13 = v12;
    if ( !v12 )
    {
      v6 = 0;
      qword_5224B0 = 0;
      goto LABEL_12;
    }
    v14 = v12 + 1;
    v15 = (void *)qword_5224A8;
    if ( v14 > qword_5224B8 )
    {
      v15 = sub_491288((__int64)&qword_5224A8, (void *)qword_5224A8, v14, 1u);
      qword_5224A8 = (__int64)v15;
    }
    qword_5224B0 = v14;
    memmove(v15, v18, v13);
    *(_BYTE *)(qword_5224A8 + v13) = 0;
    v2 = qword_5224B0;
  }
  else
  {
    v2 = qword_5224B0;
  }
  v6 = 0;
  if ( v2 > 1 )
  {
LABEL_2:
    if ( (__int64 *)a1 == &qword_5224A8 )
    {
      v6 = 1;
    }
    else
    {
      v3 = (const void *)qword_5224A8;
      v4 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v2 )
      {
        v4 = sub_491288(a1, *(void **)a1, v2, 1u);
        *(_QWORD *)a1 = v4;
      }
      *(_QWORD *)(a1 + 8) = v2;
      v5 = v2 - 1;
      memmove(v4, v3, v5);
      v6 = 1;
      *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
    }
  }
LABEL_12:
  sub_494760(v16[0]);
  return v6;
}
// 5224A8: using guessed type __int64 qword_5224A8;
// 5224B0: using guessed type __int64 qword_5224B0;
// 5224B8: using guessed type __int64 qword_5224B8;
