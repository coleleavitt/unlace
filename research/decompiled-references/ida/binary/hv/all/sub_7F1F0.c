__int64 __fastcall sub_7F1F0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax
  void *v5; // rbx
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // r13
  const char *v11; // r14
  _QWORD *v12; // rbp
  _QWORD *v13; // r12
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v21; // rdi
  const char *v22; // rsi
  _QWORD *v23; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = (const char *)sub_94E50(a3);
  ptr = nullptr;
  v5 = (void *)v4;
  v27 = 0;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = v6 + 1;
    v8 = v6;
    ptr = (void *)sub_96080(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v27 = v7;
    memmove(ptr, v5, v8);
    *((_BYTE *)ptr + v8) = 0;
    v9 = *(_QWORD **)(a2 + 16);
    v23 = (_QWORD *)(a2 + 8);
    v5 = ptr;
    if ( !v9 )
      goto LABEL_16;
  }
  else
  {
    v9 = *(_QWORD **)(a2 + 16);
    v23 = (_QWORD *)(a2 + 8);
    if ( !v9 )
      return 0;
  }
  v10 = v27;
  v11 = haystack;
  v12 = v23;
  if ( (_QWORD)v27 )
    v11 = (const char *)v5;
  while ( 1 )
  {
    v18 = v9[5];
    if ( !v10 )
      break;
    if ( v18 )
      goto LABEL_15;
    v13 = v9;
    v14 = (const char *)v5;
    v15 = haystack;
LABEL_8:
    v16 = strcmp(v15, v14);
    v17 = (_QWORD *)v9[2];
    v9 = (_QWORD *)v9[3];
    if ( v16 >= 0 )
    {
      v12 = v13;
      v9 = v17;
    }
    if ( !v9 )
      goto LABEL_20;
  }
  if ( v18 )
  {
LABEL_15:
    v15 = (const char *)v9[4];
    v13 = v9;
    v14 = v11;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v19 = v9[2];
    if ( !v19 )
      break;
    v12 = v9;
    v9 = (_QWORD *)v9[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_15;
  }
  v12 = v9;
LABEL_20:
  if ( v23 == v12 )
    goto LABEL_16;
  if ( v12[5] )
  {
    v21 = haystack;
    v22 = (const char *)v12[4];
    if ( v10 )
      v21 = (const char *)v5;
LABEL_24:
    if ( strcmp(v21, v22) >= 0 )
    {
      if ( !v5 )
        goto LABEL_26;
LABEL_33:
      *(_QWORD *)&v27 = 0;
      j__free(v5);
      goto LABEL_26;
    }
LABEL_16:
    if ( v5 )
    {
      *(_QWORD *)&v27 = 0;
      j__free(v5);
    }
    return 0;
  }
  else
  {
    v21 = (const char *)v5;
    v22 = haystack;
    if ( v10 )
      goto LABEL_24;
    if ( v5 )
      goto LABEL_33;
LABEL_26:
    if ( v12[7] != *(_QWORD *)(a4 + 64) || v12[8] != *(_QWORD *)(a4 + 40) )
      return 0;
    if ( a1 != (__m128i *)(v12 + 9) )
      *a1 = _mm_loadu_si128((const __m128i *)(v12 + 9));
    return 1;
  }
}

