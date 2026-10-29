unsigned __int64 __fastcall sub_2229220(__int64 a1)
{
  const char *v1; // rbp
  __int64 v3; // r12
  size_t v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  size_t v8; // r14
  __int64 v9; // r15
  const void *v10; // rsi
  _BYTE *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  const char *v17; // r12
  size_t v18; // rax
  __int64 v19; // rdx
  unsigned __int64 result; // rax
  int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  const void *v25; // rsi
  void *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rsi
  unsigned int v30; // ecx
  __int64 v31; // rsi

  v1 = "/* ";
  v3 = *(_QWORD *)(a1 + 160);
  if ( !*(_DWORD *)(a1 + 168) )
    v1 = "/*";
  v4 = strlen(v1);
  v5 = *(_QWORD *)(v3 + 32);
  if ( v4 <= *(_QWORD *)(v3 + 24) - v5 )
  {
    if ( (_DWORD)v4 )
    {
      v28 = 0;
      do
      {
        v29 = v28++;
        *(_BYTE *)(v5 + v29) = v1[v29];
      }
      while ( v28 < (unsigned int)v4 );
    }
    *(_QWORD *)(v3 + 32) += v4;
  }
  else
  {
    sub_227BF10(v3, v1, v4);
  }
  if ( !*(_QWORD *)(a1 + 152) )
  {
LABEL_16:
    v16 = *(_QWORD *)(a1 + 160);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v6 = sub_2246AB0(a1 + 144, "*/", 2, 0);
    v7 = v6;
    if ( v6 == -1 )
      break;
    v8 = *(_QWORD *)(a1 + 152);
    v9 = *(_QWORD *)(a1 + 160);
    v10 = *(const void **)(a1 + 144);
    if ( v6 < v8 )
      v8 = v6;
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_QWORD *)(v9 + 24) - (_QWORD)v11;
    if ( v8 > v12 )
    {
      v23 = sub_227BF10(*(_QWORD *)(a1 + 160), v10, v8);
      v11 = *(_BYTE **)(v23 + 32);
      v9 = v23;
      if ( *(_QWORD *)(v23 + 24) - (_QWORD)v11 <= 2u )
        goto LABEL_13;
    }
    else
    {
      if ( v8 )
      {
        memcpy(v11, v10, v8);
        v27 = *(_QWORD *)(v9 + 24);
        v11 = (_BYTE *)(v8 + *(_QWORD *)(v9 + 32));
        *(_QWORD *)(v9 + 32) = v11;
        v12 = v27 - (_QWORD)v11;
      }
      if ( v12 <= 2 )
      {
LABEL_13:
        sub_227BF10(v9, "* /", 3);
        goto LABEL_14;
      }
    }
    v11[2] = 47;
    *(_WORD *)v11 = 8234;
    *(_QWORD *)(v9 + 32) += 3LL;
LABEL_14:
    v13 = *(_QWORD *)(a1 + 152);
    v14 = v7 + 2;
    if ( v14 > v13 )
    {
      *(_QWORD *)(a1 + 144) += v13;
      v16 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 152) = 0;
      goto LABEL_18;
    }
    v15 = v13 - v14;
    *(_QWORD *)(a1 + 144) += v14;
    *(_QWORD *)(a1 + 152) = v15;
    if ( !v15 )
      goto LABEL_16;
  }
  v16 = *(_QWORD *)(a1 + 160);
  v24 = *(_QWORD *)(a1 + 152);
  v25 = *(const void **)(a1 + 144);
  v26 = *(void **)(v16 + 32);
  if ( *(_QWORD *)(v16 + 24) - (_QWORD)v26 < v24 )
  {
    sub_227BF10(*(_QWORD *)(a1 + 160), v25, *(_QWORD *)(a1 + 152));
    v16 = *(_QWORD *)(a1 + 160);
  }
  else if ( v24 )
  {
    memcpy(v26, v25, *(_QWORD *)(a1 + 152));
    *(_QWORD *)(v16 + 32) += v24;
    v16 = *(_QWORD *)(a1 + 160);
  }
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 144) = &byte_22F0C30;
LABEL_18:
  v17 = " */";
  if ( !*(_DWORD *)(a1 + 168) )
    v17 = "*/";
  v18 = strlen(v17);
  v19 = *(_QWORD *)(v16 + 32);
  if ( v18 <= *(_QWORD *)(v16 + 24) - v19 )
  {
    if ( (_DWORD)v18 )
    {
      v30 = 0;
      do
      {
        v31 = v30++;
        *(_BYTE *)(v19 + v31) = v17[v31];
      }
      while ( v30 < (unsigned int)v18 );
    }
    *(_QWORD *)(v16 + 32) += v18;
  }
  else
  {
    sub_227BF10(v16, v17, v18);
  }
  result = *(unsigned int *)(a1 + 8);
  v21 = *(_DWORD *)(a1 + 168);
  if ( result <= 1 || (result = *(unsigned int *)(*(_QWORD *)a1 + 8 * result - 8), (_DWORD)result) )
  {
    if ( v21 )
    {
      sub_227BA10(*(_QWORD *)(a1 + 160), 10);
      return sub_227D090(*(_QWORD *)(a1 + 160), *(unsigned int *)(a1 + 172));
    }
  }
  else if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 160);
    result = *(_QWORD *)(v22 + 32);
    if ( result >= *(_QWORD *)(v22 + 24) )
    {
      return sub_227BA10(v22, 32);
    }
    else
    {
      *(_QWORD *)(v22 + 32) = result + 1;
      *(_BYTE *)result = 32;
    }
  }
  return result;
}
