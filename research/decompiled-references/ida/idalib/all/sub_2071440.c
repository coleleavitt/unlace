unsigned __int64 __fastcall sub_2071440(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v6; // r8
  __m128i *v7; // rax
  __int64 v8; // r8
  __m128i *v9; // rax
  __int64 v10; // r8
  __m128i *v11; // rax
  __int64 v12; // r12
  signed __int64 v13; // rsi
  __m128i *v15; // rcx
  signed __int64 v16; // r13
  char *v17; // rbx
  __int64 v18; // rax
  char *v19; // rdx
  char *p_src; // rbx
  __int64 v21; // r8
  char *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // r9
  char *v26; // rcx
  char *v27; // rdi
  char v28; // dl
  char v29; // dl
  char v30; // dl
  char v31; // dl
  char v32; // dl
  char v33; // dl
  char v34; // dl
  char v35; // dl
  char v36; // dl
  char v37; // dl
  char v38; // dl
  char v39; // dl
  char v40; // dl
  char v41; // dl
  char v42; // dl
  __int64 v43; // rdx
  char *v44; // rdx
  signed __int64 v45; // rsi
  char *v46; // rcx
  char *v47; // rdi
  char v48; // r9
  char v49; // r8
  char v50; // dl
  const __m128i *v51; // rax
  const __m128i *v52; // rdx
  __m128i v53; // xmm0
  __m128i v54; // xmm2
  char *v55; // rax
  __int8 *v56; // rdx
  __int8 v57; // si
  char v58; // si
  char v59; // si
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
  char v71; // cl
  size_t v72; // rax
  char v73; // r15
  size_t v74; // r14
  char v75; // r14
  __m128i *v76; // rdx
  __m128i *v77; // rax
  __int8 v78; // di
  __int8 v79; // si
  __int64 v80; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+10h] [rbp-C0h] BYREF
  __int64 src; // [rsp+18h] [rbp-B8h] BYREF
  _OWORD v84[3]; // [rsp+20h] [rbp-B0h] BYREF
  __int64 v85; // [rsp+50h] [rbp-80h]
  _OWORD v86[3]; // [rsp+58h] [rbp-78h] BYREF
  __m128i si128; // [rsp+88h] [rbp-48h]

  v6 = *a2;
  memset(v84, 0, sizeof(v84));
  memset(v86, 0, sizeof(v86));
  src = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v85 = 0;
  v80 = 0;
  v7 = sub_206E9E0((__m128i *)&src, &v80, v84, (unsigned __int64)v86, v6);
  v8 = *a3;
  v81 = v80;
  v9 = sub_206E9E0((__m128i *)&src, &v81, v7, (unsigned __int64)v86, v8);
  v10 = *a4;
  v82 = v81;
  v11 = sub_206E9E0((__m128i *)&src, &v82, v9, (unsigned __int64)v86, v10);
  v12 = v82;
  v13 = (char *)v11 - (char *)&src;
  if ( !v82 )
    return sub_2012F20(&src, v13, si128.m128i_i64[1]);
  v15 = v11;
  v16 = (char *)v11 - (char *)&src;
  if ( v11 != (__m128i *)v86 && v11 != (__m128i *)&src )
  {
    v17 = (char *)((char *)v86 - (char *)v11);
    v18 = 64;
    v19 = v17;
    p_src = (char *)&src;
    if ( v19 == (char *)v13 )
    {
      v51 = v15;
      if ( (v15 >= (__m128i *)((char *)v84 + 8) || &src >= v15[1].m128i_i64)
        && (unsigned __int64)v15->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v52 = (const __m128i *)&src;
        do
        {
          v53 = _mm_load_si128(v52);
          v54 = _mm_loadu_si128(v51++);
          ++v52;
          v52[-1] = v54;
          v51[-1] = v53;
        }
        while ( v51 != (const __m128i *)&v15->m128i_i8[v13 & 0xFFFFFFFFFFFFFFF0LL] );
        v55 = (char *)&src + (v13 & 0xFFFFFFFFFFFFFFF0LL);
        v56 = &v15->m128i_i8[v13 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != v13 )
        {
          v57 = *v55;
          *v55 = *v56;
          *v56 = v57;
          if ( v15 != (__m128i *)(v55 + 1) )
          {
            v58 = v55[1];
            v55[1] = v56[1];
            v56[1] = v58;
            if ( v15 != (__m128i *)(v55 + 2) )
            {
              v59 = v55[2];
              v55[2] = v56[2];
              v56[2] = v59;
              if ( v15 != (__m128i *)(v55 + 3) )
              {
                v60 = v55[3];
                v55[3] = v56[3];
                v56[3] = v60;
                if ( v15 != (__m128i *)(v55 + 4) )
                {
                  v61 = v55[4];
                  v55[4] = v56[4];
                  v56[4] = v61;
                  if ( v15 != (__m128i *)(v55 + 5) )
                  {
                    v62 = v55[5];
                    v55[5] = v56[5];
                    v56[5] = v62;
                    if ( v15 != (__m128i *)(v55 + 6) )
                    {
                      v63 = v55[6];
                      v55[6] = v56[6];
                      v56[6] = v63;
                      if ( v15 != (__m128i *)(v55 + 7) )
                      {
                        v64 = v55[7];
                        v55[7] = v56[7];
                        v56[7] = v64;
                        if ( v15 != (__m128i *)(v55 + 8) )
                        {
                          v65 = v55[8];
                          v55[8] = v56[8];
                          v56[8] = v65;
                          if ( v15 != (__m128i *)(v55 + 9) )
                          {
                            v66 = v55[9];
                            v55[9] = v56[9];
                            v56[9] = v66;
                            if ( v15 != (__m128i *)(v55 + 10) )
                            {
                              v67 = v55[10];
                              v55[10] = v56[10];
                              v56[10] = v67;
                              if ( v15 != (__m128i *)(v55 + 11) )
                              {
                                v68 = v55[11];
                                v55[11] = v56[11];
                                v56[11] = v68;
                                if ( v15 != (__m128i *)(v55 + 12) )
                                {
                                  v69 = v55[12];
                                  v55[12] = v56[12];
                                  v56[12] = v69;
                                  if ( v15 != (__m128i *)(v55 + 13) )
                                  {
                                    v70 = v55[13];
                                    v55[13] = v56[13];
                                    v56[13] = v70;
                                    if ( v15 != (__m128i *)(v55 + 14) )
                                    {
                                      v71 = v55[14];
                                      v55[14] = v56[14];
                                      v56[14] = v71;
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
        v76 = v15;
        v77 = (__m128i *)&src;
        do
        {
          v78 = v76->m128i_i8[0];
          v79 = v77->m128i_i8[0];
          v77 = (__m128i *)((char *)v77 + 1);
          v76 = (__m128i *)((char *)v76 + 1);
          v77[-1].m128i_i8[15] = v78;
          v76[-1].m128i_i8[15] = v79;
        }
        while ( v15 != v77 );
      }
    }
    else
    {
      v21 = 64 - v13;
      if ( v13 >= 64 - v13 )
        goto LABEL_34;
      while ( v13 != 1 )
      {
        v22 = &p_src[v13];
        if ( v21 > 0 )
        {
          if ( (v22 >= p_src + 16 || v13 + 16 <= 0) && (unsigned __int64)(v21 - 1) > 0xE )
          {
            v23 = 0;
            do
            {
              v24 = _mm_loadu_si128((const __m128i *)&p_src[v23]);
              *(__m128i *)&p_src[v23] = _mm_loadu_si128((const __m128i *)&v22[v23]);
              *(__m128i *)&v22[v23] = v24;
              v23 += 16;
            }
            while ( v23 != (v21 & 0xFFFFFFFFFFFFFFF0LL) );
            v25 = v21 & 0x7FFFFFFFFFFFFFF0LL;
            v26 = &p_src[v21 & 0xFFFFFFFFFFFFFFF0LL];
            v27 = &v22[v21 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v21 != (v21 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v28 = *v26;
              *v26 = *v27;
              *v27 = v28;
              if ( v21 > v25 + 1 )
              {
                v29 = v26[1];
                v26[1] = v27[1];
                v27[1] = v29;
                if ( v21 > v25 + 2 )
                {
                  v30 = v26[2];
                  v26[2] = v27[2];
                  v27[2] = v30;
                  if ( v21 > v25 + 3 )
                  {
                    v31 = v26[3];
                    v26[3] = v27[3];
                    v27[3] = v31;
                    if ( v21 > v25 + 4 )
                    {
                      v32 = v26[4];
                      v26[4] = v27[4];
                      v27[4] = v32;
                      if ( v21 > v25 + 5 )
                      {
                        v33 = v26[5];
                        v26[5] = v27[5];
                        v27[5] = v33;
                        if ( v21 > v25 + 6 )
                        {
                          v34 = v26[6];
                          v26[6] = v27[6];
                          v27[6] = v34;
                          if ( v21 > v25 + 7 )
                          {
                            v35 = v26[7];
                            v26[7] = v27[7];
                            v27[7] = v35;
                            if ( v21 > v25 + 8 )
                            {
                              v36 = v26[8];
                              v26[8] = v27[8];
                              v27[8] = v36;
                              if ( v21 > v25 + 9 )
                              {
                                v37 = v26[9];
                                v26[9] = v27[9];
                                v27[9] = v37;
                                if ( v21 > v25 + 10 )
                                {
                                  v38 = v26[10];
                                  v26[10] = v27[10];
                                  v27[10] = v38;
                                  if ( v21 > v25 + 11 )
                                  {
                                    v39 = v26[11];
                                    v26[11] = v27[11];
                                    v27[11] = v39;
                                    if ( v21 > v25 + 12 )
                                    {
                                      v40 = v26[12];
                                      v26[12] = v27[12];
                                      v27[12] = v40;
                                      if ( v21 > v25 + 13 )
                                      {
                                        v41 = v26[13];
                                        v26[13] = v27[13];
                                        v27[13] = v41;
                                        if ( v21 > v25 + 14 )
                                        {
                                          v42 = v26[14];
                                          v26[14] = v27[14];
                                          v27[14] = v42;
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
              v26 = &p_src[v21];
            }
          }
          else
          {
            v26 = &p_src[v21];
            do
            {
              v49 = *v22;
              v50 = *p_src++;
              ++v22;
              *(p_src - 1) = v49;
              *(v22 - 1) = v50;
            }
            while ( p_src != v26 );
          }
          p_src = v26;
        }
        if ( !(v18 % v13) )
          goto LABEL_40;
        v21 = v13;
        v43 = v13 - v18 % v13;
        while ( 1 )
        {
          v18 = v21;
          v13 = v43;
          v21 -= v43;
          if ( v43 < v21 )
            break;
LABEL_34:
          if ( v21 == 1 )
          {
            v75 = p_src[v18 - 1];
            memmove(p_src + 1, p_src, v18 - 1);
            *p_src = v75;
            goto LABEL_40;
          }
          v44 = &p_src[v18];
          p_src = &p_src[v18 - v21];
          if ( v13 > 0 )
          {
            v45 = -v13;
            v46 = p_src;
            v47 = &v44[v45];
            do
            {
              --v46;
              --v44;
              v48 = *v46;
              *v46 = *v44;
              *v44 = v48;
            }
            while ( v44 != v47 );
            p_src += v45;
          }
          v43 = v18 % v21;
          if ( !(v18 % v21) )
            goto LABEL_40;
        }
      }
      v72 = v18 - 1;
      v73 = *p_src;
      v74 = v72;
      if ( v72 )
        memmove(p_src, p_src + 1, v72);
      p_src[v74] = v73;
    }
  }
LABEL_40:
  sub_9B6F20((unsigned __int64 *)v86, &src);
  return sub_20131D0(v86, v12 + v16);
}
