__m128i *__fastcall sub_19FBD80(__int64 *a1, __int64 a2, const __m128i *a3, __int32 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __m128i *v21; // r13
  __int64 v23; // rax
  _BYTE v24[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(sub_168B6C0((__int64)a1) + 17448) + 248LL) != 49 )
  {
    v21 = nullptr;
    sub_168B9F0((__int64)v24, a1, a3[1].m128i_u32[2], 0x7Fu, 0);
    sub_180A660((__int64)v24, (__int64)a3);
    sub_15F7200(v24);
    return v21;
  }
  v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7);
  if ( *(_BYTE *)(v8 + 16) == 13 )
  {
    v13 = ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) - 436;
    if ( v13 > 0x2Eu )
      goto LABEL_14;
    v9 = word_2647340;
    if ( !word_2647340[v13] )
      goto LABEL_14;
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
  {
LABEL_14:
    v21 = nullptr;
    sub_168B9F0((__int64)v24, a1, *(_DWORD *)(a2 + 24), 0x138Bu, 0);
    sub_15F7200(v24);
    return v21;
  }
  v14 = *(_QWORD *)(a2 + 48);
  if ( (v14 & 1) == 0 && (byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
    goto LABEL_14;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_12;
  v15 = sub_B8C3D0(a2, a2, (__int64)v9, v10, v11, v12);
  v16 = *v15;
  v17 = *v15 + 8LL * *((unsigned int *)v15 + 2);
  if ( v16 >= v17 )
  {
    if ( v16 != v17 )
    {
      while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 228 )
      {
        v17 += 8LL;
        if ( v16 == v17 )
          goto LABEL_12;
      }
      goto LABEL_20;
    }
LABEL_12:
    v19 = sub_168B6C0((__int64)a1);
    v20 = sub_168B6C0((__int64)a1);
    v21 = (__m128i *)sub_19F7E40((__int64 *)(v20 + 2352), 48, 3u);
    sub_B13B50(v21, v19, a3, a4);
    return v21;
  }
  v18 = v16;
  while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 228 )
  {
    v18 += 8LL;
    if ( v17 == v18 )
      goto LABEL_12;
  }
  if ( v17 == v18 )
    goto LABEL_12;
LABEL_20:
  while ( 1 )
  {
    v23 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 228 )
      break;
    v16 += 8LL;
  }
  v21 = nullptr;
  if ( a4 != *(_DWORD *)(v23 + 40) )
  {
    sub_168B9F0((__int64)v24, a1, *(_DWORD *)(v23 + 24), 0xF30u, 0);
    sub_180A660((__int64)v24, (__int64)a3);
    sub_15F7200(v24);
    sub_168B9F0((__int64)v24, a1, a3[1].m128i_u32[2], 0x16CFu, 0);
    sub_15F7200(v24);
  }
  return v21;
}
