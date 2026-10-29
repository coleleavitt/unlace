/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_func
// Address: 0x000000000006B0F4

//----- (000000000006B0F4) ----------------------------------------------------
__int64 __fastcall add_idc_func(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  unsigned __int8 v3; // w8
  const char *v4; // x21
  __int64 v5; // x25
  unsigned __int64 v6; // x23
  _UNKNOWN **v7; // x22
  __int64 v8; // x26
  unsigned __int64 v9; // x27
  unsigned int v10; // w20
  void **v11; // x22
  _UNKNOWN **v12; // x0
  _UNKNOWN **v13; // x21
  _QWORD *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x24
  size_t v17; // x0
  const char *v18; // x21
  int v19; // w8
  __int64 v20; // x23
  __int64 v21; // x8
  bool v22; // cf
  unsigned __int64 v23; // x8
  int v24; // w10
  unsigned __int64 v25; // x0
  _QWORD *v26; // x0
  _QWORD *v27; // x21
  _QWORD *v28; // x10
  __int64 v29; // x24
  __int64 v30; // x25
  int v31; // w8
  _QWORD *v33; // x0
  _QWORD *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  char v42; // [xsp+0h] [xbp-50h]

  if ( *(_QWORD *)a1 && *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) )
  {
    v2 = (pthread_mutex_t *)qword_166AA8;
    qmutex_lock((pthread_mutex_t *)qword_166AA8);
    v3 = atomic_load((unsigned __int8 *)&byte_166AE8);
    if ( (v3 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
    {
      v33 = operator new(0x80u);
      *(_QWORD *)((char *)v33 + 117) = 0;
      v33[14] = 0;
      *((_OWORD *)v33 + 5) = 0u;
      *((_OWORD *)v33 + 6) = 0u;
      *((_OWORD *)v33 + 3) = 0u;
      *((_OWORD *)v33 + 4) = 0u;
      *((_OWORD *)v33 + 1) = 0u;
      *((_OWORD *)v33 + 2) = 0u;
      *(_OWORD *)v33 = 0u;
      qword_166AE0 = (__int64)v33;
      _cxa_guard_release((__guard *)&byte_166AE8);
    }
    v4 = *(const char **)a1;
    v5 = qword_166AE0;
    v6 = qword_164A28;
    if ( !*(_QWORD *)a1 || !qword_164A28 )
      goto LABEL_15;
    v7 = off_164A30;
    v8 = 0;
    v9 = 0;
    while ( strcmp((const char *)v7[v8], v4) )
    {
      ++v9;
      v8 += 5;
      if ( v9 >= v6 )
        goto LABEL_15;
    }
    v11 = (void **)&v7[v8];
    if ( v11 )
    {
      if ( 0xCCCCCCCCCCCCCCCDLL * ((v8 * 8) >> 3) < *(_QWORD *)(v5 + 48) )
      {
        v10 = 0;
LABEL_43:
        qmutex_unlock(v2);
        return v10;
      }
    }
    else
    {
LABEL_15:
      qword_164A28 = v6 + 1;
      v12 = (_UNKNOWN **)qcalloc(v6 + 1, 0x28u);
      v13 = v12;
      if ( !v12 )
        goto LABEL_49;
      memcpy(v12, off_164A30, 40 * v6);
      if ( off_164A30 != *(_UNKNOWN ***)(v5 + 40) )
        qfree(off_164A30);
      v11 = (void **)&v13[5 * v6];
      off_164A30 = v13;
      *v11 = nullptr;
      v11[2] = nullptr;
      v11[3] = nullptr;
    }
    v14 = v11[3];
    if ( v14 )
    {
      v15 = *(v14 - 1);
      if ( v15 )
      {
        v16 = 4 * v15;
        do
        {
          free_idcv(&v14[v16 - 4]);
          v16 -= 4;
        }
        while ( v16 * 8 );
      }
      operator delete[](v14 - 1);
    }
    qfree(*v11);
    qfree(v11[2]);
    v11[4] = nullptr;
    *(_OWORD *)v11 = 0u;
    *((_OWORD *)v11 + 1) = 0u;
    *v11 = qstrdup(*(char **)a1);
    v11[1] = *(void **)(a1 + 8);
    v17 = (size_t)qstrdup(*(char **)(a1 + 16));
    v11[2] = (void *)v17;
    if ( *(_QWORD *)(a1 + 24) )
    {
      v18 = *(const char **)(a1 + 16);
      v17 = strlen(v18);
      if ( (int)v17 >= 1 )
      {
        do
        {
          v19 = v17 - 1;
          if ( v18[(int)v17 - 1] != 4 )
            break;
          v17 = (unsigned int)v19;
        }
        while ( v19 >= 1 );
      }
      v20 = *(unsigned int *)(a1 + 32);
      if ( (int)v20 >= 1 && (int)v20 <= (int)v17 )
      {
        v21 = 32LL * (int)v20;
        v22 = __CFADD__(v21, 8);
        v23 = v21 + 8;
        v24 = v22;
        if ( ((unsigned __int64)(int)v20 >> 59 != 0) | v24 )
          v25 = -1;
        else
          v25 = v23;
        v26 = (_QWORD *)operator new[](v25);
        *v26 = (int)v20;
        v27 = v26 + 1;
        v28 = v26 + 1;
        do
        {
          *(_BYTE *)v28 = 2;
          v28[1] = 0;
          v28[2] = 0;
          v28[3] = 0;
          v28 += 4;
        }
        while ( v28 != &v26[4 * (int)v20 + 1] );
        v29 = 0;
        v30 = v20;
        do
        {
          copy_idcv((unsigned __int8 *)&v27[v29], (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + v29 * 8));
          --v30;
          v29 += 4;
        }
        while ( v30 );
        v11[3] = v27;
        *((_DWORD *)v11 + 8) = v20;
        goto LABEL_42;
      }
      if ( !under_debugger )
      {
        interr(1445);
LABEL_49:
        sub_6B464((__int64)"add_idc_func");
      }
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 32) )
      {
LABEL_42:
        v31 = *(_DWORD *)(a1 + 36);
        v10 = 1;
        *((_DWORD *)v11 + 9) = v31;
        goto LABEL_43;
      }
      if ( !under_debugger )
        v17 = (size_t)interr(1446);
    }
    __break(1u);
    v34 = (_QWORD *)v17;
    _cxa_guard_abort((__guard *)&byte_166AE8);
    qmutex_unlock(v2);
    Unwind_Resume(v34, v35, v36, v37, v38, v39, v40, v41, v42);
  }
  return 0;
}
// 6B330: conditional instruction was optimized away because w23.4>=1
// 6B458: variable 'v35' is possibly undefined
// 6B458: variable 'v36' is possibly undefined
// 6B458: variable 'v37' is possibly undefined
// 6B458: variable 'v38' is possibly undefined
// 6B458: variable 'v39' is possibly undefined
// 6B458: variable 'v40' is possibly undefined
// 6B458: variable 'v41' is possibly undefined
// 6B458: variable 'v42' is possibly undefined
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
// 168DF0: using guessed type char under_debugger;
