__int64 __fastcall sub_B11FA0(__int64 a1, const void *a2, __int64 a3, int a4, __int64 a5, int a6)
{
  char v8; // r14
  char v9; // bp
  __int64 v10; // rbx
  void *v11; // rax
  char v12; // al

  if ( a6 == 1 )
  {
    v8 = 1;
    v9 = 2;
  }
  else
  {
    v8 = a6 == 0 ? 0 : 2;
    v9 = a6 == 0 ? 1 : 3;
  }
  v10 = sub_99FDF0((__int64 *)(a1 + 2352), 64, 3u);
  *(_OWORD *)v10 = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = a5;
  *(_BYTE *)(v10 + 35) &= 0xFCu;
  *(_BYTE *)(v10 + 38) &= 0xE0u;
  *(_WORD *)(v10 + 36) = 386;
  *(_WORD *)(v10 + 32) = 418;
  *(_BYTE *)(v10 + 34) = (16 * v8) | v9 & 0xF;
  *(_DWORD *)(v10 + 40) = a3;
  v11 = (void *)sub_99FDF0((__int64 *)(a1 + 2352), (unsigned int)a3, 0);
  *(_DWORD *)(v10 + 56) = a4;
  *(_QWORD *)(v10 + 48) = v11;
  if ( a3 )
    memcpy(v11, a2, *(unsigned int *)(v10 + 40));
  v12 = *(_BYTE *)(v10 + 34);
  *(_BYTE *)(v10 + 38) |= 4u;
  if ( (v12 & 0xF0) == 0xF0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 34) = v12 & 0xF;
  return v10;
}

