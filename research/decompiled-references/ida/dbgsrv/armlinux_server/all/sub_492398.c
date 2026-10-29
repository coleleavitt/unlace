/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492398
// Address: 0x0000000000492398

//----- (0000000000492398) ----------------------------------------------------
bool __fastcall sub_492398(__int64 a1)
{
  __int64 *v1; // x22
  pthread_mutex_t *v3; // x21
  _QWORD *v4; // x20
  _QWORD *v5; // x1
  __int64 v6; // x4
  char *v7; // x3
  _QWORD *v8; // x0
  unsigned __int64 v9; // x2
  char *v11; // x0
  __int64 v12; // x3

  v3 = (pthread_mutex_t *)qword_524508;
  if ( !qword_524508 )
  {
    qword_524508 = (__int64)sub_494418();
    v3 = (pthread_mutex_t *)qword_524508;
    if ( !qword_524508 )
    {
      if ( !under_debugger )
        sub_492270(547);
      __break(0x3E8u);
LABEL_14:
      v4 = sub_491248(24);
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v1[160] = (__int64)v4;
      v9 = 1;
      v7 = nullptr;
      v5 = nullptr;
      if ( !v4[2] )
        goto LABEL_15;
      goto LABEL_9;
    }
  }
  v1 = &qword_523500[352];
  sub_494720(v3);
  v4 = (_QWORD *)qword_524500;
  if ( !qword_524500 )
    goto LABEL_14;
  v5 = *(_QWORD **)qword_524500;
  v6 = *(_QWORD *)(qword_524500 + 8);
  v7 = (char *)(*(_QWORD *)qword_524500 + 8 * v6);
  if ( *(char **)qword_524500 == v7 )
  {
LABEL_8:
    v9 = v6 + 1;
    if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(qword_524500 + 16) )
    {
LABEL_15:
      v11 = (char *)sub_491288((__int64)v4, v5, v9, 8u);
      v12 = v4[1];
      *v4 = v11;
      v7 = &v11[8 * v12];
    }
LABEL_9:
    *(_QWORD *)v7 = a1;
    ++v4[1];
    return sub_494760(v3);
  }
  if ( *v5 != a1 )
  {
    v8 = *(_QWORD **)qword_524500;
    while ( ++v8 != (_QWORD *)v7 )
    {
      if ( *v8 == a1 )
        return sub_494760(v3);
    }
    goto LABEL_8;
  }
  return sub_494760(v3);
}
// 492480: variable 'v1' is possibly undefined
// 523500: using guessed type __int64 qword_523500[512];
// 524500: using guessed type __int64 qword_524500;
// 524508: using guessed type __int64 qword_524508;
// 52451C: using guessed type char under_debugger;
