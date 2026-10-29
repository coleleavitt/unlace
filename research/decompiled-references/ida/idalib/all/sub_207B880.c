unsigned __int64 __fastcall sub_207B880(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        __int64 *a6,
        char *a7,
        char *a8,
        __int64 *a9,
        __int64 *a10)
{
  __m128i *v14; // rax
  __int64 v15; // r8
  __m128i *v16; // rax
  __int64 v17; // r8
  __m128i *v18; // rax
  __int64 v19; // r8
  __m128i *v20; // rax
  int v21; // r8d
  __m128i *v22; // rax
  __int64 v23; // r8
  __m128i *v24; // rax
  _BYTE *v25; // rax
  _BYTE *v26; // rax
  __m128i *v27; // rax
  __m128i *v28; // rax
  __int64 v29; // r12
  signed __int64 v30; // rsi
  __m128i *v32; // rdx
  signed __int64 v33; // r13
  __m128i *p_src; // rbp
  char *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __m128i *v38; // rdi
  unsigned __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // r9
  __m128i *v42; // rcx
  __int8 *v43; // rdi
  __int8 v44; // dl
  __int8 v45; // dl
  __int8 v46; // dl
  __int8 v47; // dl
  __int8 v48; // dl
  __int8 v49; // dl
  __int8 v50; // dl
  __int8 v51; // dl
  __int8 v52; // dl
  __int8 v53; // dl
  __int8 v54; // dl
  __int8 v55; // dl
  __int8 v56; // dl
  __int8 v57; // dl
  __int8 v58; // dl
  __int64 v59; // rdx
  __int8 *v60; // rdx
  signed __int64 v61; // rsi
  __m128i *v62; // rcx
  __int8 *v63; // rdi
  __int8 v64; // r9
  __int8 v65; // r8
  __int8 v66; // dl
  const __m128i *v67; // rax
  const __m128i *v68; // rcx
  __m128i v69; // xmm0
  __m128i v70; // xmm2
  __int8 *v71; // rax
  __int8 *v72; // rcx
  __int8 v73; // si
  char v74; // si
  char v75; // si
  char v76; // si
  char v77; // si
  char v78; // si
  char v79; // si
  char v80; // si
  char v81; // si
  char v82; // si
  char v83; // si
  char v84; // si
  char v85; // si
  char v86; // si
  char v87; // dl
  size_t v88; // rax
  __int8 v89; // r15
  size_t v90; // r14
  __int8 v91; // r14
  __m128i *v92; // rcx
  __m128i *v93; // rax
  __int8 v94; // di
  __int8 v95; // si
  __int64 v96; // [rsp+8h] [rbp-108h] BYREF
  __int64 v97; // [rsp+10h] [rbp-100h] BYREF
  __int64 v98; // [rsp+18h] [rbp-F8h] BYREF
  __int64 v99; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v100; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v101; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v102; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v103; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v104; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+50h] [rbp-C0h] BYREF
  __m128i src; // [rsp+58h] [rbp-B8h] BYREF
  _OWORD v107[3]; // [rsp+68h] [rbp-A8h] BYREF
  _OWORD v108[3]; // [rsp+98h] [rbp-78h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-48h]

  src = 0;
  memset(v107, 0, sizeof(v107));
  memset(v108, 0, sizeof(v108));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v96 = 0;
  v14 = sub_206E9E0(&src, &v96, &src, (unsigned __int64)v108, a1);
  v15 = *a2;
  v97 = v96;
  v16 = sub_20728A0(&src, &v97, v14, (unsigned __int64)v108, v15);
  v17 = *a3;
  v98 = v97;
  v18 = sub_20728A0(&src, &v98, v16, (unsigned __int64)v108, v17);
  v19 = *a4;
  v99 = v98;
  v20 = sub_206E9E0(&src, &v99, v18, (unsigned __int64)v108, v19);
  v21 = *a5;
  v100 = v99;
  v22 = sub_A0C4A0(&src, &v100, v20, (unsigned __int64)v108, v21);
  v23 = *a6;
  v101 = v100;
  v24 = sub_206E9E0(&src, &v101, v22, (unsigned __int64)v108, v23);
  v102 = v101;
  v25 = sub_207A9D0(&src, &v102, v24, (unsigned __int64)v108, *a7);
  v103 = v102;
  v26 = sub_207A9D0(&src, &v103, v25, (unsigned __int64)v108, *a8);
  v104 = v103;
  v27 = sub_206E9E0(&src, &v104, v26, (unsigned __int64)v108, *a9);
  v105 = v104;
  v28 = sub_206E9E0(&src, &v105, v27, (unsigned __int64)v108, *a10);
  v29 = v105;
  v30 = (char *)v28 - (char *)&src;
  if ( !v105 )
    return sub_2012F20(&src, v30, si128.m128i_i64[1]);
  v32 = v28;
  v33 = (char *)v28 - (char *)&src;
  if ( v28 != (__m128i *)v108 && v28 != &src )
  {
    p_src = &src;
    v35 = (char *)((char *)v108 - (char *)v28);
    v36 = 64;
    if ( v35 == (char *)v30 )
    {
      v67 = v32;
      if ( (v32 >= (__m128i *)v107 || &src >= &v32[1])
        && (unsigned __int64)v32->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v68 = &src;
        do
        {
          v69 = _mm_load_si128(v68);
          v70 = _mm_loadu_si128(v67++);
          ++v68;
          v68[-1] = v70;
          v67[-1] = v69;
        }
        while ( v67 != (const __m128i *)&v32->m128i_i8[v30 & 0xFFFFFFFFFFFFFFF0LL] );
        v71 = &src.m128i_i8[v30 & 0xFFFFFFFFFFFFFFF0LL];
        v72 = &v32->m128i_i8[v30 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v30 != (v30 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v73 = *v71;
          *v71 = *v72;
          *v72 = v73;
          if ( v32 != (__m128i *)(v71 + 1) )
          {
            v74 = v71[1];
            v71[1] = v72[1];
            v72[1] = v74;
            if ( v32 != (__m128i *)(v71 + 2) )
            {
              v75 = v71[2];
              v71[2] = v72[2];
              v72[2] = v75;
              if ( v32 != (__m128i *)(v71 + 3) )
              {
                v76 = v71[3];
                v71[3] = v72[3];
                v72[3] = v76;
                if ( v32 != (__m128i *)(v71 + 4) )
                {
                  v77 = v71[4];
                  v71[4] = v72[4];
                  v72[4] = v77;
                  if ( v32 != (__m128i *)(v71 + 5) )
                  {
                    v78 = v71[5];
                    v71[5] = v72[5];
                    v72[5] = v78;
                    if ( v32 != (__m128i *)(v71 + 6) )
                    {
                      v79 = v71[6];
                      v71[6] = v72[6];
                      v72[6] = v79;
                      if ( v32 != (__m128i *)(v71 + 7) )
                      {
                        v80 = v71[7];
                        v71[7] = v72[7];
                        v72[7] = v80;
                        if ( v32 != (__m128i *)(v71 + 8) )
                        {
                          v81 = v71[8];
                          v71[8] = v72[8];
                          v72[8] = v81;
                          if ( v32 != (__m128i *)(v71 + 9) )
                          {
                            v82 = v71[9];
                            v71[9] = v72[9];
                            v72[9] = v82;
                            if ( v32 != (__m128i *)(v71 + 10) )
                            {
                              v83 = v71[10];
                              v71[10] = v72[10];
                              v72[10] = v83;
                              if ( v32 != (__m128i *)(v71 + 11) )
                              {
                                v84 = v71[11];
                                v71[11] = v72[11];
                                v72[11] = v84;
                                if ( v32 != (__m128i *)(v71 + 12) )
                                {
                                  v85 = v71[12];
                                  v71[12] = v72[12];
                                  v72[12] = v85;
                                  if ( v32 != (__m128i *)(v71 + 13) )
                                  {
                                    v86 = v71[13];
                                    v71[13] = v72[13];
                                    v72[13] = v86;
                                    if ( v32 != (__m128i *)(v71 + 14) )
                                    {
                                      v87 = v71[14];
                                      v71[14] = v72[14];
                                      v72[14] = v87;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v92 = v32;
        v93 = &src;
        do
        {
          v94 = v92->m128i_i8[0];
          v95 = v93->m128i_i8[0];
          v93 = (__m128i *)((char *)v93 + 1);
          v92 = (__m128i *)((char *)v92 + 1);
          v93[-1].m128i_i8[15] = v94;
          v92[-1].m128i_i8[15] = v95;
        }
        while ( v32 != v93 );
      }
    }
    else
    {
      v37 = 64 - v30;
      if ( v30 >= 64 - v30 )
        goto LABEL_34;
      while ( v30 != 1 )
      {
        v38 = (__m128i *)((char *)p_src + v30);
        if ( v37 > 0 )
        {
          if ( (v38 >= &p_src[1] || v30 + 16 <= 0) && (unsigned __int64)(v37 - 1) > 0xE )
          {
            v39 = 0;
            do
            {
              v40 = _mm_loadu_si128(&p_src[v39 / 0x10]);
              p_src[v39 / 0x10] = _mm_loadu_si128(&v38[v39 / 0x10]);
              v38[v39 / 0x10] = v40;
              v39 += 16LL;
            }
            while ( v39 != (v37 & 0xFFFFFFFFFFFFFFF0LL) );
            v41 = v37 & 0x7FFFFFFFFFFFFFF0LL;
            v42 = (__m128i *)((char *)p_src + (v37 & 0xFFFFFFFFFFFFFFF0LL));
            v43 = &v38->m128i_i8[v37 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v37 != (v37 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v44 = v42->m128i_i8[0];
              v42->m128i_i8[0] = *v43;
              *v43 = v44;
              if ( v37 > v41 + 1 )
              {
                v45 = v42->m128i_i8[1];
                v42->m128i_i8[1] = v43[1];
                v43[1] = v45;
                if ( v37 > v41 + 2 )
                {
                  v46 = v42->m128i_i8[2];
                  v42->m128i_i8[2] = v43[2];
                  v43[2] = v46;
                  if ( v37 > v41 + 3 )
                  {
                    v47 = v42->m128i_i8[3];
                    v42->m128i_i8[3] = v43[3];
                    v43[3] = v47;
                    if ( v37 > v41 + 4 )
                    {
                      v48 = v42->m128i_i8[4];
                      v42->m128i_i8[4] = v43[4];
                      v43[4] = v48;
                      if ( v37 > v41 + 5 )
                      {
                        v49 = v42->m128i_i8[5];
                        v42->m128i_i8[5] = v43[5];
                        v43[5] = v49;
                        if ( v37 > v41 + 6 )
                        {
                          v50 = v42->m128i_i8[6];
                          v42->m128i_i8[6] = v43[6];
                          v43[6] = v50;
                          if ( v37 > v41 + 7 )
                          {
                            v51 = v42->m128i_i8[7];
                            v42->m128i_i8[7] = v43[7];
                            v43[7] = v51;
                            if ( v37 > v41 + 8 )
                            {
                              v52 = v42->m128i_i8[8];
                              v42->m128i_i8[8] = v43[8];
                              v43[8] = v52;
                              if ( v37 > v41 + 9 )
                              {
                                v53 = v42->m128i_i8[9];
                                v42->m128i_i8[9] = v43[9];
                                v43[9] = v53;
                                if ( v37 > v41 + 10 )
                                {
                                  v54 = v42->m128i_i8[10];
                                  v42->m128i_i8[10] = v43[10];
                                  v43[10] = v54;
                                  if ( v37 > v41 + 11 )
                                  {
                                    v55 = v42->m128i_i8[11];
                                    v42->m128i_i8[11] = v43[11];
                                    v43[11] = v55;
                                    if ( v37 > v41 + 12 )
                                    {
                                      v56 = v42->m128i_i8[12];
                                      v42->m128i_i8[12] = v43[12];
                                      v43[12] = v56;
                                      if ( v37 > v41 + 13 )
                                      {
                                        v57 = v42->m128i_i8[13];
                                        v42->m128i_i8[13] = v43[13];
                                        v43[13] = v57;
                                        if ( v37 > v41 + 14 )
                                        {
                                          v58 = v42->m128i_i8[14];
                                          v42->m128i_i8[14] = v43[14];
                                          v43[14] = v58;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v42 = (__m128i *)((char *)p_src + v37);
            }
          }
          else
          {
            v42 = (__m128i *)((char *)p_src + v37);
            do
            {
              v65 = v38->m128i_i8[0];
              v66 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v38 = (__m128i *)((char *)v38 + 1);
              p_src[-1].m128i_i8[15] = v65;
              v38[-1].m128i_i8[15] = v66;
            }
            while ( p_src != v42 );
          }
          p_src = v42;
        }
        if ( !(v36 % v30) )
          goto LABEL_40;
        v37 = v30;
        v59 = v30 - v36 % v30;
        while ( 1 )
        {
          v36 = v37;
          v30 = v59;
          v37 -= v59;
          if ( v59 < v37 )
            break;
LABEL_34:
          if ( v37 == 1 )
          {
            v91 = p_src->m128i_i8[v36 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v36 - 1);
            p_src->m128i_i8[0] = v91;
            goto LABEL_40;
          }
          v60 = &p_src->m128i_i8[v36];
          p_src = (__m128i *)((char *)p_src + v36 - v37);
          if ( v30 > 0 )
          {
            v61 = -v30;
            v62 = p_src;
            v63 = &v60[v61];
            do
            {
              v62 = (__m128i *)((char *)v62 - 1);
              --v60;
              v64 = v62->m128i_i8[0];
              v62->m128i_i8[0] = *v60;
              *v60 = v64;
            }
            while ( v60 != v63 );
            p_src = (__m128i *)((char *)p_src + v61);
          }
          v59 = v36 % v37;
          if ( !(v36 % v37) )
            goto LABEL_40;
        }
      }
      v88 = v36 - 1;
      v89 = p_src->m128i_i8[0];
      v90 = v88;
      if ( v88 )
        memmove(p_src, &p_src->m128i_i8[1], v88);
      p_src->m128i_i8[v90] = v89;
    }
  }
LABEL_40:
  sub_9B6F20((unsigned __int64 *)v108, &src);
  return sub_20131D0(v108, v29 + v33);
}
