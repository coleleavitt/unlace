_QWORD *__fastcall sub_1F38D10(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 *v9; // r13
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r14
  _QWORD *i; // rdx
  __int64 *v15; // r15
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // ecx
  _QWORD *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 *v25; // rbp
  __int64 *v26; // r12
  __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  void *v33; // rdi
  unsigned __int64 v34; // rsi
  __int64 v35; // rdi
  void **v36; // rdi
  void **v37; // rbp
  void **v38; // rdi
  __int64 v39; // rdi
  void **v40; // rdi
  void **v41; // rbp
  void **v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdx
  _QWORD *j; // rdx
  int v49; // r10d
  _QWORD *v50; // r11
  __int64 v51; // [rsp+0h] [rbp-48h]
  __int64 v52; // [rsp+8h] [rbp-40h]

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
    v52 = 24 * v8;
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
LABEL_54:
        v15 += 3;
        if ( v13 == v15 )
          return (_QWORD *)operator delete(v9, v52, 8);
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
        v49 = 1;
        v50 = nullptr;
        if ( v21 != -4096 )
        {
          while ( 1 )
          {
            if ( v21 == -8192 && !v50 )
              v50 = v20;
            v19 = v18 & (v49 + v19);
            v20 = (_QWORD *)(*(_QWORD *)a1 + 24LL * v19);
            v21 = *v20;
            if ( v16 == *v20 )
              break;
            if ( v21 == -4096 )
            {
              if ( v50 )
                v20 = v50;
              break;
            }
            ++v49;
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
      v25 = v15 + 1;
      if ( (v24 & 2) == 0 )
      {
        if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_22;
        if ( v24 && (v24 & 4) != 0 )
          v25 += (v24 & 0xFFFFFFFFFFFFFFF8LL) != 0;
        v26 = v15 + 2;
LABEL_19:
        if ( v26 != v25 )
        {
          do
          {
            v27 = *v25++;
            operator delete((void *)(v27 & 0xFFFFFFFFFFFFFFF8LL), 0x38u);
          }
          while ( v26 != v25 );
          v24 = v15[1];
        }
LABEL_22:
        v28 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v24 & 2) != 0 )
        {
          v34 = v24 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !*(_DWORD *)(v28 + 8) )
            goto LABEL_40;
          v43 = **(_QWORD **)v28;
          if ( !v43 )
            goto LABEL_40;
          if ( (v43 & 4) == 0 || (v29 = v43 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
LABEL_39:
            v34 = v24 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_40:
            *(_DWORD *)(v34 + 8) = 0;
            goto LABEL_42;
          }
        }
        else
        {
          if ( !v28 )
            goto LABEL_41;
          if ( !v24 )
            goto LABEL_41;
          if ( (v24 & 4) == 0 )
            goto LABEL_41;
          v29 = v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_41;
        }
        v30 = *(_QWORD *)(v29 + 24);
        v31 = *(unsigned int *)(v29 + 40);
        v32 = v31 << 6;
        if ( (_DWORD)v31 )
        {
          v51 = v30 + v32;
          do
          {
            while ( *(_DWORD *)v30 == -1 && (unsigned __int64)(*(_QWORD *)(v30 + 8) - 1LL) <= 1 )
            {
              v30 += 64;
              if ( v51 == v30 )
                goto LABEL_35;
            }
            v33 = *(void **)(v30 + 16);
            if ( v33 != (void *)(v30 + 32) )
              free(v33);
            v30 += 64;
          }
          while ( v51 != v30 );
LABEL_35:
          v30 = *(_QWORD *)(v29 + 24);
          v32 = (unsigned __int64)*(unsigned int *)(v29 + 40) << 6;
        }
        operator delete(v30, v32, 8);
        if ( *(_QWORD *)v29 )
          operator delete(*(void **)v29);
        operator delete((void *)v29, 0x30u);
        v24 = v15[1];
        if ( (v24 & 2) != 0 )
          goto LABEL_39;
LABEL_41:
        v15[1] = 0;
LABEL_42:
        v35 = v15[2];
        if ( v35 )
        {
          if ( (v35 & 4) != 0 )
          {
            v36 = (void **)(v35 & 0xFFFFFFFFFFFFFFF8LL);
            v37 = v36;
            if ( v36 )
            {
              v38 = (void **)*v36;
              if ( v38 != v37 + 2 )
                free(v38);
              operator delete(v37, 0x30u);
            }
          }
        }
        v39 = v15[1];
        if ( v39 )
        {
          if ( (v39 & 2) != 0 )
          {
            v40 = (void **)(v39 & 0xFFFFFFFFFFFFFFFCLL);
            v41 = v40;
            if ( v40 )
            {
              v42 = (void **)*v40;
              if ( v42 != v41 + 2 )
                free(v42);
              operator delete(v41, 0x30u);
            }
          }
        }
        goto LABEL_54;
      }
      v44 = *(unsigned int *)((v24 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      v45 = *(__int64 **)(v24 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (_DWORD)v44 )
      {
        v46 = *v45;
        v25 = *(__int64 **)(v24 & 0xFFFFFFFFFFFFFFFCLL);
        if ( !*v45 )
        {
LABEL_65:
          v26 = &v45[v44];
          goto LABEL_19;
        }
        if ( (v46 & 4) != 0 )
        {
          v25 = &v45[(v46 & 0xFFFFFFFFFFFFFFF8LL) != 0];
          goto LABEL_65;
        }
      }
      v25 = *(__int64 **)(v24 & 0xFFFFFFFFFFFFFFFCLL);
      goto LABEL_65;
    }
    return (_QWORD *)operator delete(v9, v52, 8);
  }
  else
  {
    v47 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v47]; j != result; result += 3 )
      *result = -4096;
  }
  return result;
}
