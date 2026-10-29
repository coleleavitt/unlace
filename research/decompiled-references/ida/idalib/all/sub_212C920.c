__int64 __fastcall sub_212C920(__int64 a1, __int64 a2)
{
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  _QWORD *v13; // rdi
  char v14; // al
  char v15; // al
  char v16; // al
  signed __int64 v17; // r13
  _QWORD *v18; // r12
  __m128i v19; // xmm0
  __int64 v20; // r15
  __int64 v21; // r14
  _BYTE *v22; // rsi
  signed __int64 v23; // r13
  __int64 v24; // r14
  _BYTE *v25; // rax
  signed __int64 v26; // r13
  _QWORD *v27; // r12
  __m128i v28; // xmm0
  __int64 v29; // r15
  __int64 v30; // r14
  _BYTE *v31; // rax
  _BYTE *v32; // rsi
  signed __int64 v33; // r13
  int v34; // eax
  __int64 result; // rax
  __m128i src[4]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(_BYTE *)a2 & 1 | *(_BYTE *)a1 & 0xFE;
  *(_BYTE *)a1 = v4;
  v5 = *(_BYTE *)a2 & 2 | v4 & 0xFD;
  *(_BYTE *)a1 = v5;
  v6 = *(_BYTE *)a2 & 4 | v5 & 0xFB;
  *(_BYTE *)a1 = v6;
  v7 = *(_BYTE *)a2 & 8 | v6 & 0xF7;
  *(_BYTE *)a1 = v7;
  v8 = *(_BYTE *)a2 & 0x10 | v7 & 0xEF;
  *(_BYTE *)a1 = v8;
  v9 = *(_BYTE *)a2 & 0x20 | v8 & 0xDF;
  *(_BYTE *)a1 = v9;
  v10 = *(_BYTE *)a2 & 0x40 | v9 & 0xBF;
  *(_BYTE *)a1 = v10;
  *(_BYTE *)a1 = *(_BYTE *)a2 & 0x80 | v10 & 0x7F;
  v11 = *(_BYTE *)(a2 + 1) & 1 | *(_BYTE *)(a1 + 1) & 0xFE;
  *(_BYTE *)(a1 + 1) = v11;
  v12 = *(_BYTE *)(a2 + 1) & 2 | v11 & 0xFD;
  *(_BYTE *)(a1 + 1) = v12;
  v13 = (_QWORD *)(a1 + 32);
  v14 = *(_BYTE *)(a2 + 1) & 4 | v12 & 0xFB;
  *((_BYTE *)v13 - 31) = v14;
  v15 = *(_BYTE *)(a2 + 1) & 8 | v14 & 0xF7;
  *((_BYTE *)v13 - 31) = v15;
  v16 = *(_BYTE *)(a2 + 1) & 0x10 | v15 & 0xEF;
  *((_BYTE *)v13 - 31) = v16;
  *((_BYTE *)v13 - 31) = *(_BYTE *)(a2 + 1) & 0x20 | v16 & 0xDF;
  *((_BYTE *)v13 - 30) = *(_BYTE *)(a2 + 2);
  *((_BYTE *)v13 - 29) = *(_BYTE *)(a2 + 3);
  *((_BYTE *)v13 - 28) = *(_BYTE *)(a2 + 4);
  *((_BYTE *)v13 - 27) = *(_BYTE *)(a2 + 5);
  *(v13 - 3) = *(_QWORD *)(a2 + 8);
  *((_DWORD *)v13 - 4) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)v13 - 3) = *(_DWORD *)(a2 + 20);
  *((_DWORD *)v13 - 2) = *(_DWORD *)(a2 + 24);
  *((_DWORD *)v13 - 1) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_2129B70(v13, *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_2129B70((_QWORD *)(a1 + 64), *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  *(_QWORD *)(a1 + 96) = a1 + 112;
  sub_2129B70((_QWORD *)(a1 + 96), *(_BYTE **)(a2 + 96), *(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 104));
  *(_QWORD *)(a1 + 128) = a1 + 144;
  sub_2129B70((_QWORD *)(a1 + 128), *(_BYTE **)(a2 + 128), *(_QWORD *)(a2 + 128) + *(_QWORD *)(a2 + 136));
  *(_QWORD *)(a1 + 160) = a1 + 176;
  sub_2129B70((_QWORD *)(a1 + 160), *(_BYTE **)(a2 + 160), *(_QWORD *)(a2 + 160) + *(_QWORD *)(a2 + 168));
  *(_QWORD *)(a1 + 192) = a1 + 208;
  sub_2129B70((_QWORD *)(a1 + 192), *(_BYTE **)(a2 + 192), *(_QWORD *)(a2 + 192) + *(_QWORD *)(a2 + 200));
  v17 = *(_QWORD *)(a2 + 232) - *(_QWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  if ( v17 >> 5 )
  {
    if ( (unsigned __int64)(v17 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_40;
    v18 = (_QWORD *)operator new(v17);
  }
  else
  {
    v18 = nullptr;
  }
  src[0].m128i_i64[0] = (__int64)v18;
  v19 = _mm_loadl_epi64(src);
  *(_QWORD *)(a1 + 240) = (char *)v18 + v17;
  *(__m128i *)(a1 + 224) = _mm_unpacklo_epi64(v19, v19);
  v20 = *(_QWORD *)(a2 + 232);
  v21 = *(_QWORD *)(a2 + 224);
  if ( v20 != v21 )
  {
    *v18 = v18 + 2;
    v22 = *(_BYTE **)v21;
    v23 = *(_QWORD *)(v21 + 8);
    if ( v23 + *(_QWORD *)v21 && !v22 )
LABEL_14:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v24 = v21 + 32;
    while ( (unsigned __int64)v23 <= 0xF )
    {
      v25 = (_BYTE *)*v18;
      if ( v23 != 1 )
      {
        if ( !v23 )
          goto LABEL_11;
        goto LABEL_17;
      }
      *v25 = *v22;
      v25 = (_BYTE *)*v18;
LABEL_11:
      v18[1] = v23;
      v18 += 4;
      v25[v23] = 0;
      if ( v24 == v20 )
        goto LABEL_20;
      v24 += 32;
      *v18 = v18 + 2;
      v22 = *(_BYTE **)(v24 - 32);
      v23 = *(_QWORD *)(v24 - 24);
      if ( &v22[v23] && !v22 )
        goto LABEL_14;
    }
    if ( v23 < 0 )
LABEL_39:
      std::__throw_length_error("basic_string::_M_create");
    src[0].m128i_i64[0] = (__int64)v22;
    v25 = (_BYTE *)operator new(v23 + 1);
    v18[2] = v23;
    v22 = (_BYTE *)src[0].m128i_i64[0];
    *v18 = v25;
LABEL_17:
    memcpy(v25, v22, v23);
    v25 = (_BYTE *)*v18;
    goto LABEL_11;
  }
LABEL_20:
  *(_QWORD *)(a1 + 232) = v18;
  v26 = *(_QWORD *)(a2 + 256) - *(_QWORD *)(a2 + 248);
  *(_OWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  if ( v26 >> 5 )
  {
    if ( (unsigned __int64)(v26 >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v27 = (_QWORD *)operator new(v26);
      goto LABEL_23;
    }
LABEL_40:
    std::__throw_bad_alloc();
  }
  v27 = nullptr;
LABEL_23:
  src[0].m128i_i64[0] = (__int64)v27;
  v28 = _mm_loadl_epi64(src);
  *(_QWORD *)(a1 + 264) = (char *)v27 + v26;
  *(__m128i *)(a1 + 248) = _mm_unpacklo_epi64(v28, v28);
  v29 = *(_QWORD *)(a2 + 256);
  v30 = *(_QWORD *)(a2 + 248);
  if ( v29 != v30 )
  {
    while ( 1 )
    {
      *v27 = v27 + 2;
      v32 = *(_BYTE **)v30;
      v33 = *(_QWORD *)(v30 + 8);
      if ( v33 + *(_QWORD *)v30 && !v32 )
        goto LABEL_14;
      if ( (unsigned __int64)v33 > 0xF )
        break;
      v31 = (_BYTE *)*v27;
      if ( v33 == 1 )
      {
        *v31 = *v32;
        v31 = (_BYTE *)*v27;
      }
      else if ( v33 )
      {
        goto LABEL_35;
      }
LABEL_26:
      v30 += 32;
      v27[1] = v33;
      v27 += 4;
      v31[v33] = 0;
      if ( v29 == v30 )
        goto LABEL_36;
    }
    src[0].m128i_i64[0] = *(_QWORD *)v30;
    if ( v33 < 0 )
      goto LABEL_39;
    v31 = (_BYTE *)operator new(v33 + 1);
    v27[2] = v33;
    v32 = (_BYTE *)src[0].m128i_i64[0];
    *v27 = v31;
LABEL_35:
    memcpy(v31, v32, v33);
    v31 = (_BYTE *)*v27;
    goto LABEL_26;
  }
LABEL_36:
  *(_QWORD *)(a1 + 256) = v27;
  v34 = *(_BYTE *)(a2 + 272) & 1 | *(_BYTE *)(a1 + 272) & 0xFE;
  *(_BYTE *)(a1 + 272) = v34;
  result = *(_BYTE *)(a2 + 272) & 2 | v34 & 0xFFFFFFFD;
  *(_BYTE *)(a1 + 272) = result;
  return result;
}
