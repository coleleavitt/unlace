/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075FF4
// Address: 0x0000000100075FF4

//----- (0000000100075FF4) ----------------------------------------------------
int *__fastcall sub_100075FF4(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // x20
  int v5; // w22
  _QWORD *v6; // x8
  int *result; // x0
  void *v8; // x0

  v4 = (_QWORD *)(a1 + 24);
  do
  {
    v4 = (_QWORD *)*v4;
    if ( v4 == (_QWORD *)(a1 + 24) )
    {
      if ( under_debugger != 1 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  while ( v4 + 2 != a2 );
  v5 = *__error();
  if ( (unsigned int)qsem_wait(a2[2], 0) )
  {
    while ( 1 )
    {
      if ( under_debugger != 1 )
      {
        interr(1158);
        sub_10000150C(v8);
      }
LABEL_7:
      __break(1u);
LABEL_8:
      interr(1209);
    }
  }
  v6 = (_QWORD *)*v4;
  *(_QWORD *)v4[1] = *v4;
  v6[1] = v4[1];
  qsem_free(v4[4]);
  qfree(v4);
  --*(_QWORD *)(a1 + 40);
  result = __error();
  *result = v5;
  return result;
}
// 1000760C8: variable 'v8' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
