/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr
// Address: 0x000000010002CF04

//----- (000000010002CF04) ----------------------------------------------------
__int64 __fastcall eval_expr(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  pthread_mutex_t *v8; // x23
  __int64 v9; // x24
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 (__fastcall *v16)(__int64, __int64, const char *, __int64); // x8
  __int64 result; // x0
  _QWORD *v18; // x1
  _QWORD v19[2]; // [xsp+8h] [xbp-48h] BYREF

  v8 = (pthread_mutex_t *)qword_1000A57B8;
  qmutex_lock((pthread_mutex_t *)qword_1000A57B8);
  if ( qword_1000A5970 >= (unsigned __int64)qword_1000A5960 )
  {
    v9 = 0;
  }
  else
  {
    v9 = *(_QWORD *)(qword_1000A5958 + 8 * qword_1000A5970);
    if ( v9 )
      ++*(_DWORD *)(v9 + 12);
  }
  qmutex_unlock(v8);
  if ( v9 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, __int64, const char *, __int64))(v9 + 64);
    if ( v16 )
    {
      result = v16(a1, a2, a3, a4);
    }
    else
    {
      if ( a4 )
        sub_10000295C(
          (char **)a4,
          "the '%s' extlang des not implement the 'eval_expr' callback",
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          *(_QWORD *)(v9 + 16));
      result = 0;
    }
    --*(_DWORD *)(v9 + 12);
  }
  else
  {
    v18 = *(_QWORD **)a4;
    if ( *(_QWORD *)(a4 + 16) <= 0x15u )
    {
      v18 = qvector_reserve((_QWORD *)a4, v18, 0x16u, 1u);
      *(_QWORD *)a4 = v18;
    }
    *(_QWORD *)(a4 + 8) = 22;
    qmemcpy(v18, "no extlang registered", 21);
    *(_BYTE *)(*(_QWORD *)a4 + 21LL) = 0;
    if ( a1 )
    {
      free_idcv((unsigned __int8 *)a1);
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
    }
    v19[0] = &off_10009E498;
    v19[1] = a2;
    return eval_idc_snippet((unsigned __int8 *)a1, a3, (char **)a4, (__int64)v19);
  }
  return result;
}
// 10002D070: variable 'v10' is possibly undefined
// 10002D070: variable 'v11' is possibly undefined
// 10002D070: variable 'v12' is possibly undefined
// 10002D070: variable 'v13' is possibly undefined
// 10002D070: variable 'v14' is possibly undefined
// 10002D070: variable 'v15' is possibly undefined
// 10009E498: using guessed type __int64 (__fastcall *off_10009E498)();
// 1000A57B8: using guessed type __int64 qword_1000A57B8;
// 1000A5958: using guessed type __int64 qword_1000A5958;
// 1000A5960: using guessed type __int64 qword_1000A5960;
// 1000A5970: using guessed type __int64 qword_1000A5970;
