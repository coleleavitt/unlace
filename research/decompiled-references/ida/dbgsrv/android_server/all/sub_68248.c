/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68248
// Address: 0x0000000000068248

//----- (0000000000068248) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68248(__int64 a1, char a2)
{
  pthread_mutex_t *v2; // x19
  pthread_mutex_t *v5; // x0
  __int64 v6; // x8
  __int64 *p_align; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  char v16; // [xsp+0h] [xbp-20h]

  v2 = (pthread_mutex_t *)qword_166AA8;
  v5 = qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v6 = *(_QWORD *)(a1 + 56);
  if ( (v6 & (1LL << a2)) == 0 )
  {
    if ( !under_debugger )
      v5 = interr(1444);
    __break(1u);
    p_align = &v5->__align;
    qmutex_unlock(v2);
    Unwind_Resume(p_align, v9, v10, v11, v12, v13, v14, v15, v16);
  }
  *(_QWORD *)(a1 + 56) = v6 & ~(1LL << a2);
  return qmutex_unlock(v2);
}
// 682C8: variable 'v9' is possibly undefined
// 682C8: variable 'v10' is possibly undefined
// 682C8: variable 'v11' is possibly undefined
// 682C8: variable 'v12' is possibly undefined
// 682C8: variable 'v13' is possibly undefined
// 682C8: variable 'v14' is possibly undefined
// 682C8: variable 'v15' is possibly undefined
// 682C8: variable 'v16' is possibly undefined
// 166AA8: using guessed type __int64 qword_166AA8;
// 168DF0: using guessed type char under_debugger;
