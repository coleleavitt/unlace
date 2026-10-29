void __fastcall sub_6A3690(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        const void *a5,
        __int64 a6,
        char a7,
        char a8)
{
  char v11; // al
  char v12; // al
  int v13; // eax
  unsigned int v14; // edx
  void *v15; // rdi
  void *v16; // rax
  void *v17; // rax
  void *v18; // rdi

  *(_QWORD *)(a1 + 16) = a3;
  v11 = *(_BYTE *)(a1 + 36);
  *(_QWORD *)(a1 + 8) = a2;
  v12 = (2 * (a7 & 1)) | v11 & 0xFD;
  *(_BYTE *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 24) = *a4;
  *(_BYTE *)(a1 + 36) = a8 & 1 | v12 & 0xFE;
  v13 = *(_DWORD *)(a1 + 32);
  v14 = v13 - 3;
  if ( (_DWORD)a6 != v13 )
  {
    if ( v14 <= 0xFFFFFFFB )
    {
      v18 = *(void **)(a1 + 40);
      if ( v18 )
        operator delete[](v18);
    }
    *(_DWORD *)(a1 + 32) = a6;
    if ( (_DWORD)a6 != -1 )
    {
      if ( (unsigned int)a6 <= 2 )
      {
LABEL_5:
        v15 = (void *)(a1 + 40);
        goto LABEL_6;
      }
      v16 = (void *)operator new[](8LL * (unsigned int)a6);
      v17 = memset(v16, 0, 8LL * (unsigned int)a6);
      *(_QWORD *)(a1 + 40) = v17;
      v15 = v17;
      if ( (unsigned int)(*(_DWORD *)(a1 + 32) - 3) <= 0xFFFFFFFB )
        goto LABEL_9;
    }
    v15 = (void *)(a1 + 40);
    goto LABEL_9;
  }
  if ( v14 > 0xFFFFFFFB )
    goto LABEL_5;
  v15 = *(void **)(a1 + 40);
LABEL_6:
  if ( a6 )
LABEL_9:
    memcpy(v15, a5, 8 * a6);
}

