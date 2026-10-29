void __fastcall sub_961CE0(
        __m128i *a1,
        char *a2,
        __int64 **a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rsi
  signed __int64 v10; // rbp
  signed __int64 v11; // r12
  signed __int64 v12; // rdx
  signed __int64 v13; // r10
  __m128i *v14; // r14
  unsigned __int64 v15; // r11
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __m128i *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  signed __int64 v35; // r8
  __m128i *v36; // r12
  signed __int64 v37; // r13
  unsigned __int64 v38; // rcx
  __m128i *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  __m128i *v44; // r14
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r12
  signed __int64 v49; // rax
  __m128i *v50; // rbp
  unsigned __int64 v51; // r10
  __int64 v52; // r14
  __m128i *v53; // r13
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  signed __int64 v59; // r10
  __m128i *v60; // r14
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r10
  __int64 v64; // r13
  unsigned __int64 v65; // rax
  __m128i *v66; // r14
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r8
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  __m128i *v73; // [rsp+8h] [rbp-90h]
  __m128i *v75; // [rsp+18h] [rbp-80h]
  __int64 v76; // [rsp+18h] [rbp-80h]
  __int64 v77; // [rsp+20h] [rbp-78h]
  __m128i *v78; // [rsp+28h] [rbp-70h]
  __int64 v79; // [rsp+28h] [rbp-70h]
  __int64 v80; // [rsp+28h] [rbp-70h]
  __int64 v81; // [rsp+28h] [rbp-70h]
  __int64 v82; // [rsp+28h] [rbp-70h]
  unsigned __int64 v83; // [rsp+28h] [rbp-70h]
  unsigned __int64 v84; // [rsp+28h] [rbp-70h]
  __int64 v85; // [rsp+30h] [rbp-68h]
  signed __int64 v86; // [rsp+30h] [rbp-68h]
  __m128i *v87; // [rsp+30h] [rbp-68h]
  unsigned __int64 v88; // [rsp+30h] [rbp-68h]
  __int64 v89; // [rsp+38h] [rbp-60h]
  signed __int64 v90; // [rsp+38h] [rbp-60h]
  unsigned __int64 v91; // [rsp+38h] [rbp-60h]
  signed __int64 v92; // [rsp+38h] [rbp-60h]
  __int64 v93; // [rsp+38h] [rbp-60h]
  __int64 v94; // [rsp+40h] [rbp-58h]
  signed __int64 v95; // [rsp+40h] [rbp-58h]
  __int64 v96; // [rsp+40h] [rbp-58h]
  unsigned __int64 v97; // [rsp+48h] [rbp-50h]
  unsigned __int64 v98; // [rsp+48h] [rbp-50h]
  unsigned __int64 v99; // [rsp+48h] [rbp-50h]
  signed __int64 v100; // [rsp+50h] [rbp-48h]
  signed __int64 v101; // [rsp+50h] [rbp-48h]
  unsigned __int64 v102; // [rsp+58h] [rbp-40h]
  unsigned __int64 v103; // [rsp+58h] [rbp-40h]

  v9 = a2 - (char *)a1;
  if ( v9 <= 336 )
  {
    sub_960AE0(a1->m128i_i8, a2, a3, a4, a5, a6);
  }
  else
  {
    v10 = 8
        * (((__int64)(0xAAAAAAAAAAAAAAABLL * (v9 >> 3)) >> 1)
         + ((0xAAAAAAAAAAAAAAABLL * (v9 >> 3)) & 0xFFFFFFFFFFFFFFFELL));
    v73 = (__m128i *)((char *)a1 + v10);
    v77 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
    if ( (unsigned __int64)v10 <= 0x150 )
    {
      sub_960AE0(a1->m128i_i8, &a1->m128i_i8[v10], a3, a4, a5, a6);
    }
    else
    {
      v11 = 8
          * (((__int64)(0xAAAAAAAAAAAAAAABLL * (v10 >> 3)) >> 1)
           + ((0xAAAAAAAAAAAAAAABLL * (v10 >> 3)) & 0xFFFFFFFFFFFFFFFELL));
      v75 = (__m128i *)((char *)a1 + v11);
      v12 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
      v85 = v12;
      if ( (unsigned __int64)v11 <= 0x150 )
      {
        sub_960AE0(a1->m128i_i8, &a1->m128i_i8[v11], a3, a4, a5, a6);
      }
      else
      {
        v13 = 8 * ((v12 >> 1) + (v12 & 0xFFFFFFFFFFFFFFFELL));
        v14 = (__m128i *)((char *)a1 + v13);
        v89 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
        if ( (unsigned __int64)v13 <= 0x150 )
        {
          v83 = 8 * ((v12 >> 1) + (v12 & 0xFFFFFFFFFFFFFFFELL));
          sub_960AE0(a1->m128i_i8, &a1->m128i_i8[v13], a3, a4, a5, a6);
          v27 = v83;
        }
        else
        {
          v15 = ((__int64)(0xAAAAAAAAAAAAAAABLL * (v13 >> 3)) >> 1)
              + ((0xAAAAAAAAAAAAAAABLL * (v13 >> 3)) & 0xFFFFFFFFFFFFFFFELL);
          v16 = 8 * v15;
          v78 = (__m128i *)((char *)a1 + 8 * v15);
          v94 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v15) >> 3);
          if ( 8 * v15 <= 0x150 )
          {
            v99 = 8 * ((v12 >> 1) + (v12 & 0xFFFFFFFFFFFFFFFELL));
            sub_960AE0(a1->m128i_i8, &a1->m128i_i8[8 * v15], a3, a4, a5, a6);
            v20 = v99;
          }
          else
          {
            v102 = 8 * ((v12 >> 1) + (v12 & 0xFFFFFFFFFFFFFFFELL));
            v100 = 8
                 * (((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v15) >> 3)) >> 1)
                  + ((0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v15) >> 3)) & 0xFFFFFFFFFFFFFFFELL));
            sub_961CE0(a1, &a1->m128i_i8[v100], a3, v100, a8);
            sub_961CE0(&a1->m128i_i8[v100], v78, a3, v17, v18);
            sub_9610C0(
              a1,
              (__m128i *)((char *)a1 + v100),
              (__int64)v78,
              0xAAAAAAAAAAAAAAABLL * (v100 >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v16 - v100) >> 3),
              (__int64 *)a3,
              a4,
              a5,
              a6);
            v20 = v102;
          }
          v21 = v20 - v16;
          v22 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v20 - v16) >> 3);
          if ( v21 <= 336 )
          {
            v98 = v20;
            sub_960AE0(v78->m128i_i8, v14->m128i_i8, a3, a4, a5, a6);
            v25 = v98;
          }
          else
          {
            v103 = v20;
            v101 = 8 * ((v22 >> 1) + (v22 & 0xFFFFFFFFFFFFFFFELL));
            sub_961CE0(v78, &v78->m128i_i8[v101], a3, v101, v19);
            sub_961CE0(&v78->m128i_i8[v101], v14, a3, v23, v24);
            sub_9610C0(
              v78,
              (__m128i *)((char *)v78 + v101),
              (__int64)v14,
              0xAAAAAAAAAAAAAAABLL * (v101 >> 3),
              0xAAAAAAAAAAAAAAABLL * (((char *)v14 - &v78->m128i_i8[v101]) >> 3),
              (__int64 *)a3,
              a4,
              a5,
              a6);
            v25 = v103;
          }
          v97 = v25;
          sub_9610C0(a1, v78, (__int64)v14, v94, v22, (__int64 *)a3, a4, a5, a6);
          v27 = v97;
        }
        if ( (__int64)(v11 - v27) <= 336 )
        {
          v84 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v11 - v27) >> 3);
          sub_960AE0(v14->m128i_i8, v75->m128i_i8, a3, a4, a5, a6);
          v32 = v84;
        }
        else
        {
          v95 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v11 - v27) >> 3);
          v28 = 8 * ((v95 >> 1) + (v95 & 0xFFFFFFFFFFFFFFFELL));
          v29 = (__m128i *)((char *)v14 + v28);
          v79 = v28;
          sub_961CE0(v14, &v14->m128i_i8[v28], a3, v28, v26);
          sub_961CE0(v29, v75, a3, v30, v31);
          sub_9610C0(
            v14,
            v29,
            (__int64)v75,
            0xAAAAAAAAAAAAAAABLL * (v79 >> 3),
            0xAAAAAAAAAAAAAAABLL * (((char *)v75 - (char *)v29) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
          v32 = v95;
        }
        sub_9610C0(a1, v14, (__int64)v75, v89, v32, (__int64 *)a3, a4, a5, a6);
      }
      v33 = v10 - v11;
      v34 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v11) >> 3);
      if ( v33 <= 336 )
      {
        sub_960AE0(v75->m128i_i8, v73->m128i_i8, a3, a4, a5, a6);
      }
      else
      {
        v35 = 8 * ((v34 >> 1) + (v34 & 0xFFFFFFFFFFFFFFFELL));
        v36 = (__m128i *)((char *)v75 + v35);
        v37 = 0xAAAAAAAAAAAAAAABLL * (v35 >> 3);
        if ( (unsigned __int64)v35 <= 0x150 )
        {
          sub_960AE0(v75->m128i_i8, &v75->m128i_i8[v35], a3, a4, a5, a6);
        }
        else
        {
          v38 = 8 * ((v37 >> 1) + (v37 & 0xFFFFFFFFFFFFFFFELL));
          v39 = (__m128i *)((char *)v75 + v38);
          sub_961CE0(v75, &v75->m128i_i8[v38], a3, v38, v35);
          sub_961CE0(v39, v36, a3, v40, v41);
          sub_9610C0(
            v75,
            v39,
            (__int64)v36,
            0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * ((v37 >> 1) + (v37 & 0xFFFFFFFFFFFFFFFELL))) >> 3),
            0xAAAAAAAAAAAAAAABLL
          * ((__int64)(8 * ((v34 >> 1) + (v34 & 0xFFFFFFFFFFFFFFFELL)) - 8 * ((v37 >> 1) + (v37 & 0xFFFFFFFFFFFFFFFELL))) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
        }
        if ( (char *)v73 - (char *)v36 <= 336 )
        {
          sub_960AE0(v36->m128i_i8, v73->m128i_i8, a3, a4, a5, a6);
        }
        else
        {
          v43 = 8
              * (((__int64)(0xAAAAAAAAAAAAAAABLL * (((char *)v73 - (char *)v36) >> 3)) >> 1)
               + ((0xAAAAAAAAAAAAAAABLL * (((char *)v73 - (char *)v36) >> 3)) & 0xFFFFFFFFFFFFFFFELL));
          v44 = (__m128i *)((char *)v36 + v43);
          v80 = v43;
          sub_961CE0(v36, &v36->m128i_i8[v43], a3, v43, v42);
          sub_961CE0(v44, v73, a3, v45, v46);
          sub_9610C0(
            v36,
            v44,
            (__int64)v73,
            0xAAAAAAAAAAAAAAABLL * (v80 >> 3),
            0xAAAAAAAAAAAAAAABLL * (((char *)v73 - (char *)v44) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
        }
        sub_9610C0(
          v75,
          v36,
          (__int64)v73,
          0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * ((v34 >> 1) + (v34 & 0xFFFFFFFFFFFFFFFELL))) >> 3),
          0xAAAAAAAAAAAAAAABLL * (((char *)v73 - (char *)v36) >> 3),
          (__int64 *)a3,
          a4,
          a5,
          a6);
      }
      sub_9610C0(a1, v75, (__int64)v73, v85, v34, (__int64 *)a3, a4, a5, a6);
    }
    v48 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v73) >> 3);
    if ( a2 - (char *)v73 <= 336 )
    {
      sub_960AE0(v73->m128i_i8, a2, a3, a4, a5, a6);
    }
    else
    {
      v49 = 8 * ((v48 >> 1) + (v48 & 0xFFFFFFFFFFFFFFFELL));
      v50 = (__m128i *)((char *)v73 + v49);
      v76 = 0xAAAAAAAAAAAAAAABLL * (v49 >> 3);
      if ( (unsigned __int64)v49 <= 0x150 )
      {
        sub_960AE0(v73->m128i_i8, &v73->m128i_i8[v49], a3, a4, a5, a6);
      }
      else
      {
        v51 = ((__int64)(0xAAAAAAAAAAAAAAABLL * (v49 >> 3)) >> 1)
            + ((0xAAAAAAAAAAAAAAABLL * (v49 >> 3)) & 0xFFFFFFFFFFFFFFFELL);
        v52 = 8 * v51;
        v53 = (__m128i *)((char *)v73 + 8 * v51);
        v81 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v51) >> 3);
        if ( 8 * v51 <= 0x150 )
        {
          sub_960AE0(v73->m128i_i8, &v73->m128i_i8[8 * v51], a3, a4, a5, a6);
        }
        else
        {
          v90 = 8 * ((v81 >> 1) + (v81 & 0xFFFFFFFFFFFFFFFELL));
          sub_961CE0(v73, &v73->m128i_i8[v90], a3, v90, v47);
          sub_961CE0(&v73->m128i_i8[v90], v53, a3, v54, v55);
          sub_9610C0(
            v73,
            (__m128i *)((char *)v73 + v90),
            (__int64)v53,
            0xAAAAAAAAAAAAAAABLL * (v90 >> 3),
            0xAAAAAAAAAAAAAAABLL * ((v52 - v90) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
        }
        v58 = 8 * ((v48 >> 1) + (v48 & 0xFFFFFFFFFFFFFFFELL)) - v52;
        v59 = 0xAAAAAAAAAAAAAAABLL * (v58 >> 3);
        if ( v58 <= 336 )
        {
          v88 = 0xAAAAAAAAAAAAAAABLL * (v58 >> 3);
          sub_960AE0(v53->m128i_i8, v50->m128i_i8, a3, a4, a5, a6);
          v63 = v88;
        }
        else
        {
          v91 = 0xAAAAAAAAAAAAAAABLL * (v58 >> 3);
          v60 = (__m128i *)((char *)v53 + 8 * (v59 >> 1) + 8 * (v59 & 0xFFFFFFFFFFFFFFFELL));
          v86 = 8 * ((v59 >> 1) + (v59 & 0xFFFFFFFFFFFFFFFELL));
          sub_961CE0(v53, v60, a3, v56, v57);
          sub_961CE0(v60, v50, a3, v61, v62);
          sub_9610C0(
            v53,
            v60,
            (__int64)v50,
            0xAAAAAAAAAAAAAAABLL * (v86 >> 3),
            0xAAAAAAAAAAAAAAABLL * (((char *)v50 - (char *)v60) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
          v63 = v91;
        }
        sub_9610C0(v73, v53, (__int64)v50, v81, v63, (__int64 *)a3, a4, a5, a6);
      }
      v64 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v50) >> 3);
      if ( a2 - (char *)v50 <= 336 )
      {
        sub_960AE0(v50->m128i_i8, a2, a3, a4, a5, a6);
      }
      else
      {
        v65 = (v64 >> 1) + (v64 & 0xFFFFFFFFFFFFFFFELL);
        v66 = (__m128i *)((char *)v50 + 8 * v65);
        v82 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v65) >> 3);
        if ( 8 * v65 <= 0x150 )
        {
          sub_960AE0(v50->m128i_i8, &v50->m128i_i8[8 * v65], a3, a4, a5, a6);
        }
        else
        {
          v96 = 8 * v65;
          v92 = 8
              * (((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v65) >> 3)) >> 1)
               + ((0xAAAAAAAAAAAAAAABLL * ((__int64)(8 * v65) >> 3)) & 0xFFFFFFFFFFFFFFFELL));
          sub_961CE0(v50, &v50->m128i_i8[v92], a3, v92, 8 * v65);
          sub_961CE0(&v50->m128i_i8[v92], v66, a3, v67, v68);
          sub_9610C0(
            v50,
            (__m128i *)((char *)v50 + v92),
            (__int64)v66,
            0xAAAAAAAAAAAAAAABLL * (v92 >> 3),
            0xAAAAAAAAAAAAAAABLL * ((v96 - v92) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
        }
        if ( a2 - (char *)v66 <= 336 )
        {
          sub_960AE0(v66->m128i_i8, a2, a3, a4, a5, a6);
        }
        else
        {
          v70 = 8
              * (((0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v66) >> 3)) & 0xFFFFFFFFFFFFFFFELL)
               + ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v66) >> 3)) >> 1));
          v93 = v70;
          v87 = (__m128i *)((char *)v66 + v70);
          sub_961CE0(v66, &v66->m128i_i8[v70], a3, v70, v69);
          sub_961CE0(v87, a2, a3, v71, v72);
          sub_9610C0(
            v66,
            v87,
            (__int64)a2,
            0xAAAAAAAAAAAAAAABLL * (v93 >> 3),
            0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v87) >> 3),
            (__int64 *)a3,
            a4,
            a5,
            a6);
        }
        sub_9610C0(
          v50,
          v66,
          (__int64)a2,
          v82,
          0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v66) >> 3),
          (__int64 *)a3,
          a4,
          a5,
          a6);
      }
      sub_9610C0(v73, v50, (__int64)a2, v76, v64, (__int64 *)a3, a4, a5, a6);
    }
    sub_9610C0(a1, v73, (__int64)a2, v77, v48, (__int64 *)a3, a4, a5, a6);
  }
}

