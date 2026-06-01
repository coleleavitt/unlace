/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x0000000000067714

//----- (0000000000067714) ----------------------------------------------------
__int64 __fastcall remove_extlang(__int64 a1)
{
  pthread_mutex_t *v1; // x19
  __int64 v3; // x0
  __int64 v4; // x21
  unsigned int v5; // w22
  _QWORD *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  char v15; // [xsp+0h] [xbp-30h]

  v1 = (pthread_mutex_t *)qword_166A80;
  v3 = (__int64)qmutex_lock((pthread_mutex_t *)qword_166A80);
  if ( qword_166A90 )
  {
    v4 = 0;
    while ( *(_QWORD *)(qword_166A88 + 8 * v4) != a1 )
    {
      if ( ++v4 >= (unsigned __int64)qword_166A90 )
        goto LABEL_5;
    }
    if ( qword_166AA0 == v4 )
      v3 = select_extlang(nullptr);
    if ( *(_DWORD *)(a1 + 12) && !byte_168DD4 )
    {
      if ( !under_debugger )
        v3 = (__int64)interr(1442);
      __break(1u);
      v7 = (_QWORD *)v3;
      qmutex_unlock(v1);
      Unwind_Resume(v7, v8, v9, v10, v11, v12, v13, v14, v15);
    }
    v5 = 1;
    *(_QWORD *)(qword_166A88 + 8 * v4) = 0;
    nullsub_2(1);
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  qmutex_unlock(v1);
  return v5;
}
// 67800: variable 'v8' is possibly undefined
// 67800: variable 'v9' is possibly undefined
// 67800: variable 'v10' is possibly undefined
// 67800: variable 'v11' is possibly undefined
// 67800: variable 'v12' is possibly undefined
// 67800: variable 'v13' is possibly undefined
// 67800: variable 'v14' is possibly undefined
// 67800: variable 'v15' is possibly undefined
// AB1C8: using guessed type __int64 __fastcall nullsub_2(_QWORD);
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
// 166AA0: using guessed type __int64 qword_166AA0;
// 168DD4: using guessed type char byte_168DD4;
// 168DF0: using guessed type char under_debugger;
