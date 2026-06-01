unsigned int *__fastcall sub_1AEE150(unsigned int *a1, __int64 *a2)
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
  __int64 v14; // rdx
  int v15; // ebx
  unsigned int *v16; // rbp
  unsigned int *v17; // rdi
  int v18; // ecx
  __int64 v19; // rsi
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int *v22; // rdi
  int v23; // ecx
  __int64 v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // r8
  int v27; // r10d
  unsigned int *v28; // r9
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // r10d

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = a1 + 2;
    v3 = 7;
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
  v5 = &v2[10 * v4];
  v6 = *(_QWORD *)v5;
  if ( *a2 == *(_QWORD *)v5 )
    return v5 + 2;
  v15 = 1;
  v16 = nullptr;
  if ( v6 != -4096 )
  {
    while ( 1 )
    {
      if ( !v16 && v6 == -8192 )
        v16 = v5;
      v4 = v3 & (v15 + v4);
      v5 = &v2[10 * v4];
      v6 = *(_QWORD *)v5;
      if ( *a2 == *(_QWORD *)v5 )
        return v5 + 2;
      if ( v6 == -4096 )
        break;
      ++v15;
    }
    if ( v16 )
      v5 = v16;
  }
  v9 = *a1;
  v11 = 24;
  v8 = 8;
  v10 = (*a1 >> 1) + 1;
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    v8 = a1[4];
    goto LABEL_8;
  }
LABEL_9:
  if ( 4 * (int)v10 >= (unsigned int)v11 )
  {
    sub_1AEB110((__int64)a1, 2 * v8, v8, v10, v9, v11);
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v17 = a1 + 2;
      v18 = 7;
    }
    else
    {
      v29 = a1[4];
      v17 = *((unsigned int **)a1 + 1);
      if ( !v29 )
        goto LABEL_55;
      v18 = v29 - 1;
    }
    v19 = *a2;
    v20 = v18 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v5 = &v17[10 * v20];
    v21 = *(_QWORD *)v5;
    if ( *a2 != *(_QWORD *)v5 && v21 != -4096 )
    {
      v31 = 1;
      v28 = nullptr;
      while ( 1 )
      {
        if ( !v28 && v21 == -8192 )
          v28 = v5;
        v20 = v18 & (v31 + v20);
        v5 = &v17[10 * v20];
        v21 = *(_QWORD *)v5;
        if ( v19 == *(_QWORD *)v5 )
          break;
        if ( v21 == -4096 )
        {
LABEL_40:
          if ( v28 )
            v5 = v28;
          goto LABEL_29;
        }
        ++v31;
      }
    }
    goto LABEL_29;
  }
  if ( (unsigned int)v8 - a1[1] - (unsigned int)v10 <= (unsigned int)v8 >> 3 )
  {
    sub_1AEB110((__int64)a1, v8, v8, v10, v9, v11);
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v22 = a1 + 2;
      v23 = 7;
LABEL_32:
      v24 = *a2;
      v25 = v23 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v5 = &v22[10 * v25];
      v26 = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 != *a2 && v26 != -4096 )
      {
        v27 = 1;
        v28 = nullptr;
        while ( 1 )
        {
          if ( v26 == -8192 && !v28 )
            v28 = v5;
          v25 = v23 & (v27 + v25);
          v5 = &v22[10 * v25];
          v26 = *(_QWORD *)v5;
          if ( v24 == *(_QWORD *)v5 )
            break;
          if ( v26 == -4096 )
            goto LABEL_40;
          ++v27;
        }
      }
LABEL_29:
      LODWORD(v9) = *a1;
      goto LABEL_11;
    }
    v30 = a1[4];
    v22 = *((unsigned int **)a1 + 1);
    if ( v30 )
    {
      v23 = v30 - 1;
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
  v14 = *a2;
  result = v5 + 2;
  *(_OWORD *)result = 0;
  *((_QWORD *)result - 1) = v14;
  *((_OWORD *)result + 1) = 0;
  *result = 106;
  *((_QWORD *)result + 1) = 0;
  return result;
}
