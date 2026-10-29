__int64 __fastcall sub_DA9F40(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int8 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int8 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int16 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int16 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int32 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int32 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  const __m128i *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  const __m128i *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int8 *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r12
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rdx
  __m128i *v79; // r12
  __int64 v80; // rax
  __int64 v81; // rdx
  const __m128i *v82; // rax
  __int64 v83; // r13
  __int64 v84; // rax
  __int8 v86; // al
  __int64 v87; // rax
  __int64 v88; // rax
  __int32 v89; // eax
  __int32 v90; // eax
  __int16 v91; // ax
  __int16 v92; // ax
  __int8 v93; // al
  __int8 v94; // al
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // r12
  __int64 v100; // rdi
  __m128i v101; // [rsp+0h] [rbp-78h] BYREF
  int v102; // [rsp+10h] [rbp-68h]
  __int64 v103; // [rsp+30h] [rbp-48h]
  int v104; // [rsp+38h] [rbp-40h]
  unsigned __int8 v105; // [rsp+40h] [rbp-38h]
  __int64 v106; // [rsp+60h] [rbp-18h]

  v106 = v3;
  v4 = *a1;
  switch ( a3 )
  {
    case 0:
      v17 = a2[4];
      v18 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_132;
      v19 = *(_QWORD *)(v17 + 32);
      v20 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v19 + 24) != (_DWORD)v20 && (_DWORD)v20 )
        v19 = *(_QWORD *)(v17 + v20 + 32);
      if ( *(_BYTE *)(v19 + 60) && *((_DWORD *)a2 + 10) == v18 )
        v21 = (__int8 *)(v17 + v18 + 72);
      else
LABEL_132:
        v21 = (__int8 *)(v17 + v18 + 40);
      v94 = *v21;
      v105 = 5;
      v101.m128i_i8[0] = v94;
      goto LABEL_105;
    case 1:
      v22 = a2[4];
      v23 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_130;
      v24 = *(_QWORD *)(v22 + 32);
      v25 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v24 + 24) != (_DWORD)v25 && (_DWORD)v25 )
        v24 = *(_QWORD *)(v22 + v25 + 32);
      if ( *(_BYTE *)(v24 + 60) && *((_DWORD *)a2 + 10) == v23 )
        v26 = (__int8 *)(v22 + v23 + 72);
      else
LABEL_130:
        v26 = (__int8 *)(v22 + v23 + 40);
      v93 = *v26;
      v105 = 4;
      v101.m128i_i8[0] = v93;
      goto LABEL_105;
    case 2:
      v27 = a2[4];
      v28 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_128;
      v29 = *(_QWORD *)(v27 + 32);
      v30 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v29 + 24) != (_DWORD)v30 && (_DWORD)v30 )
        v29 = *(_QWORD *)(v27 + v30 + 32);
      if ( *(_BYTE *)(v29 + 60) && v28 == *((_DWORD *)a2 + 10) )
        v31 = (__int16 *)(v27 + v28 + 72);
      else
LABEL_128:
        v31 = (__int16 *)(v27 + v28 + 40);
      v92 = *v31;
      v105 = 7;
      v101.m128i_i16[0] = v92;
      goto LABEL_105;
    case 3:
      v32 = a2[4];
      v33 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_126;
      v34 = *(_QWORD *)(v32 + 32);
      v35 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v34 + 24) != (_DWORD)v35 && (_DWORD)v35 )
        v34 = *(_QWORD *)(v32 + v35 + 32);
      if ( *(_BYTE *)(v34 + 60) && v33 == *((_DWORD *)a2 + 10) )
        v36 = (__int16 *)(v32 + v33 + 72);
      else
LABEL_126:
        v36 = (__int16 *)(v32 + v33 + 40);
      v91 = *v36;
      v105 = 6;
      v101.m128i_i16[0] = v91;
      goto LABEL_105;
    case 4:
      v37 = a2[4];
      v38 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_124;
      v39 = *(_QWORD *)(v37 + 32);
      v40 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v39 + 24) != (_DWORD)v40 && (_DWORD)v40 )
        v39 = *(_QWORD *)(v37 + v40 + 32);
      if ( *(_BYTE *)(v39 + 60) && *((_DWORD *)a2 + 10) == v38 )
        v41 = (__int32 *)(v37 + v38 + 72);
      else
