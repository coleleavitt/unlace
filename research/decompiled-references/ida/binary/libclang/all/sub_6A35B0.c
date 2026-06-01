__int64 __fastcall sub_6A35B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5, char a6, char a7)
{
  __int64 v7; // r12
  char v9; // al
  char v10; // al
  int v11; // eax
  unsigned int v12; // edx
  void *v14; // rax
  void *v15; // rdi
  unsigned int v16; // [rsp+Ch] [rbp-1Ch]

  v7 = a5;
  v9 = *(_BYTE *)(a1 + 36);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  v10 = (2 * (a6 & 1)) | v9 & 0xFD;
  *(_BYTE *)(a1 + 36) = v10;
  *(_QWORD *)(a1 + 24) = *a4;
  *(_BYTE *)(a1 + 36) = a7 & 1 | v10 & 0xFE;
  v11 = *(_DWORD *)(a1 + 32);
  v12 = v11 - 3;
  if ( a5 != v11 )
  {
    if ( v12 <= 0xFFFFFFFB )
    {
      v15 = *(void **)(a1 + 40);
      if ( v15 )
      {
        v16 = a5;
        operator delete[](v15);
        a5 = v16;
      }
    }
    *(_DWORD *)(a1 + 32) = a5;
    if ( a5 - 3 > 0xFFFFFFFB )
      return a1 + 40;
    v14 = (void *)operator new[](8 * v7);
    *(_QWORD *)(a1 + 40) = memset(v14, 0, 8 * v7);
    v12 = *(_DWORD *)(a1 + 32) - 3;
  }
  if ( v12 > 0xFFFFFFFB )
    return a1 + 40;
  return *(_QWORD *)(a1 + 40);
}

