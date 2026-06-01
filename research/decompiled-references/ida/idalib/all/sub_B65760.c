__int64 __fastcall sub_B65760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // r12d
  __int64 v8; // rdi
  char v9; // al
  char v10; // si
  char v11; // cl
  char v12; // dl
  char v13; // al
  int v14; // edi
  __int64 v15; // rax
  char v16; // al
  int v17; // r13d
  int v18; // ebp
  unsigned int v19; // r12d
  __int64 v20; // rbp
  __int64 v21; // rbx
  char v22; // al
  char v23; // si
  char v24; // cl
  char v25; // dl
  char v26; // al
  int v27; // esi
  int v28; // ecx
  int v29; // edx
  __m128i v31; // [rsp+0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+10h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 16) && !(unsigned __int8)sub_BFE300() )
    v7 = (**(_DWORD **)(a1 + 16) >> 14) & 0x11 | 0xE;
  else
    v7 = 14;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v9 = sub_E91240(v8, a2, a3, a4, a5);
    a6 = 16;
    a5 = 2;
    v10 = v9 & 8;
    if ( (v9 & 8) != 0 )
      v10 = 16;
    v11 = v9 & 4;
    if ( (v9 & 4) != 0 )
      v11 = 12;
    v12 = v9 & 2;
    if ( (v9 & 2) != 0 )
      v12 = 2;
    v13 = v12 | v11 | v10 | v9 & 1;
    v14 = v13 & 0x10;
    if ( (v13 & 0x10) != 0 )
      v14 = 16;
    a2 = v13 & 8;
    if ( (v13 & 8) != 0 )
      a2 = 8;
    a4 = v13 & 4;
    if ( (v13 & 4) != 0 )
      a4 = 4;
    a3 = v13 & 2;
    if ( (v13 & 2) != 0 )
      a3 = 2;
    v7 |= a3 | a4 | a2 | v14 | v13 & 1;
  }
  v15 = *(_QWORD *)(a1 + 64);
  v31 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v32 = v15;
  v16 = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64))sub_B85980)(
          &v31,
          a2,
          a3,
          a4,
          a5,
          a6);
  v17 = v16 == 0 ? 1 : 3;
  v18 = v16 != 0 ? 2 : 0;
  if ( (unsigned __int8)sub_B858E0(&v31) )
    v18 = v17;
  v19 = v18 | v7;
  if ( (*(_QWORD *)a1 & 0x100000LL) == 0 )
    return v19;
  if ( !*(_DWORD *)(a1 + 72) )
    return v19;
  v20 = a1 + 16LL * ((*(_QWORD *)a1 & 0x100000LL) != 0) + 72;
  v21 = v20 + 32LL * *(unsigned int *)(a1 + 84);
  if ( v21 == v20 )
    return v19;
  do
  {
    while ( 1 )
    {
      v22 = sub_F1D2B0(v20);
      v23 = v22 & 8;
      if ( (v22 & 8) != 0 )
        v23 = 16;
      v24 = v22 & 4;
      if ( (v22 & 4) != 0 )
        v24 = 12;
      v25 = v22 & 2;
      if ( (v22 & 2) != 0 )
        v25 = 2;
      v26 = v25 | v24 | v23 | v22 & 1;
      v27 = v26 & 0x10;
      if ( (v26 & 0x10) != 0 )
        v27 = 16;
      v28 = v26 & 8;
      if ( (v26 & 8) != 0 )
        v28 = 8;
      v29 = v26 & 4;
      if ( (v26 & 4) != 0 )
        v29 = 4;
      if ( (v26 & 2) != 0 )
        break;
      v20 += 32;
      v19 |= v29 | v28 | v27 | v26 & 1;
      if ( v21 == v20 )
        return v19;
    }
    v20 += 32;
    v19 |= v29 | v28 | v27 | v26 & 1 | 2;
  }
  while ( v21 != v20 );
  return v19;
}
