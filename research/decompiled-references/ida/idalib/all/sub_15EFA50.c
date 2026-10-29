__int64 __fastcall sub_15EFA50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  int v9; // esi
  int v10; // r10d
  __int64 v11; // r8
  unsigned int i; // ecx
  __int64 v13; // r13
  __int64 v14; // r9
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r10d
  __int64 v19; // rdx
  unsigned __int8 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // rbp
  __int64 result; // rax
  unsigned int v27; // ecx
  __int64 v28; // rsi
  int v29; // ecx
  int v30; // r10d
  __int64 v31; // r9
  unsigned int j; // edx
  __int64 v33; // rdi
  unsigned int v34; // edx
  __int64 v35; // rsi
  int v36; // ecx
  int v37; // r10d
  unsigned int k; // edx
  __int64 v39; // rdi
  unsigned int v40; // edx
  int v41; // ecx
  int v42; // ecx
  unsigned __int64 v43; // [rsp+8h] [rbp-30h]
  unsigned __int64 v44; // [rsp+8h] [rbp-30h]

  v3 = 4;
  if ( *(_BYTE *)(a2 + 26) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( v7 )
      v3 = sub_15EE760(v7);
  }
  if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
  {
    v8 = a1 + 768;
    v9 = 7;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 776);
    v8 = *(_QWORD *)(a1 + 768);
    if ( !v15 )
    {
      v16 = *(unsigned int *)(a1 + 760);
      v11 = 0;
      v17 = (unsigned int)((*(_DWORD *)(a1 + 760) >> 1) + 1);
      goto LABEL_16;
    }
    v9 = v15 - 1;
  }
  v10 = 1;
  v11 = 0;
  for ( i = v9
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)
              | ((unsigned __int64)((unsigned int)v3 ^ (unsigned int)(v3 >> 9)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)))); ; i = v9 & v27 )
  {
    v13 = v8 + ((unsigned __int64)i << 6);
    v14 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 == v3 && a3 == *(_QWORD *)(v13 + 8) )
    {
      v24 = *(unsigned int *)(v13 + 24);
      v23 = v13 + 16;
      v25 = (2LL * (*(_WORD *)(a2 + 24) == 0)) | a2 & 0xFFFFFFFFFFFFFFFDLL;
      if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v13 + 28) )
      {
        sub_2237220(v13 + 16, v13 + 32, v24 + 1, 8);
        v24 = *(unsigned int *)(v13 + 24);
      }
      goto LABEL_22;
    }
    if ( !v14 )
      break;
    if ( v14 == 4 && !(*(_QWORD *)(v13 + 8) | v11) )
      v11 = v8 + ((unsigned __int64)i << 6);
LABEL_29:
    v27 = v10 + i;
    ++v10;
  }
  if ( *(_QWORD *)(v13 + 8) )
    goto LABEL_29;
  v16 = *(unsigned int *)(a1 + 760);
  v18 = 24;
  v15 = 8;
  if ( !v11 )
    v11 = v13;
  v17 = ((unsigned int)v16 >> 1) + 1;
  if ( (*(_BYTE *)(a1 + 760) & 1) == 0 )
  {
    v15 = *(_DWORD *)(a1 + 776);
LABEL_16:
    v18 = 3 * v15;
  }
  v19 = (unsigned int)(4 * v17);
  v20 = (unsigned __int8 *)(a1 + 760);
  if ( (unsigned int)v19 >= v18 )
  {
    v43 = v3;
    sub_15EF470(v20, 2 * v15, v19, v16, v11, v17);
    v3 = v43;
    if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
    {
      v28 = a1 + 768;
      v29 = 7;
    }
    else
    {
      v41 = *(_DWORD *)(a1 + 776);
      v28 = *(_QWORD *)(a1 + 768);
      if ( !v41 )
        goto LABEL_67;
      v29 = v41 - 1;
    }
    v30 = 1;
    v31 = 0;
    for ( j = v29
            & (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)
                | ((unsigned __int64)((unsigned int)v43 ^ (unsigned int)(v43 >> 9)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)))); ; j = v29 & v34 )
    {
      v11 = v28 + ((unsigned __int64)j << 6);
      v33 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 == v43 && a3 == *(_QWORD *)(v11 + 8) )
        break;
      if ( v33 )
      {
        if ( v33 == 4 && !(*(_QWORD *)(v11 + 8) | v31) )
          v31 = v28 + ((unsigned __int64)j << 6);
      }
      else if ( !*(_QWORD *)(v11 + 8) )
      {
LABEL_57:
        if ( v31 )
          v11 = v31;
        goto LABEL_49;
      }
      v34 = v30 + j;
      ++v30;
    }
    goto LABEL_49;
  }
  v21 = v15 - *(_DWORD *)(a1 + 764) - (unsigned int)v17;
  v22 = v15 >> 3;
  if ( (unsigned int)v21 <= (unsigned int)v22 )
  {
    v44 = v3;
    sub_15EF470(v20, v15, v21, v16, v11, v22);
    v3 = v44;
    if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
    {
      v35 = a1 + 768;
      v36 = 7;
      goto LABEL_39;
    }
    v42 = *(_DWORD *)(a1 + 776);
    v35 = *(_QWORD *)(a1 + 768);
    if ( v42 )
    {
      v36 = v42 - 1;
LABEL_39:
      v37 = 1;
      v31 = 0;
      for ( k = v36
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)
                  | ((unsigned __int64)((unsigned int)v44 ^ (unsigned int)(v44 >> 9)) << 32))) >> 31)
               ^ (484763065 * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)))); ; k = v36 & v40 )
      {
        v11 = v35 + ((unsigned __int64)k << 6);
        v39 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 == v44 && a3 == *(_QWORD *)(v11 + 8) )
          break;
        if ( v39 )
        {
          if ( v39 == 4 && !(*(_QWORD *)(v11 + 8) | v31) )
            v31 = v35 + ((unsigned __int64)k << 6);
        }
        else if ( !*(_QWORD *)(v11 + 8) )
        {
          goto LABEL_57;
        }
        v40 = v37 + k;
        ++v37;
      }
LABEL_49:
      LODWORD(v16) = *(_DWORD *)(a1 + 760);
      goto LABEL_19;
    }
LABEL_67:
    *(_DWORD *)(a1 + 760) = (2 * (*(_DWORD *)(a1 + 760) >> 1) + 2) | *(_DWORD *)(a1 + 760) & 1;
    BUG();
  }
LABEL_19:
  *(_DWORD *)(a1 + 760) = (2 * ((unsigned int)v16 >> 1) + 2) | v16 & 1;
  if ( *(_QWORD *)v11 || *(_QWORD *)(v11 + 8) )
    --*(_DWORD *)(a1 + 764);
  *(_QWORD *)v11 = v3;
  v23 = v11 + 16;
  *(_QWORD *)(v11 + 16) = v11 + 32;
  *(_QWORD *)(v11 + 24) = 0x400000000LL;
  *(_QWORD *)(v11 + 8) = a3;
  v24 = 0;
  v25 = (2LL * (*(_WORD *)(a2 + 24) == 0)) | a2 & 0xFFFFFFFFFFFFFFFDLL;
LABEL_22:
  result = *(_QWORD *)v23;
  *(_QWORD *)(*(_QWORD *)v23 + 8 * v24) = v25;
  ++*(_DWORD *)(v23 + 8);
  return result;
}