LABEL_124:
        v41 = (__int32 *)(v37 + v38 + 40);
      v90 = *v41;
      v105 = 9;
      v101.m128i_i32[0] = v90;
      goto LABEL_105;
    case 5:
      v42 = a2[4];
      v43 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_122;
      v44 = *(_QWORD *)(v42 + 32);
      v45 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v44 + 24) != (_DWORD)v45 && (_DWORD)v45 )
        v44 = *(_QWORD *)(v42 + v45 + 32);
      if ( *(_BYTE *)(v44 + 60) && *((_DWORD *)a2 + 10) == v43 )
        v46 = (__int32 *)(v42 + v43 + 72);
      else
LABEL_122:
        v46 = (__int32 *)(v42 + v43 + 40);
      v89 = *v46;
      v105 = 8;
      v101.m128i_i32[0] = v89;
      goto LABEL_105;
    case 6:
      v47 = a2[4];
      v48 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_120;
      v49 = *(_QWORD *)(v47 + 32);
      v50 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v49 + 24) != (_DWORD)v50 && (_DWORD)v50 )
        v49 = *(_QWORD *)(v47 + v50 + 32);
      if ( *(_BYTE *)(v49 + 60) && v48 == *((_DWORD *)a2 + 10) )
        v51 = (__int64 *)(v47 + v48 + 72);
      else
LABEL_120:
        v51 = (__int64 *)(v47 + v48 + 40);
      v88 = *v51;
      v105 = 11;
      v101.m128i_i64[0] = v88;
      goto LABEL_105;
    case 7:
      v52 = a2[4];
      v53 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_118;
      v54 = *(_QWORD *)(v52 + 32);
      v55 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v54 + 24) != (_DWORD)v55 && (_DWORD)v55 )
        v54 = *(_QWORD *)(v52 + v55 + 32);
      if ( *(_BYTE *)(v54 + 60) && *((_DWORD *)a2 + 10) == v53 )
        v56 = (__int64 *)(v52 + v53 + 72);
      else
LABEL_118:
        v56 = (__int64 *)(v52 + v53 + 40);
      v87 = *v56;
      v105 = 10;
      v101.m128i_i64[0] = v87;
      goto LABEL_105;
    case 8:
      v57 = a2[4];
      v58 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_116;
      v59 = *(_QWORD *)(v57 + 32);
      v60 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v59 + 24) != (_DWORD)v60 && (_DWORD)v60 )
        v59 = *(_QWORD *)(v57 + v60 + 32);
      if ( *(_BYTE *)(v59 + 60) && v58 == *((_DWORD *)a2 + 10) )
        v61 = (const __m128i *)(v57 + v58 + 72);
      else
LABEL_116:
        v61 = (const __m128i *)(v57 + v58 + 40);
      v105 = 13;
      v101 = _mm_loadu_si128(v61);
      goto LABEL_105;
    case 9:
      v62 = a2[4];
      v63 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_114;
      v64 = *(_QWORD *)(v62 + 32);
      v65 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v64 + 24) != (_DWORD)v65 && (_DWORD)v65 )
        v64 = *(_QWORD *)(v62 + v65 + 32);
      if ( *(_BYTE *)(v64 + 60) && *((_DWORD *)a2 + 10) == v63 )
        v66 = (const __m128i *)(v62 + v63 + 72);
      else
LABEL_114:
        v66 = (const __m128i *)(v62 + v63 + 40);
      v105 = 12;
      v101 = _mm_loadu_si128(v66);
      goto LABEL_105;
    case 10:
      v67 = a2[4];
      v68 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_112;
      v69 = *(_QWORD *)(v67 + 32);
      v70 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v69 + 24) != (_DWORD)v70 && (_DWORD)v70 )
        v69 = *(_QWORD *)(v67 + v70 + 32);
      if ( *(_BYTE *)(v69 + 60) && v68 == *((_DWORD *)a2 + 10) )
        v71 = (__int8 *)(v67 + v68 + 72);
      else
LABEL_112:
        v71 = (__int8 *)(v67 + v68 + 40);
      v86 = *v71;
      v105 = 14;
      v101.m128i_i8[0] = v86;
      goto LABEL_105;
    case 11:
      v72 = a2[4];
      v73 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_96;
      v97 = *(_QWORD *)(v72 + 32);
      v98 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v97 + 24) != (_DWORD)v98 && (_DWORD)v98 )
        v97 = *(_QWORD *)(v72 + v98 + 32);
      if ( !*(_BYTE *)(v97 + 60) || (v74 = v72 + v73 + 72, v73 != *((_DWORD *)a2 + 10)) )
