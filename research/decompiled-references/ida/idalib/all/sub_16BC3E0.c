unsigned int *__fastcall sub_16BC3E0(unsigned int *a1, __int64 *a2)
{
  char v2; // cl
  unsigned int *v3; // r10
  int v4; // r9d
  unsigned int v5; // edx
  unsigned int *v6; // rax
  __int64 v7; // r8
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned int *v18; // rdx
  __int64 v19; // rax
  int v20; // ebx
  unsigned int *v21; // rbp
  unsigned int *v22; // rsi
  int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // eax
  int v27; // r10d
  unsigned int *v28; // r9
  unsigned int *v29; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_BYTE *)a1 & 1;
  if ( v2 )
  {
    v3 = a1 + 2;
    v4 = 15;
  }
  else
  {
    v9 = a1[4];
    v3 = *((unsigned int **)a1 + 1);
    if ( !v9 )
    {
      v29 = nullptr;
      v10 = *a1;
      v11 = (*a1 >> 1) + 1;
LABEL_8:
      v12 = 3 * v9;
      goto LABEL_9;
    }
    v4 = v9 - 1;
  }
  v5 = v4 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v6 = &v3[16 * (unsigned __int64)v5];
  v7 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 == *a2 )
    return v6 + 2;
  v20 = 1;
  v21 = nullptr;
  if ( v7 != -4096 )
  {
    while ( 1 )
    {
      if ( !v21 && v7 == -8192 )
        v21 = v6;
      v5 = v4 & (v20 + v5);
      v6 = &v3[16 * (unsigned __int64)v5];
      v7 = *(_QWORD *)v6;
      if ( *a2 == *(_QWORD *)v6 )
        return v6 + 2;
      if ( v7 == -4096 )
      {
        if ( v21 )
          v6 = v21;
        break;
      }
      ++v20;
    }
  }
  v10 = *a1;
  v29 = v6;
  v12 = 48;
  v9 = 16;
  v11 = ((unsigned int)v10 >> 1) + 1;
  if ( !v2 )
  {
    v9 = a1[4];
    goto LABEL_8;
  }
LABEL_9:
  v13 = (unsigned int)(4 * v11);
  if ( (unsigned int)v13 >= (unsigned int)v12 )
  {
    sub_16B9B50((__int64)a1, 2 * v9, v11, (_QWORD *)v13, v10, v12);
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v22 = a1 + 2;
      v23 = 15;
    }
    else
    {
      v26 = a1[4];
      v22 = *((unsigned int **)a1 + 1);
      v23 = v26 - 1;
      if ( !v26 )
      {
        v29 = nullptr;
        v18 = nullptr;
        LODWORD(v10) = *a1;
        goto LABEL_12;
      }
    }
    v24 = v23 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v18 = &v22[16 * (unsigned __int64)v24];
    v25 = *(_QWORD *)v18;
    if ( *a2 != *(_QWORD *)v18 )
    {
      v27 = 1;
      v28 = nullptr;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( !v28 && v25 == -8192 )
            v28 = v18;
          v24 = v23 & (v27 + v24);
          v18 = &v22[16 * (unsigned __int64)v24];
          v25 = *(_QWORD *)v18;
          if ( *a2 == *(_QWORD *)v18 )
            break;
          if ( v25 == -4096 )
          {
            if ( v28 )
              v18 = v28;
            break;
          }
          ++v27;
        }
      }
    }
    v29 = v18;
    LODWORD(v10) = *a1;
    goto LABEL_12;
  }
  v16 = v9 - a1[1] - (unsigned int)v11;
  v17 = (_QWORD *)(v9 >> 3);
  if ( (unsigned int)v16 <= (unsigned int)v17 )
  {
    sub_16B9B50((__int64)a1, v9, v16, v17, v10, v12);
    sub_16B5A70((__int64)a1, a2, &v29);
    v18 = v29;
    LODWORD(v10) = *a1;
  }
  else
  {
    v18 = v29;
  }
LABEL_12:
  *a1 = (2 * ((unsigned int)v10 >> 1) + 2) | v10 & 1;
  if ( *(_QWORD *)v18 != -4096 )
    --a1[1];
  v19 = *a2;
  *((_QWORD *)v18 + 1) = 0;
  v18[4] = 0;
  *(_QWORD *)v18 = v19;
  *((_QWORD *)v18 + 3) = 0;
  v18[8] = 0;
  *((_QWORD *)v18 + 5) = 0;
  v18[12] = 0;
  *((_BYTE *)v18 + 56) = 0;
  return v18 + 2;
}
