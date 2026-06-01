unsigned __int64 __fastcall sub_20745B0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        __int64 *a5,
        int *a6,
        int *a7,
        __int64 *a8)
{
  __m128i *v12; // rax
  __int64 v13; // r8
  __m128i *v14; // rax
  __int64 v15; // r8
  __m128i *v16; // rax
  int v17; // r8d
  __m128i *v18; // rax
  __int64 v19; // r8
  __m128i *v20; // rax
  int v21; // r8d
  __m128i *v22; // rax
  __m128i *v23; // rax
  __m128i *v24; // rax
  __int64 v25; // r12
  signed __int64 v26; // rsi
  __m128i *v28; // rdx
  signed __int64 v29; // r13
  __m128i *p_src; // rbp
  char *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __m128i *v34; // rdi
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // r9
  __m128i *v38; // rcx
  __int8 *v39; // rdi
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
  __int8 v53; // dl
  __int8 v54; // dl
  __int64 v55; // rdx
  __int8 *v56; // rdx
  signed __int64 v57; // rsi
  __m128i *v58; // rcx
  __int8 *v59; // rdi
  __int8 v60; // r9
  __int8 v61; // r8
  __int8 v62; // dl
  const __m128i *v63; // rax
  const __m128i *v64; // rcx
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __int8 *v67; // rax
  __int8 *v68; // rcx
  __int8 v69; // si
  char v70; // si
  char v71; // si
  char v72; // si
  char v73; // si
  char v74; // si
  char v75; // si
  char v76; // si
  char v77; // si
  char v78; // si
  char v79; // si
  char v80; // si
  char v81; // si
  char v82; // si
  char v83; // dl
  size_t v84; // rax
  __int8 v85; // r15
  size_t v86; // r14
  __int8 v87; // r14
  __m128i *v88; // rcx
  __m128i *v89; // rax
  __int8 v90; // di
  __int8 v91; // si
  __int64 v92; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v93; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v94; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v95; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v96; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v98; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+40h] [rbp-C0h] BYREF
  __m128i src; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v101[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v102[3]; // [rsp+88h] [rbp-78h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]

  src = 0;
  memset(v101, 0, sizeof(v101));
  memset(v102, 0, sizeof(v102));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v92 = 0;
  v12 = sub_206E9E0(&src, &v92, &src, (unsigned __int64)v102, a1);
  v13 = *a2;
  v93 = v92;
  v14 = sub_20728A0(&src, &v93, v12, (unsigned __int64)v102, v13);
  v15 = *a3;
  v94 = v93;
  v16 = sub_206E9E0(&src, &v94, v14, (unsigned __int64)v102, v15);
  v17 = *a4;
  v95 = v94;
  v18 = sub_A0C4A0(&src, &v95, v16, (unsigned __int64)v102, v17);
  v19 = *a5;
  v96 = v95;
  v20 = sub_206E9E0(&src, &v96, v18, (unsigned __int64)v102, v19);
  v21 = *a6;
  v97 = v96;
  v22 = sub_A0C4A0(&src, &v97, v20, (unsigned __int64)v102, v21);
  v98 = v97;
  v23 = sub_A0C4A0(&src, &v98, v22, (unsigned __int64)v102, *a7);
  v99 = v98;
  v24 = sub_206E9E0(&src, &v99, v23, (unsigned __int64)v102, *a8);
  v25 = v99;
  v26 = (char *)v24 - (char *)&src;
  if ( !v99 )
    return sub_2012F20(&src, v26, si128.m128i_i64[1]);
  v28 = v24;
  v29 = (char *)v24 - (char *)&src;
  if ( v24 != (__m128i *)v102 && v24 != &src )
  {
    p_src = &src;
    v31 = (char *)((char *)v102 - (char *)v24);
    v32 = 64;
    if ( v31 == (char *)v26 )
    {
      v63 = v28;
      if ( (v28 >= (__m128i *)v101 || &src >= &v28[1])
        && (unsigned __int64)v28->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v64 = &src;
        do
        {
          v65 = _mm_load_si128(v64);
          v66 = _mm_loadu_si128(v63++);
          ++v64;
          v64[-1] = v66;
          v63[-1] = v65;
        }
        while ( v63 != (const __m128i *)&v28->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL] );
        v67 = &src.m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        v68 = &v28->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != v26 )
        {
          v69 = *v67;
          *v67 = *v68;
          *v68 = v69;
          if ( v28 != (__m128i *)(v67 + 1) )
          {
            v70 = v67[1];
            v67[1] = v68[1];
            v68[1] = v70;
            if ( v28 != (__m128i *)(v67 + 2) )
            {
              v71 = v67[2];
              v67[2] = v68[2];
              v68[2] = v71;
              if ( v28 != (__m128i *)(v67 + 3) )
              {
                v72 = v67[3];
                v67[3] = v68[3];
                v68[3] = v72;
                if ( v28 != (__m128i *)(v67 + 4) )
                {
                  v73 = v67[4];
                  v67[4] = v68[4];
                  v68[4] = v73;
                  if ( v28 != (__m128i *)(v67 + 5) )
                  {
                    v74 = v67[5];
                    v67[5] = v68[5];
                    v68[5] = v74;
                    if ( v28 != (__m128i *)(v67 + 6) )
                    {
                      v75 = v67[6];
                      v67[6] = v68[6];
                      v68[6] = v75;
                      if ( v28 != (__m128i *)(v67 + 7) )
                      {
                        v76 = v67[7];
                        v67[7] = v68[7];
                        v68[7] = v76;
                        if ( v28 != (__m128i *)(v67 + 8) )
                        {
                          v77 = v67[8];
                          v67[8] = v68[8];
                          v68[8] = v77;
                          if ( v28 != (__m128i *)(v67 + 9) )
                          {
                            v78 = v67[9];
                            v67[9] = v68[9];
                            v68[9] = v78;
                            if ( v28 != (__m128i *)(v67 + 10) )
                            {
                              v79 = v67[10];
                              v67[10] = v68[10];
                              v68[10] = v79;
                              if ( v28 != (__m128i *)(v67 + 11) )
                              {
                                v80 = v67[11];
                                v67[11] = v68[11];
                                v68[11] = v80;
                                if ( v28 != (__m128i *)(v67 + 12) )
                                {
                                  v81 = v67[12];
                                  v67[12] = v68[12];
                                  v68[12] = v81;
                                  if ( v28 != (__m128i *)(v67 + 13) )
                                  {
                                    v82 = v67[13];
                                    v67[13] = v68[13];
                                    v68[13] = v82;
                                    if ( v28 != (__m128i *)(v67 + 14) )
                                    {
                                      v83 = v67[14];
                                      v67[14] = v68[14];
                                      v68[14] = v83;
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
        v88 = v28;
        v89 = &src;
        do
        {
          v90 = v88->m128i_i8[0];
          v91 = v89->m128i_i8[0];
          v89 = (__m128i *)((char *)v89 + 1);
          v88 = (__m128i *)((char *)v88 + 1);
          v89[-1].m128i_i8[15] = v90;
          v88[-1].m128i_i8[15] = v91;
        }
        while ( v28 != v89 );
      }
    }
    else
    {
      v33 = 64 - v26;
      if ( v26 >= 64 - v26 )
        goto LABEL_34;
      while ( v26 != 1 )
      {
        v34 = (__m128i *)((char *)p_src + v26);
        if ( v33 > 0 )
        {
          if ( (v34 >= &p_src[1] || v26 + 16 <= 0) && (unsigned __int64)(v33 - 1) > 0xE )
          {
            v35 = 0;
            do
            {
              v36 = _mm_loadu_si128(&p_src[v35 / 0x10]);
              p_src[v35 / 0x10] = _mm_loadu_si128(&v34[v35 / 0x10]);
              v34[v35 / 0x10] = v36;
              v35 += 16LL;
            }
            while ( v35 != (v33 & 0xFFFFFFFFFFFFFFF0LL) );
            v37 = v33 & 0x7FFFFFFFFFFFFFF0LL;
            v38 = (__m128i *)((char *)p_src + (v33 & 0xFFFFFFFFFFFFFFF0LL));
            v39 = &v34->m128i_i8[v33 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v33 != (v33 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v40 = v38->m128i_i8[0];
              v38->m128i_i8[0] = *v39;
              *v39 = v40;
              if ( v33 > v37 + 1 )
              {
                v41 = v38->m128i_i8[1];
                v38->m128i_i8[1] = v39[1];
                v39[1] = v41;
                if ( v33 > v37 + 2 )
                {
                  v42 = v38->m128i_i8[2];
                  v38->m128i_i8[2] = v39[2];
                  v39[2] = v42;
                  if ( v33 > v37 + 3 )
                  {
                    v43 = v38->m128i_i8[3];
                    v38->m128i_i8[3] = v39[3];
                    v39[3] = v43;
                    if ( v33 > v37 + 4 )
                    {
                      v44 = v38->m128i_i8[4];
                      v38->m128i_i8[4] = v39[4];
                      v39[4] = v44;
                      if ( v33 > v37 + 5 )
                      {
                        v45 = v38->m128i_i8[5];
                        v38->m128i_i8[5] = v39[5];
                        v39[5] = v45;
                        if ( v33 > v37 + 6 )
                        {
                          v46 = v38->m128i_i8[6];
                          v38->m128i_i8[6] = v39[6];
                          v39[6] = v46;
                          if ( v33 > v37 + 7 )
                          {
                            v47 = v38->m128i_i8[7];
                            v38->m128i_i8[7] = v39[7];
                            v39[7] = v47;
                            if ( v33 > v37 + 8 )
                            {
                              v48 = v38->m128i_i8[8];
                              v38->m128i_i8[8] = v39[8];
                              v39[8] = v48;
                              if ( v33 > v37 + 9 )
                              {
                                v49 = v38->m128i_i8[9];
                                v38->m128i_i8[9] = v39[9];
                                v39[9] = v49;
                                if ( v33 > v37 + 10 )
                                {
                                  v50 = v38->m128i_i8[10];
                                  v38->m128i_i8[10] = v39[10];
                                  v39[10] = v50;
                                  if ( v33 > v37 + 11 )
                                  {
                                    v51 = v38->m128i_i8[11];
                                    v38->m128i_i8[11] = v39[11];
                                    v39[11] = v51;
                                    if ( v33 > v37 + 12 )
                                    {
                                      v52 = v38->m128i_i8[12];
                                      v38->m128i_i8[12] = v39[12];
                                      v39[12] = v52;
                                      if ( v33 > v37 + 13 )
                                      {
                                        v53 = v38->m128i_i8[13];
                                        v38->m128i_i8[13] = v39[13];
                                        v39[13] = v53;
                                        if ( v33 > v37 + 14 )
                                        {
                                          v54 = v38->m128i_i8[14];
                                          v38->m128i_i8[14] = v39[14];
                                          v39[14] = v54;
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
              v38 = (__m128i *)((char *)p_src + v33);
            }
          }
          else
          {
            v38 = (__m128i *)((char *)p_src + v33);
            do
            {
              v61 = v34->m128i_i8[0];
              v62 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v34 = (__m128i *)((char *)v34 + 1);
              p_src[-1].m128i_i8[15] = v61;
              v34[-1].m128i_i8[15] = v62;
            }
            while ( p_src != v38 );
          }
          p_src = v38;
        }
        if ( !(v32 % v26) )
          goto LABEL_40;
        v33 = v26;
        v55 = v26 - v32 % v26;
        while ( 1 )
        {
          v32 = v33;
          v26 = v55;
          v33 -= v55;
          if ( v55 < v33 )
            break;
LABEL_34:
          if ( v33 == 1 )
          {
            v87 = p_src->m128i_i8[v32 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v32 - 1);
            p_src->m128i_i8[0] = v87;
            goto LABEL_40;
          }
          v56 = &p_src->m128i_i8[v32];
          p_src = (__m128i *)((char *)p_src + v32 - v33);
          if ( v26 > 0 )
          {
            v57 = -v26;
            v58 = p_src;
            v59 = &v56[v57];
            do
            {
              v58 = (__m128i *)((char *)v58 - 1);
              --v56;
              v60 = v58->m128i_i8[0];
              v58->m128i_i8[0] = *v56;
              *v56 = v60;
            }
            while ( v56 != v59 );
            p_src = (__m128i *)((char *)p_src + v57);
          }
          v55 = v32 % v33;
          if ( !(v32 % v33) )
            goto LABEL_40;
        }
      }
      v84 = v32 - 1;
      v85 = p_src->m128i_i8[0];
      v86 = v84;
      if ( v84 )
        memmove(p_src, &p_src->m128i_i8[1], v84);
      p_src->m128i_i8[v86] = v85;
    }
  }
LABEL_40:
  sub_9B6F20((unsigned __int64 *)v102, &src);
  return sub_20131D0(v102, v25 + v29);
}
