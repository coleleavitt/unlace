/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvector_reserve
// Address: 0x00000000000BE47C

//----- (00000000000BE47C) ----------------------------------------------------
void *__fastcall qvector_reserve(pthread_mutex_t *a1, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  void *v4; // x8
  pthread_mutex_t *v5; // x19
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x20
  void *result; // x0

  if ( a1 )
  {
    v4 = a2;
    v5 = a1;
    v6 = 2 * *(&a1->__align + 2);
    if ( v6 <= a3 )
      v7 = a3;
    else
      v7 = 2 * *(&a1->__align + 2);
    if ( !a4 || !v7 || 0xFFFFFFFFFFFFFFFFLL / a4 >= v7 )
      goto LABEL_13;
    if ( v6 > a3 )
    {
      if ( !a3 )
      {
LABEL_12:
        v7 = 0;
        goto LABEL_13;
      }
      v7 = a3;
      if ( 0xFFFFFFFFFFFFFFFFLL / a4 >= a3 )
      {
LABEL_13:
        result = qrealloc_or_throw(v4, v7 * a4);
        *(&v5->__align + 2) = v7;
        return result;
      }
    }
    sub_BE418();
    goto LABEL_12;
  }
  if ( !under_debugger )
    a1 = interr(2676);
  __break(1u);
  return (void *)ida_checkmem(a1);
}
// BE4E0: variable 'v4' is possibly undefined
// BE4D8: variable 'a4' is possibly undefined
// BE510: using guessed type __int64 __fastcall ida_checkmem(_QWORD);
// 168DF0: using guessed type char under_debugger;
