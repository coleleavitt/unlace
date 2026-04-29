__int64 __fastcall sub_30F440(__m128i *a1, __m128i *a2, __int32 a3)
{
  __int64 v6; // rax
  __int32 v7; // ecx
  __int64 *v8; // rdx
  __int32 v9; // ecx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  char v20; // bp
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int32 v23; // eax
  int *v24; // rbp
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm0
  __m128i v35; // xmm2
  __int32 v36; // eax
  int *v37; // rbp
  __int64 v38; // rax
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __m128i v42; // xmm1
  char v43; // al
  __m128i v44; // xmm0
  __m128i v45; // xmm2
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i v55; // xmm1
  char v56; // al
  __m128i v57; // xmm0
  __m128i si128; // xmm2
  __m128i v59; // xmm1
  __m128i v60; // xmm2
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  char v66; // [rsp+0h] [rbp-188h]
  __m256i *v67; // [rsp+0h] [rbp-188h]
  __m256i *v68; // [rsp+0h] [rbp-188h]
  unsigned __int8 v69; // [rsp+0h] [rbp-188h]
  unsigned __int64 v70; // [rsp+8h] [rbp-180h]
  __m256i *v71; // [rsp+8h] [rbp-180h]
  __m256i *v72; // [rsp+8h] [rbp-180h]
  unsigned __int64 v73; // [rsp+8h] [rbp-180h]
  unsigned __int64 v74; // [rsp+10h] [rbp-178h]
  int *v75; // [rsp+10h] [rbp-178h]
  int *v76; // [rsp+10h] [rbp-178h]
  unsigned __int8 v77; // [rsp+10h] [rbp-178h]
  __int64 v78; // [rsp+10h] [rbp-178h]
  unsigned __int64 v79; // [rsp+10h] [rbp-178h]
  int v80; // [rsp+18h] [rbp-170h]
  __int64 *v81; // [rsp+18h] [rbp-170h]
  int v82; // [rsp+20h] [rbp-168h]
  unsigned __int64 v83; // [rsp+30h] [rbp-158h]
  unsigned __int64 v84; // [rsp+38h] [rbp-150h]
  _QWORD v85[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v86[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v87[2]; // [rsp+60h] [rbp-128h] BYREF
  _QWORD v88[2]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v89[2]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v90[2]; // [rsp+90h] [rbp-F8h] BYREF
  __m256i v91; // [rsp+A0h] [rbp-E8h] BYREF
  __m256i v92; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v93; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v94; // [rsp+F0h] [rbp-98h] BYREF
  __m256i v95; // [rsp+100h] [rbp-88h] BYREF
  __m128i v96; // [rsp+120h] [rbp-68h]
  __m128i v97; // [rsp+130h] [rbp-58h]
  unsigned __int64 v98; // [rsp+148h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  switch ( a1->m128i_i32[0] & 0xF )
  {
    case 0:
    case 1:
    case 8:
      if ( a1 != a2 )
      {
        sub_30D2C0((__int64)a2);
        sub_30D380((__int64)a2, a1->m128i_i32);
      }
      a2->m128i_i32[1] = a1->m128i_i32[1] - a3;
      a1->m128i_i32[1] = a3;
      return 1;
    case 2:
      v6 = a1[1].m128i_i64[0];
      v7 = a1->m128i_i32[1];
      v93.m128i_i32[1] = a3;
      v8 = (__int64 *)a1->m128i_i64[1];
      v93.m128i_i32[0] = 2;
      v9 = v7 - a3;
      v93.m128i_i64[1] = 0;
      v95.m256i_i32[1] = v9;
      v95.m256i_i32[0] = 2;
      memset(&v95.m256i_u64[1], 0, 24);
      v81 = &v8[2 * v6];
      v94 = 0;
      if ( v81 == v8 )
      {
        v50 = nullptr;
      }
      else
      {
        v10 = v8;
        v66 = 8 * a3;
        do
        {
          v18 = *v10;
          v19 = (unsigned __int64)*v10 >> v66;
          if ( a3 == 8 )
          {
            v12 = *v10;
            v11 = -1;
          }
          else
          {
            v11 = (1LL << (8 * (unsigned __int8)a3)) - 1;
            v12 = v18 & v11;
          }
          v13 = v10[1] + v18 - 1;
          v14 = v11 & v13;
          v15 = v13 >> v66;
          if ( v19 == v15 )
          {
            v78 = v12;
            v73 = v14;
            v85[0] = (unsigned __int64)*v10 >> v66;
            v85[1] = 1;
            sub_3112F0(&v95.m256i_u64[1], v85);
            v86[0] = v78;
            v86[1] = v73 - v78 + 1;
            sub_3112F0(&v93.m128i_u64[1], v86);
          }
          else
          {
            if ( v12 != 0 && v19 + 1 == v15 && v14 != v11 )
            {
              v84 = v14;
              v83 = v15;
              v79 = (unsigned __int64)*v10 >> v66;
              v87[0] = v12;
              v87[1] = v11 + 1 - v12;
              sub_3112F0(&v93.m128i_u64[1], v87);
              v88[0] = 0;
              v88[1] = v84 + 1;
              sub_3112F0(&v93.m128i_u64[1], v88);
              v17 = v79;
              v16 = v83;
            }
            else
            {
              v74 = v15;
              v70 = (unsigned __int64)*v10 >> v66;
              v89[0] = 0;
              v89[1] = v11 + 1;
              sub_3112F0(&v93.m128i_u64[1], v89);
              v16 = v74;
              v17 = v70;
            }
            v90[0] = v17;
            v90[1] = v16 + 1 - v17;
            sub_3112F0(&v95.m256i_u64[1], v90);
          }
          v10 += 2;
        }
        while ( v81 != v10 );
        v9 = v95.m256i_i32[1];
        v50 = (_QWORD *)v95.m256i_i64[1];
      }
      if ( *v50 )
        goto LABEL_39;
      v63 = v50[1];
      v64 = -1;
      v65 = v63 - 1;
      if ( v9 != 8 )
        v64 = (1LL << (8 * (unsigned __int8)v9)) - 1;
      if ( v65 != v64 )
      {
LABEL_39:
        v51 = v93.m128i_i64[1];
        if ( *(_QWORD *)v93.m128i_i64[1] )
          goto LABEL_43;
        goto LABEL_40;
      }
      sub_30D2C0((__int64)&v95);
      v51 = v93.m128i_i64[1];
      v95.m256i_i32[0] = 1;
      if ( !*(_QWORD *)v93.m128i_i64[1] )
      {
LABEL_40:
        v52 = *(_QWORD *)(v51 + 8);
        v53 = -1;
        v54 = v52 - 1;
        if ( a3 != 8 )
          v53 = (1LL << (8 * (unsigned __int8)a3)) - 1;
        if ( v54 == v53 )
        {
          sub_30D2C0((__int64)&v93);
          v93.m128i_i32[0] = 1;
          if ( v95.m256i_i32[0] == 1 )
          {
            v56 = 0;
            goto LABEL_45;
          }
          goto LABEL_44;
        }
LABEL_43:
        if ( v95.m256i_i32[0] == 1 )
          goto LABEL_51;
LABEL_44:
        v55 = _mm_loadu_si128(a2);
        v56 = 1;
        v57 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v95);
        si128 = _mm_load_si128((const __m128i *)&v95.m256i_u64[2]);
        *(__m128i *)v95.m256i_i8 = v55;
        a2[1] = si128;
        v59 = _mm_loadu_si128(a1);
        v60 = _mm_load_si128(&v93);
        *(__m128i *)&v95.m256i_u64[2] = v57;
        v61 = _mm_loadu_si128(a1 + 1);
        *a1 = v60;
        v62 = _mm_load_si128(&v94);
        v96 = v59;
        v97 = v61;
        a1[1] = v62;
        v93 = v59;
        v94 = v61;
        goto LABEL_45;
      }
LABEL_51:
      if ( v93.m128i_i32[0] != 1 )
        goto LABEL_44;
      v56 = 0;
LABEL_45:
      v69 = v56;
      sub_30D2C0((__int64)&v95);
      sub_30D2C0((__int64)&v93);
      return v69;
    case 5:
      v20 = 8 * a3;
      a2->m128i_i32[1] = a1->m128i_i32[1] - a3;
      sub_30E050(
        (__int64)a2,
        (unsigned __int64)a1->m128i_i64[1] >> (8 * (unsigned __int8)a3),
        (unsigned __int64)a1[1].m128i_i64[0] >> (8 * (unsigned __int8)a3));
      a1->m128i_i32[1] = a3;
      v21 = a1[1].m128i_u64[0];
      v22 = -1;
      if ( a3 != 8 )
      {
        v22 = (1LL << v20) - 1;
        v21 &= v22;
      }
      sub_30E050((__int64)a1, a1->m128i_i64[1] & v22, v21);
      return 1;
    case 6:
      v23 = a1->m128i_i32[1];
      v24 = (int *)a1->m128i_i64[1];
      v91.m256i_i32[1] = a3;
      v91.m256i_i32[0] = 1;
      v92.m256i_i32[1] = v23 - a3;
      v25 = a1[1].m128i_i64[0];
      memset(&v91.m256i_u64[1], 0, 24);
      memset(&v92.m256i_u64[1], 0, 24);
      v92.m256i_i32[0] = 1;
      v75 = &v24[8 * v25];
      if ( v75 == v24 )
      {
        v71 = &v92;
        v67 = &v91;
      }
      else
      {
        v71 = &v92;
        v67 = &v91;
        do
        {
          sub_30D380((__int64)&v93, v24);
          memset(&v95.m256i_u64[1], 0, 24);
          v95.m256i_i64[0] = 0x800000000LL;
          if ( (unsigned __int8)sub_30F440(
                                  (unsigned int)&v93,
                                  (unsigned int)&v95,
                                  a3,
                                  v26,
                                  v27,
                                  v28,
                                  (__int64)v67,
                                  (_DWORD)v71,
                                  (_DWORD)v75,
                                  v80,
                                  v82) )
          {
            sub_30EEF0((__int64)v67, v93.m128i_i32);
            sub_30EEF0((__int64)v71, v95.m256i_i32);
          }
          sub_30D2C0((__int64)&v95);
          sub_30D2C0((__int64)&v93);
          v24 += 8;
        }
        while ( v75 != v24 );
      }
      v29 = _mm_loadu_si128(a2);
      v30 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)&v92);
      v31 = _mm_load_si128((const __m128i *)&v92.m256i_u64[2]);
      *(__m128i *)v92.m256i_i8 = v29;
      a2[1] = v31;
      v32 = _mm_loadu_si128(a1);
      v33 = _mm_load_si128((const __m128i *)&v91);
      *(__m128i *)&v92.m256i_u64[2] = v30;
      v34 = _mm_loadu_si128(a1 + 1);
      *a1 = v33;
      v35 = _mm_load_si128((const __m128i *)&v91.m256i_u64[2]);
      v96 = v32;
      a1[1] = v35;
      v97 = v34;
      *(__m128i *)v91.m256i_i8 = v32;
      *(__m128i *)&v91.m256i_u64[2] = v34;
      sub_30D2C0((__int64)v71);
      sub_30D2C0((__int64)v67);
      return 1;
    case 7:
      v36 = a1->m128i_i32[1];
      v37 = (int *)a1->m128i_i64[1];
      v91.m256i_i32[0] = 0;
      v91.m256i_i32[1] = a3;
      v92.m256i_i32[1] = v36 - a3;
      v38 = a1[1].m128i_i64[0];
      v92.m256i_i32[0] = 0;
      memset(&v91.m256i_u64[1], 0, 24);
      memset(&v92.m256i_u64[1], 0, 24);
      v76 = &v37[8 * v38];
      if ( v76 == v37 )
      {
        v72 = &v92;
        v68 = &v91;
LABEL_31:
        v42 = _mm_loadu_si128(a2);
        v43 = 1;
        v44 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v92);
        v45 = _mm_load_si128((const __m128i *)&v92.m256i_u64[2]);
        *(__m128i *)v92.m256i_i8 = v42;
        a2[1] = v45;
        v46 = _mm_loadu_si128(a1);
        v47 = _mm_load_si128((const __m128i *)&v91);
        *(__m128i *)&v92.m256i_u64[2] = v44;
        v48 = _mm_loadu_si128(a1 + 1);
        *a1 = v47;
        v49 = _mm_load_si128((const __m128i *)&v91.m256i_u64[2]);
        v96 = v46;
        v97 = v48;
        a1[1] = v49;
        *(__m128i *)v91.m256i_i8 = v46;
        *(__m128i *)&v91.m256i_u64[2] = v48;
        goto LABEL_32;
      }
      v72 = &v92;
      v68 = &v91;
      while ( 1 )
      {
        sub_30D380((__int64)&v93, v37);
        memset(&v95.m256i_u64[1], 0, 24);
        v95.m256i_i64[0] = 0x800000000LL;
        if ( !(unsigned __int8)sub_30F440(
                                 (unsigned int)&v93,
                                 (unsigned int)&v95,
                                 a3,
                                 v39,
                                 v40,
                                 v41,
                                 (__int64)v68,
                                 (_DWORD)v72,
                                 (_DWORD)v76,
                                 v80,
                                 v82) )
          break;
        sub_30F340(v68->m256i_i32, v93.m128i_i32);
        sub_30F340(v72->m256i_i32, v95.m256i_i32);
        v37 += 8;
        sub_30D2C0((__int64)&v95);
        sub_30D2C0((__int64)&v93);
        if ( v76 == v37 )
          goto LABEL_31;
      }
      sub_30D2C0((__int64)&v95);
      sub_30D2C0((__int64)&v93);
      v43 = 0;
LABEL_32:
      v77 = v43;
      sub_30D2C0((__int64)v72);
      sub_30D2C0((__int64)v68);
      return v77;
    default:
      return 0;
  }
}
