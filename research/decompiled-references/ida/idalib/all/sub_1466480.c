__int64 __fastcall sub_1466480(__int64 a1, __int64 a2, int a3, char a4, char a5, char a6)
{
  void *v11; // rdi
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 result; // rax
  char v15; // r9

  if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v11 = *(void **)(a1 + 24);
    if ( v11 )
      operator delete[](v11);
    *(_BYTE *)(a1 + 64) &= ~8u;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v12 = *(_QWORD **)(a1 + 8);
  if ( v12 )
    sub_13EFF90(v12, *(_QWORD *)(a1 + 16));
  v13 = *(unsigned __int8 *)(a1 + 64);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = 0;
  result = (16 * (a4 & 1)) & 0xD8 | (8 * (a5 & 1)) & 0xD8 | v13 & 0xFFFFFFC0;
  *(_DWORD *)(a1 + 44) = 0;
  v15 = result | (32 * (a6 & 1));
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 64) = v15;
  *(_DWORD *)(a1 + 48) = 0;
  if ( a3 )
  {
    result = 2 * ((*(_WORD *)(a2 + 18) >> 1) & 1u);
    *(_BYTE *)(a1 + 64) = (2 * ((*(_WORD *)(a2 + 18) & 2) != 0)) | *(_WORD *)(a2 + 18) & 1 | v15;
  }
  return result;
}
