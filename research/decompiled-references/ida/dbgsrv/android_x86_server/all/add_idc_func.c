/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_func
// Address: 0x00054A40

//----- (00054A40) --------------------------------------------------------
char *__cdecl add_idc_func(int a1)
{
  const char **v1; // esi
  int v2; // edi
  unsigned int v3; // esi
  unsigned int v5; // eax
  char **v6; // edi
  char *v7; // esi
  char *v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // esi
  const char *v12; // esi
  signed int v13; // eax
  signed int v14; // esi
  _DWORD *v15; // edx
  int v16; // eax
  _DWORD *v17; // edx
  _DWORD *v18; // ecx
  int v19; // esi
  signed int v20; // edi
  char *v21; // eax
  _DWORD *v22; // eax
  unsigned int v23; // [esp+14h] [ebp-28h]
  char *v24; // [esp+14h] [ebp-28h]
  char *v25; // [esp+14h] [ebp-28h]
  _DWORD *v26; // [esp+14h] [ebp-28h]
  char **v27; // [esp+18h] [ebp-24h]
  char **v28; // [esp+18h] [ebp-24h]
  char **v29; // [esp+18h] [ebp-24h]
  const char *v30; // [esp+1Ch] [ebp-20h]
  signed int v31; // [esp+1Ch] [ebp-20h]
  pthread_mutex_t *v32; // [esp+20h] [ebp-1Ch]
  int v33; // [esp+24h] [ebp-18h]

  v1 = (const char **)a1;
  if ( !*(_DWORD *)a1 || !*(_DWORD *)(a1 + 4) || !*(_DWORD *)(a1 + 8) )
    return nullptr;
  v32 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v22 = operator new(0x48u);
    v22[1] = 0;
    *v22 = 0;
    v22[3] = 0;
    v22[2] = 0;
    v22[5] = 0;
    v22[4] = 0;
    v22[7] = 0;
    v22[6] = 0;
    v22[9] = 0;
    v22[8] = 0;
    v22[11] = 0;
    v22[10] = 0;
    v22[13] = 0;
    v22[12] = 0;
    v22[15] = 0;
    v22[14] = 0;
    *(_DWORD *)((char *)v22 + 65) = 0;
    *(_DWORD *)((char *)v22 + 61) = 0;
    dword_13BD78 = (int)v22;
    _cxa_guard_release((__guard *)&byte_13BD7C);
    v1 = (const char **)a1;
  }
  v33 = dword_13BD78;
  v30 = *v1;
  v23 = (unsigned int)off_13B614;
  if ( !*v1 || !off_13B614 )
    goto LABEL_15;
  v27 = off_13B618;
  v2 = 0;
  v3 = 0;
  while ( strcmp(v27[v2], v30) )
  {
    ++v3;
    v2 += 6;
    if ( v3 >= v23 )
      goto LABEL_15;
  }
  v28 = &v27[v2];
  if ( !v28 )
  {
LABEL_15:
    off_13B614 = (int *)(v23 + 1);
    v7 = (char *)qcalloc(v23 + 1, 0x18u);
    if ( !v7 )
      sub_54EC0((int)"add_idc_func");
    memcpy(v7, off_13B618, 24 * v23);
    if ( off_13B618 != *(char ***)(v33 + 20) )
      qfree(off_13B618);
    off_13B618 = (char **)v7;
    v6 = (char **)&v7[24 * v23];
    *v6 = nullptr;
    v6[2] = nullptr;
    v6[3] = nullptr;
LABEL_19:
    v8 = v6[3];
    v29 = v6;
    if ( v8 )
    {
      v25 = v6[3];
      v9 = *((_DWORD *)v8 - 1);
      if ( v9 )
      {
        v10 = 20 * v9;
        do
        {
          free_idcv(&v25[v10 - 20]);
          v10 -= 20;
        }
        while ( v10 );
      }
      operator delete[](v25 - 4);
    }
    qfree(*v6);
    v11 = a1;
    qfree(v6[2]);
    v6[1] = nullptr;
    *v6 = nullptr;
    v6[3] = nullptr;
    v6[2] = nullptr;
    v6[5] = nullptr;
    v6[4] = nullptr;
    *v6 = (char *)qstrdup(*(char **)a1);
    v6[1] = *(char **)(a1 + 4);
    v6[2] = (char *)qstrdup(*(char **)(a1 + 8));
    if ( *(_DWORD *)(a1 + 12) )
    {
      v12 = *(const char **)(a1 + 8);
      v13 = strlen(v12);
      if ( v13 > 0 )
      {
        do
        {
          if ( v12[v13 - 1] != 4 )
            break;
          --v13;
        }
        while ( v13 + 1 >= 2 );
      }
      v14 = *(_DWORD *)(a1 + 16);
      if ( v14 > 0 && v14 <= v13 )
      {
        v15 = operator new[](saturated_mul(0x14u, v14));
        *v15 = v14;
        v16 = (int)&v15[5 * v14 + 1];
        v17 = v15 + 1;
        v18 = v17;
        do
        {
          *(_BYTE *)v18 = 2;
          v18[4] = 0;
          v18[3] = 0;
          v18[2] = 0;
          v18[1] = 0;
          v18 += 5;
        }
        while ( v18 != (_DWORD *)v16 );
        v31 = v14;
        v19 = 0;
        v20 = v31;
        v26 = v17;
        do
        {
          copy_idcv((char *)&v17[v19], (char *)(v19 * 4 + *(_DWORD *)(a1 + 12)));
          v19 += 5;
          --v20;
          v17 = v26;
        }
        while ( v20 );
        v6 = v29;
        v29[3] = (char *)v26;
        v29[4] = (char *)v31;
        v11 = a1;
        goto LABEL_36;
      }
      if ( !(_BYTE)under_debugger )
        interr(1445);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 16) )
      {
LABEL_36:
        v21 = *(char **)(v11 + 20);
        v6[5] = v21;
        LOBYTE(v21) = 1;
        v24 = v21;
        goto LABEL_37;
      }
      if ( !(_BYTE)under_debugger )
        interr(1446);
    }
    BUG();
  }
  v5 = -1431655765 * ((v2 * 4) >> 3);
  v6 = v28;
  if ( v5 >= *(_DWORD *)(v33 + 24) )
    goto LABEL_19;
  v24 = nullptr;
LABEL_37:
  qmutex_unlock(v32);
  return v24;
}
// 54D0C: conditional instruction was optimized away because esi.4>=1
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13BD5C: using guessed type int dword_13BD5C;
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
// 13E34C: using guessed type int under_debugger;
