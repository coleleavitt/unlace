/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr
// Address: 0x0000000000067860

//----- (0000000000067860) ----------------------------------------------------
__int64 __fastcall eval_expr(__int64 *a1, __int64 a2, const char *a3, __int64 a4)
{
  pthread_mutex_t *v7; // x23
  __int64 v9; // x24
  __int64 (__fastcall *v10)(__int64 *, __int64, const char *, __int64); // x8
  char v11; // w0
  __int64 v12; // x0
  unsigned __int64 v13; // x24
  size_t v14; // x23
  void *v15; // x0
  _QWORD v17[3]; // [xsp+8h] [xbp-58h] BYREF

  v17[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = (pthread_mutex_t *)qword_166A80;
  qmutex_lock((pthread_mutex_t *)qword_166A80);
  if ( qword_166AA0 >= (unsigned __int64)qword_166A90 )
  {
    v9 = 0;
  }
  else
  {
    v9 = *(_QWORD *)(qword_166A88 + 8 * qword_166AA0);
    if ( v9 )
      ++*(_DWORD *)(v9 + 12);
  }
  qmutex_unlock(v7);
  if ( !v9 )
  {
    v12 = __strlen_chk("no extlang registered", 22);
    if ( v12 )
    {
      v13 = v12 + 1;
      v14 = v12;
      if ( *(_QWORD *)(a4 + 16) >= (unsigned __int64)(v12 + 1) )
      {
        v15 = *(void **)a4;
      }
      else
      {
        v15 = qvector_reserve((pthread_mutex_t *)a4, *(void **)a4, v13, 1u);
        *(_QWORD *)a4 = v15;
      }
      *(_QWORD *)(a4 + 8) = v13;
      memmove(v15, "no extlang registered", v14);
      *(_BYTE *)(*(_QWORD *)a4 + v14) = 0;
      if ( !a1 )
        goto LABEL_20;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = 0;
      if ( !a1 )
        goto LABEL_20;
    }
    free_idcv(a1);
    *(_BYTE *)a1 = 2;
    a1[1] = 0;
LABEL_20:
    v17[0] = &off_15D6D0;
    v17[1] = a2;
    v11 = eval_idc_snippet((unsigned __int8 *)a1, a3, (pthread_mutex_t *)a4, (__int64)v17);
    return v11 & 1;
  }
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64, const char *, __int64))(v9 + 64);
  if ( v10 )
  {
    v11 = v10(a1, a2, a3, a4);
  }
  else
  {
    if ( a4 )
      sub_3C748(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(const char **)(v9 + 16));
    v11 = 0;
  }
  --*(_DWORD *)(v9 + 12);
  return v11 & 1;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 15D6D0: using guessed type __int64 (__fastcall *off_15D6D0)();
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
// 166AA0: using guessed type __int64 qword_166AA0;
