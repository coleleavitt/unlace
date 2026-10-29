__int64 *__fastcall sub_12EA540(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int32 a5, __int64 a6)
{
  _DWORD *v9; // rbp
  _DWORD *v10; // rdi
  void **v11; // rsi
  __int64 v12; // r15
  _DWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // rsi
  std::_V2 *v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  size_t v22; // r15
  void *v23; // rax
  size_t v24; // rdx
  const void *v25; // rdi
  signed __int64 v26; // rax
  void *v27; // rax
  __int64 v28; // r15
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  void *v35; // r14
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rax
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __m128i v47; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+10h] [rbp-D8h]
  __int64 v49; // [rsp+18h] [rbp-D0h]
  void *v50; // [rsp+20h] [rbp-C8h]
  const void *v51; // [rsp+28h] [rbp-C0h]
  int v52; // [rsp+30h] [rbp-B8h]
  __int64 v53; // [rsp+38h] [rbp-B0h]
  void *v54[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v55[120]; // [rsp+70h] [rbp-78h] BYREF

  v48 = a2;
  v47.m128i_i32[0] = a5;
  v49 = a6;
  v9 = (_DWORD *)operator new(0x18u);
  sub_FD3570((__int64)v9);
  v54[0] = v9;
  *v9 += 2;
  v10 = (_DWORD *)operator new(0x3B90u);
  v11 = v54;
  v12 = (__int64)v10;
  sub_FCA6E0((__int64)v10, (__int64 *)v54, a3, 0, 1);
  v13 = v54[0];
  *a1 = (__int64)v10;
  ++*v10;
  if ( v13 )
  {
    v14 = (*v13)-- == 1;
    if ( v14 )
    {
      v50 = v13;
      sub_FD5580((__int64)v13);
      v11 = (void **)&qword_18;
      v10 = v50;
      operator delete(v50, 0x18u);
      v12 = *a1;
    }
  }
  if ( a4 )
  {
    v15 = a4;
    v16 = (std::_V2 *)v12;
    sub_FC6FE0(v12, a4, v47.m128i_i8[0]);
    goto LABEL_6;
  }
  if ( ((*(_BYTE *)(a3 + 40) ^ 6) & 6) == 0 )
  {
    v47.m128i_i64[0] = sub_227D6D0(v10, v11);
    v42 = operator new(0x50u);
    sub_1396A90(v42, v47.m128i_i64[0], a3);
    v15 = v42;
    v16 = (std::_V2 *)v12;
    sub_FC6FE0(v12, v42, 1);
LABEL_6:
    v17 = *a1;
    if ( (*(_BYTE *)(a3 + 2) & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v47.m128i_i64[0] = sub_227D6D0(v10, v11);
  v20 = operator new(0x50u);
  sub_13B38A0(v20, v47.m128i_i64[0], a3, 0);
  v15 = v20;
  v16 = (std::_V2 *)v12;
  sub_FC6FE0(v12, v20, 1);
  v17 = *a1;
  if ( (*(_BYTE *)(a3 + 2) & 0x10) == 0 )
  {
LABEL_7:
    if ( !*(_QWORD *)(a3 + 56) )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_14:
  v47.m128i_i64[0] = operator new(0x118u);
  sub_13B3F20(v47.m128i_i64[0], v17);
  v16 = (std::_V2 *)v17;
  v15 = v47.m128i_i64[0];
  sub_FC6FE0(v17, v47.m128i_i64[0], 1);
  v17 = *a1;
  if ( !*(_QWORD *)(a3 + 56) )
  {
LABEL_8:
    v18 = *(_QWORD *)(a3 + 88);
    if ( !v18 )
      goto LABEL_9;
    goto LABEL_30;
  }
LABEL_15:
  v52 = 0;
  v53 = std::_V2::system_category(v16);
  v21 = sub_227D6D0(v16, v15);
  v22 = *(_QWORD *)(a3 + 56);
  v47.m128i_i64[0] = v21;
  v23 = (void *)j__strlen("-");
  v24 = v22;
  v25 = *(const void **)(a3 + 48);
  v50 = v23;
  if ( v22 > (unsigned __int64)v23 )
    v24 = (size_t)v23;
  v51 = v25;
  if ( sub_9B48C0(v25, "-", v24)
    || (v26 = v22 - (_QWORD)v50, (__int64)(v22 - (_QWORD)v50) > 0x7FFFFFFF)
    || v26 < (__int64)0xFFFFFFFF80000000LL
    || (_DWORD)v26 )
  {
    v50 = (void *)operator new(0x60u);
    sub_227D450((std::_V2 *)v50);
    v41 = v50;
    v46 = *((_QWORD *)v50 + 2);
    if ( *((_QWORD *)v50 + 4) != v46 )
    {
      sub_227B9F0(v50, v51, v38, v46, v39, v40, v50, v47.m128i_i64[1], v48);
      v41 = (void *)v47.m128i_i64[0];
    }
    v47.m128i_i64[0] = (__int64)v41;
    sub_227B8B0(v41, 0, 0, 0);
    v27 = (void *)v47.m128i_i64[0];
  }
  else
  {
    v27 = nullptr;
  }
  v54[0] = v27;
  v28 = operator new(0x450u);
  sub_138F1E0(v28, v47.m128i_i64[0], a3, v54);
  if ( v54[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v54[0] + 8LL))(v54[0]);
  if ( v49 )
  {
    v29 = *(_BYTE **)(v49 + 480);
    v30 = *(_QWORD *)(v49 + 488);
    v54[0] = v55;
    v47.m128i_i64[0] = (__int64)v55;
    sub_12E9400(v54, v29, (__int64)&v29[v30]);
    sub_A0AAD0(v28 + 1072, v54);
    if ( v54[0] != v55 )
      operator delete(v54[0]);
  }
  if ( *(_QWORD *)(v17 + 56) )
  {
    v47.m128i_i64[0] = *(_QWORD *)(v17 + 56);
    v31 = _mm_loadl_epi64(&v47);
    *(_QWORD *)(v17 + 56) = 0;
    v47 = _mm_unpacklo_epi64(v31, v31);
    v32 = operator new(0x28u);
    v33 = _mm_load_si128(&v47);
    *(_QWORD *)(v32 + 8) = 0;
    *(__m128i *)(v32 + 16) = v33;
    *(_QWORD *)v32 = &off_2BAFA40;
  }
  else
  {
    v47.m128i_i64[0] = *(_QWORD *)(v17 + 48);
    v32 = operator new(0x28u);
    v45 = v47.m128i_i64[0];
    *(_QWORD *)(v32 + 8) = 0;
    *(_QWORD *)(v32 + 16) = 0;
    *(_QWORD *)v32 = &off_2BAFA40;
    *(_QWORD *)(v32 + 24) = v45;
  }
  *(_QWORD *)(v32 + 32) = v28;
  sub_FC6FE0(v17, v32, 1);
  v18 = *(_QWORD *)(a3 + 88);
  v17 = *a1;
  if ( v18 )
  {
LABEL_30:
    sub_139C4A0(v54, *(_QWORD *)(a3 + 80), v18, a3, 0);
    if ( *(_QWORD *)(v17 + 56) )
    {
      v47.m128i_i64[0] = *(_QWORD *)(v17 + 56);
      v34 = _mm_loadl_epi64(&v47);
      *(_QWORD *)(v17 + 56) = 0;
      v35 = v54[0];
      v54[0] = nullptr;
      v47 = _mm_unpacklo_epi64(v34, v34);
      v36 = operator new(0x28u);
      v37 = _mm_load_si128(&v47);
      *(_QWORD *)(v36 + 8) = 0;
      *(__m128i *)(v36 + 16) = v37;
      *(_QWORD *)v36 = &off_2BAFA40;
    }
    else
    {
      v43 = *(_QWORD *)(v17 + 48);
      v35 = v54[0];
      v54[0] = nullptr;
      v47.m128i_i64[0] = v43;
      v36 = operator new(0x28u);
      v44 = v47.m128i_i64[0];
      *(_QWORD *)(v36 + 8) = 0;
      *(_QWORD *)(v36 + 16) = 0;
      *(_QWORD *)v36 = &off_2BAFA40;
      *(_QWORD *)(v36 + 24) = v44;
    }
    *(_QWORD *)(v36 + 32) = v35;
    sub_FC6FE0(v17, v36, 1);
    if ( v54[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v54[0] + 8LL))(v54[0]);
    v17 = *a1;
  }
LABEL_9:
  sub_10CE470(v17, a3, v48, 1);
  v14 = (*v9)-- == 1;
  if ( v14 )
  {
    sub_FD5580((__int64)v9);
    operator delete(v9, 0x18u);
  }
  return a1;
}
