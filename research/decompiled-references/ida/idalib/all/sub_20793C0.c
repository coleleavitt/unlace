unsigned __int64 __fastcall sub_20793C0(int a1, int *a2, __int64 *a3)
{
  __m128i *v4; // rax
  int v5; // r8d
  __m128i *v6; // rax
  __int64 v7; // r8
  __m128i *v8; // rax
  __int64 v9; // r12
  signed __int64 v10; // rsi
  __m128i *v12; // rcx
  signed __int64 v13; // r13
  char *v14; // rbx
  __int64 v15; // rax
  char *v16; // rdx
  __m128i *p_src; // rbx
  __int64 v18; // r8
  __m128i *v19; // rdi
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // r9
  __m128i *v23; // rcx
  __int8 *v24; // rdi
  __int8 v25; // dl
  __int8 v26; // dl
  __int8 v27; // dl
  __int8 v28; // dl
  __int8 v29; // dl
  __int8 v30; // dl
  __int8 v31; // dl
  __int8 v32; // dl
  __int8 v33; // dl
  __int8 v34; // dl
  __int8 v35; // dl
  __int8 v36; // dl
  __int8 v37; // dl
  __int8 v38; // dl
  __int8 v39; // dl
  __int64 v40; // rdx
  __int8 *v41; // rcx
  __m128i *v42; // rdx
  __int8 v43; // si
  __int8 v44; // r8
  __int8 v45; // dl
  const __m128i *v46; // rax
  const __m128i *v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  __int8 *v50; // rax
  __int8 *v51; // rdx
  __int8 v52; // si
  char v53; // si
  char v54; // si
  char v55; // si
  char v56; // si
  char v57; // si
  char v58; // si
  char v59; // si
  char v60; // si
  char v61; // si
  char v62; // si
  char v63; // si
  char v64; // si
  char v65; // si
  char v66; // cl
  size_t v67; // rax
  __int8 v68; // r15
  size_t v69; // r14
  __int8 v70; // r14
  __m128i *v71; // rdx
  __m128i *v72; // rax
  __int8 v73; // di
  __int8 v74; // si
  __int64 v75; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+10h] [rbp-C0h] BYREF
  __m128i src; // [rsp+18h] [rbp-B8h] BYREF
  _OWORD v79[3]; // [rsp+28h] [rbp-A8h] BYREF
  _OWORD v80[3]; // [rsp+58h] [rbp-78h] BYREF
  __m128i si128; // [rsp+88h] [rbp-48h]

  src = 0;
  memset(v79, 0, sizeof(v79));
  memset(v80, 0, sizeof(v80));
  v75 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v4 = sub_A0C4A0(&src, &v75, &src, (unsigned __int64)v80, a1);
  v5 = *a2;
  v76 = v75;
  v6 = sub_A0C4A0(&src, &v76, v4, (unsigned __int64)v80, v5);
  v7 = *a3;
  v77 = v76;
  v8 = sub_20728A0(&src, &v77, v6, (unsigned __int64)v80, v7);
  v9 = v77;
  v10 = (char *)v8 - (char *)&src;
  if ( !v77 )
    return sub_2012F20(&src, v10, si128.m128i_i64[1]);
  v12 = v8;
  v13 = (char *)v8 - (char *)&src;
  if ( v8 != (__m128i *)v80 && v8 != &src )
  {
    v14 = (char *)((char *)v80 - (char *)v8);
    v15 = 64;
    v16 = v14;
    p_src = &src;
    if ( v16 == (char *)v10 )
    {
      v46 = v12;
      if ( (v12 >= (__m128i *)v79 || &src >= &v12[1])
        && (unsigned __int64)v12->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v47 = &src;
        do
        {
          v48 = _mm_load_si128(v47);
          v49 = _mm_loadu_si128(v46++);
          ++v47;
          v47[-1] = v49;
          v46[-1] = v48;
        }
        while ( v46 != (const __m128i *)&v12->m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL] );
        v50 = &src.m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL];
        v51 = &v12->m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != v10 )
        {
          v52 = *v50;
          *v50 = *v51;
          *v51 = v52;
          if ( v12 != (__m128i *)(v50 + 1) )
          {
            v53 = v50[1];
            v50[1] = v51[1];
            v51[1] = v53;
            if ( v12 != (__m128i *)(v50 + 2) )
            {
              v54 = v50[2];
              v50[2] = v51[2];
              v51[2] = v54;
              if ( v12 != (__m128i *)(v50 + 3) )
              {
                v55 = v50[3];
                v50[3] = v51[3];
                v51[3] = v55;
                if ( v12 != (__m128i *)(v50 + 4) )
                {
                  v56 = v50[4];
                  v50[4] = v51[4];
                  v51[4] = v56;
                  if ( v12 != (__m128i *)(v50 + 5) )
                  {
                    v57 = v50[5];
                    v50[5] = v51[5];
                    v51[5] = v57;
                    if ( v12 != (__m128i *)(v50 + 6) )
                    {
                      v58 = v50[6];
                      v50[6] = v51[6];
                      v51[6] = v58;
                      if ( v12 != (__m128i *)(v50 + 7) )
                      {
                        v59 = v50[7];
                        v50[7] = v51[7];
                        v51[7] = v59;
                        if ( v12 != (__m128i *)(v50 + 8) )
                        {
                          v60 = v50[8];
                          v50[8] = v51[8];
                          v51[8] = v60;
                          if ( v12 != (__m128i *)(v50 + 9) )
                          {
                            v61 = v50[9];
                            v50[9] = v51[9];
                            v51[9] = v61;
                            if ( v12 != (__m128i *)(v50 + 10) )
                            {
                              v62 = v50[10];
                              v50[10] = v51[10];
                              v51[10] = v62;
                              if ( v12 != (__m128i *)(v50 + 11) )
                              {
                                v63 = v50[11];
                                v50[11] = v51[11];
                                v51[11] = v63;
                                if ( v12 != (__m128i *)(v50 + 12) )
                                {
                                  v64 = v50[12];
                                  v50[12] = v51[12];
                                  v51[12] = v64;
                                  if ( v12 != (__m128i *)(v50 + 13) )
                                  {
                                    v65 = v50[13];
                                    v50[13] = v51[13];
                                    v51[13] = v65;
                                    if ( v12 != (__m128i *)(v50 + 14) )
                                    {
                                      v66 = v50[14];
                                      v50[14] = v51[14];
                                      v51[14] = v66;
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
        v71 = v12;
        v72 = &src;
        do
        {
          v73 = v71->m128i_i8[0];
          v74 = v72->m128i_i8[0];
          v72 = (__m128i *)((char *)v72 + 1);
          v71 = (__m128i *)((char *)v71 + 1);
          v72[-1].m128i_i8[15] = v73;
          v71[-1].m128i_i8[15] = v74;
        }
        while ( v12 != v72 );
      }
    }
    else
    {
      v18 = 64 - v10;
      if ( v10 >= 64 - v10 )
        goto LABEL_34;
      while ( v10 != 1 )
      {
        v19 = (__m128i *)((char *)p_src + v10);
        if ( v18 > 0 )
        {
          if ( (v19 >= &p_src[1] || v10 + 16 <= 0) && (unsigned __int64)(v18 - 1) > 0xE )
          {
            v20 = 0;
            do
            {
              v21 = _mm_loadu_si128(&p_src[v20 / 0x10]);
              p_src[v20 / 0x10] = _mm_loadu_si128(&v19[v20 / 0x10]);
              v19[v20 / 0x10] = v21;
              v20 += 16LL;
            }
            while ( v20 != (v18 & 0xFFFFFFFFFFFFFFF0LL) );
            v22 = v18 & 0x7FFFFFFFFFFFFFF0LL;
            v23 = (__m128i *)((char *)p_src + (v18 & 0xFFFFFFFFFFFFFFF0LL));
            v24 = &v19->m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v18 != (v18 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v25 = v23->m128i_i8[0];
              v23->m128i_i8[0] = *v24;
              *v24 = v25;
              if ( v18 > v22 + 1 )
              {
                v26 = v23->m128i_i8[1];
                v23->m128i_i8[1] = v24[1];
                v24[1] = v26;
                if ( v18 > v22 + 2 )
                {
                  v27 = v23->m128i_i8[2];
                  v23->m128i_i8[2] = v24[2];
                  v24[2] = v27;
                  if ( v18 > v22 + 3 )
                  {
                    v28 = v23->m128i_i8[3];
                    v23->m128i_i8[3] = v24[3];
                    v24[3] = v28;
                    if ( v18 > v22 + 4 )
                    {
                      v29 = v23->m128i_i8[4];
                      v23->m128i_i8[4] = v24[4];
                      v24[4] = v29;
                      if ( v18 > v22 + 5 )
                      {
                        v30 = v23->m128i_i8[5];
                        v23->m128i_i8[5] = v24[5];
                        v24[5] = v30;
                        if ( v18 > v22 + 6 )
                        {
                          v31 = v23->m128i_i8[6];
                          v23->m128i_i8[6] = v24[6];
                          v24[6] = v31;
                          if ( v18 > v22 + 7 )
                          {
                            v32 = v23->m128i_i8[7];
                            v23->m128i_i8[7] = v24[7];
                            v24[7] = v32;
                            if ( v18 > v22 + 8 )
                            {
                              v33 = v23->m128i_i8[8];
                              v23->m128i_i8[8] = v24[8];
                              v24[8] = v33;
                              if ( v18 > v22 + 9 )
                              {
                                v34 = v23->m128i_i8[9];
                                v23->m128i_i8[9] = v24[9];
                                v24[9] = v34;
                                if ( v18 > v22 + 10 )
                                {
                                  v35 = v23->m128i_i8[10];
                                  v23->m128i_i8[10] = v24[10];
                                  v24[10] = v35;
                                  if ( v18 > v22 + 11 )
                                  {
                                    v36 = v23->m128i_i8[11];
                                    v23->m128i_i8[11] = v24[11];
                                    v24[11] = v36;
                                    if ( v18 > v22 + 12 )
                                    {
                                      v37 = v23->m128i_i8[12];
                                      v23->m128i_i8[12] = v24[12];
                                      v24[12] = v37;
                                      if ( v18 > v22 + 13 )
                                      {
                                        v38 = v23->m128i_i8[13];
                                        v23->m128i_i8[13] = v24[13];
                                        v24[13] = v38;
                                        if ( v18 > v22 + 14 )
                                        {
                                          v39 = v23->m128i_i8[14];
                                          v23->m128i_i8[14] = v24[14];
                                          v24[14] = v39;
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
              v23 = (__m128i *)((char *)p_src + v18);
            }
          }
          else
          {
            v23 = (__m128i *)((char *)p_src + v18);
            do
            {
              v44 = v19->m128i_i8[0];
              v45 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v19 = (__m128i *)((char *)v19 + 1);
              p_src[-1].m128i_i8[15] = v44;
              v19[-1].m128i_i8[15] = v45;
            }
            while ( p_src != v23 );
          }
          p_src = v23;
        }
        if ( !(v15 % v10) )
          goto LABEL_39;
        v18 = v10;
        v40 = v10 - v15 % v10;
        while ( 1 )
        {
          v15 = v18;
          v10 = v40;
          v18 -= v40;
          if ( v40 < v18 )
            break;
LABEL_34:
          if ( v18 == 1 )
          {
            v70 = p_src->m128i_i8[v15 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v15 - 1);
            p_src->m128i_i8[0] = v70;
            goto LABEL_39;
          }
          v41 = &p_src->m128i_i8[v15];
          v42 = (__m128i *)((char *)p_src + v15 - v18);
          p_src = v42;
          if ( v10 > 0 )
          {
            p_src = (__m128i *)((char *)v42 - v10);
            do
            {
              v42 = (__m128i *)((char *)v42 - 1);
              --v41;
              v43 = v42->m128i_i8[0];
              v42->m128i_i8[0] = *v41;
              *v41 = v43;
            }
            while ( v42 != p_src );
          }
          v40 = v15 % v18;
          if ( !(v15 % v18) )
            goto LABEL_39;
        }
      }
      v67 = v15 - 1;
      v68 = p_src->m128i_i8[0];
      v69 = v67;
      if ( v67 )
        memmove(p_src, &p_src->m128i_i8[1], v67);
      p_src->m128i_i8[v69] = v68;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)v80, &src);
  return sub_20131D0(v80, v9 + v13);
}
