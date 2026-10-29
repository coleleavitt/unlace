__int64 __fastcall sub_F084A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  size_t v5; // rax
  void *v6; // r14
  size_t v7; // r15
  size_t v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int *v11; // rsi
  size_t v12; // r15
  const char *v13; // rsi
  size_t v14; // rax
  void *v15; // rdi
  size_t v16; // rbp
  __int64 v18; // rbp
  __int64 v19; // rax

  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" '");
  v6 = *(void **)(v4 + 32);
  v7 = v5;
  v8 = *(_QWORD *)(v4 + 24) - (_QWORD)v6;
  if ( v5 > v8 )
  {
    v19 = sub_22581D0(v4, " '", v5);
    v6 = *(void **)(v19 + 32);
    v4 = v19;
    v8 = *(_QWORD *)(v19 + 24) - (_QWORD)v6;
  }
  else if ( v5 )
  {
    memcpy(*(void **)(v4 + 32), " '", v5);
    v18 = *(_QWORD *)(v4 + 24);
    v6 = (void *)(v7 + *(_QWORD *)(v4 + 32));
    *(_QWORD *)(v4 + 32) = v6;
    v8 = v18 - (_QWORD)v6;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
  if ( (v9 & 7) != 0 || (v10 = v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v13 = &byte_22CD811;
    v12 = j__strlen(&byte_22CD811);
    if ( v8 < v12 )
      goto LABEL_7;
  }
  else
  {
    v11 = *(unsigned int **)(v10 + 16);
    v12 = *v11;
    v13 = (const char *)(v11 + 4);
    if ( v8 < v12 )
    {
LABEL_7:
      v4 = sub_22581D0(v4, v13, v12);
      goto LABEL_8;
    }
  }
  if ( v12 )
  {
    memcpy(v6, v13, v12);
    *(_QWORD *)(v4 + 32) += v12;
  }
LABEL_8:
  v14 = j__strlen("'");
  v15 = *(void **)(v4 + 32);
  v16 = v14;
  if ( v14 > *(_QWORD *)(v4 + 24) - (_QWORD)v15 )
  {
    sub_22581D0(v4, "'", v14);
  }
  else if ( v14 )
  {
    memcpy(v15, "'", v14);
    *(_QWORD *)(v4 + 32) += v16;
  }
  return sub_F05DA0(a1, *(_QWORD *)(a2 + 8));
}

