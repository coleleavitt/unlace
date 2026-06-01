__int64 __fastcall sub_DB2380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  char *v6; // rdi
  int v7; // ecx
  __int64 v8; // r8
  char *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r13d
  size_t v12; // r12
  __int64 v13; // rax
  _OWORD *v14; // rdx
  _OWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r13
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  unsigned int v32; // r8d

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  if ( *(_DWORD *)(a1 + 28) || *(_DWORD *)(a1 + 32) )
  {
    v6 = *(char **)(a1 + 16);
    v7 = 0;
    v8 = *(unsigned int *)(a1 + 24);
    v9 = &v6[24 * v8];
    v10 = *(_QWORD *)(a1 + 16);
    if ( v6 == v9 )
      goto LABEL_18;
    do
    {
      while ( *(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 8) = 0;
        v10 += 24;
        if ( v9 == (char *)v10 )
          goto LABEL_10;
      }
      v10 += 24;
      ++v7;
    }
    while ( v9 != (char *)v10 );
LABEL_10:
    if ( (unsigned int)v8 <= 0x10 || 3 * (int)v8 >= (unsigned int)(4 * v7) )
      goto LABEL_18;
    if ( v6 )
    {
      sub_186B220(v6);
      v11 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v11 >>= 1;
      *(_DWORD *)(a1 + 24) = v11;
      v12 = 24LL * v11;
      v13 = sub_186B270(v12);
      if ( !v11 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 16) = v13;
LABEL_18:
        *(_QWORD *)(a1 + 28) = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v32 = (unsigned int)v8 >> 1;
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v32;
      v12 = 24LL * v32;
      v13 = sub_186B270(v12);
    }
    v14 = (_OWORD *)(v13 + 8);
    v15 = (_OWORD *)(v13 + 8 + v12);
    if ( (v12 & 8) == 0 || (*v14 = 0, v14 = (_OWORD *)(v13 + 32), (_OWORD *)(v13 + 32) != v15) )
    {
      do
      {
        *v14 = 0;
        v14 += 3;
        *(_OWORD *)((char *)v14 - 24) = 0;
      }
      while ( v14 != v15 );
    }
    goto LABEL_17;
  }
LABEL_19:
  sub_DB1E70(a1, a2, a3);
LABEL_20:
  v16 = *(_QWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !v16 )
            return 1;
          v17 = *(_DWORD *)(v16 - 4);
          if ( !v17 )
            return 1;
          v18 = (unsigned int)(v17 - 1);
          v19 = (__int64 *)(v16 + 16 * v18);
          v20 = *v19;
          v21 = v19[1];
          *(_DWORD *)(v16 - 4) = v18;
          v22 = *(unsigned __int16 *)(v20 + 4);
          if ( (_WORD)v22 == 1 )
            break;
          if ( v22 != *(unsigned __int16 *)(v21 + 4) )
            return 0;
          if ( (_WORD)v22 )
            goto LABEL_33;
          v23 = *(unsigned int *)(v20 + 24);
          if ( (_DWORD)v23 != *(_DWORD *)(v21 + 24) || *(_QWORD *)(v21 + 16) != *(_QWORD *)(v20 + 16) )
            return 0;
          if ( (_DWORD)v23 )
          {
            v24 = 8 * v23 + 32;
            v25 = 32;
            do
            {
              v26 = *(_QWORD *)(v21 + v25);
              v27 = *(_QWORD *)(v20 + v25);
              v25 += 8;
              sub_DB1E70(a1, v27, v26);
            }
            while ( v25 != v24 );
            goto LABEL_20;
          }
        }
        v29 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 )
        {
          v30 = *(unsigned int *)(v20 + 16);
          if ( (unsigned int)v30 < *(_DWORD *)(v29 - 4) )
            break;
        }
LABEL_33:
        if ( v20 != v21 )
          return 0;
      }
      v31 = (_QWORD *)(v29 + 8 * v30);
      if ( *v31 )
        break;
      *v31 = v21;
    }
  }
  while ( *v31 == v21 );
  return 0;
}

