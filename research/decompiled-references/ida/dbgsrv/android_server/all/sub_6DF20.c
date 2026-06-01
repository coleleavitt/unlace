/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DF20
// Address: 0x000000000006DF20

//----- (000000000006DF20) ----------------------------------------------------
__int64 __fastcall sub_6DF20(__int64 a1, int a2)
{
  pthread_mutex_t *v4; // x19
  pthread_mutex_t *v5; // x0
  __int64 v6; // x20
  __int64 *p_align; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  char v16; // [xsp+0h] [xbp-20h]

  v4 = (pthread_mutex_t *)qword_166AA8;
  v5 = qmutex_lock((pthread_mutex_t *)qword_166AA8);
  if ( *(_QWORD *)(a1 + 96) <= (unsigned __int64)a2 )
  {
    if ( !under_debugger )
      v5 = interr(288);
    __break(1u);
    p_align = &v5->__align;
    qmutex_unlock(v4);
    Unwind_Resume(p_align, v9, v10, v11, v12, v13, v14, v15, v16);
  }
  v6 = *(_QWORD *)(a1 + 88);
  qmutex_unlock(v4);
  return v6 + 56LL * a2 + 24;
}
// 6DFA4: variable 'v9' is possibly undefined
// 6DFA4: variable 'v10' is possibly undefined
// 6DFA4: variable 'v11' is possibly undefined
// 6DFA4: variable 'v12' is possibly undefined
// 6DFA4: variable 'v13' is possibly undefined
// 6DFA4: variable 'v14' is possibly undefined
// 6DFA4: variable 'v15' is possibly undefined
// 6DFA4: variable 'v16' is possibly undefined
// 166AA8: using guessed type __int64 qword_166AA8;
// 168DF0: using guessed type char under_debugger;
