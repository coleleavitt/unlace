/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_func
// Address: 0x00041A3C

//----- (00041A3C) --------------------------------------------------------
int __fastcall add_idc_func(int a1)
{
  int v2; // r4
  const char *v3; // r4
  char **v4; // r5
  int v5; // r6
  int v6; // r7
  char **v7; // r5
  char **v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  char **v12; // r7
  char *v13; // r0
  unsigned int v14; // r6
  int v15; // r7
  char *v16; // r4
  int v17; // r7
  char *v18; // r5
  int v19; // r7
  signed int v20; // r0
  int v21; // r2
  signed int v22; // r7
  unsigned int v23; // r2
  _DWORD *v24; // r0
  char *v25; // r6
  int v26; // r5
  _BYTE *v27; // r7
  int v28; // r4
  signed int v29; // r5
  _DWORD *v31; // r4
  pthread_mutex_t *mutex; // [sp+4h] [bp-18h]
  int v33; // [sp+Ch] [bp-10h]
  char **v34; // [sp+10h] [bp-Ch]
  int v35; // [sp+14h] [bp-8h]
  unsigned int v36; // [sp+18h] [bp-4h]
  signed int v37; // [sp+18h] [bp-4h]

  v2 = 0;
  if ( *(_DWORD *)a1 && *(_DWORD *)(a1 + 4) && *(_DWORD *)(a1 + 8) )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
    {
      v31 = operator new(0x50u);
      *v31 = 0;
      v31[1] = 0;
      v31[2] = 0;
      v31[3] = 0;
      v31[4] = 0;
      v31[5] = 0;
      v31[6] = 0;
      memset(v31 + 8, 0, 0x29u);
      dword_DE390 = (int)v31;
      _cxa_guard_release(&dword_DE394);
    }
    v35 = a1;
    v3 = *(const char **)a1;
    v33 = dword_DE390;
    v36 = dword_DD60C;
    if ( !*(_DWORD *)a1 || !dword_DD60C )
      goto LABEL_14;
    v4 = off_DD610;
    v5 = 0;
    v6 = 0;
    while ( strcmp(v4[v5], v3) )
    {
      v5 += 6;
      if ( ++v6 >= v36 )
        goto LABEL_14;
    }
    v7 = &v4[v5];
    if ( v7 )
    {
      v2 = 0;
      if ( (unsigned int)(-1431655765 * ((v5 * 4) >> 3)) < *(_DWORD *)(v33 + 24) )
        goto LABEL_41;
    }
    else
    {
LABEL_14:
      dword_DD60C = v36 + 1;
      v8 = (char **)qcalloc(v36 + 1, 0x18u);
      v12 = v8;
      if ( !v8 )
        sub_41D0C((int)"add_idc_func", v9, v10, v11);
      qmemcpy(v8, off_DD610, 24 * v36);
      if ( off_DD610 != *(char ***)(v33 + 20) )
        qfree(off_DD610);
      off_DD610 = v12;
      v12[6 * v36] = nullptr;
      v7 = &v12[6 * v36];
      v7[2] = nullptr;
      v7[3] = nullptr;
    }
    v13 = v7[3];
    v14 = -1;
    v34 = v7;
    if ( v13 )
    {
      v15 = *((_DWORD *)v13 - 1);
      v16 = v13 - 8;
      if ( v15 )
      {
        v17 = 24 * v15;
        v18 = v13 - 24;
        do
        {
          free_idcv((unsigned __int8 *)&v18[v17]);
          v17 -= 24;
        }
        while ( v17 );
      }
      operator delete[](v16);
      v7 = v34;
    }
    qfree(*v7);
    v19 = v35;
    qfree(v7[2]);
    *v7 = nullptr;
    v7[1] = nullptr;
    v7[2] = nullptr;
    v7[3] = nullptr;
    v7[4] = nullptr;
    v7[5] = nullptr;
    *v7 = (char *)qstrdup(*(char **)v35);
    v7[1] = *(char **)(v35 + 4);
    v7[2] = (char *)qstrdup(*(char **)(v35 + 8));
    if ( *(_DWORD *)(v35 + 12) )
    {
      v20 = strlen(*(const char **)(v35 + 8));
      if ( v20 >= 1 )
      {
        do
        {
          v21 = v20 - 1;
          if ( *(_BYTE *)(*(_DWORD *)(v35 + 8) - 1 + v20) != 4 )
            break;
          --v20;
        }
        while ( v21 + 1 >= 2 );
      }
      v22 = *(_DWORD *)(v35 + 16);
      if ( v22 >= 1 && v22 <= v20 )
      {
        v23 = 24 * v22 + 8;
        if ( v23 < 24 * v22 )
          v23 = -1;
        if ( is_mul_ok(0x18u, v22) )
          v14 = v23;
        v24 = (_DWORD *)operator new[](v14);
        *v24 = 24;
        v24[1] = v22;
        v25 = (char *)(v24 + 2);
        v37 = v22;
        v26 = (int)&v24[6 * v22 + 2];
        v27 = v24 + 2;
        do
        {
          *v27 = 2;
          memset(v27 + 8, 0, 0x10u);
          *((_DWORD *)v27 + 2) = 0;
          v27 += 24;
        }
        while ( v27 != (_BYTE *)v26 );
        v19 = v35;
        v28 = 0;
        v29 = v37;
        do
        {
          copy_idcv((unsigned __int8 *)&v25[v28], (unsigned __int8 *)(*(_DWORD *)(v35 + 12) + v28));
          v28 += 24;
          --v29;
        }
        while ( v29 );
        v7 = v34;
        v34[3] = v25;
        v34[4] = (char *)v37;
        goto LABEL_40;
      }
      if ( !under_debugger )
        interr(1445);
    }
    else
    {
      if ( !*(_DWORD *)(v35 + 16) )
      {
LABEL_40:
        v7[5] = *(char **)(v19 + 20);
        v2 = 1;
LABEL_41:
        qmutex_unlock(mutex);
        return v2;
      }
      if ( !under_debugger )
        interr(1446);
    }
    __debugbreak();
  }
  return v2;
}
// 41C04: conditional instruction was optimized away because %var_4.4>=1
// 41C92: variable 'v9' is possibly undefined
// 41C92: variable 'v10' is possibly undefined
// 41C92: variable 'v11' is possibly undefined
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
// E0550: using guessed type char under_debugger;
