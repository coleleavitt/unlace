/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvector_reserve
// Address: 0x000000010006F5E0

//----- (000000010006F5E0) ----------------------------------------------------
void *__fastcall qvector_reserve(_QWORD *a1, _QWORD *__ptr, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v4; // x19
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x20
  void *result; // x0
  __int64 v8; // x0
  const char *v9; // x1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7

  if ( a1 )
  {
    v4 = a1;
    v5 = 2LL * a1[2];
    if ( v5 <= a3 )
      v6 = a3;
    else
      v6 = 2LL * a1[2];
    if ( !is_mul_ok(a4, v6) )
    {
      if ( !is_mul_ok(a4, a3) )
        goto LABEL_16;
      v6 = a3;
      if ( v5 <= a3 )
        goto LABEL_16;
    }
    if ( v6 * a4 >= 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_16;
    a1 = __ptr;
    if ( v6 * a4 )
    {
      result = realloc(__ptr, v6 * a4);
      if ( result )
      {
        v4[2] = v6;
        return result;
      }
      set_qerrno();
LABEL_16:
      sub_10006F5D4();
    }
LABEL_14:
    free(a1);
    sub_10006F5D4();
  }
  if ( under_debugger == 1 )
  {
    __break(1u);
    goto LABEL_14;
  }
  interr(2676);
  return (void *)qhost2addr_(v8, v9, v10, v11, v12, v13, v14, v15);
}
// 10006F689: variable 'v8' is possibly undefined
// 10006F689: variable 'v9' is possibly undefined
// 10006F689: variable 'v10' is possibly undefined
// 10006F689: variable 'v11' is possibly undefined
// 10006F689: variable 'v12' is possibly undefined
// 10006F689: variable 'v13' is possibly undefined
// 10006F689: variable 'v14' is possibly undefined
// 10006F689: variable 'v15' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
