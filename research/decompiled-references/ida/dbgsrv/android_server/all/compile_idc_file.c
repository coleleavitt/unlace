/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_file
// Address: 0x00000000000657A4

//----- (00000000000657A4) ----------------------------------------------------
__int64 __fastcall compile_idc_file(char *a1, __int64 a2, char a3)
{
  pthread_mutex_t *v6; // x19
  __int128 *v7; // x0
  __int64 v8; // x22
  __int64 v9; // x2
  int v10; // w3
  int v11; // w4
  int v12; // w5
  int v13; // w6
  int v14; // w7
  char v15; // w21
  _QWORD *v16; // x1
  __int64 v17; // x2
  int v18; // w3
  int v19; // w4
  int v20; // w5
  int v21; // w6
  int v22; // w7
  _QWORD v24[3]; // [xsp+8h] [xbp-58h] BYREF

  v24[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v7 = off_164A88();
  sub_85F18(v7, nullptr, 0);
  v8 = sub_6804C();
  if ( (unsigned int)lex_init_file(*(_QWORD *)(v8 + 32), a1) )
  {
    sub_65300(*(const char **)(v8 + 32), 0, a2);
    lex_term_file(*(_QWORD *)(v8 + 32), a3 & 1, v9, v10, v11, v12, v13, v14);
    v15 = 0;
  }
  else
  {
    if ( (a3 & 2) != 0 )
      v16 = v24;
    else
      v16 = nullptr;
    v24[0] = &off_15D6D0;
    v24[1] = -1;
    v15 = sub_6517C(v8, (__int64)v16, a2, (a3 & 4) == 0);
    lex_term_file(*(_QWORD *)(v8 + 32), a3 & 1, v17, v18, v19, v20, v21, v22);
  }
  qmutex_unlock(v6);
  return v15 & 1;
}
// 65830: variable 'v9' is possibly undefined
// 65830: variable 'v10' is possibly undefined
// 65830: variable 'v11' is possibly undefined
// 65830: variable 'v12' is possibly undefined
// 65830: variable 'v13' is possibly undefined
// 65830: variable 'v14' is possibly undefined
// 6587C: variable 'v17' is possibly undefined
// 6587C: variable 'v18' is possibly undefined
// 6587C: variable 'v19' is possibly undefined
// 6587C: variable 'v20' is possibly undefined
// 6587C: variable 'v21' is possibly undefined
// 6587C: variable 'v22' is possibly undefined
// 15D6D0: using guessed type __int64 (__fastcall *off_15D6D0)();
// 164A88: using guessed type __int128 *(*off_164A88)();
// 166AA8: using guessed type __int64 qword_166AA8;
