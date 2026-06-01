__int64 __fastcall sub_76C4C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ebx
  char v13; // al
  __int64 v14; // rdi
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 i; // rbp
  char v19; // al
  char v20; // dl
  unsigned __int16 v21; // ax
  __int64 v22; // rbp
  unsigned __int64 v23; // r13
  char v24; // al
  __int64 v25; // rdx
  __m128i v27; // [rsp+0h] [rbp-68h] BYREF
  __m128i v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]

  v7 = **(_DWORD **)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 24);
  v27.m128i_i32[2] = *(_DWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 40);
  v10 = *(_QWORD *)(a1 + 32);
  v27.m128i_i64[0] = v9;
  v28 = _mm_load_si128(&v27);
  v29 = v10;
  v11 = sub_7925F0(&v28, a2, v27.m128i_u32[2], v9, a5, a6, v9, v27.m128i_i32[2], v10);
  v12 = (v7 >> 14) & 0x1F | sub_7925A0(&v28) | (2 * v11);
  v13 = *(_BYTE *)(a1 + 2);
  if ( (v13 & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    if ( v14 )
    {
      v15 = sub_A7AF30(v14);
      v12 |= (2 * ((v15 >> 1) & 1)) | v15 & 1 | (2 * (_BYTE)v15) & 0x10;
      v13 = *(_BYTE *)(a1 + 2);
    }
  }
  if ( (v13 & 0x40) != 0 )
  {
    v16 = 16LL * ((v13 & 0x10) != 0) + 8LL * ((v13 & 0x20) != 0);
    if ( *(_DWORD *)(a1 + v16 + 48) )
    {
      v17 = a1 + v16 + 64;
      for ( i = v17 + 32LL * *(unsigned int *)(a1 + v16 + 60);
            i != v17;
            v12 |= (2 * ((v21 >> 1) & 1)) | v21 & 0x11 | v20 & 0xC )
      {
        v19 = sub_AFD280(v17);
        v20 = -((v19 & 4) != 0);
        v17 += 32;
        v21 = (2 * v19) & 0x10 | v19 & 3;
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v23 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v22 + 16) & 4) != 0 )
      v23 = *(_QWORD *)v23;
    if ( v23
      && (*(_BYTE *)(v23 + 8) & 0x7Fu) - 57 <= 2
      && (unsigned __int8)sub_79B8A0(v23)
      && (unsigned __int8)sub_76F3C0(v23 - 64, v23)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v12 &= 0x1Bu;
    }
    v24 = *(_BYTE *)(v22 + 68);
    if ( (v24 & 1) != 0 )
    {
      v25 = *(_QWORD *)(v22 + 72);
      if ( (~v24 & 0xC) != 0 && (v24 & 0xC) != 0 )
        v25 = *(_QWORD *)(v25 + 8);
      if ( (*(_DWORD *)v25 & 0x20000) != 0 )
        v12 |= 4u;
    }
  }
  return v12;
}

