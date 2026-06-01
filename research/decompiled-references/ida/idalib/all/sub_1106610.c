void __fastcall sub_1106610(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  const char **v9; // r13
  const char **v10; // rbp
  __int64 v11; // rax
  const char *v12; // r14
  size_t v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r12
  const void *v16; // rax
  _BYTE *v17; // rdi
  size_t v18; // rdx
  size_t v19; // r14
  _BYTE *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi

  if ( !*(_BYTE *)(a1 + 512) )
    return;
  v9 = *(const char ***)(a1 + 208);
  v10 = *(const char ***)(a1 + 200);
  if ( v10 == v9 )
  {
LABEL_10:
    v21 = sub_227D600();
    v26 = *(_QWORD *)(v21 + 16);
    if ( *(_QWORD *)(v21 + 32) == v26 )
      return;
LABEL_11:
    sub_227B9F0(v21, v26, v22, v23, v24, v25, a7, a8, a9);
    return;
  }
  do
  {
    while ( 1 )
    {
      v11 = sub_227D600();
      v12 = *v10;
      v13 = 0;
      v14 = v11;
      v15 = v11;
      if ( *v10 )
        v13 = strlen(*v10);
      v16 = (const void *)sub_228AA60(v12, v13, 0);
      v17 = *(_BYTE **)(v14 + 32);
      v19 = v18;
      v20 = *(_BYTE **)(v14 + 24);
      if ( v19 > v20 - v17 )
      {
        v15 = sub_227BF10(v14, v16, v19);
        v20 = *(_BYTE **)(v15 + 24);
        v17 = *(_BYTE **)(v15 + 32);
      }
      else if ( v19 )
      {
        memcpy(v17, v16, v19);
        v20 = *(_BYTE **)(v14 + 24);
        v17 = (_BYTE *)(v19 + *(_QWORD *)(v14 + 32));
        *(_QWORD *)(v14 + 32) = v17;
      }
      if ( v17 != v20 )
        break;
      v10 += 5;
      sub_227BF10(v15, "\n", 1);
      if ( v9 == v10 )
        goto LABEL_10;
    }
    v10 += 5;
    *v17 = 10;
    ++*(_QWORD *)(v15 + 32);
  }
  while ( v9 != v10 );
  v21 = sub_227D600();
  v26 = *(_QWORD *)(v21 + 16);
  if ( *(_QWORD *)(v21 + 32) != v26 )
    goto LABEL_11;
}
