unsigned __int64 __fastcall sub_1C09850(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 v17; // r14
  char v18; // bp
  int v19; // r13d
  __int64 v20; // rbx
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  char v26; // r13
  int v27; // r14d
  __int64 v28; // rbp
  char v29; // al
  char v30; // r13
  __int64 v31; // rax
  unsigned __int8 v32; // al
  unsigned __int64 v33; // r13
  unsigned __int64 v35; // r14
  char v36; // dl
  unsigned __int64 v37; // rax
  int v38; // r13d
  __int64 v39; // r14
  __int64 v40; // rbp
  unsigned __int64 *i; // r12
  __int64 v42; // r9
  unsigned __int64 v43; // r9
  _BYTE *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // rax
  __int64 v51; // r8
  _QWORD *v52; // rdi
  unsigned __int8 v53; // dl
  unsigned __int64 v54; // rax
  __m128i si128; // xmm0
  _QWORD *v56; // rdi
  unsigned int v57; // [rsp+4h] [rbp-104h]
  __m128 v61; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+30h] [rbp-D8h]
  __int64 v63; // [rsp+38h] [rbp-D0h]
  __int64 v64; // [rsp+40h] [rbp-C8h] BYREF
  int v65; // [rsp+48h] [rbp-C0h]
  __int64 v66; // [rsp+50h] [rbp-B8h]
  __m128i v67; // [rsp+60h] [rbp-A8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-98h]
  __int128 v69; // [rsp+80h] [rbp-88h]
  unsigned __int64 v70; // [rsp+90h] [rbp-78h] BYREF
  char v71; // [rsp+98h] [rbp-70h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-68h]
  char v73; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-58h]
  char v75; // [rsp+B8h] [rbp-50h]
  __int64 v76; // [rsp+C0h] [rbp-48h]
  char v77; // [rsp+C8h] [rbp-40h]

  v57 = a2;
  v10 = (__int64 *)(a1[15].m128_u64[1] + 22888);
  v11 = sub_C1D490(a6, a2, a3, a4);
  v61.m128_u64[0] = sub_B61960(v10, v11);
  if ( v61.m128_u64[0] )
  {
    v15 = sub_C00A40(a4, v11, v12, v13, v14);
    v16 = (_QWORD *)a1[15].m128_u64[1];
    v17 = *(_QWORD *)(a4 + 8);
    v18 = *(_BYTE *)(a4 + 1);
    v19 = v15;
    v20 = sub_EEE9A0(24, v16, 8u);
    *(_WORD *)v20 = *(_WORD *)v20 & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
      sub_EE9B50(26);
    v21 = *(_BYTE *)(v20 + 1);
    *(_BYTE *)(v20 + 2) &= 0xF0u;
    *(_QWORD *)(v20 + 8) = v17;
    *(_DWORD *)(v20 + 4) = v19;
    *(_BYTE *)(v20 + 1) = v21 & 1 | v18 & 0x3E;
    *(_QWORD *)(v20 + 16) = a4;
    v22 = sub_B62360(v20);
    *(_BYTE *)(v20 + 1) = ((_BYTE)v22 << 6) | *(_BYTE *)(v20 + 1) & 0x3F;
    v23 = *(_BYTE *)(v20 + 2) & 0xF8;
    *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & 0xF8 | ((unsigned __int8)v22 >> 2) & 7;
    v25 = sub_C00A40(a5, (__int64)v16, v23, (unsigned int)(v22 << 6), v24);
    v26 = *(_BYTE *)(a5 + 1);
    v27 = v25;
    v62 = *(_QWORD *)(a5 + 8);
    v28 = sub_EEE9A0(24, (_QWORD *)a1[15].m128_u64[1], 8u);
    *(_WORD *)v28 = *(_WORD *)v28 & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
      sub_EE9B50(26);
    v29 = *(_BYTE *)(v28 + 1);
    *(_BYTE *)(v28 + 2) &= 0xF0u;
    *(_DWORD *)(v28 + 4) = v27;
    v30 = v29 & 1 | v26 & 0x3E;
    v31 = v62;
    *(_BYTE *)(v28 + 1) = v30;
    *(_QWORD *)(v28 + 8) = v31;
    *(_QWORD *)(v28 + 16) = a5;
    v32 = sub_B62360(v28);
    *(_BYTE *)(v28 + 1) = (v32 << 6) | *(_BYTE *)(v28 + 1) & 0x3F;
    *(_BYTE *)(v28 + 2) = *(_BYTE *)(v28 + 2) & 0xF8 | (v32 >> 2) & 7;
    v33 = sub_1C07820(a1, v57, 14, a3, (__int64 *)v20, v28, a7, a8, 1u, 1, a6);
    if ( v33 != 1 )
    {
      v35 = sub_1C07820(a1, v57, 10, a3, (__int64 *)v20, v28, a7, a8, 1u, 1, a6);
      if ( v35 != 1 )
      {
        v36 = *(_BYTE *)(v61.m128_u64[0] + 112);
        v37 = 0;
        if ( v36 )
          goto LABEL_11;
        v37 = sub_1C07820(a1, v57, 10, a3, (__int64 *)v28, v20, a7, a8, 1u, 1, a6);
        if ( v37 != 1 )
        {
          v36 = *(_BYTE *)(v61.m128_u64[0] + 112);
LABEL_11:
          v70 = v33;
          if ( v36 == 2 )
          {
            v71 = 0;
            v38 = 2;
            v72 = v35;
            v73 = 2;
          }
          else
          {
            v71 = 1;
            v72 = v35;
            v73 = 2;
            v38 = (v36 == 0) + 2;
          }
          v74 = v37;
          v75 = 3;
          v76 = 0;
          v77 = 4;
          v62 = v20;
          v39 = 0;
          v63 = v28;
          v40 = v61.m128_u64[0];
          for ( i = &v70 + 2 * v38; ; i -= 2 )
          {
            v44 = sub_B614A0(v40, *((_BYTE *)i + 8));
            if ( !v44 )
              break;
            v45 = *((_QWORD *)v44 + 1);
            v67 = 0;
            v65 = 0;
            v64 = 0;
            *(_OWORD *)ptr = 0;
            v69 = 0;
            v66 = 0;
            v46 = sub_190AE60((__int64)a1, v67.m128i_i64, (__int64)&v64, v45, 0, 0, (__m128i)0LL, a8, 0);
            if ( HIDWORD(ptr[1]) )
            {
              v61.m128_u64[0] = v46;
              free(ptr[0]);
              v46 = v61.m128_u64[0];
            }
            if ( v46 == 1 )
              return 1;
            v42 = v39;
            v39 = v46;
            v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
            if ( v43 )
            {
              v39 = sub_1923BC0(
                      (__int64)a1,
                      v57,
                      v57,
                      *i & 0xFFFFFFFFFFFFFFFELL,
                      v46 & 0xFFFFFFFFFFFFFFFELL,
                      v43,
                      (__m128)0LL,
                      a8);
              if ( v39 == 1 )
                return 1;
            }
            if ( --v38 == -1 )
            {
              v47 = a1[122].m128_u32[0];
              v48 = a1[122].m128_u32[1];
              if ( a1[121].m128_u64[1] == __PAIR64__(v48, v47) )
              {
                v48 = 0;
                v47 = 0;
              }
              v61.m128_u64[0] = v62;
              v49 = v39 & 0xFFFFFFFFFFFFFFFELL;
              v50 = (v48 << 32) | v47;
              v51 = *(_QWORD *)(v49 + 8);
              v61.m128_u64[0] = v63;
              v52 = (_QWORD *)a1[15].m128_u64[1];
              v53 = *(_BYTE *)(v49 + 1);
              v61 = _mm_loadh_ps((const double *)v61.m128_u64);
              v54 = sub_C09F10(v52, a4, a5, 9, v51, (v53 >> 1) & 3, (v53 >> 3) & 7, v57, v50);
              si128 = _mm_load_si128((const __m128i *)&v61);
              ptr[0] = (void *)v49;
              v56 = (_QWORD *)a1[15].m128_u64[1];
              v67 = si128;
              return sub_C0B960(v56, v54, &v67, 3, 2);
            }
          }
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}
