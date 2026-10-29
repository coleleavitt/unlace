unsigned __int64 __fastcall sub_20AE310(int a1, __int16 *a2, __int64 *a3, __int64 *a4, char *a5)
{
  __m128i *v6; // rax
  __int16 v7; // dx
  __int64 v8; // r13
  _QWORD *v9; // r10
  char *v10; // rbx
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r8
  __m128i *v14; // rax
  char v15; // r8
  __m128i *v16; // rax
  __int64 v17; // r12
  __m128i *v18; // rcx
  signed __int64 v19; // rsi
  signed __int64 v20; // r13
  char *v22; // rbx
  __int64 v23; // rax
  char *v24; // rdx
  __m128i *p_dest; // rbx
  __int64 v26; // r8
  __m128i *v27; // rdi
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // r9
  __m128i *v31; // rcx
  __int8 *v32; // rdi
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
  __int8 v47; // dl
  __int64 v48; // rdx
  __int8 *v49; // rcx
  __m128i *v50; // rdx
  __int8 v51; // si
  __int8 v52; // r8
  __int8 v53; // dl
  __m128i v54; // xmm4
  __m128i v55; // xmm5
  const __m128i *v56; // rax
  const __m128i *v57; // rdx
  __m128i v58; // xmm0
  __m128i v59; // xmm2
  __int8 *v60; // rax
  __int8 *v61; // rdx
  __int8 v62; // si
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
  char v73; // si
  char v74; // si
  char v75; // si
  char v76; // cl
  size_t v77; // rax
  __int8 v78; // r15
  size_t v79; // r14
  __int8 v80; // r14
  __m128i *v81; // rdx
  __m128i *v82; // rax
  __int8 v83; // di
  __int8 v84; // si
  __m128i v87; // [rsp+18h] [rbp-118h] BYREF
  __m128i v88; // [rsp+28h] [rbp-108h] BYREF
  __m128i v89; // [rsp+38h] [rbp-F8h] BYREF
  __int64 v90; // [rsp+48h] [rbp-E8h]
  __int64 v91; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+68h] [rbp-C8h] BYREF
  __int64 src; // [rsp+70h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+78h] [rbp-B8h] BYREF
  _OWORD v96[3]; // [rsp+88h] [rbp-A8h] BYREF
  __m128i v97; // [rsp+B8h] [rbp-78h] BYREF
  __m128i v98; // [rsp+C8h] [rbp-68h]
  __m128i v99; // [rsp+D8h] [rbp-58h]
  __m128i si128; // [rsp+E8h] [rbp-48h]

  dest = 0;
  memset(v96, 0, sizeof(v96));
  v97 = 0;
  v98 = 0;
  v99 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v91 = 0;
  v6 = sub_A0C4A0(&dest, &v91, &dest, (unsigned __int64)&v97, a1);
  v7 = *a2;
  v8 = v91;
  v9 = (__int64 *)((char *)v6->m128i_i64 + 2);
  LOWORD(src) = *a2;
  if ( &v6->m128i_i16[1] <= (__int16 *)&v97 )
  {
    v6->m128i_i16[0] = v7;
  }
  else
  {
    v10 = (char *)((char *)&v97 - (char *)v6);
    memcpy(v6, &src, (char *)&v97 - (char *)v6);
    if ( v8 )
    {
      v8 += 64;
      sub_9B6F20((unsigned __int64 *)&v97, &dest);
    }
    else
    {
      v8 = 64;
      sub_A09B80((unsigned __int64 *)&v87, &dest, si128.m128i_u64[1]);
      v54 = _mm_loadu_si128(&v88);
      v55 = _mm_loadu_si128(&v89);
      v97 = _mm_loadu_si128(&v87);
      v98 = v54;
      v99 = v55;
      si128.m128i_i64[0] = v90;
    }
    memcpy(&dest, (char *)&src + (_QWORD)v10, 2LL - (_QWORD)v10);
    v9 = (__int64 *)((char *)dest.m128i_i64 + 2LL - (_QWORD)v10);
  }
  v11 = *a3;
  v92 = v8;
  v12 = sub_206E9E0(&dest, &v92, v9, (unsigned __int64)&v97, v11);
  v13 = *a4;
  v93 = v92;
  v14 = sub_206E9E0(&dest, &v93, v12, (unsigned __int64)&v97, v13);
  v15 = *a5;
  src = v93;
  v16 = (__m128i *)sub_207A9D0(&dest, &src, v14, (unsigned __int64)&v97, v15);
  v17 = src;
  v18 = v16;
  v19 = (char *)v16 - (char *)&dest;
  v20 = (char *)v16 - (char *)&dest;
  if ( !src )
    return sub_2012F20(&dest, v19, si128.m128i_i64[1]);
  if ( v16 != &v97 && v16 != &dest )
  {
    v22 = (char *)((char *)&v97 - (char *)v16);
    v23 = 64;
    v24 = v22;
    p_dest = &dest;
    if ( v24 == (char *)v19 )
    {
      v56 = v18;
      if ( (v18 >= (__m128i *)v96 || &dest >= &v18[1])
        && (unsigned __int64)v18->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
      {
        v57 = &dest;
        do
        {
          v58 = _mm_load_si128(v57);
          v59 = _mm_loadu_si128(v56++);
          ++v57;
          v57[-1] = v59;
          v56[-1] = v58;
        }
        while ( v56 != (const __m128i *)&v18->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL] );
        v60 = &dest.m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
        v61 = &v18->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v19 != (v19 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v62 = *v60;
          *v60 = *v61;
          *v61 = v62;
          if ( v18 != (__m128i *)(v60 + 1) )
          {
            v63 = v60[1];
            v60[1] = v61[1];
            v61[1] = v63;
            if ( v18 != (__m128i *)(v60 + 2) )
            {
              v64 = v60[2];
              v60[2] = v61[2];
              v61[2] = v64;
              if ( v18 != (__m128i *)(v60 + 3) )
              {
                v65 = v60[3];
                v60[3] = v61[3];
                v61[3] = v65;
                if ( v18 != (__m128i *)(v60 + 4) )
                {
                  v66 = v60[4];
                  v60[4] = v61[4];
                  v61[4] = v66;
                  if ( v18 != (__m128i *)(v60 + 5) )
                  {
                    v67 = v60[5];
                    v60[5] = v61[5];
                    v61[5] = v67;
                    if ( v18 != (__m128i *)(v60 + 6) )
                    {
                      v68 = v60[6];
                      v60[6] = v61[6];
                      v61[6] = v68;
                      if ( v18 != (__m128i *)(v60 + 7) )
                      {
                        v69 = v60[7];
                        v60[7] = v61[7];
                        v61[7] = v69;
                        if ( v18 != (__m128i *)(v60 + 8) )
                        {
                          v70 = v60[8];
                          v60[8] = v61[8];
                          v61[8] = v70;
                          if ( v18 != (__m128i *)(v60 + 9) )
                          {
                            v71 = v60[9];
                            v60[9] = v61[9];
                            v61[9] = v71;
                            if ( v18 != (__m128i *)(v60 + 10) )
                            {
                              v72 = v60[10];
                              v60[10] = v61[10];
                              v61[10] = v72;
                              if ( v18 != (__m128i *)(v60 + 11) )
                              {
                                v73 = v60[11];
                                v60[11] = v61[11];
                                v61[11] = v73;
                                if ( v18 != (__m128i *)(v60 + 12) )
                                {
                                  v74 = v60[12];
                                  v60[12] = v61[12];
                                  v61[12] = v74;
                                  if ( v18 != (__m128i *)(v60 + 13) )
                                  {
                                    v75 = v60[13];
                                    v60[13] = v61[13];
                                    v61[13] = v75;
                                    if ( v18 != (__m128i *)(v60 + 14) )
                                    {
                                      v76 = v60[14];
                                      v60[14] = v61[14];
                                      v61[14] = v76;
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
        v81 = v18;
        v82 = &dest;
        do
        {
          v83 = v81->m128i_i8[0];
          v84 = v82->m128i_i8[0];
          v82 = (__m128i *)((char *)v82 + 1);
          v81 = (__m128i *)((char *)v81 + 1);
          v82[-1].m128i_i8[15] = v83;
          v81[-1].m128i_i8[15] = v84;
        }
        while ( v18 != v82 );
      }
    }
    else
    {
      v26 = 64 - v19;
      if ( v19 >= 64 - v19 )
        goto LABEL_39;
      while ( v19 != 1 )
      {
        v27 = (__m128i *)((char *)p_dest + v19);
        if ( v26 > 0 )
        {
          if ( (v27 >= &p_dest[1] || v19 + 16 <= 0) && (unsigned __int64)(v26 - 1) > 0xE )
          {
            v28 = 0;
            do
            {
              v29 = _mm_loadu_si128(&p_dest[v28 / 0x10]);
              p_dest[v28 / 0x10] = _mm_loadu_si128(&v27[v28 / 0x10]);
              v27[v28 / 0x10] = v29;
              v28 += 16LL;
            }
            while ( v28 != (v26 & 0xFFFFFFFFFFFFFFF0LL) );
            v30 = v26 & 0x7FFFFFFFFFFFFFF0LL;
            v31 = (__m128i *)((char *)p_dest + (v26 & 0xFFFFFFFFFFFFFFF0LL));
            v32 = &v27->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v26 != (v26 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v33 = v31->m128i_i8[0];
              v31->m128i_i8[0] = *v32;
              *v32 = v33;
              if ( v26 > v30 + 1 )
              {
                v34 = v31->m128i_i8[1];
                v31->m128i_i8[1] = v32[1];
                v32[1] = v34;
                if ( v26 > v30 + 2 )
                {
                  v35 = v31->m128i_i8[2];
                  v31->m128i_i8[2] = v32[2];
                  v32[2] = v35;
                  if ( v26 > v30 + 3 )
                  {
                    v36 = v31->m128i_i8[3];
                    v31->m128i_i8[3] = v32[3];
                    v32[3] = v36;
                    if ( v26 > v30 + 4 )
                    {
                      v37 = v31->m128i_i8[4];
                      v31->m128i_i8[4] = v32[4];
                      v32[4] = v37;
                      if ( v26 > v30 + 5 )
                      {
                        v38 = v31->m128i_i8[5];
                        v31->m128i_i8[5] = v32[5];
                        v32[5] = v38;
                        if ( v26 > v30 + 6 )
                        {
                          v39 = v31->m128i_i8[6];
                          v31->m128i_i8[6] = v32[6];
                          v32[6] = v39;
                          if ( v26 > v30 + 7 )
                          {
                            v40 = v31->m128i_i8[7];
                            v31->m128i_i8[7] = v32[7];
                            v32[7] = v40;
                            if ( v26 > v30 + 8 )
                            {
                              v41 = v31->m128i_i8[8];
                              v31->m128i_i8[8] = v32[8];
                              v32[8] = v41;
                              if ( v26 > v30 + 9 )
                              {
                                v42 = v31->m128i_i8[9];
                                v31->m128i_i8[9] = v32[9];
                                v32[9] = v42;
                                if ( v26 > v30 + 10 )
                                {
                                  v43 = v31->m128i_i8[10];
                                  v31->m128i_i8[10] = v32[10];
                                  v32[10] = v43;
                                  if ( v26 > v30 + 11 )
                                  {
                                    v44 = v31->m128i_i8[11];
                                    v31->m128i_i8[11] = v32[11];
                                    v32[11] = v44;
                                    if ( v26 > v30 + 12 )
                                    {
                                      v45 = v31->m128i_i8[12];
                                      v31->m128i_i8[12] = v32[12];
                                      v32[12] = v45;
                                      if ( v26 > v30 + 13 )
                                      {
                                        v46 = v31->m128i_i8[13];
                                        v31->m128i_i8[13] = v32[13];
                                        v32[13] = v46;
                                        if ( v26 > v30 + 14 )
                                        {
                                          v47 = v31->m128i_i8[14];
                                          v31->m128i_i8[14] = v32[14];
                                          v32[14] = v47;
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
              v31 = (__m128i *)((char *)p_dest + v26);
            }
          }
          else
          {
            v31 = (__m128i *)((char *)p_dest + v26);
            do
            {
              v52 = v27->m128i_i8[0];
              v53 = p_dest->m128i_i8[0];
              p_dest = (__m128i *)((char *)p_dest + 1);
              v27 = (__m128i *)((char *)v27 + 1);
              p_dest[-1].m128i_i8[15] = v52;
              v27[-1].m128i_i8[15] = v53;
            }
            while ( p_dest != v31 );
          }
          p_dest = v31;
        }
        if ( !(v23 % v19) )
          goto LABEL_44;
        v26 = v19;
        v48 = v19 - v23 % v19;
        while ( 1 )
        {
          v23 = v26;
          v19 = v48;
          v26 -= v48;
          if ( v48 < v26 )
            break;
LABEL_39:
          if ( v26 == 1 )
          {
            v80 = p_dest->m128i_i8[v23 - 1];
            memmove(&p_dest->m128i_i8[1], p_dest, v23 - 1);
            p_dest->m128i_i8[0] = v80;
            goto LABEL_44;
          }
          v49 = &p_dest->m128i_i8[v23];
          v50 = (__m128i *)((char *)p_dest + v23 - v26);
          p_dest = v50;
          if ( v19 > 0 )
          {
            p_dest = (__m128i *)((char *)v50 - v19);
            do
            {
              v50 = (__m128i *)((char *)v50 - 1);
              --v49;
              v51 = v50->m128i_i8[0];
              v50->m128i_i8[0] = *v49;
              *v49 = v51;
            }
            while ( v50 != p_dest );
          }
          v48 = v23 % v26;
          if ( !(v23 % v26) )
            goto LABEL_44;
        }
      }
      v77 = v23 - 1;
      v78 = p_dest->m128i_i8[0];
      v79 = v77;
      if ( v77 )
        memmove(p_dest, &p_dest->m128i_i8[1], v77);
      p_dest->m128i_i8[v79] = v78;
    }
  }
LABEL_44:
  sub_9B6F20((unsigned __int64 *)&v97, &dest);
  return sub_20131D0(&v97, v17 + v20);
}
