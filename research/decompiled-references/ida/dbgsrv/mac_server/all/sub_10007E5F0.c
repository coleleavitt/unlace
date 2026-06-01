/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007E5F0
// Address: 0x000000010007E5F0

//----- (000000010007E5F0) ----------------------------------------------------
int *__fastcall sub_10007E5F0(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r14
  int v3; // r12d
  _QWORD *v4; // rax
  int *result; // rax
  void *v6; // rax

  v2 = (_QWORD *)(a1 + 24);
  do
  {
    v2 = (_QWORD *)*v2;
    if ( v2 == (_QWORD *)(a1 + 24) )
    {
      if ( under_debugger == 1 )
        goto LABEL_7;
      interr(0x4B9u);
LABEL_9:
      if ( under_debugger != 1 )
      {
        interr(0x486u);
        sub_100001690(v6);
      }
LABEL_7:
      BUG();
    }
  }
  while ( v2 + 2 != a2 );
  v3 = *__error();
  if ( (unsigned __int8)qsem_wait(a2[2], nullptr) )
    goto LABEL_9;
  v4 = (_QWORD *)*v2;
  *(_QWORD *)v2[1] = *v2;
  v4[1] = v2[1];
  qsem_free((_DWORD *)v2[4]);
  qfree(v2);
  --*(_QWORD *)(a1 + 40);
  result = __error();
  *result = v3;
  return result;
}
// 10007E6A1: variable 'v6' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
