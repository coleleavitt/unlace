/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43EA60
// Address: 0x000000000043EA60

//----- (000000000043EA60) ----------------------------------------------------
__int64 __fastcall sub_43EA60(__int64 a1)
{
  _UNKNOWN **v1; // x23
  pthread_mutex_t *v3; // x22
  __int64 v4; // x24
  const char **v5; // x0
  __int64 v6; // x21
  unsigned int v7; // w19
  __int64 v9; // x20
  _UNKNOWN **v10; // x0
  size_t v11; // x20
  const char *v12; // x20
  int v13; // w0
  int v14; // w1
  const char *v15; // x0
  int v16; // t1
  _QWORD *v18; // x0
  __int64 v19; // x2
  _QWORD *v20; // x24
  __int64 *v21; // x20
  _QWORD *v22; // x1
  __int64 v23; // x26
  int v24; // w25
  int v25; // w0

  if ( *(_QWORD *)a1 && *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) )
  {
    v3 = (pthread_mutex_t *)qword_522288;
    sub_494720((pthread_mutex_t *)qword_522288);
    v4 = sub_43CF60();
    if ( *(_QWORD *)a1 && (v5 = sub_43C678(*(char **)a1), (v6 = (__int64)v5) != 0) )
    {
      if ( 0xCCCCCCCCCCCCCCCDLL * (((char *)v5 - (char *)off_520150) >> 3) < *(_QWORD *)(v4 + 48) )
      {
        v7 = 0;
LABEL_8:
        sub_494760(v3);
        return v7;
      }
    }
    else
    {
      v9 = qword_520148++;
      v10 = (_UNKNOWN **)sub_4910B0(qword_520148, 0x28u);
      v1 = v10;
      if ( !v10 )
        sub_43CEB8("add_idc_func");
      v11 = 5 * v9;
      memcpy(v10, off_520150, v11 * 8);
      if ( off_520150 != *(_UNKNOWN ***)(v4 + 40) )
        j__free(off_520150);
      v6 = (__int64)&v1[v11];
      off_520150 = v1;
      v1[v11] = nullptr;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
    }
    sub_43C5E8(v6);
    *(_QWORD *)v6 = sub_4911C0(*(char **)a1);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v6 + 16) = sub_4911C0(*(char **)(a1 + 16));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v12 = *(const char **)(a1 + 16);
      v13 = strlen(v12);
      v14 = v13;
      if ( v13 > 0 && v12[v13 - 1] == 4 )
      {
        v15 = &v12[v13 - 2];
        do
        {
          if ( !--v14 )
            break;
          v16 = *(unsigned __int8 *)v15--;
        }
        while ( v16 == 4 );
      }
      LODWORD(v1) = *(_DWORD *)(a1 + 32);
      if ( (int)v1 > 0 && (int)v1 <= v14 )
        goto LABEL_26;
      if ( !under_debugger )
        sub_492270(1445);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 32) )
      {
LABEL_31:
        v25 = *(_DWORD *)(a1 + 36);
        v7 = 1;
        *(_DWORD *)(v6 + 36) = v25;
        goto LABEL_8;
      }
      if ( !under_debugger )
        sub_492270(1446);
    }
    __break(0x3E8u);
LABEL_26:
    v18 = sub_49ECD8(32LL * (int)v1 + 8);
    v19 = 0;
    *v18 = (int)v1;
    v20 = v18 + 1;
    v21 = v18 + 1;
    v22 = v18 + 1;
    do
    {
      *(_BYTE *)v22 = 2;
      ++v19;
      v22[1] = 0;
      v22[2] = 0;
      v22[3] = 0;
      v22 += 4;
    }
    while ( v19 != (int)v1 );
    v23 = -8LL - (_QWORD)v18;
    v24 = 0;
    do
    {
      sub_4488B8(v21, (__int64 *)((char *)v21 + v23 + *(_QWORD *)(a1 + 24)));
      ++v24;
      v21 += 4;
    }
    while ( v24 < (int)v1 );
    *(_QWORD *)(v6 + 24) = v20;
    *(_DWORD *)(v6 + 32) = (_DWORD)v1;
    goto LABEL_31;
  }
  return 0;
}
// 43EC4C: variable 'v1' is possibly undefined
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
