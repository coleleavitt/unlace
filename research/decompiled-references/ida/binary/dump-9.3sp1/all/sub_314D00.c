__int64 __fastcall sub_314D00(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int32 v10; // ecx
  __int64 *v11; // rdx
  __int32 v12; // ecx
  __int64 *v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  char v23; // bp
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int32 v26; // eax
  __int64 v27; // rbp
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  __m128i v34; // xmm2
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  __m128i v38; // xmm2
  __int32 v39; // eax
  __int64 v40; // rbp
  __int64 v41; // rax
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __m128i v45; // xmm1
  char v46; // al
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __m128i v58; // xmm1
  char v59; // al
  __m128i v60; // xmm0
  __m128i si128; // xmm2
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128i v64; // xmm0
  __m128i v65; // xmm2
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  char v69; // [rsp+0h] [rbp-188h]
  __m256i *v70; // [rsp+0h] [rbp-188h]
  __m256i *v71; // [rsp+0h] [rbp-188h]
  unsigned __int8 v72; // [rsp+0h] [rbp-188h]
  unsigned __int64 v73; // [rsp+8h] [rbp-180h]
  __m256i *v74; // [rsp+8h] [rbp-180h]
  __m256i *v75; // [rsp+8h] [rbp-180h]
  unsigned __int64 v76; // [rsp+8h] [rbp-180h]
  unsigned __int64 v77; // [rsp+10h] [rbp-178h]
  __int64 v78; // [rsp+10h] [rbp-178h]
  __int64 v79; // [rsp+10h] [rbp-178h]
  unsigned __int8 v80; // [rsp+10h] [rbp-178h]
  __int64 v81; // [rsp+10h] [rbp-178h]
  unsigned __int64 v82; // [rsp+10h] [rbp-178h]
  int v83; // [rsp+18h] [rbp-170h]
  __int64 *v84; // [rsp+18h] [rbp-170h]
  int v85; // [rsp+20h] [rbp-168h]
  unsigned __int64 v86; // [rsp+30h] [rbp-158h]
  unsigned __int64 v87; // [rsp+38h] [rbp-150h]
  _QWORD v88[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v89[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v90[2]; // [rsp+60h] [rbp-128h] BYREF
  _QWORD v91[2]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v92[2]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v93[2]; // [rsp+90h] [rbp-F8h] BYREF
  __m256i v94; // [rsp+A0h] [rbp-E8h] BYREF
  __m256i v95; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v96; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v97; // [rsp+F0h] [rbp-98h] BYREF
  __m256i v98; // [rsp+100h] [rbp-88h] BYREF
  __m128i v99; // [rsp+120h] [rbp-68h]
  __m128i v100; // [rsp+130h] [rbp-58h]
  unsigned __int64 v101; // [rsp+148h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  v4 = a3;
  switch ( a1->m128i_i32[0] & 0xF )
  {
    case 0:
    case 1:
    case 8:
      if ( a1 != a2 )
      {
        sub_312B80((__int64)a2);
        sub_312C40((__int64)a2, (__int64)a1, v6, v7);
      }
      a2->m128i_i32[1] = a1->m128i_i32[1] - v4;
      a1->m128i_i32[1] = v4;
      return 1;
    case 2:
      v9 = a1[1].m128i_i64[0];
      v10 = a1->m128i_i32[1];
      v96.m128i_i32[1] = a3;
      v11 = (__int64 *)a1->m128i_i64[1];
      v96.m128i_i32[0] = 2;
      v12 = v10 - v4;
      v96.m128i_i64[1] = 0;
      v98.m256i_i32[1] = v12;
      v98.m256i_i32[0] = 2;
      memset(&v98.m256i_u64[1], 0, 24);
      v84 = &v11[2 * v9];
      v97 = 0;
      if ( v84 == v11 )
      {
        v53 = nullptr;
      }
      else
      {
        v13 = v11;
        v69 = 8 * v4;
        do
        {
          v21 = *v13;
          v22 = (unsigned __int64)*v13 >> v69;
          if ( v4 == 8 )
          {
            v15 = *v13;
            v14 = -1;
          }
          else
          {
            v14 = (1LL << (8 * (unsigned __int8)v4)) - 1;
            v15 = v21 & v14;
          }
          v16 = v13[1] + v21 - 1;
          v17 = v14 & v16;
          v18 = v16 >> v69;
          if ( v22 == v18 )
          {
            v81 = v15;
            v76 = v17;
            v88[0] = (unsigned __int64)*v13 >> v69;
            v88[1] = 1;
            sub_316BB0(&v98.m256i_u64[1], v88);
            v89[0] = v81;
            v89[1] = v76 - v81 + 1;
            sub_316BB0(&v96.m128i_u64[1], v89);
          }
          else
          {
            if ( v15 != 0 && v22 + 1 == v18 && v17 != v14 )
            {
              v87 = v17;
              v86 = v18;
              v82 = (unsigned __int64)*v13 >> v69;
              v90[0] = v15;
              v90[1] = v14 + 1 - v15;
              sub_316BB0(&v96.m128i_u64[1], v90);
              v91[0] = 0;
              v91[1] = v87 + 1;
              sub_316BB0(&v96.m128i_u64[1], v91);
              v20 = v82;
              v19 = v86;
            }
            else
            {
              v77 = v18;
              v73 = (unsigned __int64)*v13 >> v69;
              v92[0] = 0;
              v92[1] = v14 + 1;
              sub_316BB0(&v96.m128i_u64[1], v92);
              v19 = v77;
              v20 = v73;
            }
            v93[0] = v20;
            v93[1] = v19 + 1 - v20;
            sub_316BB0(&v98.m256i_u64[1], v93);
          }
          v13 += 2;
        }
        while ( v84 != v13 );
        v12 = v98.m256i_i32[1];
        v53 = (_QWORD *)v98.m256i_i64[1];
      }
      if ( *v53 )
        goto LABEL_39;
      v66 = v53[1];
      v67 = -1;
      v68 = v66 - 1;
      if ( v12 != 8 )
        v67 = (1LL << (8 * (unsigned __int8)v12)) - 1;
      if ( v68 != v67 )
      {
LABEL_39:
        v54 = v96.m128i_i64[1];
        if ( *(_QWORD *)v96.m128i_i64[1] )
          goto LABEL_43;
        goto LABEL_40;
      }
      sub_312B80((__int64)&v98);
      v54 = v96.m128i_i64[1];
      v98.m256i_i32[0] = 1;
      if ( !*(_QWORD *)v96.m128i_i64[1] )
      {
LABEL_40:
        v55 = *(_QWORD *)(v54 + 8);
        v56 = -1;
        v57 = v55 - 1;
        if ( v4 != 8 )
          v56 = (1LL << (8 * (unsigned __int8)v4)) - 1;
        if ( v57 == v56 )
        {
          sub_312B80((__int64)&v96);
          v96.m128i_i32[0] = 1;
          if ( v98.m256i_i32[0] == 1 )
          {
            v59 = 0;
            goto LABEL_45;
          }
          goto LABEL_44;
        }
LABEL_43:
        if ( v98.m256i_i32[0] == 1 )
          goto LABEL_51;
LABEL_44:
        v58 = _mm_loadu_si128(a2);
        v59 = 1;
        v60 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v98);
        si128 = _mm_load_si128((const __m128i *)&v98.m256i_u64[2]);
        *(__m128i *)v98.m256i_i8 = v58;
        a2[1] = si128;
        v62 = _mm_loadu_si128(a1);
        v63 = _mm_load_si128(&v96);
        *(__m128i *)&v98.m256i_u64[2] = v60;
        v64 = _mm_loadu_si128(a1 + 1);
        *a1 = v63;
        v65 = _mm_load_si128(&v97);
        v99 = v62;
        v100 = v64;
        a1[1] = v65;
        v96 = v62;
        v97 = v64;
        goto LABEL_45;
      }
LABEL_51:
      if ( v96.m128i_i32[0] != 1 )
        goto LABEL_44;
      v59 = 0;
LABEL_45:
      v72 = v59;
      sub_312B80((__int64)&v98);
      sub_312B80((__int64)&v96);
      return v72;
    case 5:
      v23 = 8 * a3;
      a2->m128i_i32[1] = a1->m128i_i32[1] - a3;
      sub_313910(
        (__int64)a2,
        (unsigned __int64)a1->m128i_i64[1] >> (8 * (unsigned __int8)a3),
        (unsigned __int64)a1[1].m128i_i64[0] >> (8 * (unsigned __int8)a3));
      a1->m128i_i32[1] = v4;
      v24 = a1[1].m128i_u64[0];
      v25 = -1;
      if ( v4 != 8 )
      {
        v25 = (1LL << v23) - 1;
        v24 &= v25;
      }
      sub_313910((__int64)a1, a1->m128i_i64[1] & v25, v24);
      return 1;
    case 6:
      v26 = a1->m128i_i32[1];
      v27 = a1->m128i_i64[1];
      v94.m256i_i32[1] = a3;
      v94.m256i_i32[0] = 1;
      v95.m256i_i32[1] = v26 - a3;
      v28 = a1[1].m128i_i64[0];
      memset(&v94.m256i_u64[1], 0, 24);
      memset(&v95.m256i_u64[1], 0, 24);
      v95.m256i_i32[0] = 1;
      v78 = v27 + 32 * v28;
      if ( v78 == v27 )
      {
        v74 = &v95;
        v70 = &v94;
      }
      else
      {
        v74 = &v95;
        v70 = &v94;
        do
        {
          sub_312C40((__int64)&v96, v27, a3, a4);
          memset(&v98.m256i_u64[1], 0, 24);
          v98.m256i_i64[0] = 0x800000000LL;
          if ( (unsigned __int8)sub_314D00(
                                  (unsigned int)&v96,
                                  (unsigned int)&v98,
                                  v4,
                                  v29,
                                  v30,
                                  v31,
                                  (__int64)v70,
                                  (_DWORD)v74,
                                  v78,
                                  v83,
                                  v85) )
          {
            sub_3147B0((__int64)v70, v96.m128i_i32);
            sub_3147B0((__int64)v74, v98.m256i_i32);
          }
          sub_312B80((__int64)&v98);
          sub_312B80((__int64)&v96);
          v27 += 32;
        }
        while ( v78 != v27 );
      }
      v32 = _mm_loadu_si128(a2);
      v33 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)&v95);
      v34 = _mm_load_si128((const __m128i *)&v95.m256i_u64[2]);
      *(__m128i *)v95.m256i_i8 = v32;
      a2[1] = v34;
      v35 = _mm_loadu_si128(a1);
      v36 = _mm_load_si128((const __m128i *)&v94);
      *(__m128i *)&v95.m256i_u64[2] = v33;
      v37 = _mm_loadu_si128(a1 + 1);
      *a1 = v36;
      v38 = _mm_load_si128((const __m128i *)&v94.m256i_u64[2]);
      v99 = v35;
      a1[1] = v38;
      v100 = v37;
      *(__m128i *)v94.m256i_i8 = v35;
      *(__m128i *)&v94.m256i_u64[2] = v37;
      sub_312B80((__int64)v74);
      sub_312B80((__int64)v70);
      return 1;
    case 7:
      v39 = a1->m128i_i32[1];
      v40 = a1->m128i_i64[1];
      v94.m256i_i32[0] = 0;
      v94.m256i_i32[1] = a3;
      v95.m256i_i32[1] = v39 - a3;
      v41 = a1[1].m128i_i64[0];
      v95.m256i_i32[0] = 0;
      memset(&v94.m256i_u64[1], 0, 24);
      memset(&v95.m256i_u64[1], 0, 24);
      v79 = v40 + 32 * v41;
      if ( v79 == v40 )
      {
        v75 = &v95;
        v71 = &v94;
LABEL_31:
        v45 = _mm_loadu_si128(a2);
        v46 = 1;
        v47 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v95);
        v48 = _mm_load_si128((const __m128i *)&v95.m256i_u64[2]);
        *(__m128i *)v95.m256i_i8 = v45;
        a2[1] = v48;
        v49 = _mm_loadu_si128(a1);
        v50 = _mm_load_si128((const __m128i *)&v94);
        *(__m128i *)&v95.m256i_u64[2] = v47;
        v51 = _mm_loadu_si128(a1 + 1);
        *a1 = v50;
        v52 = _mm_load_si128((const __m128i *)&v94.m256i_u64[2]);
        v99 = v49;
        v100 = v51;
        a1[1] = v52;
        *(__m128i *)v94.m256i_i8 = v49;
        *(__m128i *)&v94.m256i_u64[2] = v51;
        goto LABEL_32;
      }
      v75 = &v95;
      v71 = &v94;
      while ( 1 )
      {
        sub_312C40((__int64)&v96, v40, a3, a4);
        memset(&v98.m256i_u64[1], 0, 24);
        v98.m256i_i64[0] = 0x800000000LL;
        if ( !(unsigned __int8)sub_314D00(
                                 (unsigned int)&v96,
                                 (unsigned int)&v98,
                                 v4,
                                 v42,
                                 v43,
                                 v44,
                                 (__int64)v71,
                                 (_DWORD)v75,
                                 v79,
                                 v83,
                                 v85) )
          break;
        sub_314C00(v71->m256i_i32, v96.m128i_i32);
        sub_314C00(v75->m256i_i32, v98.m256i_i32);
        v40 += 32;
        sub_312B80((__int64)&v98);
        sub_312B80((__int64)&v96);
        if ( v79 == v40 )
          goto LABEL_31;
      }
      sub_312B80((__int64)&v98);
      sub_312B80((__int64)&v96);
      v46 = 0;
LABEL_32:
      v80 = v46;
      sub_312B80((__int64)v75);
      sub_312B80((__int64)v71);
      return v80;
    default:
      return 0;
  }
}
