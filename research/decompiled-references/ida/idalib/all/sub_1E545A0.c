__int64 __fastcall sub_1E545A0(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int32 a4, __m128 a5, double a6)
{
  __int64 v8; // rdi
  __int32 v9; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int32 v17; // r14d
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int32 v21; // edx
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm1
  __int32 v25; // eax
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // r13
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // r15
  __int64 v48; // r13
  void *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r15
  void *v54; // rdi
  __int32 v55; // [rsp+4h] [rbp-F4h]
  __int64 v56; // [rsp+8h] [rbp-F0h]
  __int64 v57; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v58; // [rsp+24h] [rbp-D4h]
  int v59; // [rsp+2Ch] [rbp-CCh]
  __int64 *v60[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+40h] [rbp-B8h]
  __int64 v62; // [rsp+50h] [rbp-A8h]
  __int64 v63; // [rsp+58h] [rbp-A0h]
  char v64; // [rsp+A8h] [rbp-50h]
  unsigned int v65; // [rsp+B0h] [rbp-48h]
  char v66; // [rsp+B4h] [rbp-44h]

  v8 = a3->m128i_i64[1];
  v9 = a3->m128i_i32[0];
  if ( !v8 )
  {
    *(_DWORD *)a1 = v9;
    v23 = a3[1].m128i_i64[0];
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = v23;
    sub_E90750(a1 + 24, &a3[1].m128i_i64[1]);
    v24 = _mm_loadu_si128(a3 + 3);
    *(_DWORD *)(a1 + 64) = a3[4].m128i_i32[0];
    v25 = a3[4].m128i_i32[1];
    *(__m128i *)(a1 + 48) = v24;
    *(_DWORD *)(a1 + 68) = v25;
    return a1;
  }
  if ( v9 == 1 )
  {
    v22 = sub_1E53EF0(a2, a3->m128i_u64[1], a4, 0, *(double *)a5.m128_u64);
    if ( v22 == 1 )
      goto LABEL_10;
    v21 = a3[4].m128i_i32[0];
    v20 = v22 & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)a1 = a3->m128i_i32[0];
LABEL_17:
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = v21;
    *(_DWORD *)(a1 + 68) = 0;
    return a1;
  }
  if ( !v9 )
  {
    sub_1E5F010(v8, v60);
    if ( !v60[0] )
      goto LABEL_10;
    v19 = sub_1E509C0(a2, v60[0], a4, 0, a5);
    if ( !v19 )
      goto LABEL_10;
    v20 = sub_1E61050(a2, *v19, v19, *(double *)a5.m128_u64, a6);
    v21 = a3[4].m128i_i32[0];
    *(_DWORD *)a1 = a3->m128i_i32[0];
    goto LABEL_17;
  }
  v12 = a3->m128i_i64[1];
  sub_F22A90(v60, v12);
  if ( (unsigned __int8)sub_F235C0((__int64 *)v60, v12, v13, v14, v15, v16) )
  {
    sub_1CB44E0((__m128i *)a1, a3, a4);
    return a1;
  }
  v17 = a3[4].m128i_i32[0];
  v55 = v17;
  if ( a3[1].m128i_i64[1] )
    v55 = a3[1].m128i_i32[0];
  sub_168B9F0((__int64)v60, (__int64 *)(a2 + 8), a4, 0x12ACu, 0);
  if ( v64 )
  {
    v26 = v62;
    if ( !v62 )
    {
      v42 = v63;
      v43 = *(_DWORD *)(v63 + 14976);
      if ( v43 )
      {
        v45 = (unsigned int)(v43 - 1);
        *(_DWORD *)(v63 + 14976) = v45;
        v26 = *(_QWORD *)(v42 + 8 * v45 + 14848);
        v46 = *(unsigned int *)(v26 + 536);
        v47 = *(_QWORD *)(v26 + 528);
        *(_BYTE *)v26 = 0;
        *(_DWORD *)(v26 + 424) = 0;
        v48 = v47 + (v46 << 6);
        while ( v47 != v48 )
        {
          while ( 1 )
          {
            v48 -= 64;
            v49 = *(void **)(v48 + 24);
            if ( v49 == (void *)(v48 + 40) )
              break;
            operator delete(v49);
            if ( v47 == v48 )
              goto LABEL_38;
          }
        }
LABEL_38:
        v27 = *(unsigned int *)(v26 + 424);
        v28 = *(unsigned int *)(v26 + 428);
        *(_DWORD *)(v26 + 536) = 0;
        v29 = v27 + 1;
      }
      else
      {
        v44 = operator new(0x3A0u);
        v28 = 8;
        v29 = 1;
        v26 = v44;
        *(_BYTE *)v44 = 0;
        *(_QWORD *)(v44 + 96) = v44 + 112;
        *(_QWORD *)(v44 + 128) = v44 + 144;
        *(_QWORD *)(v44 + 160) = v44 + 176;
        *(_QWORD *)(v44 + 192) = v44 + 208;
        *(_QWORD *)(v44 + 224) = v44 + 240;
        *(_QWORD *)(v44 + 256) = v44 + 272;
        *(_QWORD *)(v44 + 288) = v44 + 304;
        *(_QWORD *)(v44 + 320) = v44 + 336;
        *(_QWORD *)(v44 + 352) = v44 + 368;
        *(_QWORD *)(v44 + 384) = v44 + 400;
        *(_QWORD *)(v44 + 416) = v44 + 432;
        *(_QWORD *)(v44 + 104) = 0;
        *(_BYTE *)(v44 + 112) = 0;
        *(_QWORD *)(v44 + 136) = 0;
        *(_BYTE *)(v44 + 144) = 0;
        *(_QWORD *)(v44 + 168) = 0;
        *(_BYTE *)(v44 + 176) = 0;
        *(_QWORD *)(v44 + 200) = 0;
        *(_BYTE *)(v44 + 208) = 0;
        *(_QWORD *)(v44 + 232) = 0;
        *(_BYTE *)(v44 + 240) = 0;
        *(_QWORD *)(v44 + 264) = 0;
        *(_BYTE *)(v44 + 272) = 0;
        *(_QWORD *)(v44 + 296) = 0;
        *(_BYTE *)(v44 + 304) = 0;
        *(_QWORD *)(v44 + 328) = 0;
        *(_BYTE *)(v44 + 336) = 0;
        *(_QWORD *)(v44 + 360) = 0;
        *(_BYTE *)(v44 + 368) = 0;
        *(_QWORD *)(v44 + 392) = 0;
        *(_BYTE *)(v44 + 400) = 0;
        *(_QWORD *)(v44 + 424) = 0x800000000LL;
        *(_QWORD *)(v44 + 528) = v44 + 544;
        *(_QWORD *)(v44 + 536) = 0x600000000LL;
        v27 = 0;
      }
      v62 = v26;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( v66 )
  {
    v35 = sub_168B9E0(v60);
    v36 = v61;
    if ( v61 )
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
    v57 = v36;
    v37 = sub_1587BC0(v35, &v57, v31, v32, v33, v34);
    v38 = *v37 + 32LL * v65;
    v26 = *(_QWORD *)(v38 + 8);
    if ( !v26 )
    {
      v39 = *(_QWORD *)(v38 + 16);
      v40 = *(_DWORD *)(v39 + 14976);
      if ( v40 )
      {
        v50 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v39 + 14976) = v50;
        v26 = *(_QWORD *)(v39 + 8 * v50 + 14848);
        v51 = *(unsigned int *)(v26 + 536);
        v52 = *(_QWORD *)(v26 + 528);
        *(_BYTE *)v26 = 0;
        *(_DWORD *)(v26 + 424) = 0;
        v53 = v52 + (v51 << 6);
        while ( v52 != v53 )
        {
          while ( 1 )
          {
            v53 -= 64;
            v54 = *(void **)(v53 + 24);
            if ( v54 == (void *)(v53 + 40) )
              break;
            v56 = v52;
            operator delete(v54);
            v52 = v56;
            if ( v56 == v53 )
              goto LABEL_43;
          }
        }
LABEL_43:
        v27 = *(unsigned int *)(v26 + 424);
        v28 = *(unsigned int *)(v26 + 428);
        *(_DWORD *)(v26 + 536) = 0;
        v29 = v27 + 1;
      }
      else
      {
        v41 = operator new(0x3A0u);
        v28 = 8;
        v29 = 1;
        v26 = v41;
        *(_BYTE *)v41 = 0;
        *(_QWORD *)(v41 + 96) = v41 + 112;
        *(_QWORD *)(v41 + 128) = v41 + 144;
        *(_QWORD *)(v41 + 160) = v41 + 176;
        *(_QWORD *)(v41 + 192) = v41 + 208;
        *(_QWORD *)(v41 + 224) = v41 + 240;
        *(_QWORD *)(v41 + 256) = v41 + 272;
        *(_QWORD *)(v41 + 288) = v41 + 304;
        *(_QWORD *)(v41 + 320) = v41 + 336;
        *(_QWORD *)(v41 + 352) = v41 + 368;
        *(_QWORD *)(v41 + 384) = v41 + 400;
        *(_QWORD *)(v41 + 416) = v41 + 432;
        *(_QWORD *)(v41 + 104) = 0;
        *(_BYTE *)(v41 + 112) = 0;
        *(_QWORD *)(v41 + 136) = 0;
        *(_BYTE *)(v41 + 144) = 0;
        *(_QWORD *)(v41 + 168) = 0;
        *(_BYTE *)(v41 + 176) = 0;
        *(_QWORD *)(v41 + 200) = 0;
        *(_BYTE *)(v41 + 208) = 0;
        *(_QWORD *)(v41 + 232) = 0;
        *(_BYTE *)(v41 + 240) = 0;
        *(_QWORD *)(v41 + 264) = 0;
        *(_BYTE *)(v41 + 272) = 0;
        *(_QWORD *)(v41 + 296) = 0;
        *(_BYTE *)(v41 + 304) = 0;
        *(_QWORD *)(v41 + 328) = 0;
        *(_BYTE *)(v41 + 336) = 0;
        *(_QWORD *)(v41 + 360) = 0;
        *(_BYTE *)(v41 + 368) = 0;
        *(_QWORD *)(v41 + 392) = 0;
        *(_BYTE *)(v41 + 400) = 0;
        *(_QWORD *)(v41 + 424) = 0x800000000LL;
        *(_QWORD *)(v41 + 528) = v41 + 544;
        *(_QWORD *)(v41 + 536) = 0x600000000LL;
        v27 = 0;
      }
      *(_QWORD *)(v38 + 8) = v26;
      goto LABEL_22;
    }
LABEL_21:
    v27 = *(unsigned int *)(v26 + 424);
    v28 = *(unsigned int *)(v26 + 428);
    v29 = v27 + 1;
LABEL_22:
    LOBYTE(v59) = 1;
    v58 = __PAIR64__(v17, v55);
    if ( v29 > v28 )
    {
      sub_2237220(v26 + 416, v26 + 432, v29, 12);
      v27 = *(unsigned int *)(v26 + 424);
    }
    v30 = *(_QWORD *)(v26 + 416) + 12 * v27;
    *(_QWORD *)v30 = v58;
    *(_DWORD *)(v30 + 8) = v59;
    ++*(_DWORD *)(v26 + 424);
  }
  sub_15F7200(v60);
LABEL_10:
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  return a1;
}
