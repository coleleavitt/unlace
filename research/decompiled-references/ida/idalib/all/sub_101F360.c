void __fastcall sub_101F360(__int64 a1, int a2, char **a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  char *v6; // r14
  char *v7; // r13
  _BYTE *v8; // rdi
  signed __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rax
  size_t v12; // rdx
  char *v13; // r12
  void *v14; // rdi
  char *v15; // rbp
  int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  int *v17; // [rsp+18h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 160);
  v16 = a2;
  if ( !v4 )
  {
    v5 = a1 + 152;
LABEL_15:
    v17 = &v16;
    v5 = sub_101F290((_QWORD *)(a1 + 144), v5, &v17);
    goto LABEL_8;
  }
  v5 = a1 + 152;
  do
  {
    while ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_6:
  if ( a1 + 152 == v5 || a2 < *(_DWORD *)(v5 + 32) )
    goto LABEL_15;
LABEL_8:
  if ( a3 == (char **)(v5 + 40) )
    return;
  v6 = a3[1];
  v7 = *a3;
  v8 = *(_BYTE **)(v5 + 40);
  v9 = v6 - *a3;
  v10 = 0xCCCCCCCCCCCCCCCDLL * (v9 >> 2);
  if ( v10 > 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(v5 + 56) - (_QWORD)v8) >> 2) )
  {
    v13 = nullptr;
    if ( v10 )
    {
      if ( v10 > 0xCCCCCCCCCCCCCCCLL )
        std::__throw_bad_alloc();
      v13 = (char *)operator new(v9);
    }
    if ( v7 != v6 )
      memmove(v13, v7, v9);
    v14 = *(void **)(v5 + 40);
    if ( v14 )
      operator delete(v14);
    v15 = &v13[v9];
    *(_QWORD *)(v5 + 40) = v13;
    *(_QWORD *)(v5 + 56) = v15;
    goto LABEL_28;
  }
  v11 = *(_BYTE **)(v5 + 48);
  v12 = v11 - v8;
  if ( v10 > 0xCCCCCCCCCCCCCCCDLL * ((v11 - v8) >> 2) )
  {
    if ( v12 )
    {
      memmove(v8, *a3, v12);
      v11 = *(_BYTE **)(v5 + 48);
      v8 = *(_BYTE **)(v5 + 40);
      v6 = a3[1];
      v7 = *a3;
      v12 = v11 - v8;
    }
    if ( &v7[v12] != v6 )
    {
      memmove(v11, &v7[v12], v6 - &v7[v12]);
      v15 = (char *)(*(_QWORD *)(v5 + 40) + v9);
      goto LABEL_28;
    }
LABEL_27:
    v15 = &v8[v9];
LABEL_28:
    *(_QWORD *)(v5 + 48) = v15;
    return;
  }
  if ( v7 == v6 )
    goto LABEL_27;
  memmove(v8, *a3, a3[1] - *a3);
  *(_QWORD *)(v5 + 48) = *(_QWORD *)(v5 + 40) + v9;
}
