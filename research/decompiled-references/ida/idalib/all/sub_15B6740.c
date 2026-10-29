__int64 __fastcall sub_15B6740(
        __int64 a1,
        int a2,
        int *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const void *a9,
        size_t n,
        char a11)
{
  void *v13; // rcx
  int v15; // eax
  unsigned __int64 v16; // rdi
  void *v17; // rcx
  void *v19; // rax

  v13 = nullptr;
  *(_QWORD *)(a1 + 8) = a5;
  *(_WORD *)a1 = 0;
  v15 = *a3;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 4) = v15;
  *(_QWORD *)(a1 + 24) = a7;
  *(_QWORD *)(a1 + 32) = a8;
  if ( n )
  {
    v19 = (void *)operator new[](n);
    v13 = memcpy(v19, a9, n);
  }
  *(_QWORD *)(a1 + 48) = n;
  v16 = -1;
  *(_QWORD *)(a1 + 40) = v13;
  if ( a4 <= 0x1FFFFFFFFFFFFFFELL )
    v16 = 4 * a4;
  v17 = (void *)operator new[](v16);
  if ( (__int64)(a4 - 1) >= 0 )
    v17 = memset(v17, 0, 4 * a4);
  *(_QWORD *)(a1 + 56) = v17;
  memcpy(v17, a3, 4 * a4);
  *(_QWORD *)(a1 + 64) = a4;
  *(_DWORD *)(a1 + 72) = a2;
  *(_BYTE *)(a1 + 76) = a11;
  return a1;
}
