unsigned __int64 __fastcall sub_2070CD0(int a1, __int8 *a2, __int64 *a3)
{
  __m128i *v4; // rax
  __int8 v5; // dl
  __int64 v6; // r15
  _QWORD *v7; // r12
  char *v8; // r12
  size_t v9; // rdx
  char *v10; // rsi
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r12
  __m128i *v14; // rdx
  signed __int64 v15; // rsi
  signed __int64 v16; // r13
  char *v18; // rbx
  __int64 v19; // rax
  char *v20; // rcx
  __m128i *p_dest; // rbx
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
  __m128i v50; // xmm4
  __m128i v51; // xmm5
  const __m128i *v52; // rax
  const __m128i *v53; // rcx
  __m128i v54; // xmm0
  __m128i v55; // xmm2
  __int8 *v56; // rax
  __int8 *v57; // rcx
  __int8 v58; // si
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
  char v71; // si
  char v72; // dl
  size_t v73; // rax
  __int8 v74; // r15
  size_t v75; // r14
  __int8 v76; // r14
  __m128i *v77; // rcx
  __m128i *v78; // rax
  __int8 v79; // di
  __int8 v80; // si
  __m128i v81; // [rsp+0h] [rbp-108h] BYREF
  __m128i v82; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v83; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v84; // [rsp+30h] [rbp-D8h]
  __int64 v85; // [rsp+40h] [rbp-C8h] BYREF
  __int64 src; // [rsp+48h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v88[3]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v89; // [rsp+90h] [rbp-78h] BYREF
  __m128i v90; // [rsp+A0h] [rbp-68h]
  __m128i v91; // [rsp+B0h] [rbp-58h]
  __m128i si128; // [rsp+C0h] [rbp-48h]

  dest = 0;
  memset(v88, 0, sizeof(v88));
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v85 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v4 = sub_A0C4A0(&dest, &v85, &dest, (unsigned __int64)&v89, a1);
  v5 = *a2;
  v6 = v85;
  v7 = (__int64 *)((char *)v4->m128i_i64 + 1);
  LOBYTE(src) = *a2;
  if ( &v4->m128i_i8[1] <= (__int8 *)&v89 )
  {
    v4->m128i_i8[0] = v5;
  }
  else
  {
    v8 = (char *)((char *)&v89 - (char *)v4);
    memcpy(v4, &src, (char *)&v89 - (char *)v4);
    if ( v6 )
    {
      v6 += 64;
      sub_9B6F20((unsigned __int64 *)&v89, &dest);
    }
    else
    {
      v6 = 64;
      sub_A09B80((unsigned __int64 *)&v81, &dest, si128.m128i_u64[1]);
      v50 = _mm_loadu_si128(&v82);
      v51 = _mm_loadu_si128(&v83);
      v89 = _mm_loadu_si128(&v81);
      v90 = v50;
      v91 = v51;
      si128.m128i_i64[0] = v84;
    }
    v9 = 1LL - (_QWORD)v8;
    v10 = (char *)&src + (_QWORD)v8;
    v7 = (__int64 *)((char *)dest.m128i_i64 + 1LL - (_QWORD)v8);
    memcpy(&dest, v10, v9);
  }
  v11 = *a3;
  src = v6;
  v12 = sub_206E9E0(&dest, &src, v7, (unsigned __int64)&v89, v11);
  v13 = src;
  v14 = v12;
  v15 = (char *)v12 - (char *)&dest;
  v16 = (char *)v12 - (char *)&dest;
  if ( !src )
    return sub_2012F20(&dest, v15, si128.m128i_i64[1]);
  if ( v12 != &v89 && v12 != &dest )
  {
    v18 = (char *)((char *)&v89 - (char *)v12);
    v19 = 64;
    v20 = v18;
    p_dest = &dest;
    if ( v20 == (char *)v15 )
    {
      v52 = v14;
      if ( (v14 >= (__m128i *)v88 || &dest >= &v14[1])
        && (unsigned __int64)v14->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
      {
        v53 = &dest;
        do
        {
          v54 = _mm_load_si128(v53);
          v55 = _mm_loadu_si128(v52++);
          ++v53;
          v53[-1] = v55;
          v52[-1] = v54;
        }
        while ( v52 != (const __m128i *)&v14->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL] );
        v56 = &dest.m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
        v57 = &v14->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v15 != (v15 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v58 = *v56;
          *v56 = *v57;
          *v57 = v58;
          if ( v14 != (__m128i *)(v56 + 1) )
          {
            v59 = v56[1];
            v56[1] = v57[1];
            v57[1] = v59;
            if ( v14 != (__m128i *)(v56 + 2) )
            {
              v60 = v56[2];
              v56[2] = v57[2];
              v57[2] = v60;
              if ( v14 != (__m128i *)(v56 + 3) )
              {
                v61 = v56[3];
                v56[3] = v57[3];
                v57[3] = v61;
                if ( v14 != (__m128i *)(v56 + 4) )
                {
                  v62 = v56[4];
                  v56[4] = v57[4];
                  v57[4] = v62;
                  if ( v14 != (__m128i *)(v56 + 5) )
                  {
                    v63 = v56[5];
                    v56[5] = v57[5];
                    v57[5] = v63;
                    if ( v14 != (__m128i *)(v56 + 6) )
                    {
                      v64 = v56[6];
                      v56[6] = v57[6];
                      v57[6] = v64;
                      if ( v14 != (__m128i *)(v56 + 7) )
                      {
                        v65 = v56[7];
                        v56[7] = v57[7];
                        v57[7] = v65;
                        if ( v14 != (__m128i *)(v56 + 8) )
                        {
                          v66 = v56[8];
                          v56[8] = v57[8];
                          v57[8] = v66;
                          if ( v14 != (__m128i *)(v56 + 9) )
                          {
                            v67 = v56[9];
                            v56[9] = v57[9];
                            v57[9] = v67;
                            if ( v14 != (__m128i *)(v56 + 10) )
                            {
                              v68 = v56[10];
                              v56[10] = v57[10];
                              v57[10] = v68;
                              if ( v14 != (__m128i *)(v56 + 11) )
                              {
                                v69 = v56[11];
                                v56[11] = v57[11];
                                v57[11] = v69;
                                if ( v14 != (__m128i *)(v56 + 12) )
                                {
                                  v70 = v56[12];
                                  v56[12] = v57[12];
                                  v57[12] = v70;
                                  if ( v14 != (__m128i *)(v56 + 13) )
                                  {
                                    v71 = v56[13];
                                    v56[13] = v57[13];
                                    v57[13] = v71;
                                    if ( v14 != (__m128i *)(v56 + 14) )
                                    {
                                      v72 = v56[14];
                                      v56[14] = v57[14];
                                      v57[14] = v72;
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
        v77 = v14;
        v78 = &dest;
        do
        {
          v79 = v77->m128i_i8[0];
          v80 = v78->m128i_i8[0];
          v78 = (__m128i *)((char *)v78 + 1);
          v77 = (__m128i *)((char *)v77 + 1);
          v78[-1].m128i_i8[15] = v79;
          v77[-1].m128i_i8[15] = v80;
        }
        while ( v14 != v78 );
      }
    }
    else
    {
      v22 = 64 - v15;
      if ( v15 >= 64 - v15 )
        goto LABEL_39;
      while ( v15 != 1 )
      {
        v23 = (__m128i *)((char *)p_dest + v15);
        if ( v22 > 0 )
        {
          if ( (v23 >= &p_dest[1] || v15 + 16 <= 0) && (unsigned __int64)(v22 - 1) > 0xE )
          {
            v24 = 0;
            do
            {
              v25 = _mm_loadu_si128(&p_dest[v24 / 0x10]);
              p_dest[v24 / 0x10] = _mm_loadu_si128(&v23[v24 / 0x10]);
              v23[v24 / 0x10] = v25;
              v24 += 16LL;
            }
            while ( v24 != (v22 & 0xFFFFFFFFFFFFFFF0LL) );
            v26 = v22 & 0x7FFFFFFFFFFFFFF0LL;
            v27 = (__m128i *)((char *)p_dest + (v22 & 0xFFFFFFFFFFFFFFF0LL));
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
              v27 = (__m128i *)((char *)p_dest + v22);
            }
          }
          else
          {
            v27 = (__m128i *)((char *)p_dest + v22);
            do
            {
              v48 = v23->m128i_i8[0];
              v49 = p_dest->m128i_i8[0];
              p_dest = (__m128i *)((char *)p_dest + 1);
              v23 = (__m128i *)((char *)v23 + 1);
              p_dest[-1].m128i_i8[15] = v48;
              v23[-1].m128i_i8[15] = v49;
            }
            while ( p_dest != v27 );
          }
          p_dest = v27;
        }
        if ( !(v19 % v15) )
          goto LABEL_44;
        v22 = v15;
        v44 = v15 - v19 % v15;
        while ( 1 )
        {
          v19 = v22;
          v15 = v44;
          v22 -= v44;
          if ( v44 < v22 )
            break;
LABEL_39:
          if ( v22 == 1 )
          {
            v76 = p_dest->m128i_i8[v19 - 1];
            memmove(&p_dest->m128i_i8[1], p_dest, v19 - 1);
            p_dest->m128i_i8[0] = v76;
            goto LABEL_44;
          }
          v45 = &p_dest->m128i_i8[v19];
          v46 = (__m128i *)((char *)p_dest + v19 - v22);
          p_dest = v46;
          if ( v15 > 0 )
          {
            p_dest = (__m128i *)((char *)v46 - v15);
            do
            {
              v46 = (__m128i *)((char *)v46 - 1);
              --v45;
              v47 = v46->m128i_i8[0];
              v46->m128i_i8[0] = *v45;
              *v45 = v47;
            }
            while ( v46 != p_dest );
          }
          v44 = v19 % v22;
          if ( !(v19 % v22) )
            goto LABEL_44;
        }
      }
      v73 = v19 - 1;
      v74 = p_dest->m128i_i8[0];
      v75 = v73;
      if ( v73 )
        memmove(p_dest, &p_dest->m128i_i8[1], v73);
      p_dest->m128i_i8[v75] = v74;
    }
  }
LABEL_44:
  sub_9B6F20((unsigned __int64 *)&v89, &dest);
  return sub_20131D0(&v89, v13 + v16);
}
