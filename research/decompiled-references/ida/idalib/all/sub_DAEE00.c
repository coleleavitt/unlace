__int64 __fastcall sub_DAEE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // ecx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 *v19; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdx
  void (__fastcall *v22)(__int64, __int64); // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rax
  void *v29; // rdi
  int v30; // edx
  __int64 result; // rax
  int v32; // edx
  void *v33; // rdi
  __m128 v34[4]; // [rsp+0h] [rbp-48h] BYREF

  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)a1;
  if ( (_DWORD)v7 )
  {
    v9 = (v7 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v10 = (_QWORD *)(v8 + 80LL * v9);
    if ( a2 == *v10 )
    {
LABEL_3:
      sub_DAE790(v34, v10, (_QWORD *)(v8 + 80 * v7), a1, 1);
      v11 = v34[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v10 != -4096 )
    {
      v32 = 1;
      do
      {
        v9 = (v7 - 1) & (v32 + v9);
        v10 = (_QWORD *)(v8 + 80LL * v9);
        if ( a2 == *v10 )
          goto LABEL_3;
        ++v32;
      }
      while ( *v10 != -4096 );
    }
  }
  sub_DAE790(v34, (_QWORD *)(v8 + 80 * v7), (_QWORD *)(v8 + 80 * v7), a1, 1);
  v11 = v34[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
  sub_DAE790(v34, v12, v12, a1, 1);
  if ( v34[0].m128_u64[0] == v11 )
    return 0;
  v13 = *(__int64 **)(v11 + 8);
  v14 = 8LL * *(unsigned int *)(v11 + 16);
  v15 = &v13[(unsigned __int64)v14 / 8];
  v16 = v14 >> 3;
  v17 = v14 >> 5;
  if ( v17 )
  {
    v18 = v13 + 1;
    if ( a3 == *v13 )
    {
      v19 = *(__int64 **)(v11 + 8);
    }
    else
    {
      v19 = v13 + 1;
      v18 = v13 + 2;
      if ( v13[1] != a3 )
      {
        v19 = v13 + 2;
        v18 = v13 + 3;
        if ( v13[2] != a3 )
        {
          v19 = v13 + 3;
          v18 = v13 + 4;
          v20 = &v13[4 * v17];
          if ( v13[3] != a3 )
          {
            while ( 1 )
            {
              v19 = v13 + 4;
              if ( v20 == v13 + 4 )
              {
                v16 = v15 - v19;
                goto LABEL_18;
              }
              if ( v13[4] == a3 )
              {
                v18 = v13 + 5;
                goto LABEL_22;
              }
              if ( v13[5] == a3 )
              {
                v19 = v13 + 5;
                v18 = v13 + 6;
                goto LABEL_22;
              }
              if ( v13[6] == a3 )
              {
                v19 = v13 + 6;
                v18 = v13 + 7;
                goto LABEL_22;
              }
              if ( v13[7] == a3 )
                break;
              v13 += 4;
            }
            v19 = v13 + 7;
            v18 = v13 + 8;
          }
        }
      }
    }
    goto LABEL_22;
  }
  v19 = *(__int64 **)(v11 + 8);
LABEL_18:
  switch ( v16 )
  {
    case 2LL:
      v18 = v19;
      break;
    case 3LL:
      v18 = v19 + 1;
      if ( *v19 == a3 )
        goto LABEL_22;
      break;
    case 1LL:
      goto LABEL_46;
    default:
      goto LABEL_21;
  }
  v19 = v18 + 1;
  if ( *v18 == a3 )
  {
    v19 = v18++;
    goto LABEL_22;
  }
LABEL_46:
  if ( *v19 == a3 )
  {
    v18 = v19 + 1;
    goto LABEL_22;
  }
LABEL_21:
  a3 = *v15;
  v18 = v15 + 1;
  v19 = v15;
LABEL_22:
  v21 = *(_QWORD *)(a3 + 32);
  v22 = *(void (__fastcall **)(__int64, __int64))(v21 + 72);
  if ( v22 )
    v22(a3, a3 + *(unsigned int *)(v21 + 24) + 40);
  *(_BYTE *)(a3 + 27) = 0;
  sub_E21CF0(a4, a3);
  v23 = *(_QWORD *)(v11 + 8);
  v24 = *(unsigned int *)(v11 + 16);
  v25 = (v23 + 8 * v24 - (__int64)v18) >> 3;
  if ( v23 + 8 * v24 - (__int64)v18 > 0 )
  {
    do
    {
      v26 = *v18;
      *v18 = 0;
      v27 = (void *)*v19;
      *v19 = v26;
      if ( v27 )
        operator delete[](v27);
      ++v18;
      ++v19;
      --v25;
    }
    while ( v25 );
    LODWORD(v24) = *(_DWORD *)(v11 + 16);
    v23 = *(_QWORD *)(v11 + 8);
  }
  v28 = (unsigned int)(v24 - 1);
  v29 = *(void **)(v23 + 8 * v28);
  v30 = v24 - 1;
  *(_DWORD *)(v11 + 16) = v28;
  if ( v29 )
  {
    operator delete[](v29);
    v30 = *(_DWORD *)(v11 + 16);
  }
  result = 1;
  if ( !v30 )
  {
    v33 = *(void **)(v11 + 8);
    if ( v33 != (void *)(v11 + 24) )
      free(v33);
    *(_QWORD *)v11 = -8192;
    --*(_DWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 12);
    return 1;
  }
  return result;
}
