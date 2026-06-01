_QWORD *__fastcall sub_1F38950(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 **v14; // rdi
  __int64 v15; // r9
  unsigned int v16; // r13d
  unsigned int v17; // r8d
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *result; // rax
  int v24; // r11d
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  unsigned __int64 v29; // r14
  unsigned int v30; // ebp
  void *v31; // rdi
  __int64 v32; // rdx
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r9
  unsigned int v36; // edi
  int v37; // edx
  int v38; // edi
  __int64 v39; // r8
  unsigned int v40; // r13d
  __int64 *v41; // r9
  int v42; // r10d
  __int64 *v43; // r10
  int v44; // r11d
  __int64 v45; // [rsp+8h] [rbp-40h]
  __int64 v46; // [rsp+8h] [rbp-40h]

  v7 = sub_B8C1B0(a2);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v13 = *(_DWORD *)(a1 + 3640);
  v14 = (__int64 **)(a1 + 3624);
  if ( v13 )
  {
    v15 = *(_QWORD *)(a1 + 3624);
    v16 = ((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4);
    v17 = (v13 - 1) & v16;
    v10 = v15 + 40LL * v17;
    v18 = *(_QWORD *)v10;
    if ( v8 == *(_QWORD *)v10 )
    {
LABEL_3:
      v19 = *(unsigned int *)(v10 + 16);
      v20 = v10 + 8;
      v21 = a3;
      if ( a3 < (unsigned int)v19 )
      {
LABEL_4:
        v22 = *(_QWORD *)(v10 + 8);
        goto LABEL_5;
      }
      v30 = a3 + 1;
      v29 = v30;
      if ( v30 != v19 )
      {
        if ( v30 < v19 )
        {
          *(_DWORD *)(v10 + 16) = v30;
          goto LABEL_4;
        }
        goto LABEL_14;
      }
LABEL_19:
      v22 = *(_QWORD *)v20;
      goto LABEL_5;
    }
    v24 = 1;
    v25 = 0;
    if ( v18 != -4096 )
    {
      while ( 1 )
      {
        if ( !v25 && v18 == -8192 )
          v25 = v10;
        v17 = (v13 - 1) & (v24 + v17);
        v10 = v15 + 40LL * v17;
        v18 = *(_QWORD *)v10;
        if ( v8 == *(_QWORD *)v10 )
          goto LABEL_3;
        if ( v18 == -4096 )
          break;
        ++v24;
      }
      if ( v25 )
        v10 = v25;
    }
    v11 = 3 * v13;
    v9 = (unsigned int)(*(_DWORD *)(a1 + 3632) + 1);
    v12 = (unsigned int)(4 * v9);
    if ( (unsigned int)v12 < (unsigned int)v11 )
    {
      v26 = v13 - *(_DWORD *)(a1 + 3636) - (unsigned int)v9;
      v27 = v13 >> 3;
      if ( (unsigned int)v26 > (unsigned int)v27 )
      {
LABEL_10:
        v28 = *(_QWORD *)v10;
        goto LABEL_11;
      }
      v46 = v8;
      sub_1F38700(v14, v13, v9, v10, v26, v27);
      v37 = *(_DWORD *)(a1 + 3640);
      if ( v37 )
      {
        v38 = v37 - 1;
        v39 = *(_QWORD *)(a1 + 3624);
        v40 = (v37 - 1) & v16;
        v10 = v39 + 40LL * v40;
        LODWORD(v9) = *(_DWORD *)(a1 + 3632) + 1;
        v8 = v46;
        v28 = *(_QWORD *)v10;
        if ( v46 != *(_QWORD *)v10 )
        {
          if ( v28 != -4096 )
          {
            v41 = (__int64 *)(v39 + 40LL * v40);
            v42 = 1;
            v10 = 0;
            while ( 1 )
            {
              if ( v28 == -8192 && !v10 )
                v10 = (__int64)v41;
              v40 = v38 & (v42 + v40);
              v41 = (__int64 *)(v39 + 40LL * v40);
              v28 = *v41;
              if ( v46 == *v41 )
              {
                v10 = v39 + 40LL * v40;
                goto LABEL_11;
              }
              if ( v28 == -4096 )
                break;
              ++v42;
            }
            if ( v10 )
              goto LABEL_10;
            v10 = v39 + 40LL * v40;
          }
LABEL_32:
          *(_DWORD *)(a1 + 3632) = v9;
          goto LABEL_13;
        }
        goto LABEL_11;
      }
LABEL_59:
      ++*(_DWORD *)(a1 + 3632);
      BUG();
    }
  }
  v45 = v8;
  sub_1F38700(v14, 2 * v13, v9, v10, v11, v12);
  v33 = *(_DWORD *)(a1 + 3640);
  if ( !v33 )
    goto LABEL_59;
  v8 = v45;
  v34 = v33 - 1;
  v35 = *(_QWORD *)(a1 + 3624);
  v36 = (v33 - 1) & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
  v10 = v35 + 40LL * v36;
  v28 = *(_QWORD *)v10;
  LODWORD(v9) = *(_DWORD *)(a1 + 3632) + 1;
  if ( v45 != *(_QWORD *)v10 )
  {
    if ( v28 != -4096 )
    {
      v43 = (__int64 *)(v35 + 40LL * (v34 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4))));
      v44 = 1;
      v10 = 0;
      while ( 1 )
      {
        if ( !v10 && v28 == -8192 )
          v10 = (__int64)v43;
        v36 = v34 & (v44 + v36);
        v43 = (__int64 *)(v35 + 40LL * v36);
        v28 = *v43;
        if ( v45 == *v43 )
        {
          v10 = v35 + 40LL * v36;
          goto LABEL_11;
        }
        if ( v28 == -4096 )
          break;
        ++v44;
      }
      if ( v10 )
        goto LABEL_10;
      v10 = v35 + 40LL * v36;
    }
    goto LABEL_32;
  }
LABEL_11:
  *(_DWORD *)(a1 + 3632) = v9;
  if ( v28 != -4096 )
    --*(_DWORD *)(a1 + 3636);
LABEL_13:
  *(_QWORD *)v10 = v8;
  v21 = a3;
  *(_QWORD *)(v10 + 8) = v10 + 24;
  v20 = v10 + 8;
  v30 = a3 + 1;
  v29 = v30;
  v19 = 0;
  *(_QWORD *)(v10 + 16) = 0x200000000LL;
  if ( !v30 )
    goto LABEL_19;
LABEL_14:
  if ( *(unsigned int *)(v20 + 12) < v29 )
  {
    sub_2237220(v20, v20 + 16, v29, 8);
    v19 = *(unsigned int *)(v20 + 8);
  }
  v22 = *(_QWORD *)v20;
  v31 = (void *)(*(_QWORD *)v20 + 8 * v19);
  v32 = *(_QWORD *)v20 + 8 * v29;
  if ( v31 != (void *)v32 )
  {
    memset(v31, 0, 8 * ((unsigned __int64)(v32 - 8 - (_QWORD)v31) >> 3) + 8);
    v22 = *(_QWORD *)v20;
  }
  *(_DWORD *)(v20 + 8) = v30;
LABEL_5:
  result = (_QWORD *)(v22 + 8 * v21);
  if ( !*result )
    *result = a4;
  return result;
}
