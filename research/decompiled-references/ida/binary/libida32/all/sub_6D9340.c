__int64 __fastcall sub_6D9340(__int64 a1, __int64 *a2, const char *a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  char *v7; // r13
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rbp
  size_t v13; // r13
  __m128i *v14; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v16; // rbp
  char *v17; // r13
  __int64 v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rax
  const void *v21; // r12
  void *v22; // rdi
  __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // r12
  __int64 v26; // rbp
  char *v27; // r13
  __int64 v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rbp
  char *v32; // r13
  __int64 v33; // rsi
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  const char *v40; // r13
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  signed __int64 v46; // r13
  unsigned int v47; // eax
  unsigned int v48; // edx
  __int64 v49; // rsi
  __int64 v50; // rax

  if ( !strcmp(a3, "VERSION") )
  {
    v14 = (__m128i *)*a2;
    if ( (unsigned __int64)a2[2] <= 0x14 )
    {
      v23 = qvector_reserve(a2, v14, 21, 1);
      *a2 = v23;
      v14 = (__m128i *)v23;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384070);
    a2[1] = 21;
    v14[1].m128i_i32[0] = 892219694;
    *v14 = si128;
    *(_BYTE *)(*a2 + 20) = 0;
    return 1;
  }
  if ( !strcmp(a3, "CLANG_ARGV") )
  {
    if ( a2 == (__int64 *)(a1 + 8) )
      return 1;
    v12 = *(_QWORD *)(a1 + 16);
    if ( !v12 )
      goto LABEL_17;
    v13 = v12 - 1;
    if ( v12 == 1 )
      goto LABEL_17;
    v21 = *(const void **)(a1 + 8);
    v22 = (void *)*a2;
    if ( a2[2] >= v12 )
    {
LABEL_33:
      a2[1] = v12;
      memmove(v22, v21, v13);
      *(_BYTE *)(*a2 + v12 - 1) = 0;
      return 1;
    }
LABEL_54:
    v37 = qvector_reserve(a2, v22, v12, 1);
    *a2 = v37;
    v22 = (void *)v37;
    goto LABEL_33;
  }
  if ( !strcmp(a3, "CLANG_SMART_POINTERS") )
  {
    if ( a2 == (__int64 *)(a1 + 32) )
      return 1;
    v12 = *(_QWORD *)(a1 + 40);
    if ( !v12 )
      goto LABEL_17;
    v13 = v12 - 1;
    if ( v12 == 1 )
      goto LABEL_17;
    v21 = *(const void **)(a1 + 32);
    v22 = (void *)*a2;
    if ( a2[2] >= v12 )
      goto LABEL_33;
    goto LABEL_54;
  }
  if ( !strcmp(a3, "CLANG_APPLY_TINFO") )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v5 = 3;
      v6 = 2;
      v7 = "on";
    }
    else
    {
      v5 = 4;
      v6 = 3;
      v7 = (char *)"off";
    }
    v8 = *a2;
    if ( a2[2] < v5 )
    {
      v36 = qvector_reserve(a2, v8, v5, 1);
      *a2 = v36;
      v8 = v36;
    }
    a2[1] = v5;
    v9 = 0;
    do
    {
      v10 = v9++;
      *(_BYTE *)(v8 + v10) = v7[v10];
    }
    while ( v9 < (unsigned int)v6 );
