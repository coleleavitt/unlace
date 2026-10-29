_QWORD *__fastcall sub_1F391B0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 *v9; // r12
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r13
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
  __int64 *v26; // r14
  __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rsi
  void *v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  void **v37; // rdi
  void **v38; // rbp
  void **v39; // rdi
  __int64 v40; // rdi
  void **v41; // rdi
  void **v42; // rbp
  void **v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // rcx
  __int64 *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *j; // rdx
  int v50; // r10d
  _QWORD *v51; // r11
  __int64 v52; // [rsp+0h] [rbp-48h]
  __int64 v53; // [rsp+8h] [rbp-40h]

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
    v53 = 24 * v8;
    v13 = &v9[3 * v8];
    for ( i = &result[3 * v12]; i != result; result += 3 )
      *result = -4096;
    v15 = v9;
    if ( v13 == v9 )
      return (_QWORD *)operator delete(v9, v53, 8);
    while ( 1 )
    {
      v16 = *v15;
      if ( *v15 != -8192 && v16 != -4096 )
        break;
LABEL_56:
      v15 += 3;
      if ( v13 == v15 )
        return (_QWORD *)operator delete(v9, v53, 8);
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
      v50 = 1;
      v51 = nullptr;
      if ( v21 != -4096 )
      {
        while ( 1 )
        {
          if ( v21 == -8192 && !v51 )
            v51 = v20;
          v19 = v18 & (v50 + v19);
          v20 = (_QWORD *)(*(_QWORD *)a1 + 24LL * v19);
          v21 = *v20;
          if ( v16 == *v20 )
            break;
          if ( v21 == -4096 )
          {
            if ( v51 )
              v20 = v51;
            break;
          }
          ++v50;
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
      {
LABEL_22:
        v28 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v24 & 2) != 0 )
        {
          v35 = v24 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !*(_DWORD *)(v28 + 8) )
            goto LABEL_42;
          v44 = **(_QWORD **)v28;
          if ( !v44 )
            goto LABEL_42;
          if ( (v44 & 4) == 0 || (v29 = v44 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
LABEL_41:
            v35 = v24 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_42:
            *(_DWORD *)(v35 + 8) = 0;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v28 )
            goto LABEL_43;
          if ( !v24 )
            goto LABEL_43;
          if ( (v24 & 4) == 0 )
            goto LABEL_43;
          v29 = v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_43;
        }
        v30 = *(_QWORD *)(v29 + 24);
        v31 = *(unsigned int *)(v29 + 40);
        v32 = 72 * v31;
        v52 = v30 + 72 * v31;
        if ( !(_DWORD)v31 )
        {
LABEL_38:
          operator delete(v30, v32, 8);
          if ( *(_QWORD *)v29 )
            operator delete(*(void **)v29);
          operator delete((void *)v29, 0x30u);
          v24 = v15[1];
          if ( (v24 & 2) != 0 )
            goto LABEL_41;
LABEL_43:
          v15[1] = 0;
LABEL_44:
          v36 = v15[2];
          if ( v36 )
          {
            if ( (v36 & 4) != 0 )
            {
              v37 = (void **)(v36 & 0xFFFFFFFFFFFFFFF8LL);
              v38 = v37;
              if ( v37 )
              {
                v39 = (void **)*v37;
                if ( v39 != v38 + 2 )
                  free(v39);
                operator delete(v38, 0x30u);
              }
            }
          }
          v40 = v15[1];
          if ( v40 )
          {
            if ( (v40 & 2) != 0 )
            {
              v41 = (void **)(v40 & 0xFFFFFFFFFFFFFFFCLL);
              v42 = v41;
              if ( v41 )
              {
                v43 = (void **)*v41;
                if ( v43 != v42 + 2 )
                  free(v43);
                operator delete(v42, 0x30u);
              }
            }
          }
          goto LABEL_56;
        }
        while ( *(_DWORD *)v30 == -1 )
        {
          v34 = *(_QWORD *)(v30 + 8);
          if ( v34 == 1 )
          {
            if ( *(_DWORD *)(v30 + 16) != -1 )
              break;
LABEL_31:
            v30 += 72;
            if ( v52 == v30 )
              goto LABEL_37;
          }
          else
          {
            if ( v34 != 2 || *(_DWORD *)(v30 + 16) != -2 )
              break;
            v30 += 72;
            if ( v52 == v30 )
            {
LABEL_37:
              v30 = *(_QWORD *)(v29 + 24);
              v32 = 72LL * *(unsigned int *)(v29 + 40);
              goto LABEL_38;
            }
          }
        }
        v33 = *(void **)(v30 + 24);
        if ( v33 != (void *)(v30 + 40) )
          free(v33);
        goto LABEL_31;
      }
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
      goto LABEL_22;
    }
    v45 = *(unsigned int *)((v24 & 0xFFFFFFFFFFFFFFFCLL) + 8);
    v46 = *(__int64 **)(v24 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (_DWORD)v45 )
    {
      v47 = *v46;
      v25 = *(__int64 **)(v24 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !*v46 )
      {
LABEL_67:
        v26 = &v46[v45];
        goto LABEL_19;
      }
      if ( (v47 & 4) != 0 )
      {
        v25 = &v46[(v47 & 0xFFFFFFFFFFFFFFF8LL) != 0];
        goto LABEL_67;
      }
    }
    v25 = *(__int64 **)(v24 & 0xFFFFFFFFFFFFFFFCLL);
    goto LABEL_67;
  }
  v48 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  for ( j = &result[3 * v48]; j != result; result += 3 )
    *result = -4096;
  return result;
}
