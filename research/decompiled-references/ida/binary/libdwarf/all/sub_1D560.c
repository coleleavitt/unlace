void __fastcall sub_1D560(__int64 *ptr)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r12
  void *v6; // rdi
  int v7; // r13d
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  int v15; // eax

  v2 = *ptr;
  free(*(void **)(*ptr + 144));
  v3 = *(_QWORD *)(v2 + 168);
  v4 = *(_QWORD *)(v2 + 192);
  if ( v3 )
  {
    v5 = 0;
    do
    {
      v7 = *(_DWORD *)(v4 + 112);
      free(*(void **)(v4 + 144));
      *(_QWORD *)(v4 + 144) = 0;
      if ( v7 == 1 && *(_BYTE *)(v4 + 116) )
        free(*(void **)(v4 + 104));
      *(_QWORD *)(v4 + 104) = 0;
      v6 = *(void **)(v4 + 160);
      ++v5;
      v4 += 184;
      *(_QWORD *)(v4 - 64) = -1;
      *(_QWORD *)(v4 - 56) = 0;
      free(v6);
      *(_QWORD *)(v4 - 24) = 0;
      *(_QWORD *)(v4 - 16) = 0;
    }
    while ( v3 != v5 );
    v4 = *(_QWORD *)(v2 + 192);
  }
  free((void *)v4);
  v8 = *(void **)(v2 + 240);
  *(_QWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  free(v8);
  v9 = *(void **)(v2 + 248);
  *(_QWORD *)(v2 + 240) = 0;
  free(v9);
  v10 = *(void **)(v2 + 312);
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 264) = 0;
  free(v10);
  v11 = *(void **)(v2 + 456);
  *(_QWORD *)(v2 + 312) = 0;
  free(v11);
  v12 = *(void **)(v2 + 376);
  *(_QWORD *)(v2 + 456) = 0;
  free(v12);
  v13 = *(void **)(v2 + 448);
  *(_QWORD *)(v2 + 376) = 0;
  free(v13);
  v14 = *(void **)(v2 + 368);
  *(_QWORD *)(v2 + 448) = 0;
  free(v14);
  v15 = *(_DWORD *)(v2 + 24);
  *(_QWORD *)(v2 + 368) = 0;
  if ( v15 )
    _dwarf_closer(*(_DWORD *)(v2 + 16));
  free(*(void **)(v2 + 8));
  free((void *)v2);
  free(ptr);
}