LABEL_96:
        v74 = v72 + v73 + 40;
      v101.m128i_i32[2] = *(_DWORD *)(v74 + 8);
      if ( v101.m128i_i32[2] > 0x40u )
        sub_2205510(&v101);
      else
        v101.m128i_i64[0] = *(_QWORD *)v74;
      v101.m128i_i8[12] = *(_BYTE *)(v74 + 12);
      v75 = *(_DWORD *)(v74 + 16);
      v105 = 3;
      v102 = v75;
      goto LABEL_100;
    case 12:
      v80 = a2[4];
      v81 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_103;
      v95 = *(_QWORD *)(v80 + 32);
      v96 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v95 + 24) != (_DWORD)v96 && (_DWORD)v96 )
        v95 = *(_QWORD *)(v80 + v96 + 32);
      if ( *(_BYTE *)(v95 + 60) && *((_DWORD *)a2 + 10) == v81 )
        v82 = (const __m128i *)(v80 + v81 + 72);
      else
LABEL_103:
        v82 = (const __m128i *)(v80 + v81 + 40);
      v105 = 15;
      v101 = _mm_loadu_si128(v82);
LABEL_105:
      v76 = *(unsigned int *)(v4 + 8);
      v77 = v76 + 1;
      if ( v76 + 1 <= (unsigned __int64)*(unsigned int *)(v4 + 12) )
      {
        v78 = *(_QWORD *)v4;
        v79 = &v101;
        goto LABEL_107;
      }
      v99 = *(_QWORD *)v4;
      v100 = v4;
      if ( *(_QWORD *)v4 <= (unsigned __int64)&v101 )
        goto LABEL_147;
      goto LABEL_150;
    case 13:
      v5 = a2[4];
      v6 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_8;
      v7 = *(_QWORD *)(v5 + 32);
      v8 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v7 + 24) != (_DWORD)v8 && (_DWORD)v8 )
        v7 = *(_QWORD *)(v5 + v8 + 32);
      if ( !*(_BYTE *)(v7 + 60) || (v9 = *((unsigned int *)a2 + 10), v10 = v5 + v6 + 72, v6 != v9) )
LABEL_8:
        v10 = v5 + v6 + 40;
      sub_E231E0(&v101, v10);
      v105 = 0;
      goto LABEL_100;
    case 14:
      v11 = a2[4];
      v12 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_16;
      v13 = *(_QWORD *)(v11 + 32);
      v14 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v13 + 24) != (_DWORD)v14 && (_DWORD)v14 )
        v13 = *(_QWORD *)(v11 + v14 + 32);
      if ( !*(_BYTE *)(v13 + 60) || (v15 = v11 + v12 + 72, *((_DWORD *)a2 + 10) != v12) )
LABEL_16:
        v15 = v11 + v12 + 40;
      sub_E231E0(&v101, v15);
      v103 = *(_QWORD *)(v15 + 48);
      v16 = *(_DWORD *)(v15 + 56);
      v105 = 2;
      v104 = v16;
LABEL_100:
      v76 = *(unsigned int *)(v4 + 8);
      v77 = v76 + 1;
      if ( v76 + 1 <= (unsigned __int64)*(unsigned int *)(v4 + 12) )
      {
        v78 = *(_QWORD *)v4;
        v79 = &v101;
        goto LABEL_107;
      }
      v99 = *(_QWORD *)v4;
      v100 = v4;
      if ( *(_QWORD *)v4 > (unsigned __int64)&v101 )
        goto LABEL_150;
LABEL_147:
      if ( (unsigned __int64)&v101 >= v99 + 72 * v76 )
      {
LABEL_150:
        sub_DA9E50(v100, v77);
        v79 = &v101;
        v78 = *(_QWORD *)v4;
        v76 = *(unsigned int *)(v4 + 8);
      }
      else
      {
        sub_DA9E50(v100, v77);
        v78 = *(_QWORD *)v4;
        v76 = *(unsigned int *)(v4 + 8);
        v79 = (__m128i *)((char *)&v101 + *(_QWORD *)v4 - v99);
      }
LABEL_107:
      v83 = v78 + 72 * v76;
      *(_BYTE *)(v83 + 64) = -1;
      v84 = v79[4].m128i_u8[0];
      if ( (_BYTE)v84 != 0xFF )
      {
        ((void (__fastcall *)(__int64 *, __int64 *))funcs_DA9EB4[v84])((__int64 *)v83, v79->m128i_i64);
        *(_BYTE *)(v83 + 64) = v79[4].m128i_i8[0];
      }
      ++*(_DWORD *)(v4 + 8);
      if ( v105 != 0xFF )
        ((void (__fastcall *)())funcs_DA4366[v105])();
      return 1;
    default:
      return 1;
  }
}
