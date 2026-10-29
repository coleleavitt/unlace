__int64 __fastcall sub_F2D440(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  size_t v4; // rax
  void *v5; // r14
  size_t v6; // r15
  size_t v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int *v11; // rsi
  size_t v12; // rcx
  const char *v13; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  size_t v17; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(v3 + 24) - (_QWORD)v5;
  if ( v4 > v7 )
  {
    v16 = sub_227BF10(v3, " ", v4);
    v5 = *(void **)(v16 + 32);
    v3 = v16;
    v7 = *(_QWORD *)(v16 + 24) - (_QWORD)v5;
  }
  else if ( v4 )
  {
    memcpy(*(void **)(v3 + 32), " ", v4);
    v15 = *(_QWORD *)(v3 + 24);
    v5 = (void *)(v6 + *(_QWORD *)(v3 + 32));
    *(_QWORD *)(v3 + 32) = v5;
    v7 = v15 - (_QWORD)v5;
  }
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(v8 + 40);
  if ( (v9 & 7) != 0 || (v10 = v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v13 = &byte_22F0C30;
    v12 = j__strlen(&byte_22F0C30);
    if ( v12 > v7 )
      goto LABEL_7;
  }
  else
  {
    v11 = *(unsigned int **)(v10 + 16);
    v12 = *v11;
    v13 = (const char *)(v11 + 4);
    if ( v12 > v7 )
    {
LABEL_7:
      sub_227BF10(v3, v13, v12);
      v8 = *(_QWORD *)(a2 + 24);
      return sub_F29AE0(a1, v8);
    }
  }
  if ( v12 )
  {
    v17 = v12;
    memcpy(v5, v13, v12);
    *(_QWORD *)(v3 + 32) += v17;
    v8 = *(_QWORD *)(a2 + 24);
  }
  return sub_F29AE0(a1, v8);
}
