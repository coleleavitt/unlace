/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_func
// Address: 0x000000000006E420

//----- (000000000006E420) ----------------------------------------------------
__int64 __fastcall add_idc_func(__int64 a1, double a2, __m128 a3)
{
  char *v4; // rbx
  unsigned __int64 v5; // r15
  char **v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  char *v9; // r13
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbp
  const char *v14; // rbx
  int v15; // eax
  int v16; // ecx
  signed __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  signed __int64 *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // r14
  _QWORD *v24; // rcx
  _OWORD *v26; // rax
  pthread_mutex_t *v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+10h] [rbp-38h]

  if ( *(_QWORD *)a1 && *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) )
  {
    v27 = (pthread_mutex_t *)qword_1557E8;
    qmutex_lock((pthread_mutex_t *)qword_1557E8);
    if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
    {
      v26 = operator new(0x80u);
      a2 = 0.0;
      *(_OWORD *)((char *)v26 + 109) = 0;
      v26[6] = 0;
      v26[5] = 0;
      v26[4] = 0;
      v26[3] = 0;
      v26[2] = 0;
      v26[1] = 0;
      *v26 = 0;
      qword_155820 = (__int64)v26;
      _cxa_guard_release(&byte_155828);
    }
    v28 = qword_155820;
    v4 = *(char **)a1;
    v5 = (unsigned __int64)off_154A20;
    if ( !*(_QWORD *)a1 || !off_154A20 )
      goto LABEL_15;
    v6 = off_154A28;
    v7 = 0;
    v8 = 0;
    while ( strcmp(v6[v7], v4) )
    {
      ++v8;
      v7 += 5;
      if ( v8 >= v5 )
        goto LABEL_15;
    }
    v9 = (char *)&v6[v7];
    if ( v9 )
    {
      if ( 0xCCCCCCCCCCCCCCCDLL * ((v7 * 8) >> 3) < *(_QWORD *)(v28 + 48) )
      {
        LODWORD(v4) = 0;
LABEL_45:
        qmutex_unlock(v27);
        return (unsigned int)v4;
      }
    }
    else
    {
LABEL_15:
      off_154A20 = (int *)(v5 + 1);
      v4 = (char *)qcalloc(v5 + 1, 0x28u);
      if ( !v4 )
        sub_6E800((int)"add_idc_func");
      memcpy(v4, off_154A28, 40 * v5);
      if ( off_154A28 != *(char ***)(v28 + 40) )
        qfree(off_154A28);
      off_154A28 = (char **)v4;
      v9 = &v4[40 * v5];
      *(_QWORD *)v9 = 0;
      a2 = 0.0;
      *((_OWORD *)v9 + 1) = 0;
    }
    v10 = *((_QWORD *)v9 + 3);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 - 8);
      if ( v11 )
      {
        v12 = 32 * v11;
        v4 = (char *)(v10 + v12 - 32);
        v13 = -v12;
        do
        {
          free_idcv(v4, a2, a3);
          v4 -= 32;
          v13 += 32;
        }
        while ( v13 );
      }
      operator delete[]((void *)(v10 - 8));
    }
    qfree(*(void **)v9);
    qfree(*((void **)v9 + 2));
    *((_OWORD *)v9 + 1) = 0;
    *(_OWORD *)v9 = 0;
    *((_QWORD *)v9 + 4) = 0;
    *(_QWORD *)v9 = qstrdup(*(const char **)a1);
    *((_QWORD *)v9 + 1) = *(_QWORD *)(a1 + 8);
    *((_QWORD *)v9 + 2) = qstrdup(*(const char **)(a1 + 16));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v14 = *(const char **)(a1 + 16);
      v15 = strlen(v14);
      if ( v15 <= 0 )
      {
        v16 = v15;
      }
      else
      {
        do
        {
          v16 = v15--;
          if ( v14[v15] != 4 )
            break;
          v16 = v15;
        }
        while ( v15 > 0 );
      }
      v17 = *(int *)(a1 + 32);
      if ( v17 > 0 && (int)v17 <= v16 )
      {
        v18 = 32 * v17 + 8;
        v19 = -1;
        if ( (unsigned __int64)(32 * v17) >= 0xFFFFFFFFFFFFFFF8LL )
          v18 = -1;
        if ( is_mul_ok(0x20u, v17) )
          v19 = v18;
        v20 = (signed __int64 *)operator new[](v19);
        v21 = (unsigned int)v17;
        *v20 = v17;
        v22 = (__int64)&v20[4 * v17 + 1];
        v23 = v20 + 1;
        v24 = v23;
        do
        {
          *(_BYTE *)v24 = 2;
          *(_OWORD *)(v24 + 1) = 0;
          v24[3] = 0;
          v24[1] = 0;
          v24 += 4;
        }
        while ( v24 != (_QWORD *)v22 );
        v4 = nullptr;
        do
        {
          copy_idcv(&v4[(_QWORD)v23], &v4[*(_QWORD *)(a1 + 24)], 0.0, a3);
          v4 += 32;
          --v21;
        }
        while ( v21 );
        *((_QWORD *)v9 + 3) = v23;
        *((_DWORD *)v9 + 8) = v17;
        goto LABEL_44;
      }
      if ( !(_BYTE)under_debugger )
        interr(1445);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 32) )
      {
LABEL_44:
        *((_DWORD *)v9 + 9) = *(_DWORD *)(a1 + 36);
        LOBYTE(v4) = 1;
        goto LABEL_45;
      }
      if ( !(_BYTE)under_debugger )
        interr(1446);
    }
    BUG();
  }
  LODWORD(v4) = 0;
  return (unsigned int)v4;
}
// 6E6E3: conditional instruction was optimized away because r15d.4>=1
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
// 155820: using guessed type __int64 qword_155820;
// 158B40: using guessed type __int64 under_debugger;
