__int64 __fastcall sub_158C0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int8 v7; // bp
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __m128i v11; // xmm1
  __m128i si128; // xmm0
  __m128 v13; // rax
  _WORD *v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // [rsp+0h] [rbp-1C8h]
  __int64 v45; // [rsp+8h] [rbp-1C0h]
  __m128i v46; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-108h]
  __m128i v48; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-E8h]
  __m128 v50; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+110h] [rbp-B8h]
  __m128i v52; // [rsp+118h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+128h] [rbp-A0h]
  char v54; // [rsp+178h] [rbp-50h]
  unsigned int v55; // [rsp+180h] [rbp-48h]
  char v56; // [rsp+184h] [rbp-44h]

  v6 = a2;
  v7 = a3;
  result = sub_C00A40(a2, a2, a3, a4, a5);
  if ( (int)result < 0 )
    return result;
  sub_EE9E50(&v50, a2);
  v11 = _mm_loadu_si128(&v52);
  si128 = _mm_load_si128((const __m128i *)&v50);
  v47 = v53;
  v49 = v51;
  v13 = v50;
  v46 = v11;
  v48 = si128;
LABEL_3:
  if ( v11.m128i_i64[0] == v13.m128_u64[0] )
    goto LABEL_10;
  do
  {
    do
    {
      if ( (v13.m128_i8[8] & 3) != 0 )
      {
        v14 = *(_WORD **)sub_EF2B30((__int64)&v50);
        if ( !v14 )
          goto LABEL_7;
      }
      else
      {
        v14 = *(_WORD **)v13.m128_u64[0];
        if ( !*(_QWORD *)v13.m128_u64[0] )
          goto LABEL_17;
      }
      if ( ((*v14 + 509) & 0x1FFu) <= 0x7E )
      {
        result = sub_1580B50((unsigned __int64)v14, a2, v13.m128_i64[1], v9, v10);
        if ( (_BYTE)result )
          return result;
      }
LABEL_7:
      v13.m128_u64[1] = v50.m128_u64[1];
      if ( (v50.m128_i8[8] & 3) == 0 )
      {
        v13.m128_u64[0] = v50.m128_u64[0];
LABEL_17:
        v13.m128_u64[0] += 8LL;
        v50.m128_u64[0] = v13.m128_u64[0];
        goto LABEL_3;
      }
      if ( (v50.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        a2 = 1;
        sub_EF2750((unsigned __int64 *)&v50, 1);
        v13 = v50;
        goto LABEL_3;
      }
      sub_EF2960((__int64)&v50);
      v13 = v50;
    }
    while ( v11.m128i_i64[0] != v50.m128_u64[0] );
LABEL_10:
    ;
  }
  while ( v11.m128i_i64[1] != v13.m128_u64[1] );
  v15 = sub_EEC8C0(v6, a2, *(double *)si128.m128i_i64);
  sub_168B9F0(&v50, *(_QWORD *)(a1 + 8) + 8LL, *(unsigned int *)(v6 + 4), 6676, 0);
  if ( v54 )
  {
    v48.m128i_i64[0] = v15;
    v48.m128i_i8[8] = 1;
    sub_AEC610(&v52.m128i_i64[1], v48.m128i_i64);
    if ( !v54 )
      goto LABEL_31;
    goto LABEL_23;
  }
  if ( !v56 )
    return sub_15F7200(&v50);
  v20 = sub_168B9E0(&v50);
  v21 = v51;
  if ( v51 )
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
  v46.m128i_i64[0] = v21;
  v22 = sub_1587BC0(v20, v46.m128i_i64, v16, v17, v18, v19);
  v23 = *v22 + 32LL * v55;
  v24 = *(_QWORD *)(v23 + 8);
  if ( v24 )
  {
    v25 = *(unsigned int *)(v24 + 424);
    v26 = *(unsigned int *)(v24 + 428);
    v27 = v25 + 1;
  }
  else
  {
    v36 = *(_QWORD *)(v23 + 16);
    v37 = *(_DWORD *)(v36 + 14976);
    if ( v37 )
    {
      v39 = (unsigned int)(v37 - 1);
      *(_DWORD *)(v36 + 14976) = v39;
      v24 = *(_QWORD *)(v36 + 8 * v39 + 14848);
      v40 = *(unsigned int *)(v24 + 536);
      v41 = *(_QWORD *)(v24 + 528);
      *(_BYTE *)v24 = 0;
      *(_DWORD *)(v24 + 424) = 0;
      v42 = v41 + (v40 << 6);
      if ( v41 == v42 )
      {
        v27 = 1;
        v25 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v42 -= 64;
            v43 = *(void **)(v42 + 24);
            if ( v43 == (void *)(v42 + 40) )
              break;
            v45 = v42;
            v44 = v41;
            operator delete(v43);
            v41 = v44;
            v42 = v45;
            if ( v44 == v45 )
              goto LABEL_41;
          }
        }
        while ( v41 != v42 );
LABEL_41:
        v25 = *(unsigned int *)(v24 + 424);
        v27 = v25 + 1;
      }
      *(_DWORD *)(v24 + 536) = 0;
      v26 = *(unsigned int *)(v24 + 428);
    }
    else
    {
      v38 = operator new(0x3A0u);
      v26 = 8;
      v27 = 1;
      v24 = v38;
      *(_BYTE *)v38 = 0;
      *(_QWORD *)(v38 + 96) = v38 + 112;
      *(_QWORD *)(v38 + 128) = v38 + 144;
      *(_QWORD *)(v38 + 160) = v38 + 176;
      *(_QWORD *)(v38 + 192) = v38 + 208;
      *(_QWORD *)(v38 + 224) = v38 + 240;
      *(_QWORD *)(v38 + 256) = v38 + 272;
      *(_QWORD *)(v38 + 288) = v38 + 304;
      *(_QWORD *)(v38 + 320) = v38 + 336;
      *(_QWORD *)(v38 + 352) = v38 + 368;
      *(_QWORD *)(v38 + 384) = v38 + 400;
      *(_QWORD *)(v38 + 416) = v38 + 432;
      *(_QWORD *)(v38 + 104) = 0;
      *(_BYTE *)(v38 + 112) = 0;
      *(_QWORD *)(v38 + 136) = 0;
      *(_BYTE *)(v38 + 144) = 0;
      *(_QWORD *)(v38 + 168) = 0;
      *(_BYTE *)(v38 + 176) = 0;
      *(_QWORD *)(v38 + 200) = 0;
      *(_BYTE *)(v38 + 208) = 0;
      *(_QWORD *)(v38 + 232) = 0;
      *(_BYTE *)(v38 + 240) = 0;
      *(_QWORD *)(v38 + 264) = 0;
      *(_BYTE *)(v38 + 272) = 0;
      *(_QWORD *)(v38 + 296) = 0;
      *(_BYTE *)(v38 + 304) = 0;
      *(_QWORD *)(v38 + 328) = 0;
      *(_BYTE *)(v38 + 336) = 0;
      *(_QWORD *)(v38 + 360) = 0;
      *(_BYTE *)(v38 + 368) = 0;
      *(_QWORD *)(v38 + 392) = 0;
      *(_BYTE *)(v38 + 400) = 0;
      *(_QWORD *)(v38 + 424) = 0x800000000LL;
      *(_QWORD *)(v38 + 528) = v38 + 544;
      *(_QWORD *)(v38 + 536) = 0x600000000LL;
      v25 = 0;
    }
    *(_QWORD *)(v23 + 8) = v24;
  }
  v48.m128i_i64[0] = v15;
  v48.m128i_i8[8] = 1;
  if ( v27 > v26 )
  {
    sub_2237220(v24 + 416, v24 + 432, v27, 12);
    v25 = *(unsigned int *)(v24 + 424);
  }
  v28 = *(_QWORD *)(v24 + 416) + 12 * v25;
  *(_QWORD *)v28 = v48.m128i_i64[0];
  *(_DWORD *)(v28 + 8) = v48.m128i_i32[2];
  ++*(_DWORD *)(v24 + 424);
  if ( v54 )
  {
LABEL_23:
    sub_157E4A0((unsigned __int8 **)&v52.m128i_i64[1], v7);
    return sub_15F7200(&v50);
  }
LABEL_31:
  if ( v56 )
  {
    v33 = sub_168B9E0(&v50);
    v34 = v51;
    if ( v51 )
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
    v48.m128i_i64[0] = v34;
    v35 = sub_1587BC0(v33, v48.m128i_i64, v29, v30, v31, v32);
    sub_157E4A0((unsigned __int8 **)(*v35 + 32LL * v55 + 8), v7);
  }
  return sub_15F7200(&v50);
}
