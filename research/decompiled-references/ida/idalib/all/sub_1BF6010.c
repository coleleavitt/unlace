__m128i *__fastcall sub_1BF6010(
        __m128i *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int32 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char v16; // r13
  int v17; // eax
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int32 v23; // eax
  __int64 v24; // rax
  const double *v25; // rcx
  __int64 v26; // rax
  const double *v27; // rbp
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // r9
  char v32; // al
  unsigned __int64 v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // r9
  unsigned int v36; // r14d
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // r8
  _QWORD *v42; // rax
  unsigned __int64 v43; // r10
  __int64 v44; // r12
  unsigned __int64 v45; // rax
  char v46; // rdx^5
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  char v49; // al
  __m128i *v50; // rdi
  __m128i *v51; // rdi
  __int64 v52; // [rsp-10h] [rbp-1F38h]
  __int64 v53; // [rsp-8h] [rbp-1F30h]
  __m128i v54; // [rsp+0h] [rbp-1F28h] BYREF
  unsigned __int64 v55; // [rsp+10h] [rbp-1F18h]
  __int64 v56; // [rsp+18h] [rbp-1F10h]
  __int64 v57; // [rsp+28h] [rbp-1F00h] BYREF
  const double *v58; // [rsp+30h] [rbp-1EF8h] BYREF
  __int64 v59; // [rsp+38h] [rbp-1EF0h]
  _QWORD v60[338]; // [rsp+40h] [rbp-1EE8h] BYREF
  int v61; // [rsp+AD0h] [rbp-1458h]
  char v62; // [rsp+AD4h] [rbp-1454h]
  _QWORD v63[17]; // [rsp+AD8h] [rbp-1450h] BYREF
  int v64; // [rsp+B60h] [rbp-13C8h]
  __int64 v65; // [rsp+B68h] [rbp-13C0h]
  __int64 v66; // [rsp+B70h] [rbp-13B8h]
  _QWORD *v67; // [rsp+B78h] [rbp-13B0h]
  __int64 v68; // [rsp+B80h] [rbp-13A8h]
  _QWORD v69[6]; // [rsp+B88h] [rbp-13A0h] BYREF
  _QWORD v70[2]; // [rsp+BB8h] [rbp-1370h] BYREF
  int v71; // [rsp+BC8h] [rbp-1360h]
  int v72; // [rsp+BCCh] [rbp-135Ch]
  __int64 v73; // [rsp+BD0h] [rbp-1358h]
  char v74; // [rsp+BD8h] [rbp-1350h]
  int v75; // [rsp+BDCh] [rbp-134Ch]
  int v76; // [rsp+1EE0h] [rbp-48h]

  v12 = a1[1].m128i_i64[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
  a1->m128i_i32[0] = 6;
  a1->m128i_i64[1] = 0;
  a1[1].m128i_i64[0] = v12;
  a1[3].m128i_i64[1] = 0;
  if ( !(_BYTE)a5 )
  {
    LODWORD(v55) = a9;
    v54.m128i_i32[0] = a6;
    v16 = 0;
    v17 = sub_C00A40(a3, (__int64)a2, a9, a4, a5);
    v58 = (const double *)v60;
    v60[336] = v63;
    v67 = v69;
    v59 = 0x1000000000LL;
    v19 = a3;
    v69[4] = v70;
    v60[337] = 16;
    v61 = 0;
    v62 = 1;
    v63[16] = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v68 = 0x400000000LL;
    v69[5] = 0;
    v70[0] = 0;
    v70[1] = 1;
    v71 = v17;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v20 = sub_1BF54C0(a2, a3, a4, a1 + 1, (__int64)&v58, v54.m128i_i32[0], a7, a8, (unsigned __int8)a9);
    v21 = v52;
    v22 = v53;
    switch ( v20 )
    {
      case 1:
        sub_1BCD210((__int64)a1, 0, a3, a4);
        break;
      case 0:
        goto LABEL_38;
      case 2:
        v23 = a1->m128i_i32[0];
        if ( (a1->m128i_i32[0] & 0x7FFFFFFF) != 3 )
        {
          a1[2].m128i_i64[1] = 0x400000000LL;
          a1->m128i_i32[0] = v23 & 0x80000000 | 3;
          a1[2].m128i_i64[0] = (__int64)a1[3].m128i_i64;
        }
        v24 = *(_QWORD *)(a3 + 8);
        v25 = v58;
        a1[1].m128i_i64[1] = a4;
        a1[1].m128i_i64[0] = v24;
        v26 = (unsigned int)v59;
        if ( 21LL * (unsigned int)v59 )
        {
          v27 = v25;
          do
          {
            if ( ((_BYTE)v27[13] & 2) != 0 )
            {
              v28 = a1[2].m128i_u32[3];
              v54.m128i_i64[0] = (_QWORD)v27[1] & 0xFFFFFFFFFFFFFFF8LL;
              v29 = a1[2].m128i_u32[2];
              v30 = (__m128i)_mm_loadh_ps(v27);
              if ( v29 + 1 > v28 )
              {
                v54 = v30;
                sub_2237220(&a1[2], &a1[3], v29 + 1, 16);
                v29 = a1[2].m128i_u32[2];
                v30 = _mm_load_si128(&v54);
              }
              *(__m128i *)(a1[2].m128i_i64[0] + 16 * v29) = v30;
              v25 = v58;
              v26 = (unsigned int)v59;
              ++a1[2].m128i_i32[2];
            }
            v27 += 21;
          }
          while ( v27 != &v25[21 * v26] );
        }
        break;
      case 3:
LABEL_38:
        if ( (a1->m128i_i32[0] & 0x7FFFFFFF) == 3 )
        {
          v51 = (__m128i *)a1[2].m128i_i64[0];
          if ( v51 != &a1[3] )
            free(v51);
        }
        v31 = a1[8].m128i_i64[1];
        a1->m128i_i32[0] = a1->m128i_i32[0] & 0x80000000 | 2;
        if ( (*(_BYTE *)(v31 + 28) & 0x7F) == 0x26 )
        {
          v57 = 0;
          if ( (*(_WORD *)a3 & 0x1FF) == 0x35
            && (unsigned int)((__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3) == 1
            && (v19 = v31,
                v54.m128i_i64[0] = v31,
                v32 = sub_1844E80((__int64)a2, v31, v21, v22),
                v31 = v54.m128i_i64[0],
                !v32) )
          {
            v16 = 1;
            v33 = **(_QWORD **)(a3 + 16);
            v57 = *(_QWORD *)(v33 + 8);
            v34 = sub_EEB7E0(v33, v19, *(double *)a7.m128_u64);
            v35 = v54.m128i_i64[0];
            v36 = v34;
          }
          else
          {
            v37 = *(_QWORD *)(a3 + 8);
            v54.m128i_i64[0] = v31;
            v57 = v37;
            v38 = sub_EEB7E0(a3, v19, *(double *)a7.m128_u64);
            v35 = v54.m128i_i64[0];
            v36 = v38;
          }
          v54.m128i_i64[0] = v35;
          v39 = sub_6D5440(&v57);
          v40 = v54.m128i_i64[0];
          v41 = *(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v39) & 7;
          v42 = (_QWORD *)(*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
          v43 = *v42 & 0xFFFFFFFFFFFFFFF0LL;
          if ( v41 == v43
            || (v48 = *v42 & 0xFFFFFFFFFFFFFFF0LL,
                v56 = v54.m128i_i64[0],
                v55 = v43,
                v54.m128i_i64[0] = v41,
                v49 = sub_183BD10((__int64)a2, v36, v41, v48, v41, v40),
                v41 = v54.m128i_i64[0],
                v43 = v55,
                v40 = v56,
                v49) )
          {
            v44 = a1[9].m128i_i64[0];
            if ( (a1->m128i_i32[0] & 0x7FFFFFFF) == 3 )
            {
              v50 = (__m128i *)a1[2].m128i_i64[0];
              if ( v50 != &a1[3] )
              {
                v56 = v43;
                v55 = v41;
                v54.m128i_i64[0] = v40;
                free(v50);
                v43 = v56;
                v41 = v55;
                v40 = v54.m128i_i64[0];
              }
            }
            v45 = a1[1].m128i_i64[0] & 0xFFFFFC0400000000LL;
            a1[2].m128i_i64[0] = a4;
            a1->m128i_i32[0] &= 0x80000000;
            v46 = BYTE5(v45);
            a1[1].m128i_i64[0] = v45 | 0x2000000000LL;
            v47 = v57;
            a1[2].m128i_i64[1] = a4;
            a1[1].m128i_i64[1] = v47;
            a1[3].m128i_i64[0] = a4;
            a1[3].m128i_i64[1] = v40;
            a1[1].m128i_i8[5] = v46 & 0xF8 | (4 * (v16 & 1));
            a1[4].m128i_i64[0] = v44;
            if ( v41 != v43 )
              a1[1].m128i_i8[1] = 17;
          }
        }
        break;
    }
    sub_17A20D0((__int64)&v58);
    return a1;
  }
  a1->m128i_i32[0] = 5;
  v13 = *(_QWORD *)(a3 + 8);
  a1[1].m128i_i32[2] = 0;
  a1[2].m128i_i64[0] = v13;
  a1[2].m128i_i64[1] = a4;
  a1[1].m128i_i64[0] = a3;
  return a1;
}
