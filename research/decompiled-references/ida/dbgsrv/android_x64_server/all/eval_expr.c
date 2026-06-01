/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr
// Address: 0x000000000006A890

//----- (000000000006A890) ----------------------------------------------------
__int64 __fastcall eval_expr(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, double a5, __m128 a6)
{
  pthread_mutex_t *v9; // rbx
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(__int64, __int64, _BYTE *, __int64); // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  size_t v14; // rbx
  __int64 v15; // rbp
  char *v16; // rdi
  _QWORD v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v18[2] = __readfsqword(0x28u);
  v9 = (pthread_mutex_t *)qword_1557C0;
  qmutex_lock((pthread_mutex_t *)qword_1557C0);
  if ( (unsigned __int64)qword_1557E0 < *((_QWORD *)&xmmword_1557C8 + 1)
    && (v10 = *(_QWORD *)(xmmword_1557C8 + 8 * qword_1557E0)) != 0 )
  {
    ++*(_DWORD *)(v10 + 12);
  }
  else
  {
    v10 = 0;
  }
  qmutex_unlock(v9);
  if ( !v10 )
  {
    v13 = __strlen_chk("no extlang registered", 22);
    if ( v13 )
    {
      v14 = v13;
      v15 = v13 + 1;
      if ( *(_QWORD *)(a4 + 16) >= (unsigned __int64)(v13 + 1) )
      {
        v16 = *(char **)a4;
      }
      else
      {
        v16 = (char *)qvector_reserve(a4, *(char **)a4, v13 + 1, 1u);
        *(_QWORD *)a4 = v16;
      }
      *(_QWORD *)(a4 + 8) = v15;
      memmove(v16, "no extlang registered", v14);
      *(_BYTE *)(*(_QWORD *)a4 + v14) = 0;
      if ( !a1 )
        goto LABEL_18;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = 0;
      if ( !a1 )
        goto LABEL_18;
    }
    free_idcv((char *)a1, a5, a6);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
LABEL_18:
    v18[0] = &off_14DE60;
    v18[1] = a2;
    return (unsigned int)eval_idc_snippet((char *)a1, a3, a4, (__int64)v18, a5, a6);
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64))(v10 + 64);
  if ( v11 )
  {
    v12 = v11(a1, a2, a3, a4);
  }
  else
  {
    v12 = 0;
    if ( a4 )
      sub_3BBA0(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(const char **)(v10 + 16));
  }
  --*(_DWORD *)(v10 + 12);
  return v12;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 14DE60: using guessed type __int64 (__fastcall *off_14DE60)();
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
// 1557E0: using guessed type __int64 qword_1557E0;
