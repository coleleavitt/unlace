__int64 __fastcall sub_A51140(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5, char a6, char a7)
{
  unsigned __int64 v7; // rbp
  char v8; // al
  char v10; // r9
  char v11; // r9
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // eax
  _OWORD *v16; // rax
  unsigned __int64 v17; // rsi
  _OWORD *v18; // rcx
  void *v19; // rdi
  unsigned int v20; // [rsp+Ch] [rbp-1Ch]

  v7 = a5;
  v8 = (2 * a6) & 2;
  v10 = *(_BYTE *)(a1 + 36);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  v11 = v8 | v10 & 0xFD;
  *(_BYTE *)(a1 + 36) = v11;
  v12 = *a4;
  v13 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = v12;
  v14 = v13 - 3;
  *(_BYTE *)(a1 + 36) = a7 & 1 | v11 & 0xFE;
  if ( a5 != v13 )
  {
    if ( v14 <= 0xFFFFFFFB )
    {
      v19 = *(void **)(a1 + 40);
      if ( v19 )
      {
        v20 = a5;
        operator delete[](v19);
        a5 = v20;
      }
    }
    *(_DWORD *)(a1 + 32) = a5;
    if ( a5 - 3 > 0xFFFFFFFB )
      return a1 + 40;
    v16 = (_OWORD *)operator new[](8 * v7);
    v17 = 1;
    v18 = v16;
    if ( (__int64)(v7 - 2) >= -1 )
      v17 = v7;
    do
      *v18++ = 0;
    while ( v18 != &v16[v17 >> 1] );
    if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
      *((_QWORD *)v16 + (v17 & 0xFFFFFFFFFFFFFFFELL)) = 0;
    *(_QWORD *)(a1 + 40) = v16;
    v14 = *(_DWORD *)(a1 + 32) - 3;
  }
  if ( v14 > 0xFFFFFFFB )
    return a1 + 40;
  return *(_QWORD *)(a1 + 40);
}
