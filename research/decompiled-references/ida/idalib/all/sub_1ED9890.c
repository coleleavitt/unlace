_QWORD *__fastcall sub_1ED9890(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r12
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r13
  _QWORD *i; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  int v18; // esi
  unsigned int v19; // edx
  _QWORD *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdx
  __int64 *v30; // r14
  __int64 *j; // r15
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rdx
  void *v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  void **v42; // rdi
  void **v43; // r15
  void **v44; // rdi
  __int64 v45; // rdi
  void **v46; // rdi
  void **v47; // r15
  void **v48; // rdi
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *k; // rdx
  int v53; // r9d
  _QWORD *v54; // r10
  __int64 v55; // [rsp+0h] [rbp-48h]
  __int64 v56; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v56 = 24 * v8;
    v13 = &v9[3 * v8];
    for ( i = &result[3 * v12]; i != result; result += 3 )
      *result = -4096;
    v15 = v9;
    if ( v13 != v9 )
    {
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 != -8192 && v16 != -4096 )
          break;
LABEL_50:
        v15 += 3;
        if ( v13 == v15 )
          return (_QWORD *)operator delete(v9, v56, 8);
      }
      v17 = *(_DWORD *)(a1 + 16);
      if ( !v17 )
      {
        *(_QWORD *)&dword_0 = *v15;
        BUG();
      }
      v18 = v17 - 1;
      v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v20 = (_QWORD *)(*(_QWORD *)a1 + 24LL * v19);
      v21 = *v20;
      if ( v16 != *v20 )
      {
        v53 = 1;
        v54 = nullptr;
        if ( v21 != -4096 )
        {
          while ( 1 )
          {
            if ( v21 == -8192 && !v54 )
              v54 = v20;
            v19 = v18 & (v53 + v19);
            v20 = (_QWORD *)(*(_QWORD *)a1 + 24LL * v19);
            v21 = *v20;
            if ( v16 == *v20 )
              break;
            if ( v21 == -4096 )
            {
              if ( v54 )
                v20 = v54;
              break;
            }
            ++v53;
          }
        }
      }
      *v20 = v16;
      v20[1] = v15[1];
      v22 = v15[2];
      v15[1] = 0;
      v20[2] = v22;
      v23 = v15[1];
      v15[2] = 0;
      if ( (v23 & 2) != 0 )
        *(_DWORD *)((v23 & 0xFFFFFFFFFFFFFFFCLL) + 8) = 0;
      else
        v15[1] = 0;
      ++*(_DWORD *)(a1 + 8);
      v24 = v15[1];
      if ( (v24 & 2) != 0 )
      {
        v25 = 0;
        v50 = v15[1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( !*(_DWORD *)(v50 + 8) )
          goto LABEL_18;
        v26 = *(__int64 **)v50;
      }
      else
      {
        v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        v26 = v15 + 1;
        if ( !v25 )
          goto LABEL_18;
      }
      v27 = *v26;
      v25 = 0;
      if ( v27 && (v27 & 4) != 0 )
        v25 = (v27 & 0xFFFFFFFFFFFFFFF8LL) != 0;
LABEL_18:
      v28 = sub_1EAA820(v15 + 1, v25);
      v30 = v29;
      for ( j = (__int64 *)v28; v30 != j; ++j )
      {
        v32 = *j;
        operator delete((void *)(v32 & 0xFFFFFFFFFFFFFFF8LL), 0x38u);
      }
      v33 = v15[1];
      v34 = v33 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v33 & 2) != 0 )
      {
        v40 = v15[1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( !*(_DWORD *)(v34 + 8) )
          goto LABEL_36;
        v49 = **(_QWORD **)v34;
        if ( !v49 )
          goto LABEL_36;
        if ( (v49 & 4) == 0 || (v35 = v49 & 0xFFFFFFFFFFFFFFF8LL, (v49 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
        {
LABEL_35:
          v40 = v33 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_36:
          *(_DWORD *)(v40 + 8) = 0;
          goto LABEL_38;
        }
      }
      else
      {
        if ( !v34 )
          goto LABEL_37;
        if ( !v33 )
          goto LABEL_37;
        if ( (v33 & 4) == 0 )
          goto LABEL_37;
        v35 = v33 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v33 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_37;
      }
      v36 = *(_QWORD *)(v35 + 24);
      v37 = 56LL * *(unsigned int *)(v35 + 40);
      if ( *(_DWORD *)(v35 + 40) )
      {
        v38 = v36 + 56LL * *(unsigned int *)(v35 + 40);
        do
        {
          while ( 1 )
          {
            if ( (unsigned int)(*(_DWORD *)v36 + 2) > 1 )
            {
              v39 = *(void **)(v36 + 8);
              if ( v39 != (void *)(v36 + 24) )
                break;
            }
            v36 += 56;
            if ( v38 == v36 )
              goto LABEL_31;
          }
          v55 = v38;
          v36 += 56;
          free(v39);
          v38 = v55;
        }
        while ( v55 != v36 );
LABEL_31:
        v36 = *(_QWORD *)(v35 + 24);
        v37 = 56LL * *(unsigned int *)(v35 + 40);
      }
      operator delete(v36, v37, 8);
      if ( *(_QWORD *)v35 )
        operator delete(*(void **)v35);
      operator delete((void *)v35, 0x30u);
      v33 = v15[1];
      if ( (v33 & 2) != 0 )
        goto LABEL_35;
LABEL_37:
      v15[1] = 0;
LABEL_38:
      v41 = v15[2];
      if ( v41 )
      {
        if ( (v41 & 4) != 0 )
        {
          v42 = (void **)(v41 & 0xFFFFFFFFFFFFFFF8LL);
          v43 = v42;
          if ( v42 )
          {
            v44 = (void **)*v42;
            if ( v44 != v43 + 2 )
              free(v44);
            operator delete(v43, 0x30u);
          }
        }
      }
      v45 = v15[1];
      if ( v45 )
      {
        if ( (v45 & 2) != 0 )
        {
          v46 = (void **)(v45 & 0xFFFFFFFFFFFFFFFCLL);
          v47 = v46;
          if ( v46 )
          {
            v48 = (void **)*v46;
            if ( v48 != v47 + 2 )
              free(v48);
            operator delete(v47, 0x30u);
          }
        }
      }
      goto LABEL_50;
    }
    return (_QWORD *)operator delete(v9, v56, 8);
  }
  else
  {
    v51 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[3 * v51]; k != result; result += 3 )
      *result = -4096;
  }
  return result;
}
