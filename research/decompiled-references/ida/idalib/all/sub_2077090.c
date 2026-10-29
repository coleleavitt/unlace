unsigned __int64 __fastcall sub_2077090(__int64 a1, __int64 *a2, __int32 *a3, __int64 *a4, __int64 *a5)
{
  __m128i *v8; // rax
  __int64 v9; // r8
  __m128i *v10; // rax
  __int32 v11; // edx
  __int64 v12; // r15
  _QWORD *v13; // r9
  __int64 v14; // r8
  __m128i *v15; // rax
  __int64 v16; // r8
  __m128i *v17; // rax
  __int64 v18; // r12
  __m128i *v19; // rcx
  signed __int64 v20; // rsi
  signed __int64 v21; // r13
  char *v23; // rbx
  __int64 v24; // rax
  char *v25; // rdx
  __m128i *p_dest; // rbx
  __int64 v27; // r8
  __m128i *v28; // rdi
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // r9
  __m128i *v32; // rcx
  __int8 *v33; // rdi
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
  __int8 v48; // dl
  __int64 v49; // rdx
  __int8 *v50; // rcx
  __m128i *v51; // rdx
  __int8 v52; // si
  __int8 v53; // r8
  __int8 v54; // dl
  __m128i v55; // xmm4
  __m128i v56; // xmm5
  const __m128i *v57; // rax
  const __m128i *v58; // rdx
  __m128i v59; // xmm0
  __m128i v60; // xmm2
  __int8 *v61; // rax
  __int8 *v62; // rdx
  __int8 v63; // si
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
  char v76; // si
  char v77; // cl
  size_t v78; // rax
  __int8 v79; // r15
  size_t v80; // r14
  __int8 v81; // r14
  __m128i *v82; // rdx
  __m128i *v83; // rax
  __int8 v84; // di
  __int8 v85; // si
  char *v86; // [rsp+0h] [rbp-120h]
  __m128i v87; // [rsp+8h] [rbp-118h] BYREF
  __m128i v88; // [rsp+18h] [rbp-108h] BYREF
  __m128i v89; // [rsp+28h] [rbp-F8h] BYREF
  __int64 v90; // [rsp+38h] [rbp-E8h]
  __int64 v91; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+50h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+58h] [rbp-C8h] BYREF
  __int64 src; // [rsp+60h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+68h] [rbp-B8h] BYREF
  _OWORD v96[3]; // [rsp+78h] [rbp-A8h] BYREF
  __m128i v97; // [rsp+A8h] [rbp-78h] BYREF
  __m128i v98; // [rsp+B8h] [rbp-68h]
  __m128i v99; // [rsp+C8h] [rbp-58h]
  __m128i si128; // [rsp+D8h] [rbp-48h]

  dest = 0;
  memset(v96, 0, sizeof(v96));
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v91 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v8 = sub_20728A0(&dest, &v91, &dest, (unsigned __int64)&v97, a1);
  v9 = *a2;
  v92 = v91;
  v10 = sub_20728A0(&dest, &v92, v8, (unsigned __int64)&v97, v9);
  v11 = *a3;
  v12 = v92;
  v13 = (__int64 *)((char *)v10->m128i_i64 + 4);
  LODWORD(src) = *a3;
  if ( (__m128i *)((char *)v10->m128i_i64 + 4) <= &v97 )
  {
    v10->m128i_i32[0] = v11;
  }
  else
  {
    v86 = (char *)((char *)&v97 - (char *)v10);
    memcpy(v10, &src, (char *)&v97 - (char *)v10);
    if ( v12 )
    {
      v12 += 64;
      sub_9B6F20((unsigned __int64 *)&v97, &dest);
    }
    else
    {
      v12 = 64;
      sub_A09B80((unsigned __int64 *)&v87, &dest, si128.m128i_u64[1]);
      v55 = _mm_loadu_si128(&v88);
      v56 = _mm_loadu_si128(&v89);
      v97 = _mm_loadu_si128(&v87);
      v98 = v55;
      v99 = v56;
      si128.m128i_i64[0] = v90;
    }
    memcpy(&dest, (char *)&src + (_QWORD)v86, 4LL - (_QWORD)v86);
    v13 = (__int64 *)((char *)dest.m128i_i64 + 4LL - (_QWORD)v86);
  }
  v14 = *a4;
  v93 = v12;
  v15 = sub_20728A0(&dest, &v93, v13, (unsigned __int64)&v97, v14);
  v16 = *a5;
  src = v93;
  v17 = sub_20728A0(&dest, &src, v15, (unsigned __int64)&v97, v16);
  v18 = src;
  v19 = v17;
  v20 = (char *)v17 - (char *)&dest;
  v21 = (char *)v17 - (char *)&dest;
  if ( !src )
    return sub_2012F20(&dest, v20, si128.m128i_i64[1]);
  if ( v17 != &v97 && v17 != &dest )
  {
    v23 = (char *)((char *)&v97 - (char *)v17);
    v24 = 64;
    v25 = v23;
    p_dest = &dest;
    if ( v25 == (char *)v20 )
    {
      v57 = v19;
      if ( (v19 >= (__m128i *)v96 || &dest >= &v19[1])
        && (unsigned __int64)v19->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
      {
        v58 = &dest;
        do
        {
          v59 = _mm_load_si128(v58);
          v60 = _mm_loadu_si128(v57++);
          ++v58;
          v58[-1] = v60;
          v57[-1] = v59;
        }
        while ( v57 != (const __m128i *)&v19->m128i_i8[v20 & 0xFFFFFFFFFFFFFFF0LL] );
        v61 = &dest.m128i_i8[v20 & 0xFFFFFFFFFFFFFFF0LL];
        v62 = &v19->m128i_i8[v20 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) != v20 )
        {
          v63 = *v61;
          *v61 = *v62;
          *v62 = v63;
          if ( v19 != (__m128i *)(v61 + 1) )
          {
            v64 = v61[1];
            v61[1] = v62[1];
            v62[1] = v64;
            if ( v19 != (__m128i *)(v61 + 2) )
            {
              v65 = v61[2];
              v61[2] = v62[2];
              v62[2] = v65;
              if ( v19 != (__m128i *)(v61 + 3) )
              {
                v66 = v61[3];
                v61[3] = v62[3];
                v62[3] = v66;
                if ( v19 != (__m128i *)(v61 + 4) )
                {
                  v67 = v61[4];
                  v61[4] = v62[4];
                  v62[4] = v67;
                  if ( v19 != (__m128i *)(v61 + 5) )
                  {
                    v68 = v61[5];
                    v61[5] = v62[5];
                    v62[5] = v68;
                    if ( v19 != (__m128i *)(v61 + 6) )
                    {
                      v69 = v61[6];
                      v61[6] = v62[6];
                      v62[6] = v69;
                      if ( v19 != (__m128i *)(v61 + 7) )
                      {
                        v70 = v61[7];
                        v61[7] = v62[7];
                        v62[7] = v70;
                        if ( v19 != (__m128i *)(v61 + 8) )
                        {
                          v71 = v61[8];
                          v61[8] = v62[8];
                          v62[8] = v71;
                          if ( v19 != (__m128i *)(v61 + 9) )
                          {
                            v72 = v61[9];
                            v61[9] = v62[9];
                            v62[9] = v72;
                            if ( v19 != (__m128i *)(v61 + 10) )
                            {
                              v73 = v61[10];
                              v61[10] = v62[10];
                              v62[10] = v73;
                              if ( v19 != (__m128i *)(v61 + 11) )
                              {
                                v74 = v61[11];
                                v61[11] = v62[11];
                                v62[11] = v74;
                                if ( v19 != (__m128i *)(v61 + 12) )
                                {
                                  v75 = v61[12];
                                  v61[12] = v62[12];
                                  v62[12] = v75;
                                  if ( v19 != (__m128i *)(v61 + 13) )
                                  {
                                    v76 = v61[13];
                                    v61[13] = v62[13];
                                    v62[13] = v76;
                                    if ( v19 != (__m128i *)(v61 + 14) )
                                    {
                                      v77 = v61[14];
                                      v61[14] = v62[14];
                                      v62[14] = v77;
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
        v82 = v19;
        v83 = &dest;
        do
        {
          v84 = v82->m128i_i8[0];
          v85 = v83->m128i_i8[0];
          v83 = (__m128i *)((char *)v83 + 1);
          v82 = (__m128i *)((char *)v82 + 1);
          v83[-1].m128i_i8[15] = v84;
          v82[-1].m128i_i8[15] = v85;
        }
        while ( v19 != v83 );
      }
    }
    else
    {
      v27 = 64 - v20;
      if ( v20 >= 64 - v20 )
        goto LABEL_39;
      while ( v20 != 1 )
      {
        v28 = (__m128i *)((char *)p_dest + v20);
        if ( v27 > 0 )
        {
          if ( (v28 >= &p_dest[1] || v20 + 16 <= 0) && (unsigned __int64)(v27 - 1) > 0xE )
          {
            v29 = 0;
            do
            {
              v30 = _mm_loadu_si128(&p_dest[v29 / 0x10]);
              p_dest[v29 / 0x10] = _mm_loadu_si128(&v28[v29 / 0x10]);
              v28[v29 / 0x10] = v30;
              v29 += 16LL;
            }
            while ( v29 != (v27 & 0xFFFFFFFFFFFFFFF0LL) );
            v31 = v27 & 0x7FFFFFFFFFFFFFF0LL;
            v32 = (__m128i *)((char *)p_dest + (v27 & 0xFFFFFFFFFFFFFFF0LL));
            v33 = &v28->m128i_i8[v27 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v27 != (v27 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v34 = v32->m128i_i8[0];
              v32->m128i_i8[0] = *v33;
              *v33 = v34;
              if ( v27 > v31 + 1 )
              {
                v35 = v32->m128i_i8[1];
                v32->m128i_i8[1] = v33[1];
                v33[1] = v35;
                if ( v27 > v31 + 2 )
                {
                  v36 = v32->m128i_i8[2];
                  v32->m128i_i8[2] = v33[2];
                  v33[2] = v36;
                  if ( v27 > v31 + 3 )
                  {
                    v37 = v32->m128i_i8[3];
                    v32->m128i_i8[3] = v33[3];
                    v33[3] = v37;
                    if ( v27 > v31 + 4 )
                    {
                      v38 = v32->m128i_i8[4];
                      v32->m128i_i8[4] = v33[4];
                      v33[4] = v38;
                      if ( v27 > v31 + 5 )
                      {
                        v39 = v32->m128i_i8[5];
                        v32->m128i_i8[5] = v33[5];
                        v33[5] = v39;
                        if ( v27 > v31 + 6 )
                        {
                          v40 = v32->m128i_i8[6];
                          v32->m128i_i8[6] = v33[6];
                          v33[6] = v40;
                          if ( v27 > v31 + 7 )
                          {
                            v41 = v32->m128i_i8[7];
                            v32->m128i_i8[7] = v33[7];
                            v33[7] = v41;
                            if ( v27 > v31 + 8 )
                            {
                              v42 = v32->m128i_i8[8];
                              v32->m128i_i8[8] = v33[8];
                              v33[8] = v42;
                              if ( v27 > v31 + 9 )
                              {
                                v43 = v32->m128i_i8[9];
                                v32->m128i_i8[9] = v33[9];
                                v33[9] = v43;
                                if ( v27 > v31 + 10 )
                                {
                                  v44 = v32->m128i_i8[10];
                                  v32->m128i_i8[10] = v33[10];
                                  v33[10] = v44;
                                  if ( v27 > v31 + 11 )
                                  {
                                    v45 = v32->m128i_i8[11];
                                    v32->m128i_i8[11] = v33[11];
                                    v33[11] = v45;
                                    if ( v27 > v31 + 12 )
                                    {
                                      v46 = v32->m128i_i8[12];
                                      v32->m128i_i8[12] = v33[12];
                                      v33[12] = v46;
                                      if ( v27 > v31 + 13 )
                                      {
                                        v47 = v32->m128i_i8[13];
                                        v32->m128i_i8[13] = v33[13];
                                        v33[13] = v47;
                                        if ( v27 > v31 + 14 )
                                        {
                                          v48 = v32->m128i_i8[14];
                                          v32->m128i_i8[14] = v33[14];
                                          v33[14] = v48;
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
              v32 = (__m128i *)((char *)p_dest + v27);
            }
          }
          else
          {
            v32 = (__m128i *)((char *)p_dest + v27);
            do
            {
              v53 = v28->m128i_i8[0];
              v54 = p_dest->m128i_i8[0];
              p_dest = (__m128i *)((char *)p_dest + 1);
              v28 = (__m128i *)((char *)v28 + 1);
              p_dest[-1].m128i_i8[15] = v53;
              v28[-1].m128i_i8[15] = v54;
            }
            while ( p_dest != v32 );
          }
          p_dest = v32;
        }
        if ( !(v24 % v20) )
          goto LABEL_44;
        v27 = v20;
        v49 = v20 - v24 % v20;
        while ( 1 )
        {
          v24 = v27;
          v20 = v49;
          v27 -= v49;
          if ( v49 < v27 )
            break;
LABEL_39:
          if ( v27 == 1 )
          {
            v81 = p_dest->m128i_i8[v24 - 1];
            memmove(&p_dest->m128i_i8[1], p_dest, v24 - 1);
            p_dest->m128i_i8[0] = v81;
            goto LABEL_44;
          }
          v50 = &p_dest->m128i_i8[v24];
          v51 = (__m128i *)((char *)p_dest + v24 - v27);
          p_dest = v51;
          if ( v20 > 0 )
          {
            p_dest = (__m128i *)((char *)v51 - v20);
            do
            {
              v51 = (__m128i *)((char *)v51 - 1);
              --v50;
              v52 = v51->m128i_i8[0];
              v51->m128i_i8[0] = *v50;
              *v50 = v52;
            }
            while ( v51 != p_dest );
          }
          v49 = v24 % v27;
          if ( !(v24 % v27) )
            goto LABEL_44;
        }
      }
      v78 = v24 - 1;
      v79 = p_dest->m128i_i8[0];
      v80 = v78;
      if ( v78 )
        memmove(p_dest, &p_dest->m128i_i8[1], v78);
      p_dest->m128i_i8[v80] = v79;
    }
  }
LABEL_44:
  sub_9B6F20((unsigned __int64 *)&v97, &dest);
  return sub_20131D0(&v97, v18 + v21);
}
