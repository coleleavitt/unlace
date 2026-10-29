__int64 __fastcall sub_193E2D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  int *v6; // rax
  int v7; // esi
  int v8; // ecx
  __int64 v9; // rdx
  char v10; // r9
  int v11; // r8d
  unsigned int v12; // eax
  int v13; // r9d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbp
  int v19; // eax
  _BYTE v20[56]; // [rsp+0h] [rbp-38h] BYREF

  sub_15F3080((__int64)v20, *a1);
  if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
  {
    v5 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v5 = 32;
    v6 = (int *)(a2 + v5);
    v7 = *v6;
    v8 = v6[1];
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  v9 = *(_QWORD *)(*a1 + 232);
  v11 = (*(_WORD *)(v9 + 206) >> 7) & 3;
  if ( v11 == 3 )
    v11 = 2;
  v10 = *(_BYTE *)(v9 + 46);
  v12 = v11
      | (((v10 & 8) != 0) << 14)
      | (((v10 & 4) != 0) << 13)
      | (((v10 & 2) != 0) << 12)
      | (8 * *(unsigned __int8 *)(v9 + 45)) & 0x400
      | (((*(_BYTE *)(v9 + 45) & 0x40) != 0) << 9)
      | (4 * ((unsigned int)*(char *)(v9 + 106) >> 31))
      | ((v10 & 1) << 11)
      | (((*(_BYTE *)(v9 + 207) >> 1) & 3) << 6);
  v13 = v11 & 3;
  v14 = v12 | 0x38;
  if ( v13 == 1 && (v12 & 4) != 0 )
  {
    v19 = v12 | 0x138;
    if ( (unsigned __int8)v14 >> 6 == 2 )
      v14 = v19;
  }
  v15 = v14 | ((*(_BYTE *)(v9 + 202) & 7) << 22);
  *(_DWORD *)(*a1 + 224) = v8 & (v15 ^ v7) ^ v15;
  v16 = *a1;
  *(_DWORD *)(v16 + 1952) = v7;
  *(_DWORD *)(v16 + 1956) = v8;
  v17 = sub_193E140(a1, a2, a3, a4);
  sub_15F30C0((__int64)v20);
  return v17;
}
