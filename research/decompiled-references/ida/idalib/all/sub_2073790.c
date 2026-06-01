unsigned __int64 __fastcall sub_2073790(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, int *a5)
{
  __m128i *v8; // rax
  __int64 v9; // r8
  __m128i *v10; // rax
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r8
  __m128i *v14; // rax
  int v15; // r8d
  __m128i *v16; // rax
  __int64 v17; // r12
  signed __int64 v18; // rsi
  __m128i *v20; // rcx
  signed __int64 v21; // r13
  __m128i *p_src; // rbp
  char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __m128i *v26; // rdi
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // r9
  __m128i *v30; // rcx
  __int8 *v31; // rdi
  __int8 v32; // dl
  __int8 v33; // dl
  __int8 v34; // dl
  __int8 v35; // dl
  __int8 v36; // dl
  __int8 v37; // dl
  __int8 v38; // dl
  __int8 v39; // dl
  __int8 v40; // dl
  __int8 v41; // dl
  __int8 v42; // dl
  __int8 v43; // dl
  __int8 v44; // dl
  __int8 v45; // dl
  __int8 v46; // dl
  __int64 v47; // rdx
  __int8 *v48; // rcx
  __m128i *v49; // rdx
  __int8 v50; // si
  __int8 v51; // r8
  __int8 v52; // dl
  const __m128i *v53; // rax
  const __m128i *v54; // rdx
  __m128i v55; // xmm0
  __m128i v56; // xmm2
  __int8 *v57; // rax
  __int8 *v58; // rdx
  __int8 v59; // si
  char v60; // si
  char v61; // si
  char v62; // si
  char v63; // si
  char v64; // si
  char v65; // si
  char v66; // si
  char v67; // si
  char v68; // si
  char v69; // si
  char v70; // si
  char v71; // si
  char v72; // si
  char v73; // cl
  size_t v74; // rax
  __int8 v75; // r15
  size_t v76; // r14
  __int8 v77; // r14
  __m128i *v78; // rdx
  __m128i *v79; // rax
  __int8 v80; // di
  __int8 v81; // si
  __int64 v82; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v83; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+10h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+20h] [rbp-C0h] BYREF
  __m128i src; // [rsp+28h] [rbp-B8h] BYREF
  _OWORD v88[3]; // [rsp+38h] [rbp-A8h] BYREF
  _OWORD v89[3]; // [rsp+68h] [rbp-78h] BYREF
  __m128i si128; // [rsp+98h] [rbp-48h]

  src = 0;
  memset(v88, 0, sizeof(v88));
  memset(v89, 0, sizeof(v89));
  v82 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v8 = sub_206E9E0(&src, &v82, &src, (unsigned __int64)v89, a1);
  v9 = *a2;
  v83 = v82;
  v10 = sub_206E9E0(&src, &v83, v8, (unsigned __int64)v89, v9);
  v11 = *a3;
  v84 = v83;
  v12 = sub_20728A0(&src, &v84, v10, (unsigned __int64)v89, v11);
  v13 = *a4;
  v85 = v84;
  v14 = sub_206E9E0(&src, &v85, v12, (unsigned __int64)v89, v13);
  v15 = *a5;
  v86 = v85;
  v16 = sub_A0C4A0(&src, &v86, v14, (unsigned __int64)v89, v15);
  v17 = v86;
  v18 = (char *)v16 - (char *)&src;
  if ( !v86 )
    return sub_2012F20(&src, v18, si128.m128i_i64[1]);
  v20 = v16;
  v21 = (char *)v16 - (char *)&src;
  if ( v16 != (__m128i *)v89 && v16 != &src )
  {
    p_src = &src;
    v23 = (char *)((char *)v89 - (char *)v16);
    v24 = 64;
    if ( v23 == (char *)v18 )
    {
      v53 = v20;
      if ( (v20 >= (__m128i *)v88 || &src >= &v20[1])
        && (unsigned __int64)v20->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v54 = &src;
        do
        {
          v55 = _mm_load_si128(v54);
          v56 = _mm_loadu_si128(v53++);
          ++v54;
          v54[-1] = v56;
          v53[-1] = v55;
        }
        while ( v53 != (const __m128i *)&v20->m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL] );
        v57 = &src.m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL];
        v58 = &v20->m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != v18 )
        {
          v59 = *v57;
          *v57 = *v58;
          *v58 = v59;
          if ( v20 != (__m128i *)(v57 + 1) )
          {
            v60 = v57[1];
            v57[1] = v58[1];
            v58[1] = v60;
            if ( v20 != (__m128i *)(v57 + 2) )
            {
              v61 = v57[2];
              v57[2] = v58[2];
              v58[2] = v61;
              if ( v20 != (__m128i *)(v57 + 3) )
              {
                v62 = v57[3];
                v57[3] = v58[3];
                v58[3] = v62;
                if ( v20 != (__m128i *)(v57 + 4) )
                {
                  v63 = v57[4];
                  v57[4] = v58[4];
                  v58[4] = v63;
                  if ( v20 != (__m128i *)(v57 + 5) )
                  {
                    v64 = v57[5];
                    v57[5] = v58[5];
                    v58[5] = v64;
                    if ( v20 != (__m128i *)(v57 + 6) )
                    {
                      v65 = v57[6];
                      v57[6] = v58[6];
                      v58[6] = v65;
                      if ( v20 != (__m128i *)(v57 + 7) )
                      {
                        v66 = v57[7];
                        v57[7] = v58[7];
                        v58[7] = v66;
                        if ( v20 != (__m128i *)(v57 + 8) )
                        {
                          v67 = v57[8];
                          v57[8] = v58[8];
                          v58[8] = v67;
                          if ( v20 != (__m128i *)(v57 + 9) )
                          {
                            v68 = v57[9];
                            v57[9] = v58[9];
                            v58[9] = v68;
                            if ( v20 != (__m128i *)(v57 + 10) )
                            {
                              v69 = v57[10];
                              v57[10] = v58[10];
                              v58[10] = v69;
                              if ( v20 != (__m128i *)(v57 + 11) )
                              {
                                v70 = v57[11];
                                v57[11] = v58[11];
                                v58[11] = v70;
                                if ( v20 != (__m128i *)(v57 + 12) )
                                {
                                  v71 = v57[12];
                                  v57[12] = v58[12];
                                  v58[12] = v71;
                                  if ( v20 != (__m128i *)(v57 + 13) )
                                  {
                                    v72 = v57[13];
                                    v57[13] = v58[13];
                                    v58[13] = v72;
                                    if ( v20 != (__m128i *)(v57 + 14) )
                                    {
                                      v73 = v57[14];
                                      v57[14] = v58[14];
                                      v58[14] = v73;
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
        v78 = v20;
        v79 = &src;
        do
        {
          v80 = v78->m128i_i8[0];
          v81 = v79->m128i_i8[0];
          v79 = (__m128i *)((char *)v79 + 1);
          v78 = (__m128i *)((char *)v78 + 1);
          v79[-1].m128i_i8[15] = v80;
          v78[-1].m128i_i8[15] = v81;
        }
        while ( v20 != v79 );
      }
    }
    else
    {
      v25 = 64 - v18;
      if ( v18 >= 64 - v18 )
        goto LABEL_34;
      while ( v18 != 1 )
      {
        v26 = (__m128i *)((char *)p_src + v18);
        if ( v25 > 0 )
        {
          if ( (v26 >= &p_src[1] || v18 + 16 <= 0) && (unsigned __int64)(v25 - 1) > 0xE )
          {
            v27 = 0;
            do
            {
              v28 = _mm_loadu_si128(&p_src[v27 / 0x10]);
              p_src[v27 / 0x10] = _mm_loadu_si128(&v26[v27 / 0x10]);
              v26[v27 / 0x10] = v28;
              v27 += 16LL;
            }
            while ( v27 != (v25 & 0xFFFFFFFFFFFFFFF0LL) );
            v29 = v25 & 0x7FFFFFFFFFFFFFF0LL;
            v30 = (__m128i *)((char *)p_src + (v25 & 0xFFFFFFFFFFFFFFF0LL));
            v31 = &v26->m128i_i8[v25 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v25 != (v25 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v32 = v30->m128i_i8[0];
              v30->m128i_i8[0] = *v31;
              *v31 = v32;
              if ( v25 > v29 + 1 )
              {
                v33 = v30->m128i_i8[1];
                v30->m128i_i8[1] = v31[1];
                v31[1] = v33;
                if ( v25 > v29 + 2 )
                {
                  v34 = v30->m128i_i8[2];
                  v30->m128i_i8[2] = v31[2];
                  v31[2] = v34;
                  if ( v25 > v29 + 3 )
                  {
                    v35 = v30->m128i_i8[3];
                    v30->m128i_i8[3] = v31[3];
                    v31[3] = v35;
                    if ( v25 > v29 + 4 )
                    {
                      v36 = v30->m128i_i8[4];
                      v30->m128i_i8[4] = v31[4];
                      v31[4] = v36;
                      if ( v25 > v29 + 5 )
                      {
                        v37 = v30->m128i_i8[5];
                        v30->m128i_i8[5] = v31[5];
                        v31[5] = v37;
                        if ( v25 > v29 + 6 )
                        {
                          v38 = v30->m128i_i8[6];
                          v30->m128i_i8[6] = v31[6];
                          v31[6] = v38;
                          if ( v25 > v29 + 7 )
                          {
                            v39 = v30->m128i_i8[7];
                            v30->m128i_i8[7] = v31[7];
                            v31[7] = v39;
                            if ( v25 > v29 + 8 )
                            {
                              v40 = v30->m128i_i8[8];
                              v30->m128i_i8[8] = v31[8];
                              v31[8] = v40;
                              if ( v25 > v29 + 9 )
                              {
                                v41 = v30->m128i_i8[9];
                                v30->m128i_i8[9] = v31[9];
                                v31[9] = v41;
                                if ( v25 > v29 + 10 )
                                {
                                  v42 = v30->m128i_i8[10];
                                  v30->m128i_i8[10] = v31[10];
                                  v31[10] = v42;
                                  if ( v25 > v29 + 11 )
                                  {
                                    v43 = v30->m128i_i8[11];
                                    v30->m128i_i8[11] = v31[11];
                                    v31[11] = v43;
                                    if ( v25 > v29 + 12 )
                                    {
                                      v44 = v30->m128i_i8[12];
                                      v30->m128i_i8[12] = v31[12];
                                      v31[12] = v44;
                                      if ( v25 > v29 + 13 )
                                      {
                                        v45 = v30->m128i_i8[13];
                                        v30->m128i_i8[13] = v31[13];
                                        v31[13] = v45;
                                        if ( v25 > v29 + 14 )
                                        {
                                          v46 = v30->m128i_i8[14];
                                          v30->m128i_i8[14] = v31[14];
                                          v31[14] = v46;
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
              v30 = (__m128i *)((char *)p_src + v25);
            }
          }
          else
          {
            v30 = (__m128i *)((char *)p_src + v25);
            do
            {
              v51 = v26->m128i_i8[0];
              v52 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v26 = (__m128i *)((char *)v26 + 1);
              p_src[-1].m128i_i8[15] = v51;
              v26[-1].m128i_i8[15] = v52;
            }
            while ( p_src != v30 );
          }
          p_src = v30;
        }
        if ( !(v24 % v18) )
          goto LABEL_39;
        v25 = v18;
        v47 = v18 - v24 % v18;
        while ( 1 )
        {
          v24 = v25;
          v18 = v47;
          v25 -= v47;
          if ( v47 < v25 )
            break;
LABEL_34:
          if ( v25 == 1 )
          {
            v77 = p_src->m128i_i8[v24 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v24 - 1);
            p_src->m128i_i8[0] = v77;
            goto LABEL_39;
          }
          v48 = &p_src->m128i_i8[v24];
          v49 = (__m128i *)((char *)p_src + v24 - v25);
          p_src = v49;
          if ( v18 > 0 )
          {
            p_src = (__m128i *)((char *)v49 - v18);
            do
            {
              v49 = (__m128i *)((char *)v49 - 1);
              --v48;
              v50 = v49->m128i_i8[0];
              v49->m128i_i8[0] = *v48;
              *v48 = v50;
            }
            while ( v49 != p_src );
          }
          v47 = v24 % v25;
          if ( !(v24 % v25) )
            goto LABEL_39;
        }
      }
      v74 = v24 - 1;
      v75 = p_src->m128i_i8[0];
      v76 = v74;
      if ( v74 )
        memmove(p_src, &p_src->m128i_i8[1], v74);
      p_src->m128i_i8[v76] = v75;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)v89, &src);
  return sub_20131D0(v89, v17 + v21);
}
