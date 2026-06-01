unsigned int *__fastcall sub_14B9490(unsigned int *a1, __int64 *a2)
{
  unsigned int *v2; // r9
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int *v5; // rax
  __int64 v6; // r11
  unsigned int *result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  int v14; // ebx
  unsigned int *v15; // rbp
  unsigned int *v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int *v21; // rdi
  int v22; // ecx
  __int64 v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // r8
  int v26; // r10d
  unsigned int *v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  int v30; // r10d

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = a1 + 2;
    v3 = 3;
  }
  else
  {
    v8 = a1[4];
    v2 = *((unsigned int **)a1 + 1);
    if ( !(_DWORD)v8 )
    {
      v9 = *a1;
      v5 = nullptr;
      v10 = (*a1 >> 1) + 1;
LABEL_8:
      v11 = (unsigned int)(3 * v8);
      goto LABEL_9;
    }
    v3 = v8 - 1;
  }
  v4 = v3 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v5 = &v2[4 * v4];
  v6 = *(_QWORD *)v5;
  if ( *a2 == *(_QWORD *)v5 )
    return v5 + 2;
  v14 = 1;
  v15 = nullptr;
  if ( v6 != -4096 )
  {
    while ( 1 )
    {
      if ( !v15 && v6 == -8192 )
        v15 = v5;
      v4 = v3 & (v14 + v4);
      v5 = &v2[4 * v4];
      v6 = *(_QWORD *)v5;
      if ( *a2 == *(_QWORD *)v5 )
        return v5 + 2;
      if ( v6 == -4096 )
        break;
      ++v14;
    }
    if ( v15 )
      v5 = v15;
  }
  v9 = *a1;
  v11 = 12;
  v8 = 4;
  v10 = (*a1 >> 1) + 1;
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    v8 = a1[4];
    goto LABEL_8;
  }
LABEL_9:
  if ( 4 * (int)v10 >= (unsigned int)v11 )
  {
    sub_14B8F70((__int64)a1, 2 * v8, v8, v10, v9, v11);
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v16 = a1 + 2;
      v17 = 3;
    }
    else
    {
      v28 = a1[4];
      v16 = *((unsigned int **)a1 + 1);
      if ( !v28 )
        goto LABEL_55;
      v17 = v28 - 1;
    }
    v18 = *a2;
    v19 = v17 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v5 = &v16[4 * v19];
    v20 = *(_QWORD *)v5;
    if ( *a2 != *(_QWORD *)v5 && v20 != -4096 )
    {
      v30 = 1;
      v27 = nullptr;
      while ( 1 )
      {
        if ( !v27 && v20 == -8192 )
          v27 = v5;
        v19 = v17 & (v30 + v19);
        v5 = &v16[4 * v19];
        v20 = *(_QWORD *)v5;
        if ( v18 == *(_QWORD *)v5 )
          break;
        if ( v20 == -4096 )
        {
LABEL_40:
          if ( v27 )
            v5 = v27;
          goto LABEL_29;
        }
        ++v30;
      }
    }
    goto LABEL_29;
  }
  if ( (unsigned int)v8 - a1[1] - (unsigned int)v10 <= (unsigned int)v8 >> 3 )
  {
    sub_14B8F70((__int64)a1, v8, v8, v10, v9, v11);
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v21 = a1 + 2;
      v22 = 3;
LABEL_32:
      v23 = *a2;
      v24 = v22 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v5 = &v21[4 * v24];
      v25 = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 != *a2 && v25 != -4096 )
      {
        v26 = 1;
        v27 = nullptr;
        while ( 1 )
        {
          if ( v25 == -8192 && !v27 )
            v27 = v5;
          v24 = v22 & (v26 + v24);
          v5 = &v21[4 * v24];
          v25 = *(_QWORD *)v5;
          if ( v23 == *(_QWORD *)v5 )
            break;
          if ( v25 == -4096 )
            goto LABEL_40;
          ++v26;
        }
      }
LABEL_29:
      LODWORD(v9) = *a1;
      goto LABEL_11;
    }
    v29 = a1[4];
    v21 = *((unsigned int **)a1 + 1);
    if ( v29 )
    {
      v22 = v29 - 1;
      goto LABEL_32;
    }
LABEL_55:
    *a1 = (2 * (*a1 >> 1) + 2) | *a1 & 1;
    BUG();
  }
LABEL_11:
  *a1 = (2 * ((unsigned int)v9 >> 1) + 2) | v9 & 1;
  if ( *(_QWORD *)v5 != -4096 )
    --a1[1];
  result = v5 + 2;
  *((_QWORD *)result - 1) = *a2;
  *(_WORD *)result = 0;
  return result;
}
