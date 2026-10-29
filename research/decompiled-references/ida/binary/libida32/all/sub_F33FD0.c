void *__fastcall sub_F33FD0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        char a6,
        const void *a7,
        __int64 a8)
{
  char v8; // r14
  char v9; // r15
  unsigned __int64 v10; // rax
  int v11; // r15d
  char v13; // r9
  void *result; // rax
  __int64 v15; // rbp
  unsigned int v17; // eax
  char *v18; // rcx
  __int64 v19; // rsi

  v8 = a5;
  v9 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)(a1 + 24) = a3;
  v10 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)a1 = a1;
  v11 = v9 & 0x1F;
  *(_BYTE *)(a1 + 16) = 35;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v10 = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 17) = v11 | *(_BYTE *)(a1 + 17) & 0xE0;
  v13 = *(_BYTE *)(a1 + 20);
  *(_WORD *)(a1 + 17) &= 0xF81Fu;
  *(_BYTE *)(a1 + 20) = a6 & 1 | v13 & 0xFE;
  *(_WORD *)(a1 + 18) = (8 * (a5 & 0x7F)) | *(_WORD *)(a1 + 18) & 0xFC07;
  if ( a5 )
  {
    v15 = 8 * a5;
    memcpy((void *)(a1 + 48), a4, 8 * a5);
    if ( a4 != &a4[v15] )
    {
      v17 = *(unsigned __int8 *)(a1 + 17);
      v18 = a4;
      do
      {
        v19 = *(_QWORD *)v18;
        v18 += 8;
        v11 |= *(_BYTE *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x17;
        v17 = v11 & 0x1F | v17 & 0xFFFFFFE0;
        *(_BYTE *)(a1 + 17) = v17;
      }
      while ( &a4[v15] != v18 );
    }
  }
  result = (void *)((4 * (_DWORD)a8) | *(_BYTE *)(a1 + 19) & 3u);
  *(_BYTE *)(a1 + 19) = (4 * a8) | *(_BYTE *)(a1 + 19) & 3;
  if ( a8 )
    return memcpy((void *)(a1 + 8LL * (v8 & 0x7F) + 48), a7, 8 * a8);
  return result;
}

