void __fastcall sub_144F260(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  const char *v10; // rsi
  __int64 v11; // rax
  _BYTE *v12; // rdx
  void *v13; // rdi
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  const char *v21; // rsi
  __int64 v22; // rbp
  size_t v23; // rax
  void *v24; // rdi
  size_t v25; // r14
  __int64 v26; // rbp
  __int64 v27; // rsi
  unsigned int v28; // [rsp+Ch] [rbp-4Ch] BYREF
  void *v29[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
  {
    v6 = *(unsigned int *)(a2 + 416);
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 1704LL);
    v8 = *(_QWORD *)(v7 + 24);
    if ( v6 < (*(_QWORD *)(v7 + 32) - v8) >> 2 )
    {
      v28 = *(_DWORD *)(v8 + 4 * v6);
      if ( v28 || a3 != 1 )
        goto LABEL_5;
LABEL_17:
      v16 = *(__int64 **)(a2 + 264);
      v17 = *(__int64 **)(a2 + 256);
      if ( v17 == v16 )
        return;
      goto LABEL_18;
    }
  }
  v28 = 0;
  if ( a3 )
    goto LABEL_17;
LABEL_5:
  v9 = sub_227D6D0(a1, a2);
  sub_FEEE60((__int64)v29, (__int64 *)a2, 0);
  v10 = (const char *)v29[0];
  v11 = sub_227BF10(v9, v29[0], v29[1]);
  v12 = *(_BYTE **)(v11 + 32);
  if ( *(_BYTE **)(v11 + 24) == v12 )
  {
    v10 = " ";
    sub_227BF10(v11, " ", 1);
  }
  else
  {
    *v12 = 32;
    ++*(_QWORD *)(v11 + 32);
  }
  v13 = v29[0];
  if ( v29[0] != &v30 )
    operator delete(v29[0]);
  if ( v28 )
  {
    v20 = sub_227D6D0(v13, v10);
    v21 = (const char *)a2;
    v22 = sub_227B9B0(v20, a2);
    v23 = j__strlen(" visible ");
    v24 = *(void **)(v22 + 32);
    v25 = v23;
    if ( v23 > *(_QWORD *)(v22 + 24) - (_QWORD)v24 )
    {
      v21 = " visible ";
      v24 = (void *)v22;
      sub_227BF10(v22, " visible ", v23);
    }
    else if ( v23 )
    {
      v21 = " visible ";
      memcpy(v24, " visible ", v23);
      *(_QWORD *)(v22 + 32) += v25;
    }
    v26 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
    v27 = sub_227D6D0(v24, v21);
    sub_101AC40(&v28, v27, v26);
    v14 = sub_227D6D0(&v28, v27);
    v15 = *(_BYTE **)(v14 + 32);
    if ( *(_BYTE **)(v14 + 24) == v15 )
      goto LABEL_11;
  }
  else
  {
    v14 = sub_227D6D0(v13, v10);
    v15 = *(_BYTE **)(v14 + 32);
    if ( *(_BYTE **)(v14 + 24) == v15 )
    {
LABEL_11:
      sub_227BF10(v14, "\n", 1);
      goto LABEL_12;
    }
  }
  *v15 = 10;
  ++*(_QWORD *)(v14 + 32);
LABEL_12:
  v16 = *(__int64 **)(a2 + 264);
  v17 = *(__int64 **)(a2 + 256);
  if ( v16 == v17 )
    return;
  if ( !a3 )
  {
    do
    {
      v18 = *v17++;
      sub_144F260(a1, v18, 0);
    }
    while ( v16 != v17 );
    return;
  }
  do
  {
LABEL_18:
    v19 = *v17;
    if ( !v28 || (*(_BYTE *)(v19 + 904) & 0x20) != 0 )
      sub_144F260(a1, v19, 1);
    ++v17;
  }
  while ( v16 != v17 );
}
