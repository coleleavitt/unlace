__int64 __fastcall sub_B36B60(__int64 a1, const void *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // r14
  char v8; // bp
  __int64 v9; // rbx
  void *v10; // rax
  char v11; // al

  if ( a5 == 1 )
  {
    v7 = 1;
    v8 = 2;
  }
  else
  {
    v7 = a5 == 0 ? 0 : 2;
    v8 = a5 == 0 ? 1 : 3;
  }
  v9 = sub_9C3B30((__int64 *)(a1 + 2352), 56, 3u);
  *(_OWORD *)v9 = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = a4;
  *(_BYTE *)(v9 + 35) &= 0xFCu;
  *(_BYTE *)(v9 + 38) &= 0xE0u;
  *(_WORD *)(v9 + 36) = 411;
  *(_WORD *)(v9 + 32) = 418;
  *(_BYTE *)(v9 + 34) = (16 * v7) | v8 & 0xF;
  *(_DWORD *)(v9 + 40) = a3;
  v10 = (void *)sub_9C3B30((__int64 *)(a1 + 2352), (unsigned int)a3, 0);
  *(_QWORD *)(v9 + 48) = v10;
  if ( a3 )
    memcpy(v10, a2, *(unsigned int *)(v9 + 40));
  v11 = *(_BYTE *)(v9 + 34);
  *(_BYTE *)(v9 + 38) |= 4u;
  if ( (v11 & 0xF0) == 0xF0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 34) = v11 & 0xF;
  return v9;
}
