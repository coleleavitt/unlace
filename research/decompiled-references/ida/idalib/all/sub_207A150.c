unsigned __int64 __fastcall sub_207A150(int a1, int *a2, __int64 *a3, __int64 *a4)
{
  __m128i *v6; // rax
  int v7; // r8d
  __m128i *v8; // rax
  __int64 v9; // r8
  __m128i *v10; // rax
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r12
  signed __int64 v14; // rsi
  __m128i *v16; // rcx
  signed __int64 v17; // r13
  char *v18; // rbx
  __int64 v19; // rax
  char *v20; // rdx
  __m128i *p_src; // rbx
  __int64 v22; // r8
  __m128i *v23; // rdi
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // r9
  __m128i *v27; // rcx
  __int8 *v28; // rdi
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
  __int8 v40; // dl
  __int8 v41; // dl
  __int8 v42; // dl
  __int8 v43; // dl
  __int64 v44; // rdx
  __int8 *v45; // rcx
  __m128i *v46; // rdx
  __int8 v47; // si
  __int8 v48; // r8
  __int8 v49; // dl
  const __m128i *v50; // rax
  const __m128i *v51; // rdx
  __m128i v52; // xmm0
  __m128i v53; // xmm2
  __int8 *v54; // rax
  __int8 *v55; // rdx
  __int8 v56; // si
  char v57; // si
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
  char v70; // cl
  size_t v71; // rax
  __int8 v72; // r15
  size_t v73; // r14
  __int8 v74; // r14
  __m128i *v75; // rdx
  __m128i *v76; // rax
  __int8 v77; // di
  __int8 v78; // si
  __int64 v79; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v80; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+18h] [rbp-C0h] BYREF
  __m128i src; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v84[3]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v85[3]; // [rsp+60h] [rbp-78h] BYREF
  __m128i si128; // [rsp+90h] [rbp-48h]

  src = 0;
  memset(v84, 0, sizeof(v84));
  memset(v85, 0, sizeof(v85));
  v79 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v6 = sub_A0C4A0(&src, &v79, &src, (unsigned __int64)v85, a1);
  v7 = *a2;
  v80 = v79;
  v8 = sub_A0C4A0(&src, &v80, v6, (unsigned __int64)v85, v7);
  v9 = *a3;
  v81 = v80;
  v10 = sub_20728A0(&src, &v81, v8, (unsigned __int64)v85, v9);
  v11 = *a4;
  v82 = v81;
  v12 = sub_20728A0(&src, &v82, v10, (unsigned __int64)v85, v11);
  v13 = v82;
  v14 = (char *)v12 - (char *)&src;
  if ( !v82 )
    return sub_2012F20(&src, v14, si128.m128i_i64[1]);
  v16 = v12;
  v17 = (char *)v12 - (char *)&src;
  if ( v12 != (__m128i *)v85 && v12 != &src )
  {
    v18 = (char *)((char *)v85 - (char *)v12);
    v19 = 64;
    v20 = v18;
    p_src = &src;
    if ( v20 == (char *)v14 )
    {
      v50 = v16;
      if ( (v16 >= (__m128i *)v84 || &src >= &v16[1])
        && (unsigned __int64)v16->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v51 = &src;
        do
        {
          v52 = _mm_load_si128(v51);
          v53 = _mm_loadu_si128(v50++);
          ++v51;
          v51[-1] = v53;
          v50[-1] = v52;
        }
        while ( v50 != (const __m128i *)&v16->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL] );
        v54 = &src.m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
        v55 = &v16->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != v14 )
        {
          v56 = *v54;
          *v54 = *v55;
          *v55 = v56;
          if ( v16 != (__m128i *)(v54 + 1) )
          {
            v57 = v54[1];
            v54[1] = v55[1];
            v55[1] = v57;
            if ( v16 != (__m128i *)(v54 + 2) )
            {
              v58 = v54[2];
              v54[2] = v55[2];
              v55[2] = v58;
              if ( v16 != (__m128i *)(v54 + 3) )
              {
                v59 = v54[3];
                v54[3] = v55[3];
                v55[3] = v59;
                if ( v16 != (__m128i *)(v54 + 4) )
                {
                  v60 = v54[4];
                  v54[4] = v55[4];
                  v55[4] = v60;
                  if ( v16 != (__m128i *)(v54 + 5) )
                  {
                    v61 = v54[5];
                    v54[5] = v55[5];
                    v55[5] = v61;
                    if ( v16 != (__m128i *)(v54 + 6) )
                    {
                      v62 = v54[6];
                      v54[6] = v55[6];
                      v55[6] = v62;
                      if ( v16 != (__m128i *)(v54 + 7) )
                      {
                        v63 = v54[7];
                        v54[7] = v55[7];
                        v55[7] = v63;
                        if ( v16 != (__m128i *)(v54 + 8) )
                        {
                          v64 = v54[8];
                          v54[8] = v55[8];
                          v55[8] = v64;
                          if ( v16 != (__m128i *)(v54 + 9) )
                          {
                            v65 = v54[9];
                            v54[9] = v55[9];
                            v55[9] = v65;
                            if ( v16 != (__m128i *)(v54 + 10) )
                            {
                              v66 = v54[10];
                              v54[10] = v55[10];
                              v55[10] = v66;
                              if ( v16 != (__m128i *)(v54 + 11) )
                              {
                                v67 = v54[11];
                                v54[11] = v55[11];
                                v55[11] = v67;
                                if ( v16 != (__m128i *)(v54 + 12) )
                                {
                                  v68 = v54[12];
                                  v54[12] = v55[12];
                                  v55[12] = v68;
                                  if ( v16 != (__m128i *)(v54 + 13) )
                                  {
                                    v69 = v54[13];
                                    v54[13] = v55[13];
                                    v55[13] = v69;
                                    if ( v16 != (__m128i *)(v54 + 14) )
                                    {
                                      v70 = v54[14];
                                      v54[14] = v55[14];
                                      v55[14] = v70;
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
        v75 = v16;
        v76 = &src;
        do
        {
          v77 = v75->m128i_i8[0];
          v78 = v76->m128i_i8[0];
          v76 = (__m128i *)((char *)v76 + 1);
          v75 = (__m128i *)((char *)v75 + 1);
          v76[-1].m128i_i8[15] = v77;
          v75[-1].m128i_i8[15] = v78;
        }
        while ( v16 != v76 );
      }
    }
    else
    {
      v22 = 64 - v14;
      if ( v14 >= 64 - v14 )
        goto LABEL_34;
      while ( v14 != 1 )
      {
        v23 = (__m128i *)((char *)p_src + v14);
        if ( v22 > 0 )
        {
          if ( (v23 >= &p_src[1] || v14 + 16 <= 0) && (unsigned __int64)(v22 - 1) > 0xE )
          {
            v24 = 0;
            do
            {
              v25 = _mm_loadu_si128(&p_src[v24 / 0x10]);
              p_src[v24 / 0x10] = _mm_loadu_si128(&v23[v24 / 0x10]);
              v23[v24 / 0x10] = v25;
              v24 += 16LL;
            }
            while ( v24 != (v22 & 0xFFFFFFFFFFFFFFF0LL) );
            v26 = v22 & 0x7FFFFFFFFFFFFFF0LL;
            v27 = (__m128i *)((char *)p_src + (v22 & 0xFFFFFFFFFFFFFFF0LL));
            v28 = &v23->m128i_i8[v22 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v22 != (v22 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v29 = v27->m128i_i8[0];
              v27->m128i_i8[0] = *v28;
              *v28 = v29;
              if ( v22 > v26 + 1 )
              {
                v30 = v27->m128i_i8[1];
                v27->m128i_i8[1] = v28[1];
                v28[1] = v30;
                if ( v22 > v26 + 2 )
                {
                  v31 = v27->m128i_i8[2];
                  v27->m128i_i8[2] = v28[2];
                  v28[2] = v31;
                  if ( v22 > v26 + 3 )
                  {
                    v32 = v27->m128i_i8[3];
                    v27->m128i_i8[3] = v28[3];
                    v28[3] = v32;
                    if ( v22 > v26 + 4 )
                    {
                      v33 = v27->m128i_i8[4];
                      v27->m128i_i8[4] = v28[4];
                      v28[4] = v33;
                      if ( v22 > v26 + 5 )
                      {
                        v34 = v27->m128i_i8[5];
                        v27->m128i_i8[5] = v28[5];
                        v28[5] = v34;
                        if ( v22 > v26 + 6 )
                        {
                          v35 = v27->m128i_i8[6];
                          v27->m128i_i8[6] = v28[6];
                          v28[6] = v35;
                          if ( v22 > v26 + 7 )
                          {
                            v36 = v27->m128i_i8[7];
                            v27->m128i_i8[7] = v28[7];
                            v28[7] = v36;
                            if ( v22 > v26 + 8 )
                            {
                              v37 = v27->m128i_i8[8];
                              v27->m128i_i8[8] = v28[8];
                              v28[8] = v37;
                              if ( v22 > v26 + 9 )
                              {
                                v38 = v27->m128i_i8[9];
                                v27->m128i_i8[9] = v28[9];
                                v28[9] = v38;
                                if ( v22 > v26 + 10 )
                                {
                                  v39 = v27->m128i_i8[10];
                                  v27->m128i_i8[10] = v28[10];
                                  v28[10] = v39;
                                  if ( v22 > v26 + 11 )
                                  {
                                    v40 = v27->m128i_i8[11];
                                    v27->m128i_i8[11] = v28[11];
                                    v28[11] = v40;
                                    if ( v22 > v26 + 12 )
                                    {
                                      v41 = v27->m128i_i8[12];
                                      v27->m128i_i8[12] = v28[12];
                                      v28[12] = v41;
                                      if ( v22 > v26 + 13 )
                                      {
                                        v42 = v27->m128i_i8[13];
                                        v27->m128i_i8[13] = v28[13];
                                        v28[13] = v42;
                                        if ( v22 > v26 + 14 )
                                        {
                                          v43 = v27->m128i_i8[14];
                                          v27->m128i_i8[14] = v28[14];
                                          v28[14] = v43;
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
              v27 = (__m128i *)((char *)p_src + v22);
            }
          }
          else
          {
            v27 = (__m128i *)((char *)p_src + v22);
            do
            {
              v48 = v23->m128i_i8[0];
              v49 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v23 = (__m128i *)((char *)v23 + 1);
              p_src[-1].m128i_i8[15] = v48;
              v23[-1].m128i_i8[15] = v49;
            }
            while ( p_src != v27 );
          }
          p_src = v27;
        }
        if ( !(v19 % v14) )
          goto LABEL_39;
        v22 = v14;
        v44 = v14 - v19 % v14;
        while ( 1 )
        {
          v19 = v22;
          v14 = v44;
          v22 -= v44;
          if ( v44 < v22 )
            break;
LABEL_34:
          if ( v22 == 1 )
          {
            v74 = p_src->m128i_i8[v19 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v19 - 1);
            p_src->m128i_i8[0] = v74;
            goto LABEL_39;
          }
          v45 = &p_src->m128i_i8[v19];
          v46 = (__m128i *)((char *)p_src + v19 - v22);
          p_src = v46;
          if ( v14 > 0 )
          {
            p_src = (__m128i *)((char *)v46 - v14);
            do
            {
              v46 = (__m128i *)((char *)v46 - 1);
              --v45;
              v47 = v46->m128i_i8[0];
              v46->m128i_i8[0] = *v45;
              *v45 = v47;
            }
            while ( v46 != p_src );
          }
          v44 = v19 % v22;
          if ( !(v19 % v22) )
            goto LABEL_39;
        }
      }
      v71 = v19 - 1;
      v72 = p_src->m128i_i8[0];
      v73 = v71;
      if ( v71 )
        memmove(p_src, &p_src->m128i_i8[1], v71);
      p_src->m128i_i8[v73] = v72;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)v85, &src);
  return sub_20131D0(v85, v13 + v17);
}
