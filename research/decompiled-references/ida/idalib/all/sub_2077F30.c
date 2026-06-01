unsigned __int64 __fastcall sub_2077F30(
        int a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        __int64 *a6,
        __int64 *a7)
{
  __m128i *v11; // rax
  __int64 v12; // r8
  __m128i *v13; // rax
  __int64 v14; // r8
  __m128i *v15; // rax
  __int64 v16; // r8
  __m128i *v17; // rax
  int v18; // r8d
  __m128i *v19; // rax
  __int64 v20; // r8
  __m128i *v21; // rax
  __m128i *v22; // rax
  __int64 v23; // r12
  signed __int64 v24; // rsi
  __m128i *v26; // rcx
  signed __int64 v27; // r13
  __m128i *p_src; // rbp
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  __m128i *v32; // rdi
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // r9
  __m128i *v36; // rcx
  __int8 *v37; // rdi
  __int8 v38; // dl
  __int8 v39; // dl
  __int8 v40; // dl
  __int8 v41; // dl
  __int8 v42; // dl
  __int8 v43; // dl
  __int8 v44; // dl
  __int8 v45; // dl
  __int8 v46; // dl
  __int8 v47; // dl
  __int8 v48; // dl
  __int8 v49; // dl
  __int8 v50; // dl
  __int8 v51; // dl
  __int8 v52; // dl
  __int64 v53; // rdx
  __int8 *v54; // rcx
  __m128i *v55; // rdx
  __int8 v56; // si
  __int8 v57; // r8
  __int8 v58; // dl
  const __m128i *v59; // rax
  const __m128i *v60; // rdx
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  __int8 *v63; // rax
  __int8 *v64; // rdx
  __int8 v65; // si
  char v66; // si
  char v67; // si
  char v68; // si
  char v69; // si
  char v70; // si
  char v71; // si
  char v72; // si
  char v73; // si
  char v74; // si
  char v75; // si
  char v76; // si
  char v77; // si
  char v78; // si
  char v79; // cl
  size_t v80; // rax
  __int8 v81; // r15
  size_t v82; // r14
  __int8 v83; // r14
  __m128i *v84; // rdx
  __m128i *v85; // rax
  __int8 v86; // di
  __int8 v87; // si
  __int64 v88; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v89; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v94; // [rsp+40h] [rbp-C0h] BYREF
  __m128i src; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v96[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v97[3]; // [rsp+88h] [rbp-78h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]

  src = 0;
  memset(v96, 0, sizeof(v96));
  memset(v97, 0, sizeof(v97));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v88 = 0;
  v11 = sub_A0C4A0(&src, &v88, &src, (unsigned __int64)v97, a1);
  v12 = *a2;
  v89 = v88;
  v13 = sub_206E9E0(&src, &v89, v11, (unsigned __int64)v97, v12);
  v14 = *a3;
  v90 = v89;
  v15 = sub_206E9E0(&src, &v90, v13, (unsigned __int64)v97, v14);
  v16 = *a4;
  v91 = v90;
  v17 = sub_206E9E0(&src, &v91, v15, (unsigned __int64)v97, v16);
  v18 = *a5;
  v92 = v91;
  v19 = sub_A0C4A0(&src, &v92, v17, (unsigned __int64)v97, v18);
  v20 = *a6;
  v93 = v92;
  v21 = sub_20728A0(&src, &v93, v19, (unsigned __int64)v97, v20);
  v94 = v93;
  v22 = sub_206E9E0(&src, &v94, v21, (unsigned __int64)v97, *a7);
  v23 = v94;
  v24 = (char *)v22 - (char *)&src;
  if ( !v94 )
    return sub_2012F20(&src, v24, si128.m128i_i64[1]);
  v26 = v22;
  v27 = (char *)v22 - (char *)&src;
  if ( v22 != (__m128i *)v97 && v22 != &src )
  {
    p_src = &src;
    v29 = (char *)((char *)v97 - (char *)v22);
    v30 = 64;
    if ( v29 == (char *)v24 )
    {
      v59 = v26;
      if ( (v26 >= (__m128i *)v96 || &src >= &v26[1])
        && (unsigned __int64)v26->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v60 = &src;
        do
        {
          v61 = _mm_load_si128(v60);
          v62 = _mm_loadu_si128(v59++);
          ++v60;
          v60[-1] = v62;
          v59[-1] = v61;
        }
        while ( v59 != (const __m128i *)&v26->m128i_i8[v24 & 0xFFFFFFFFFFFFFFF0LL] );
        v63 = &src.m128i_i8[v24 & 0xFFFFFFFFFFFFFFF0LL];
        v64 = &v26->m128i_i8[v24 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v24 != (v24 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v65 = *v63;
          *v63 = *v64;
          *v64 = v65;
          if ( v26 != (__m128i *)(v63 + 1) )
          {
            v66 = v63[1];
            v63[1] = v64[1];
            v64[1] = v66;
            if ( v26 != (__m128i *)(v63 + 2) )
            {
              v67 = v63[2];
              v63[2] = v64[2];
              v64[2] = v67;
              if ( v26 != (__m128i *)(v63 + 3) )
              {
                v68 = v63[3];
                v63[3] = v64[3];
                v64[3] = v68;
                if ( v26 != (__m128i *)(v63 + 4) )
                {
                  v69 = v63[4];
                  v63[4] = v64[4];
                  v64[4] = v69;
                  if ( v26 != (__m128i *)(v63 + 5) )
                  {
                    v70 = v63[5];
                    v63[5] = v64[5];
                    v64[5] = v70;
                    if ( v26 != (__m128i *)(v63 + 6) )
                    {
                      v71 = v63[6];
                      v63[6] = v64[6];
                      v64[6] = v71;
                      if ( v26 != (__m128i *)(v63 + 7) )
                      {
                        v72 = v63[7];
                        v63[7] = v64[7];
                        v64[7] = v72;
                        if ( v26 != (__m128i *)(v63 + 8) )
                        {
                          v73 = v63[8];
                          v63[8] = v64[8];
                          v64[8] = v73;
                          if ( v26 != (__m128i *)(v63 + 9) )
                          {
                            v74 = v63[9];
                            v63[9] = v64[9];
                            v64[9] = v74;
                            if ( v26 != (__m128i *)(v63 + 10) )
                            {
                              v75 = v63[10];
                              v63[10] = v64[10];
                              v64[10] = v75;
                              if ( v26 != (__m128i *)(v63 + 11) )
                              {
                                v76 = v63[11];
                                v63[11] = v64[11];
                                v64[11] = v76;
                                if ( v26 != (__m128i *)(v63 + 12) )
                                {
                                  v77 = v63[12];
                                  v63[12] = v64[12];
                                  v64[12] = v77;
                                  if ( v26 != (__m128i *)(v63 + 13) )
                                  {
                                    v78 = v63[13];
                                    v63[13] = v64[13];
                                    v64[13] = v78;
                                    if ( v26 != (__m128i *)(v63 + 14) )
                                    {
                                      v79 = v63[14];
                                      v63[14] = v64[14];
                                      v64[14] = v79;
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
        v84 = v26;
        v85 = &src;
        do
        {
          v86 = v84->m128i_i8[0];
          v87 = v85->m128i_i8[0];
          v85 = (__m128i *)((char *)v85 + 1);
          v84 = (__m128i *)((char *)v84 + 1);
          v85[-1].m128i_i8[15] = v86;
          v84[-1].m128i_i8[15] = v87;
        }
        while ( v26 != v85 );
      }
    }
    else
    {
      v31 = 64 - v24;
      if ( v24 >= 64 - v24 )
        goto LABEL_34;
      while ( v24 != 1 )
      {
        v32 = (__m128i *)((char *)p_src + v24);
        if ( v31 > 0 )
        {
          if ( (v32 >= &p_src[1] || v24 + 16 <= 0) && (unsigned __int64)(v31 - 1) > 0xE )
          {
            v33 = 0;
            do
            {
              v34 = _mm_loadu_si128(&p_src[v33 / 0x10]);
              p_src[v33 / 0x10] = _mm_loadu_si128(&v32[v33 / 0x10]);
              v32[v33 / 0x10] = v34;
              v33 += 16LL;
            }
            while ( v33 != (v31 & 0xFFFFFFFFFFFFFFF0LL) );
            v35 = v31 & 0x7FFFFFFFFFFFFFF0LL;
            v36 = (__m128i *)((char *)p_src + (v31 & 0xFFFFFFFFFFFFFFF0LL));
            v37 = &v32->m128i_i8[v31 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v31 != (v31 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v38 = v36->m128i_i8[0];
              v36->m128i_i8[0] = *v37;
              *v37 = v38;
              if ( v31 > v35 + 1 )
              {
                v39 = v36->m128i_i8[1];
                v36->m128i_i8[1] = v37[1];
                v37[1] = v39;
                if ( v31 > v35 + 2 )
                {
                  v40 = v36->m128i_i8[2];
                  v36->m128i_i8[2] = v37[2];
                  v37[2] = v40;
                  if ( v31 > v35 + 3 )
                  {
                    v41 = v36->m128i_i8[3];
                    v36->m128i_i8[3] = v37[3];
                    v37[3] = v41;
                    if ( v31 > v35 + 4 )
                    {
                      v42 = v36->m128i_i8[4];
                      v36->m128i_i8[4] = v37[4];
                      v37[4] = v42;
                      if ( v31 > v35 + 5 )
                      {
                        v43 = v36->m128i_i8[5];
                        v36->m128i_i8[5] = v37[5];
                        v37[5] = v43;
                        if ( v31 > v35 + 6 )
                        {
                          v44 = v36->m128i_i8[6];
                          v36->m128i_i8[6] = v37[6];
                          v37[6] = v44;
                          if ( v31 > v35 + 7 )
                          {
                            v45 = v36->m128i_i8[7];
                            v36->m128i_i8[7] = v37[7];
                            v37[7] = v45;
                            if ( v31 > v35 + 8 )
                            {
                              v46 = v36->m128i_i8[8];
                              v36->m128i_i8[8] = v37[8];
                              v37[8] = v46;
                              if ( v31 > v35 + 9 )
                              {
                                v47 = v36->m128i_i8[9];
                                v36->m128i_i8[9] = v37[9];
                                v37[9] = v47;
                                if ( v31 > v35 + 10 )
                                {
                                  v48 = v36->m128i_i8[10];
                                  v36->m128i_i8[10] = v37[10];
                                  v37[10] = v48;
                                  if ( v31 > v35 + 11 )
                                  {
                                    v49 = v36->m128i_i8[11];
                                    v36->m128i_i8[11] = v37[11];
                                    v37[11] = v49;
                                    if ( v31 > v35 + 12 )
                                    {
                                      v50 = v36->m128i_i8[12];
                                      v36->m128i_i8[12] = v37[12];
                                      v37[12] = v50;
                                      if ( v31 > v35 + 13 )
                                      {
                                        v51 = v36->m128i_i8[13];
                                        v36->m128i_i8[13] = v37[13];
                                        v37[13] = v51;
                                        if ( v31 > v35 + 14 )
                                        {
                                          v52 = v36->m128i_i8[14];
                                          v36->m128i_i8[14] = v37[14];
                                          v37[14] = v52;
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
              v36 = (__m128i *)((char *)p_src + v31);
            }
          }
          else
          {
            v36 = (__m128i *)((char *)p_src + v31);
            do
            {
              v57 = v32->m128i_i8[0];
              v58 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v32 = (__m128i *)((char *)v32 + 1);
              p_src[-1].m128i_i8[15] = v57;
              v32[-1].m128i_i8[15] = v58;
            }
            while ( p_src != v36 );
          }
          p_src = v36;
        }
        if ( !(v30 % v24) )
          goto LABEL_39;
        v31 = v24;
        v53 = v24 - v30 % v24;
        while ( 1 )
        {
          v30 = v31;
          v24 = v53;
          v31 -= v53;
          if ( v53 < v31 )
            break;
LABEL_34:
          if ( v31 == 1 )
          {
            v83 = p_src->m128i_i8[v30 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v30 - 1);
            p_src->m128i_i8[0] = v83;
            goto LABEL_39;
          }
          v54 = &p_src->m128i_i8[v30];
          v55 = (__m128i *)((char *)p_src + v30 - v31);
          p_src = v55;
          if ( v24 > 0 )
          {
            p_src = (__m128i *)((char *)v55 - v24);
            do
            {
              v55 = (__m128i *)((char *)v55 - 1);
              --v54;
              v56 = v55->m128i_i8[0];
              v55->m128i_i8[0] = *v54;
              *v54 = v56;
            }
            while ( v55 != p_src );
          }
          v53 = v30 % v31;
          if ( !(v30 % v31) )
            goto LABEL_39;
        }
      }
      v80 = v30 - 1;
      v81 = p_src->m128i_i8[0];
      v82 = v80;
      if ( v80 )
        memmove(p_src, &p_src->m128i_i8[1], v80);
      p_src->m128i_i8[v82] = v81;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)v97, &src);
  return sub_20131D0(v97, v23 + v27);
}
