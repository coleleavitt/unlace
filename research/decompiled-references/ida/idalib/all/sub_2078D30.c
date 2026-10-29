unsigned __int64 __fastcall sub_2078D30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __m128i *v3; // rax
  __int64 v4; // r8
  __m128i *v5; // rax
  __int64 v6; // r12
  signed __int64 v7; // rsi
  __m128i *v9; // rcx
  signed __int64 v10; // r13
  char *v11; // rbx
  __int64 v12; // rax
  char *v13; // rdx
  __m128i *p_src; // rbx
  __int64 v15; // r8
  __m128i *v16; // rdi
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // r9
  __m128i *v20; // rcx
  __int8 *v21; // rdi
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
  __int8 v36; // dl
  __int64 v37; // rdx
  __int8 *v38; // rcx
  __m128i *v39; // rdx
  __int8 v40; // si
  __int8 v41; // r8
  __int8 v42; // dl
  const __m128i *v43; // rax
  const __m128i *v44; // rdx
  __m128i v45; // xmm0
  __m128i v46; // xmm2
  __int8 *v47; // rax
  __int8 *v48; // rdx
  __int8 v49; // si
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
  char v62; // si
  char v63; // cl
  size_t v64; // rax
  __int8 v65; // r15
  size_t v66; // r14
  __int8 v67; // r14
  __m128i *v68; // rdx
  __m128i *v69; // rax
  __int8 v70; // di
  __int8 v71; // si
  __int64 v72; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+8h] [rbp-C0h] BYREF
  __m128i src; // [rsp+10h] [rbp-B8h] BYREF
  _OWORD v75[3]; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v76[3]; // [rsp+50h] [rbp-78h] BYREF
  __m128i si128; // [rsp+80h] [rbp-48h]

  src = 0;
  memset(v75, 0, sizeof(v75));
  memset(v76, 0, sizeof(v76));
  v72 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v2 = sub_220C570(a1);
  v3 = sub_A232E0(&src, &v72, &src, (unsigned __int64)v76, v2);
  v4 = *a2;
  v73 = v72;
  v5 = sub_20728A0(&src, &v73, v3, (unsigned __int64)v76, v4);
  v6 = v73;
  v7 = (char *)v5 - (char *)&src;
  if ( !v73 )
    return sub_2012F20(&src, v7, si128.m128i_i64[1]);
  v9 = v5;
  v10 = (char *)v5 - (char *)&src;
  if ( v5 != (__m128i *)v76 && v5 != &src )
  {
    v11 = (char *)((char *)v76 - (char *)v5);
    v12 = 64;
    v13 = v11;
    p_src = &src;
    if ( v13 == (char *)v7 )
    {
      v43 = v9;
      if ( (v9 >= (__m128i *)v75 || &src >= &v9[1]) && (unsigned __int64)v9->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v44 = &src;
        do
        {
          v45 = _mm_load_si128(v44);
          v46 = _mm_loadu_si128(v43++);
          ++v44;
          v44[-1] = v46;
          v43[-1] = v45;
        }
        while ( v43 != (const __m128i *)&v9->m128i_i8[v7 & 0xFFFFFFFFFFFFFFF0LL] );
        v47 = &src.m128i_i8[v7 & 0xFFFFFFFFFFFFFFF0LL];
        v48 = &v9->m128i_i8[v7 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != v7 )
        {
          v49 = *v47;
          *v47 = *v48;
          *v48 = v49;
          if ( v9 != (__m128i *)(v47 + 1) )
          {
            v50 = v47[1];
            v47[1] = v48[1];
            v48[1] = v50;
            if ( v9 != (__m128i *)(v47 + 2) )
            {
              v51 = v47[2];
              v47[2] = v48[2];
              v48[2] = v51;
              if ( v9 != (__m128i *)(v47 + 3) )
              {
                v52 = v47[3];
                v47[3] = v48[3];
                v48[3] = v52;
                if ( v9 != (__m128i *)(v47 + 4) )
                {
                  v53 = v47[4];
                  v47[4] = v48[4];
                  v48[4] = v53;
                  if ( v9 != (__m128i *)(v47 + 5) )
                  {
                    v54 = v47[5];
                    v47[5] = v48[5];
                    v48[5] = v54;
                    if ( v9 != (__m128i *)(v47 + 6) )
                    {
                      v55 = v47[6];
                      v47[6] = v48[6];
                      v48[6] = v55;
                      if ( v9 != (__m128i *)(v47 + 7) )
                      {
                        v56 = v47[7];
                        v47[7] = v48[7];
                        v48[7] = v56;
                        if ( v9 != (__m128i *)(v47 + 8) )
                        {
                          v57 = v47[8];
                          v47[8] = v48[8];
                          v48[8] = v57;
                          if ( v9 != (__m128i *)(v47 + 9) )
                          {
                            v58 = v47[9];
                            v47[9] = v48[9];
                            v48[9] = v58;
                            if ( v9 != (__m128i *)(v47 + 10) )
                            {
                              v59 = v47[10];
                              v47[10] = v48[10];
                              v48[10] = v59;
                              if ( v9 != (__m128i *)(v47 + 11) )
                              {
                                v60 = v47[11];
                                v47[11] = v48[11];
                                v48[11] = v60;
                                if ( v9 != (__m128i *)(v47 + 12) )
                                {
                                  v61 = v47[12];
                                  v47[12] = v48[12];
                                  v48[12] = v61;
                                  if ( v9 != (__m128i *)(v47 + 13) )
                                  {
                                    v62 = v47[13];
                                    v47[13] = v48[13];
                                    v48[13] = v62;
                                    if ( v9 != (__m128i *)(v47 + 14) )
                                    {
                                      v63 = v47[14];
                                      v47[14] = v48[14];
                                      v48[14] = v63;
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
        v68 = v9;
        v69 = &src;
        do
        {
          v70 = v68->m128i_i8[0];
          v71 = v69->m128i_i8[0];
          v69 = (__m128i *)((char *)v69 + 1);
          v68 = (__m128i *)((char *)v68 + 1);
          v69[-1].m128i_i8[15] = v70;
          v68[-1].m128i_i8[15] = v71;
        }
        while ( v9 != v69 );
      }
    }
    else
    {
      v15 = 64 - v7;
      if ( v7 >= 64 - v7 )
        goto LABEL_34;
      while ( v7 != 1 )
      {
        v16 = (__m128i *)((char *)p_src + v7);
        if ( v15 > 0 )
        {
          if ( (v16 >= &p_src[1] || v7 + 16 <= 0) && (unsigned __int64)(v15 - 1) > 0xE )
          {
            v17 = 0;
            do
            {
              v18 = _mm_loadu_si128(&p_src[v17 / 0x10]);
              p_src[v17 / 0x10] = _mm_loadu_si128(&v16[v17 / 0x10]);
              v16[v17 / 0x10] = v18;
              v17 += 16LL;
            }
            while ( v17 != (v15 & 0xFFFFFFFFFFFFFFF0LL) );
            v19 = v15 & 0x7FFFFFFFFFFFFFF0LL;
            v20 = (__m128i *)((char *)p_src + (v15 & 0xFFFFFFFFFFFFFFF0LL));
            v21 = &v16->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v15 != (v15 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v22 = v20->m128i_i8[0];
              v20->m128i_i8[0] = *v21;
              *v21 = v22;
              if ( v15 > v19 + 1 )
              {
                v23 = v20->m128i_i8[1];
                v20->m128i_i8[1] = v21[1];
                v21[1] = v23;
                if ( v15 > v19 + 2 )
                {
                  v24 = v20->m128i_i8[2];
                  v20->m128i_i8[2] = v21[2];
                  v21[2] = v24;
                  if ( v15 > v19 + 3 )
                  {
                    v25 = v20->m128i_i8[3];
                    v20->m128i_i8[3] = v21[3];
                    v21[3] = v25;
                    if ( v15 > v19 + 4 )
                    {
                      v26 = v20->m128i_i8[4];
                      v20->m128i_i8[4] = v21[4];
                      v21[4] = v26;
                      if ( v15 > v19 + 5 )
                      {
                        v27 = v20->m128i_i8[5];
                        v20->m128i_i8[5] = v21[5];
                        v21[5] = v27;
                        if ( v15 > v19 + 6 )
                        {
                          v28 = v20->m128i_i8[6];
                          v20->m128i_i8[6] = v21[6];
                          v21[6] = v28;
                          if ( v15 > v19 + 7 )
                          {
                            v29 = v20->m128i_i8[7];
                            v20->m128i_i8[7] = v21[7];
                            v21[7] = v29;
                            if ( v15 > v19 + 8 )
                            {
                              v30 = v20->m128i_i8[8];
                              v20->m128i_i8[8] = v21[8];
                              v21[8] = v30;
                              if ( v15 > v19 + 9 )
                              {
                                v31 = v20->m128i_i8[9];
                                v20->m128i_i8[9] = v21[9];
                                v21[9] = v31;
                                if ( v15 > v19 + 10 )
                                {
                                  v32 = v20->m128i_i8[10];
                                  v20->m128i_i8[10] = v21[10];
                                  v21[10] = v32;
                                  if ( v15 > v19 + 11 )
                                  {
                                    v33 = v20->m128i_i8[11];
                                    v20->m128i_i8[11] = v21[11];
                                    v21[11] = v33;
                                    if ( v15 > v19 + 12 )
                                    {
                                      v34 = v20->m128i_i8[12];
                                      v20->m128i_i8[12] = v21[12];
                                      v21[12] = v34;
                                      if ( v15 > v19 + 13 )
                                      {
                                        v35 = v20->m128i_i8[13];
                                        v20->m128i_i8[13] = v21[13];
                                        v21[13] = v35;
                                        if ( v15 > v19 + 14 )
                                        {
                                          v36 = v20->m128i_i8[14];
                                          v20->m128i_i8[14] = v21[14];
                                          v21[14] = v36;
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
              v20 = (__m128i *)((char *)p_src + v15);
            }
          }
          else
          {
            v20 = (__m128i *)((char *)p_src + v15);
            do
            {
              v41 = v16->m128i_i8[0];
              v42 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v16 = (__m128i *)((char *)v16 + 1);
              p_src[-1].m128i_i8[15] = v41;
              v16[-1].m128i_i8[15] = v42;
            }
            while ( p_src != v20 );
          }
          p_src = v20;
        }
        if ( !(v12 % v7) )
          goto LABEL_39;
        v15 = v7;
        v37 = v7 - v12 % v7;
        while ( 1 )
        {
          v12 = v15;
          v7 = v37;
          v15 -= v37;
          if ( v37 < v15 )
            break;
LABEL_34:
          if ( v15 == 1 )
          {
            v67 = p_src->m128i_i8[v12 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v12 - 1);
            p_src->m128i_i8[0] = v67;
            goto LABEL_39;
          }
          v38 = &p_src->m128i_i8[v12];
          v39 = (__m128i *)((char *)p_src + v12 - v15);
          p_src = v39;
          if ( v7 > 0 )
          {
            p_src = (__m128i *)((char *)v39 - v7);
            do
            {
              v39 = (__m128i *)((char *)v39 - 1);
              --v38;
              v40 = v39->m128i_i8[0];
              v39->m128i_i8[0] = *v38;
              *v38 = v40;
            }
            while ( v39 != p_src );
          }
          v37 = v12 % v15;
          if ( !(v12 % v15) )
            goto LABEL_39;
        }
      }
      v64 = v12 - 1;
      v65 = p_src->m128i_i8[0];
      v66 = v64;
      if ( v64 )
        memmove(p_src, &p_src->m128i_i8[1], v64);
      p_src->m128i_i8[v66] = v65;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)v76, &src);
  return sub_20131D0(v76, v6 + v10);
}
