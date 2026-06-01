void __fastcall sub_1C5A0A0(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rdx
  signed __int64 v3; // r13
  __int64 v4; // r15
  __m128i *v5; // rax
  __m128i *v6; // r12
  __m128i *v7; // rax
  __m128i *v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rcx
  const __m128i *v11; // rax
  __m128i v12; // xmm2
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __m128i *v20; // r14
  __int64 v21; // rdx
  __m128i *v22; // r15
  signed __int64 v23; // rax
  __m128i *v24; // r15
  __int64 v25; // r12
  __int64 v26; // rax
  __m128i *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r14
  __m128i *v30; // r13
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  signed __int64 v34; // r10
  __m128i *v35; // r14
  __int64 v36; // r10
  __int64 v37; // r13
  __int64 v38; // rax
  __m128i *v39; // r14
  __int64 v40; // rdx
  __m128i *v41; // r15
  signed __int64 v42; // rax
  __m128i *v43; // r15
  signed __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // r13
  __m128i *v47; // r12
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // r13
  __int64 v53; // rax
  __m128i *v54; // r14
  __int64 v55; // rdx
  __m128i *v56; // r15
  signed __int64 v57; // rax
  __m128i *v58; // r15
  __int64 v59; // rax
  __m128i *v60; // r12
  __int64 v61; // rcx
  __int64 v62; // r14
  __m128i *v63; // r13
  __int64 v64; // r15
  __int64 v65; // rax
  signed __int64 v66; // r10
  __m128i *v67; // r14
  __int64 v68; // r10
  signed __int64 v69; // r15
  __int64 v70; // rax
  __m128i *v71; // r13
  __int64 v72; // rdx
  __m128i *v73; // r14
  signed __int64 v74; // rax
  __m128i *v75; // r14
  __m128i *v76; // [rsp+10h] [rbp-88h]
  __m128i *v77; // [rsp+18h] [rbp-80h]
  __m128i *v78; // [rsp+18h] [rbp-80h]
  __int64 v79; // [rsp+20h] [rbp-78h]
  __m128i *v80; // [rsp+28h] [rbp-70h]
  __int64 v81; // [rsp+28h] [rbp-70h]
  __int64 v82; // [rsp+30h] [rbp-68h]
  __int64 v83; // [rsp+30h] [rbp-68h]
  __m128i *v84; // [rsp+38h] [rbp-60h]
  __int64 v85; // [rsp+38h] [rbp-60h]
  __int64 v86; // [rsp+38h] [rbp-60h]
  __m128i *v87; // [rsp+38h] [rbp-60h]
  __int64 v88; // [rsp+38h] [rbp-60h]
  __int64 v89; // [rsp+40h] [rbp-58h]
  __m128i *v90; // [rsp+40h] [rbp-58h]
  __int64 v91; // [rsp+40h] [rbp-58h]
  __int64 v92; // [rsp+40h] [rbp-58h]
  __int64 v93; // [rsp+40h] [rbp-58h]
  __int64 v94; // [rsp+40h] [rbp-58h]
  unsigned __int64 v95; // [rsp+40h] [rbp-58h]
  __int64 v96; // [rsp+40h] [rbp-58h]
  __int64 v97; // [rsp+48h] [rbp-50h]
  __int64 v98; // [rsp+48h] [rbp-50h]
  unsigned __int64 v99; // [rsp+48h] [rbp-50h]
  __int64 v100; // [rsp+48h] [rbp-50h]
  __int64 v101; // [rsp+48h] [rbp-50h]
  __int64 v102; // [rsp+48h] [rbp-50h]
  __int64 v103; // [rsp+48h] [rbp-50h]
  __int64 v104; // [rsp+48h] [rbp-50h]
  __m128i *v105; // [rsp+48h] [rbp-50h]
  __int64 v106; // [rsp+48h] [rbp-50h]
  __int64 v107; // [rsp+48h] [rbp-50h]
  unsigned __int64 v108; // [rsp+48h] [rbp-50h]
  __m128i *v109; // [rsp+50h] [rbp-48h]
  __int64 v110; // [rsp+50h] [rbp-48h]
  __int64 v111; // [rsp+50h] [rbp-48h]
  __int64 v112; // [rsp+50h] [rbp-48h]
  __m128i *v113; // [rsp+50h] [rbp-48h]
  unsigned __int64 v114; // [rsp+50h] [rbp-48h]
  __int64 v115; // [rsp+50h] [rbp-48h]
  __int64 v116; // [rsp+50h] [rbp-48h]
  __int64 v117; // [rsp+58h] [rbp-40h]
  __int64 v118; // [rsp+58h] [rbp-40h]
  __int64 v119; // [rsp+58h] [rbp-40h]

  v2 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v3 = 0x555555555555555LL;
    goto LABEL_5;
  }
  v3 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3);
  if ( v2 <= 0 )
  {
LABEL_13:
    if ( v2 <= 336 )
    {
      sub_1C53400((__int64)a1, (__int64)a2);
    }
    else
    {
      v13 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3)) / 2);
      v76 = (__m128i *)((char *)a1 + v13);
      v79 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
      if ( v13 <= 336 )
      {
        sub_1C53400((__int64)a1, (__int64)v76);
      }
      else
      {
        v14 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v13 >> 3)) >> 1);
        v77 = (__m128i *)((char *)a1 + v14);
        v82 = 0xAAAAAAAAAAAAAAABLL * (v14 >> 3);
        if ( (unsigned __int64)v14 <= 0x150 )
        {
          sub_1C53400((__int64)a1, (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8]);
        }
        else
        {
          v15 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v14 >> 3)) >> 1);
          v80 = (__m128i *)((char *)a1 + v15);
          v89 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
          if ( (unsigned __int64)v15 <= 0x150 )
          {
            sub_1C53400((__int64)a1, (__int64)&a1->m128i_i64[(unsigned __int64)v15 / 8]);
          }
          else
          {
            v16 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v15 >> 3)) >> 1);
            v84 = (__m128i *)((char *)a1 + v16);
            v97 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 3);
            if ( (unsigned __int64)v16 <= 0x150 )
            {
              sub_1C53400((__int64)a1, (__int64)&a1->m128i_i64[(unsigned __int64)v16 / 8]);
            }
            else
            {
              v117 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v16 >> 3)) >> 1);
              sub_1C59440(a1, (__int64)&a1->m128i_i64[(unsigned __int64)v117 / 8]);
              sub_1C59440((__m128i *)((char *)a1 + v117), (__int64)&a1->m128i_i64[(unsigned __int64)v16 / 8]);
              sub_1C59090(
                a1,
                (__m128i *)((char *)a1 + v117),
                (__int64)&a1->m128i_i64[(unsigned __int64)v16 / 8],
                0xAAAAAAAAAAAAAAABLL * (v117 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((v16 - v117) >> 3));
            }
            v17 = v15 - v16;
            v18 = 0xAAAAAAAAAAAAAAABLL * ((v15 - v16) >> 3);
            if ( v17 <= 336 )
            {
              sub_1C53400((__int64)v84, (__int64)&a1->m128i_i64[(unsigned __int64)v15 / 8]);
            }
            else
            {
              v109 = (__m128i *)((char *)v84 + 24 * (v18 >> 1));
              sub_1C59440(v84, (__int64)v109);
              sub_1C59440(v109, (__int64)&a1->m128i_i64[(unsigned __int64)v15 / 8]);
              sub_1C59090(
                v84,
                v109,
                (__int64)&a1->m128i_i64[(unsigned __int64)v15 / 8],
                0xAAAAAAAAAAAAAAABLL * ((24 * (v18 >> 1)) >> 3),
                0xAAAAAAAAAAAAAAABLL * ((&a1->m128i_i8[v15] - (__int8 *)v109) >> 3));
            }
            sub_1C59090(a1, v84, (__int64)&a1->m128i_i64[(unsigned __int64)v15 / 8], v97, v18);
          }
          v85 = 0xAAAAAAAAAAAAAAABLL * ((v14 - v15) >> 3);
          if ( v14 - v15 <= 336 )
          {
            sub_1C53400((__int64)v80, (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8]);
          }
          else
          {
            v19 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v14 - v15) >> 3)) >> 1);
            v20 = (__m128i *)((char *)v80 + v19);
            v98 = 0xAAAAAAAAAAAAAAABLL * (v19 >> 3);
            if ( (unsigned __int64)v19 <= 0x150 )
            {
              sub_1C53400((__int64)v80, (__int64)&v80->m128i_i64[(unsigned __int64)v19 / 8]);
            }
            else
            {
              v21 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v19 >> 3)) >> 1;
              v118 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v14 - v15) >> 3)) >> 1);
              v22 = (__m128i *)((char *)v80 + 24 * v21);
              v110 = 24 * v21;
              sub_1C59440(v80, (__int64)v22);
              sub_1C59440(v22, (__int64)v20);
              sub_1C59090(
                v80,
                v22,
                (__int64)v20,
                0xAAAAAAAAAAAAAAABLL * (v110 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((v118 - v110) >> 3));
            }
            v23 = 0xAAAAAAAAAAAAAAABLL * ((&a1->m128i_i8[v14] - (__int8 *)v20) >> 3);
            if ( &a1->m128i_i8[v14] - (__int8 *)v20 <= 336 )
            {
              sub_1C53400((__int64)v20, (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8]);
            }
            else
            {
              v24 = (__m128i *)((char *)v20 + 24 * (v23 >> 1));
              v111 = 24 * (v23 >> 1);
              sub_1C59440(v20, (__int64)v24);
              sub_1C59440(v24, (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8]);
              sub_1C59090(
                v20,
                v24,
                (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8],
                0xAAAAAAAAAAAAAAABLL * (v111 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((&a1->m128i_i8[v14] - (__int8 *)v24) >> 3));
            }
            sub_1C59090(
              v80,
              v20,
              (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8],
              v98,
              0xAAAAAAAAAAAAAAABLL * ((&a1->m128i_i8[v14] - (__int8 *)v20) >> 3));
          }
          sub_1C59090(a1, v80, (__int64)&a1->m128i_i64[(unsigned __int64)v14 / 8], v89, v85);
        }
        v25 = v13 - v14;
        v81 = 0xAAAAAAAAAAAAAAABLL * (v25 >> 3);
        if ( v25 <= 336 )
        {
          sub_1C53400((__int64)v77, (__int64)v76);
        }
        else
        {
          v26 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v25 >> 3)) >> 1);
          v27 = (__m128i *)((char *)v77 + v26);
          v86 = 0xAAAAAAAAAAAAAAABLL * (v26 >> 3);
          if ( (unsigned __int64)v26 <= 0x150 )
          {
            sub_1C53400((__int64)v77, (__int64)&v77->m128i_i64[(unsigned __int64)v26 / 8]);
          }
          else
          {
            v28 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v26 >> 3)) >> 1;
            v29 = 24 * v28;
            v30 = (__m128i *)((char *)v77 + 24 * v28);
            v31 = 0xAAAAAAAAAAAAAAABLL * ((24 * v28) >> 3);
            if ( (unsigned __int64)(24 * v28) <= 0x150 )
            {
              v96 = v26;
              sub_1C53400((__int64)v77, (__int64)&v77->m128i_i64[3 * v28]);
              v32 = v96;
            }
            else
            {
              v112 = v26;
              v90 = (__m128i *)((char *)v77 + 24 * (v31 >> 1));
              sub_1C59440(v77, (__int64)v90);
              sub_1C59440(v90, (__int64)v30);
              sub_1C59090(
                v77,
                v90,
                (__int64)v30,
                0xAAAAAAAAAAAAAAABLL * ((24 * (v31 >> 1)) >> 3),
                0xAAAAAAAAAAAAAAABLL * ((v29 - 24 * (v31 >> 1)) >> 3));
              v32 = v112;
            }
            v33 = v32 - v29;
            v34 = 0xAAAAAAAAAAAAAAABLL * (v33 >> 3);
            if ( v33 <= 336 )
            {
              v95 = 0xAAAAAAAAAAAAAAABLL * (v33 >> 3);
              sub_1C53400((__int64)v30, (__int64)v27);
              v36 = v95;
            }
            else
            {
              v99 = 0xAAAAAAAAAAAAAAABLL * (v33 >> 3);
              v35 = (__m128i *)((char *)v30 + 24 * (v34 >> 1));
              v91 = 24 * (v34 >> 1);
              sub_1C59440(v30, (__int64)v35);
              sub_1C59440(v35, (__int64)v27);
              sub_1C59090(
                v30,
                v35,
                (__int64)v27,
                0xAAAAAAAAAAAAAAABLL * (v91 >> 3),
                0xAAAAAAAAAAAAAAABLL * (((char *)v27 - (char *)v35) >> 3));
              v36 = v99;
            }
            sub_1C59090(v77, v30, (__int64)v27, v31, v36);
          }
          v37 = 0xAAAAAAAAAAAAAAABLL * (((char *)v76 - (char *)v27) >> 3);
          if ( (char *)v76 - (char *)v27 <= 336 )
          {
            sub_1C53400((__int64)v27, (__int64)v76);
          }
          else
          {
            v38 = 24 * (v37 >> 1);
            v39 = (__m128i *)((char *)v27 + v38);
            v92 = 0xAAAAAAAAAAAAAAABLL * (v38 >> 3);
            if ( (unsigned __int64)v38 <= 0x150 )
            {
              sub_1C53400((__int64)v27, (__int64)&v27->m128i_i64[(unsigned __int64)v38 / 8]);
            }
            else
            {
              v40 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v38 >> 3)) >> 1;
              v41 = (__m128i *)((char *)v27 + 24 * v40);
              v100 = 24 * v40;
              sub_1C59440(v27, (__int64)v41);
              sub_1C59440(v41, (__int64)v39);
              sub_1C59090(
                v27,
                v41,
                (__int64)v39,
                0xAAAAAAAAAAAAAAABLL * (v100 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((24 * (v37 >> 1) - v100) >> 3));
            }
            v42 = 0xAAAAAAAAAAAAAAABLL * (((char *)v76 - (char *)v39) >> 3);
            if ( (char *)v76 - (char *)v39 <= 336 )
            {
              sub_1C53400((__int64)v39, (__int64)v76);
            }
            else
            {
              v43 = (__m128i *)((char *)v39 + 24 * (v42 >> 1));
              v101 = 24 * (v42 >> 1);
              sub_1C59440(v39, (__int64)v43);
              sub_1C59440(v43, (__int64)v76);
              sub_1C59090(
                v39,
                v43,
                (__int64)v76,
                0xAAAAAAAAAAAAAAABLL * (v101 >> 3),
                0xAAAAAAAAAAAAAAABLL * (((char *)v76 - (char *)v43) >> 3));
            }
            sub_1C59090(v27, v39, (__int64)v76, v92, 0xAAAAAAAAAAAAAAABLL * (((char *)v76 - (char *)v39) >> 3));
          }
          sub_1C59090(v77, v27, (__int64)v76, v86, v37);
        }
        sub_1C59090(a1, v77, (__int64)v76, v82, v81);
      }
      v44 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v76) >> 3);
      if ( (char *)a2 - (char *)v76 <= 336 )
      {
        sub_1C53400((__int64)v76, (__int64)a2);
      }
      else
      {
        v45 = 24 * (v44 >> 1);
        v78 = (__m128i *)((char *)v76 + v45);
        v83 = 0xAAAAAAAAAAAAAAABLL * (v45 >> 3);
        if ( (unsigned __int64)v45 <= 0x150 )
        {
          sub_1C53400((__int64)v76, (__int64)v78);
        }
        else
        {
          v46 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (v44 >> 1)) >> 3)) >> 1);
          v47 = (__m128i *)((char *)v76 + v46);
          v93 = 0xAAAAAAAAAAAAAAABLL * (v46 >> 3);
          if ( (unsigned __int64)v46 <= 0x150 )
          {
            sub_1C53400((__int64)v76, (__int64)&v76->m128i_i64[(unsigned __int64)v46 / 8]);
          }
          else
          {
            v48 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v46 >> 3)) >> 1);
            v87 = (__m128i *)((char *)v76 + v48);
            v102 = 0xAAAAAAAAAAAAAAABLL * (v48 >> 3);
            if ( (unsigned __int64)v48 <= 0x150 )
            {
              sub_1C53400((__int64)v76, (__int64)&v76->m128i_i64[(unsigned __int64)v48 / 8]);
            }
            else
            {
              v119 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v48 >> 3)) >> 1);
              sub_1C59440(v76, (__int64)&v76->m128i_i64[(unsigned __int64)v119 / 8]);
              sub_1C59440((__m128i *)((char *)v76 + v119), (__int64)v87);
              sub_1C59090(
                v76,
                (__m128i *)((char *)v76 + v119),
                (__int64)v87,
                0xAAAAAAAAAAAAAAABLL * (v119 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((v48 - v119) >> 3));
            }
            v49 = v46 - v48;
            v50 = 0xAAAAAAAAAAAAAAABLL * ((v46 - v48) >> 3);
            if ( v49 <= 336 )
            {
              sub_1C53400((__int64)v87, (__int64)v47);
            }
            else
            {
              v113 = (__m128i *)((char *)v87 + 24 * (v50 >> 1));
              sub_1C59440(v87, (__int64)v113);
              sub_1C59440(v113, (__int64)v47);
              sub_1C59090(
                v87,
                v113,
                (__int64)v47,
                0xAAAAAAAAAAAAAAABLL * ((24 * (v50 >> 1)) >> 3),
                0xAAAAAAAAAAAAAAABLL * (((char *)v47 - (char *)v113) >> 3));
            }
            sub_1C59090(v76, v87, (__int64)v47, v102, v50);
          }
          v51 = v45 - v46;
          v52 = 0xAAAAAAAAAAAAAAABLL * (v51 >> 3);
          if ( v51 <= 336 )
          {
            sub_1C53400((__int64)v47, (__int64)v78);
          }
          else
          {
            v53 = 24 * (v52 >> 1);
            v54 = (__m128i *)((char *)v47 + v53);
            v88 = 0xAAAAAAAAAAAAAAABLL * (v53 >> 3);
            if ( (unsigned __int64)v53 <= 0x150 )
            {
              sub_1C53400((__int64)v47, (__int64)&v47->m128i_i64[(unsigned __int64)v53 / 8]);
            }
            else
            {
              v55 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v53 >> 3)) >> 1;
              v56 = (__m128i *)((char *)v47 + 24 * v55);
              v103 = 24 * v55;
              sub_1C59440(v47, (__int64)v56);
              sub_1C59440(v56, (__int64)v54);
              sub_1C59090(
                v47,
                v56,
                (__int64)v54,
                0xAAAAAAAAAAAAAAABLL * (v103 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((24 * (v52 >> 1) - v103) >> 3));
            }
            v57 = 0xAAAAAAAAAAAAAAABLL * (((char *)v78 - (char *)v54) >> 3);
            if ( (char *)v78 - (char *)v54 <= 336 )
            {
              sub_1C53400((__int64)v54, (__int64)v78);
            }
            else
            {
              v58 = (__m128i *)((char *)v54 + 24 * (v57 >> 1));
              v104 = 24 * (v57 >> 1);
              sub_1C59440(v54, (__int64)v58);
              sub_1C59440(v58, (__int64)v78);
              sub_1C59090(
                v54,
                v58,
                (__int64)v78,
                0xAAAAAAAAAAAAAAABLL * (v104 >> 3),
                0xAAAAAAAAAAAAAAABLL * (((char *)v78 - (char *)v58) >> 3));
            }
            sub_1C59090(v47, v54, (__int64)v78, v88, 0xAAAAAAAAAAAAAAABLL * (((char *)v78 - (char *)v54) >> 3));
          }
          sub_1C59090(v76, v47, (__int64)v78, v93, v52);
        }
        if ( (char *)a2 - (char *)v78 <= 336 )
        {
          sub_1C53400((__int64)v78, (__int64)a2);
        }
        else
        {
          v59 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v78) >> 3)) >> 1);
          v60 = (__m128i *)((char *)v78 + v59);
          v94 = 0xAAAAAAAAAAAAAAABLL * (v59 >> 3);
          if ( (unsigned __int64)v59 <= 0x150 )
          {
            sub_1C53400((__int64)v78, (__int64)&v78->m128i_i64[(unsigned __int64)v59 / 8]);
          }
          else
          {
            v61 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v59 >> 3)) >> 1;
            v62 = 24 * v61;
            v63 = (__m128i *)((char *)v78 + 24 * v61);
            v64 = 0xAAAAAAAAAAAAAAABLL * ((24 * v61) >> 3);
            if ( (unsigned __int64)(24 * v61) <= 0x150 )
            {
              sub_1C53400((__int64)v78, (__int64)&v78->m128i_i64[3 * v61]);
            }
            else
            {
              v105 = (__m128i *)((char *)v78 + 24 * (v64 >> 1));
              sub_1C59440(v78, (__int64)v105);
              sub_1C59440(v105, (__int64)v63);
              sub_1C59090(
                v78,
                v105,
                (__int64)v63,
                0xAAAAAAAAAAAAAAABLL * ((24 * (v64 >> 1)) >> 3),
                0xAAAAAAAAAAAAAAABLL * ((v62 - 24 * (v64 >> 1)) >> 3));
            }
            v65 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v78) >> 3)) >> 1) - v62;
            v66 = 0xAAAAAAAAAAAAAAABLL * (v65 >> 3);
            if ( v65 <= 336 )
            {
              v108 = 0xAAAAAAAAAAAAAAABLL * (v65 >> 3);
              sub_1C53400((__int64)v63, (__int64)v60);
              v68 = v108;
            }
            else
            {
              v114 = 0xAAAAAAAAAAAAAAABLL * (v65 >> 3);
              v67 = (__m128i *)((char *)v63 + 24 * (v66 >> 1));
              v106 = 24 * (v66 >> 1);
              sub_1C59440(v63, (__int64)v67);
              sub_1C59440(v67, (__int64)v60);
              sub_1C59090(
                v63,
                v67,
                (__int64)v60,
                0xAAAAAAAAAAAAAAABLL * (v106 >> 3),
                0xAAAAAAAAAAAAAAABLL * (((char *)v60 - (char *)v67) >> 3));
              v68 = v114;
            }
            sub_1C59090(v78, v63, (__int64)v60, v64, v68);
          }
          v69 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v60) >> 3);
          if ( (char *)a2 - (char *)v60 <= 336 )
          {
            sub_1C53400((__int64)v60, (__int64)a2);
          }
          else
          {
            v70 = 24 * (v69 >> 1);
            v71 = (__m128i *)((char *)v60 + v70);
            v107 = 0xAAAAAAAAAAAAAAABLL * (v70 >> 3);
            if ( (unsigned __int64)v70 <= 0x150 )
            {
              sub_1C53400((__int64)v60, (__int64)&v60->m128i_i64[(unsigned __int64)v70 / 8]);
            }
            else
            {
              v72 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v70 >> 3)) >> 1;
              v73 = (__m128i *)((char *)v60 + 24 * v72);
              v115 = 24 * v72;
              sub_1C59440(v60, (__int64)v73);
              sub_1C59440(v73, (__int64)v71);
              sub_1C59090(
                v60,
                v73,
                (__int64)v71,
                0xAAAAAAAAAAAAAAABLL * (v115 >> 3),
                0xAAAAAAAAAAAAAAABLL * ((24 * (v69 >> 1) - v115) >> 3));
            }
            v74 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v71) >> 3);
            if ( (char *)a2 - (char *)v71 <= 336 )
            {
              sub_1C53400((__int64)v71, (__int64)a2);
            }
            else
            {
              v75 = (__m128i *)((char *)v71 + 24 * (v74 >> 1));
              v116 = 24 * (v74 >> 1);
              sub_1C59440(v71, (__int64)v75);
              sub_1C59440(v75, (__int64)a2);
              sub_1C59090(
                v71,
                v75,
                (__int64)a2,
                0xAAAAAAAAAAAAAAABLL * (v116 >> 3),
                0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v75) >> 3));
            }
            sub_1C59090(v60, v71, (__int64)a2, v107, 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v71) >> 3));
          }
          sub_1C59090(v78, v60, (__int64)a2, v94, 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v60) >> 3));
        }
        sub_1C59090(v76, v78, (__int64)a2, v83, 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v78) >> 3));
      }
      sub_1C59090(a1, v76, (__int64)a2, v79, 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v76) >> 3));
    }
    v6 = nullptr;
  }
  else
  {
LABEL_5:
    while ( 1 )
    {
      v4 = 24 * v3;
      v5 = (__m128i *)operator new(24 * v3, (const std::nothrow_t *)&std::nothrow);
      if ( v5 )
        break;
      v3 >>= 1;
      if ( !v3 )
      {
        v2 = (char *)a2 - (char *)a1;
        goto LABEL_13;
      }
    }
    v6 = v5;
    v7 = (__m128i *)((char *)v5 + v4);
    *v6 = _mm_loadu_si128(a1);
    v6[1].m128i_i64[0] = a1[1].m128i_i64[0];
    v8 = (__m128i *)((char *)v6 + 24);
    if ( v7 == (__m128i *)&v6[1].m128i_u64[1] )
    {
      v11 = v6;
    }
    else
    {
      do
      {
        v9 = _mm_loadu_si128((__m128i *)((char *)v8 - 24));
        v10 = v8[-1].m128i_i64[1];
        v8 = (__m128i *)((char *)v8 + 24);
        *(__m128i *)((char *)v8 - 24) = v9;
        v8[-1].m128i_i64[1] = v10;
      }
      while ( v7 != v8 );
      v11 = (__m128i *)((char *)v6 + v4 - 24);
    }
    v12 = _mm_loadu_si128(v11);
    a1[1].m128i_i64[0] = v11[1].m128i_i64[0];
    *a1 = v12;
    sub_1C59FC0(a1, a2, v6, v3);
  }
  operator delete(v6, (const std::nothrow_t *)&std::nothrow);
}
