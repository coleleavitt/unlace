__int64 __fastcall sub_B339E0(__int64 a1, const void *a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v8; // rbx
  int v9; // eax
  void *v10; // rax

  v8 = sub_9C3B30((__int64 *)(a1 + 2352), 64, 3u);
  *(_OWORD *)v8 = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = a5;
  *(_BYTE *)(v8 + 35) &= 0xFCu;
  v9 = *(_DWORD *)(v8 + 32);
  *(_BYTE *)(v8 + 38) &= 0xE0u;
  *(_DWORD *)(v8 + 40) = a3;
  *(_DWORD *)(v8 + 32) = v9 & 0xFF000000 | 0x601A2;
  *(_WORD *)(v8 + 36) = 139;
  v10 = (void *)sub_9C3B30((__int64 *)(a1 + 2352), (unsigned int)a3, 0);
  *(_BYTE *)(v8 + 56) = a4;
  *(_QWORD *)(v8 + 48) = v10;
  if ( a3 )
    memcpy(v10, a2, *(unsigned int *)(v8 + 40));
  if ( (*(_BYTE *)(v8 + 34) & 0xF0) == 0xF0 && !*(_QWORD *)v8 )
    *(_BYTE *)(v8 + 34) &= 0xFu;
  return v8;
}
