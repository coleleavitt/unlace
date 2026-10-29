unsigned __int64 __fastcall sub_2070640(__int64 a1, __int64 *a2)
{
  __m128i *v2; // rax
  __int64 v3; // r8
  __m128i *v4; // rax
  __int64 v5; // r12
  signed __int64 v6; // rsi
  __m128i *v8; // rcx
  signed __int64 v9; // r13
  char *v10; // rbx
  __int64 v11; // rax
  char *v12; // rdx
  __m128i *p_src; // rbx
  __int64 v14; // r8
  __m128i *v15; // rdi
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // r9
  __m128i *v19; // rcx
  __int8 *v20; // rdi
  __int8 v21; // dl
  __int8 v22; // dl
  __int8 v23; // dl
  __int8 v24; // dl
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
  __int64 v36; // rdx
  __int8 *v37; // rcx
  __m128i *v38; // rdx
  __int8 v39; // si
  __int8 v40; // r8
  __int8 v41; // dl
  const __m128i *v42; // rax
  const __m128i *v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm2
  __int8 *v46; // rax
  __int8 *v47; // rdx
  __int8 v48; // si
  char v49; // si
  char v50; // si
  char v51; // si
  char v52; // si
  char v53; // si
  char v54; // si
  char v55; // si
  char v56; // si
  char v57; // si
  char v58; // si
  char v59; // si
  char v60; // si
  char v61; // si
  char v62; // cl
  size_t v63; // rax
  __int8 v64; // r15
  size_t v65; // r14
  __int8 v66; // r14
  __m128i *v67; // rdx
  __m128i *v68; // rax
  __int8 v69; // di
  __int8 v70; // si
  __int64 v71; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+8h] [rbp-C0h] BYREF
  __m128i src; // [rsp+10h] [rbp-B8h] BYREF
  _OWORD v74[3]; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v75[3]; // [rsp+50h] [rbp-78h] BYREF
  __m128i si128; // [rsp+80h] [rbp-48h]

  src = 0;
  memset(v74, 0, sizeof(v74));
  memset(v75, 0, sizeof(v75));
  v71 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v2 = sub_206E9E0(&src, &v71, &src, (unsigned __int64)v75, a1);
  v3 = *a2;
  v72 = v71;
  v4 = sub_206E9E0(&src, &v72, v2, (unsigned __int64)v75, v3);
  v5 = v72;
  v6 = (char *)v4 - (char *)&src;
  if ( !v72 )
    return sub_2012F20(&src, v6, si128.m128i_i64[1]);
  v8 = v4;
  v9 = (char *)v4 - (char *)&src;
  if ( v4 != (__m128i *)v75 && v4 != &src )
  {
    v10 = (char *)((char *)v75 - (char *)v4);
    v11 = 64;
    v12 = v10;
    p_src = &src;
    if ( v12 == (char *)v6 )
    {
      v42 = v8;
      if ( (v8 >= (__m128i *)v74 || &src >= &v8[1]) && (unsigned __int64)v8->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v43 = &src;
        do
        {
          v44 = _mm_load_si128(v43);
          v45 = _mm_loadu_si128(v42++);
          ++v43;
          v43[-1] = v45;
          v42[-1] = v44;
        }
        while ( v42 != (const __m128i *)&v8->m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL] );
        v46 = &src.m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL];
        v47 = &v8->m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != v6 )
        {
          v48 = *v46;
          *v46 = *v47;
          *v47 = v48;
          if ( v8 != (__m128i *)(v46 + 1) )
          {
            v49 = v46[1];
            v46[1] = v47[1];
            v47[1] = v49;
            if ( v8 != (__m128i *)(v46 + 2) )
            {
              v50 = v46[2];
              v46[2] = v47[2];
              v47[2] = v50;
              if ( v8 != (__m128i *)(v46 + 3) )
              {
                v51 = v46[3];
                v46[3] = v47[3];
                v47[3] = v51;
                if ( v8 != (__m128i *)(v46 + 4) )
                {
                  v52 = v46[4];
                  v46[4] = v47[4];
                  v47[4] = v52;
                  if ( v8 != (__m128i *)(v46 + 5) )
                  {
                    v53 = v46[5];
                    v46[5] = v47[5];
                    v47[5] = v53;
                    if ( v8 != (__m128i *)(v46 + 6) )
                    {
                      v54 = v46[6];
                      v46[6] = v47[6];
                      v47[6] = v54;
                      if ( v8 != (__m128i *)(v46 + 7) )
                      {
                        v55 = v46[7];
                        v46[7] = v47[7];
                        v47[7] = v55;
                        if ( v8 != (__m128i *)(v46 + 8) )
                        {
                          v56 = v46[8];
                          v46[8] = v47[8];
                          v47[8] = v56;
                          if ( v8 != (__m128i *)(v46 + 9) )
                          {
                            v57 = v46[9];
                            v46[9] = v47[9];
                            v47[9] = v57;
                            if ( v8 != (__m128i *)(v46 + 10) )
                            {
                              v58 = v46[10];
                              v46[10] = v47[10];
                              v47[10] = v58;
                              if ( v8 != (__m128i *)(v46 + 11) )
                              {
                                v59 = v46[11];
                                v46[11] = v47[11];
                                v47[11] = v59;
                                if ( v8 != (__m128i *)(v46 + 12) )
                                {
                                  v60 = v46[12];
                                  v46[12] = v47[12];
                                  v47[12] = v60;
                                  if ( v8 != (__m128i *)(v46 + 13) )
                                  {
                                    v61 = v46[13];
                                    v46[13] = v47[13];
                                    v47[13] = v61;
                                    if ( v8 != (__m128i *)(v46 + 14) )
                                    {
                                      v62 = v46[14];
                                      v46[14] = v47[14];
                                      v47[14] = v62;
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
        v67 = v8;
        v68 = &src;
        do
        {
          v69 = v67->m128i_i8[0];
          v70 = v68->m128i_i8[0];
          v68 = (__m128i *)((char *)v68 + 1);
          v67 = (__m128i *)((char *)v67 + 1);
          v68[-1].m128i_i8[15] = v69;
          v67[-1].m128i_i8[15] = v70;
        }
        while ( v8 != v68 );
      }
    }
    else
    {
      v14 = 64 - v6;
      if ( v6 >= 64 - v6 )
        goto LABEL_34;
      while ( v6 != 1 )
      {
        v15 = (__m128i *)((char *)p_src + v6);
        if ( v14 > 0 )
        {
          if ( (v15 >= &p_src[1] || v6 + 16 <= 0) && (unsigned __int64)(v14 - 1) > 0xE )
          {
            v16 = 0;
            do
            {
              v17 = _mm_loadu_si128(&p_src[v16 / 0x10]);
              p_src[v16 / 0x10] = _mm_loadu_si128(&v15[v16 / 0x10]);
              v15[v16 / 0x10] = v17;
              v16 += 16LL;
            }
            while ( v16 != (v14 & 0xFFFFFFFFFFFFFFF0LL) );
            v18 = v14 & 0x7FFFFFFFFFFFFFF0LL;
            v19 = (__m128i *)((char *)p_src + (v14 & 0xFFFFFFFFFFFFFFF0LL));
            v20 = &v15->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v14 != (v14 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v21 = v19->m128i_i8[0];
              v19->m128i_i8[0] = *v20;
              *v20 = v21;
              if ( v14 > v18 + 1 )
              {
                v22 = v19->m128i_i8[1];
                v19->m128i_i8[1] = v20[1];
                v20[1] = v22;
                if ( v14 > v18 + 2 )
                {
                  v23 = v19->m128i_i8[2];
                  v19->m128i_i8[2] = v20[2];
                  v20[2] = v23;
                  if ( v14 > v18 + 3 )
                  {
                    v24 = v19->m128i_i8[3];
                    v19->m128i_i8[3] = v20[3];
                    v20[3] = v24;
                    if ( v14 > v18 + 4 )
                    {
                      v25 = v19->m128i_i8[4];
                      v19->m128i_i8[4] = v20[4];
                      v20[4] = v25;
                      if ( v14 > v18 + 5 )
                      {
                        v26 = v19->m128i_i8[5];
                        v19->m128i_i8[5] = v20[5];
                        v20[5] = v26;
                        if ( v14 > v18 + 6 )
                        {
                          v27 = v19->m128i_i8[6];
                          v19->m128i_i8[6] = v20[6];
                          v20[6] = v27;
                          if ( v14 > v18 + 7 )
                          {
                            v28 = v19->m128i_i8[7];
                            v19->m128i_i8[7] = v20[7];
                            v20[7] = v28;
                            if ( v14 > v18 + 8 )
                            {
                              v29 = v19->m128i_i8[8];
                              v19->m128i_i8[8] = v20[8];
                              v20[8] = v29;
                              if ( v14 > v18 + 9 )
                              {
                                v30 = v19->m128i_i8[9];
                                v19->m128i_i8[9] = v20[9];
                                v20[9] = v30;
                                if ( v14 > v18 + 10 )
                                {
                                  v31 = v19->m128i_i8[10];
                                  v19->m128i_i8[10] = v20[10];
                                  v20[10] = v31;
                                  if ( v14 > v18 + 11 )
                                  {
                                    v32 = v19->m128i_i8[11];
                                    v19->m128i_i8[11] = v20[11];
                                    v20[11] = v32;
                                    if ( v14 > v18 + 12 )
                                    {
                                      v33 = v19->m128i_i8[12];
                                      v19->m128i_i8[12] = v20[12];
                                      v20[12] = v33;
                                      if ( v14 > v18 + 13 )
                                      {
                                        v34 = v19->m128i_i8[13];
                                        v19->m128i_i8[13] = v20[13];
                                        v20[13] = v34;
                                        if ( v14 > v18 + 14 )
                                        {
                                          v35 = v19->m128i_i8[14];
                                          v19->m128i_i8[14] = v20[14];
                                          v20[14] = v35;
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
              v19 = (__m128i *)((char *)p_src + v14);
            }
          }
          else
          {
            v19 = (__m128i *)((char *)p_src + v14);
            do
            {
              v40 = v15->m128i_i8[0];
              v41 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v15 = (__m128i *)((char *)v15 + 1);
              p_src[-1].m128i_i8[15] = v40;
              v15[-1].m128i_i8[15] = v41;
            }
            while ( p_src != v19 );
          }
          p_src = v19;
        }
        if ( !(v11 % v6) )
          goto LABEL_39;
        v14 = v6;
        v36 = v6 - v11 % v6;
        while ( 1 )
        {
          v11 = v14;
          v6 = v36;
          v14 -= v36;
          if ( v36 < v14 )
            break;
LABEL_34:
          if ( v14 == 1 )
          {
            v66 = p_src->m128i_i8[v11 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v11 - 1);
            p_src->m128i_i8[0] = v66;
            goto LABEL_39;
          }
          v37 = &p_src->m128i_i8[v11];
          v38 = (__m128i *)((char *)p_src + v11 - v14);
          p_src = v38;
          if ( v6 > 0 )
          {
            p_src = (__m128i *)((char *)v38 - v6);
            do
            {
              v38 = (__m128i *)((char *)v38 - 1);
              --v37;
              v39 = v38->m128i_i8[0];
              v38->m128i_i8[0] = *v37;
              *v37 = v39;
            }
            while ( v38 != p_src );
          }
          v36 = v11 % v14;
          if ( !(v11 % v14) )
            goto LABEL_39;
        }
      }
      v63 = v11 - 1;
      v64 = p_src->m128i_i8[0];
      v65 = v63;
      if ( v63 )
        memmove(p_src, &p_src->m128i_i8[1], v63);
      p_src->m128i_i8[v65] = v64;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)v75, &src);
  return sub_20131D0(v75, v5 + v9);
}