LABEL_11:
    *(_BYTE *)(*a2 + v6) = 0;
    return 1;
  }
  if ( !strcmp(a3, "CLANG_NO_IDA_SPECIFIC") )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      v16 = 3;
      v6 = 2;
      v17 = "on";
    }
    else
    {
      v16 = 4;
      v6 = 3;
      v17 = (char *)"off";
    }
    v18 = *a2;
    if ( a2[2] < v16 )
    {
      v42 = qvector_reserve(a2, v18, v16, 1);
      *a2 = v42;
      v18 = v42;
    }
    a2[1] = v16;
    v19 = 0;
    do
    {
      v20 = v19++;
      *(_BYTE *)(v18 + v20) = v17[v20];
    }
    while ( v19 < (unsigned int)v6 );
    goto LABEL_11;
  }
  if ( !strcmp(a3, "CLANG_LANGUAGE") )
  {
    v38 = *(_QWORD *)(a1 + 64);
    v39 = v38 & 0xF;
    if ( v39 == 3 )
    {
      v39 = 14;
      v6 = 13;
      v40 = "objective-c++";
      goto LABEL_59;
    }
    if ( (v38 & 0xC) != 0 )
    {
      if ( v39 == 4 )
      {
        v39 = 12;
        v6 = 11;
        v40 = "objective-c";
        goto LABEL_59;
      }
    }
    else
    {
      if ( v39 == 1 )
      {
        v39 = 4;
        v6 = 3;
        v40 = "c++";
        goto LABEL_59;
      }
      v6 = 1;
      v40 = "c";
      if ( v39 == 2 )
      {
LABEL_59:
        v41 = (_QWORD *)*a2;
        if ( a2[2] < v39 )
        {
          v50 = qvector_reserve(a2, v41, v39, 1);
          *a2 = v50;
          v41 = (_QWORD *)v50;
        }
        a2[1] = v39;
        if ( (unsigned int)v6 >= 8 )
        {
          v45 = (unsigned __int64)(v41 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          *v41 = *(_QWORD *)v40;
          *(_QWORD *)((char *)v41 + v6 - 8) = *(_QWORD *)&v40[v6 - 8];
          v46 = v40 - ((const char *)v41 - v45);
          if ( (((_DWORD)v6 + (_DWORD)v41 - (_DWORD)v45) & 0xFFFFFFF8) >= 8 )
          {
            v47 = (v6 + (_DWORD)v41 - v45) & 0xFFFFFFF8;
            v48 = 0;
            do
            {
              v49 = v48;
              v48 += 8;
              *(_QWORD *)(v45 + v49) = *(_QWORD *)(v46 + v49);
            }
            while ( v48 < v47 );
          }
        }
        else
        {
          *(_BYTE *)v41 = *v40;
          if ( (v6 & 2) != 0 )
            *(_WORD *)((char *)v41 + (unsigned int)v6 - 2) = *(_WORD *)&v40[(unsigned int)v6 - 2];
        }
        goto LABEL_11;
      }
    }
LABEL_17:
    a2[1] = 0;
    return 1;
  }
  if ( !strcmp(a3, "CLANG_PRINT_AST") )
  {
    if ( *(_BYTE *)(a1 + 72) )
    {
      v31 = 3;
      v6 = 2;
      v32 = "on";
    }
    else
    {
      v31 = 4;
      v6 = 3;
      v32 = (char *)"off";
    }
    v33 = *a2;
    if ( a2[2] < v31 )
    {
      v43 = qvector_reserve(a2, v33, v31, 1);
      *a2 = v43;
      v33 = v43;
    }
    a2[1] = v31;
    v34 = 0;
    do
    {
      v35 = v34++;
      *(_BYTE *)(v33 + v35) = v32[v35];
    }
    while ( v34 < (unsigned int)v6 );
    goto LABEL_11;
  }
  v24 = strcmp(a3, "CLANG_DUMP_AST");
  result = 0;
  if ( !v24 )
  {
    if ( *(_BYTE *)(a1 + 73) )
    {
      v25 = 3;
      v26 = 2;
      v27 = "on";
    }
    else
    {
      v25 = 4;
      v26 = 3;
      v27 = (char *)"off";
    }
    v28 = *a2;
    if ( a2[2] < v25 )
    {
      v44 = qvector_reserve(a2, v28, v25, 1);
      *a2 = v44;
      v28 = v44;
    }
    a2[1] = v25;
    v29 = 0;
    do
    {
      v30 = v29++;
      *(_BYTE *)(v28 + v30) = v27[v30];
    }
    while ( v29 < (unsigned int)v26 );
    *(_BYTE *)(*a2 + v26) = 0;
    return 1;
  }
  return result;
}

