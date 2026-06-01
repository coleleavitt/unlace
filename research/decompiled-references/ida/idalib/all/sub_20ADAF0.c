unsigned __int64 __fastcall sub_20ADAF0(__int64 a1, __int64 *a2, int *a3, int *a4, char *a5, __int64 a6)
{
  __m128i *v10; // rax
  __int64 v11; // r8
  __m128i *v12; // rax
  int v13; // r8d
  __m128i *v14; // rax
  int v15; // r8d
  __m128i *v16; // rax
  char v17; // r8
  _BYTE *v18; // rax
  bool v19; // zf
  unsigned __int64 v20; // r8
  __m128i v21; // xmm2
  _QWORD *v22; // r13
  __m128i *v23; // rax
  __int64 v24; // r12
  __m128i *v25; // rdx
  signed __int64 v26; // rsi
  signed __int64 v27; // r13
  _BYTE *v29; // rax
  int v30; // r8d
  __m128i *v31; // rax
  __m128i *p_src; // rbp
  char *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __m128i *v36; // rdi
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm0
  __int64 v39; // r9
  __m128i *v40; // rcx
  __int8 *v41; // rdi
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
  __int8 v55; // dl
  __int8 v56; // dl
  __int64 v57; // rdx
  __int8 *v58; // rdx
  signed __int64 v59; // rsi
  __m128i *v60; // rcx
  __int8 *v61; // rdi
  __int8 v62; // r9
  __int8 v63; // r8
  __int8 v64; // dl
  const __m128i *v65; // rax
  const __m128i *v66; // rcx
  __m128i v67; // xmm0
  __m128i v68; // xmm4
  __int8 *v69; // rax
  __int8 *v70; // rcx
  __int8 v71; // si
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
  char v83; // si
  char v84; // si
  char v85; // dl
  size_t v86; // rax
  __int8 v87; // r15
  size_t v88; // r14
  __int8 v89; // r14
  __m128i *v90; // rcx
  __m128i *v91; // rax
  __int8 v92; // di
  __int8 v93; // si
  __int64 v94; // [rsp+8h] [rbp-178h] BYREF
  __int64 v95; // [rsp+10h] [rbp-170h] BYREF
  __int64 v96; // [rsp+18h] [rbp-168h] BYREF
  __int64 v97; // [rsp+20h] [rbp-160h] BYREF
  __int64 v98; // [rsp+28h] [rbp-158h] BYREF
  __int64 v99; // [rsp+30h] [rbp-150h] BYREF
  __int64 v100; // [rsp+38h] [rbp-148h] BYREF
  __int64 v101; // [rsp+40h] [rbp-140h] BYREF
  __m128i src; // [rsp+48h] [rbp-138h] BYREF
  _OWORD v103[3]; // [rsp+58h] [rbp-128h] BYREF
  _OWORD v104[3]; // [rsp+88h] [rbp-F8h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-C8h]
  __m128i dest[4]; // [rsp+C8h] [rbp-B8h] BYREF
  _OWORD v107[7]; // [rsp+108h] [rbp-78h] BYREF

  src = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  memset(v103, 0, sizeof(v103));
  memset(v104, 0, sizeof(v104));
  v94 = 0;
  v10 = sub_206E9E0(&src, &v94, &src, (unsigned __int64)v104, a1);
  v11 = *a2;
  v95 = v94;
  v12 = sub_20728A0(&src, &v95, v10, (unsigned __int64)v104, v11);
  v13 = *a3;
  v96 = v95;
  v14 = sub_A0C4A0(&src, &v96, v12, (unsigned __int64)v104, v13);
  v15 = *a4;
  v97 = v96;
  v16 = sub_A0C4A0(&src, &v97, v14, (unsigned __int64)v104, v15);
  v17 = *a5;
  v98 = v97;
  v18 = sub_207A9D0(&src, &v98, v16, (unsigned __int64)v104, v17);
  v19 = *(_BYTE *)(a6 + 4) == 0;
  v20 = 0xB2B24F688DC4164DLL;
  v21 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v22 = v18;
  v99 = v98;
  if ( !v19 )
  {
    memset(dest, 0, sizeof(dest));
    memset(v107, 0, 48);
    v107[3] = v21;
    v100 = 0;
    v29 = sub_207A9D0(dest, &v100, dest, (unsigned __int64)v107, 1);
    v30 = *(_DWORD *)a6;
    v101 = v100;
    v31 = sub_A0C4A0(dest, &v101, v29, (unsigned __int64)v107, v30);
    v20 = sub_206C6F0(dest[0].m128i_i8, v101, v31->m128i_i8, (char *)v107);
  }
  v23 = sub_A232E0(&src, &v99, v22, (unsigned __int64)v104, v20);
  v24 = v99;
  v25 = v23;
  v26 = (char *)v23 - (char *)&src;
  v27 = (char *)v23 - (char *)&src;
  if ( !v99 )
    return sub_2012F20(&src, v26, si128.m128i_i64[1]);
  if ( v23 != (__m128i *)v104 && v23 != &src )
  {
    p_src = &src;
    v33 = (char *)((char *)v104 - (char *)v23);
    v34 = 64;
    if ( v33 == (char *)v26 )
    {
      v65 = v25;
      if ( (v25 >= (__m128i *)v103 || &src >= &v25[1])
        && (unsigned __int64)v25->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v66 = &src;
        do
        {
          v67 = _mm_load_si128(v66);
          v68 = _mm_loadu_si128(v65++);
          ++v66;
          v66[-1] = v68;
          v65[-1] = v67;
        }
        while ( &v25->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL] != (__int8 *)v65 );
        v69 = &src.m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        v70 = &v25->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != v26 )
        {
          v71 = *v69;
          *v69 = *v70;
          *v70 = v71;
          if ( v25 != (__m128i *)(v69 + 1) )
          {
            v72 = v69[1];
            v69[1] = v70[1];
            v70[1] = v72;
            if ( v25 != (__m128i *)(v69 + 2) )
            {
              v73 = v69[2];
              v69[2] = v70[2];
              v70[2] = v73;
              if ( v25 != (__m128i *)(v69 + 3) )
              {
                v74 = v69[3];
                v69[3] = v70[3];
                v70[3] = v74;
                if ( v25 != (__m128i *)(v69 + 4) )
                {
                  v75 = v69[4];
                  v69[4] = v70[4];
                  v70[4] = v75;
                  if ( v25 != (__m128i *)(v69 + 5) )
                  {
                    v76 = v69[5];
                    v69[5] = v70[5];
                    v70[5] = v76;
                    if ( v25 != (__m128i *)(v69 + 6) )
                    {
                      v77 = v69[6];
                      v69[6] = v70[6];
                      v70[6] = v77;
                      if ( v25 != (__m128i *)(v69 + 7) )
                      {
                        v78 = v69[7];
                        v69[7] = v70[7];
                        v70[7] = v78;
                        if ( v25 != (__m128i *)(v69 + 8) )
                        {
                          v79 = v69[8];
                          v69[8] = v70[8];
                          v70[8] = v79;
                          if ( v25 != (__m128i *)(v69 + 9) )
                          {
                            v80 = v69[9];
                            v69[9] = v70[9];
                            v70[9] = v80;
                            if ( v25 != (__m128i *)(v69 + 10) )
                            {
                              v81 = v69[10];
                              v69[10] = v70[10];
                              v70[10] = v81;
                              if ( v25 != (__m128i *)(v69 + 11) )
                              {
                                v82 = v69[11];
                                v69[11] = v70[11];
                                v70[11] = v82;
                                if ( v25 != (__m128i *)(v69 + 12) )
                                {
                                  v83 = v69[12];
                                  v69[12] = v70[12];
                                  v70[12] = v83;
                                  if ( v25 != (__m128i *)(v69 + 13) )
                                  {
                                    v84 = v69[13];
                                    v69[13] = v70[13];
                                    v70[13] = v84;
                                    if ( v25 != (__m128i *)(v69 + 14) )
                                    {
                                      v85 = v69[14];
                                      v69[14] = v70[14];
                                      v70[14] = v85;
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
        v90 = v25;
        v91 = &src;
        do
        {
          v92 = v90->m128i_i8[0];
          v93 = v91->m128i_i8[0];
          v91 = (__m128i *)((char *)v91 + 1);
          v90 = (__m128i *)((char *)v90 + 1);
          v91[-1].m128i_i8[15] = v92;
          v90[-1].m128i_i8[15] = v93;
        }
        while ( v25 != v91 );
      }
    }
    else
    {
      v35 = 64 - v26;
      if ( v26 >= 64 - v26 )
        goto LABEL_36;
      while ( v26 != 1 )
      {
        v36 = (__m128i *)((char *)p_src + v26);
        if ( v35 > 0 )
        {
          if ( (v36 >= &p_src[1] || v26 + 16 <= 0) && (unsigned __int64)(v35 - 1) > 0xE )
          {
            v37 = 0;
            do
            {
              v38 = _mm_loadu_si128(&p_src[v37 / 0x10]);
              p_src[v37 / 0x10] = _mm_loadu_si128(&v36[v37 / 0x10]);
              v36[v37 / 0x10] = v38;
              v37 += 16LL;
            }
            while ( v37 != (v35 & 0xFFFFFFFFFFFFFFF0LL) );
            v39 = v35 & 0x7FFFFFFFFFFFFFF0LL;
            v40 = (__m128i *)((char *)p_src + (v35 & 0xFFFFFFFFFFFFFFF0LL));
            v41 = &v36->m128i_i8[v35 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v35 != (v35 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v42 = v40->m128i_i8[0];
              v40->m128i_i8[0] = *v41;
              *v41 = v42;
              if ( v35 > v39 + 1 )
              {
                v43 = v40->m128i_i8[1];
                v40->m128i_i8[1] = v41[1];
                v41[1] = v43;
                if ( v35 > v39 + 2 )
                {
                  v44 = v40->m128i_i8[2];
                  v40->m128i_i8[2] = v41[2];
                  v41[2] = v44;
                  if ( v35 > v39 + 3 )
                  {
                    v45 = v40->m128i_i8[3];
                    v40->m128i_i8[3] = v41[3];
                    v41[3] = v45;
                    if ( v35 > v39 + 4 )
                    {
                      v46 = v40->m128i_i8[4];
                      v40->m128i_i8[4] = v41[4];
                      v41[4] = v46;
                      if ( v35 > v39 + 5 )
                      {
                        v47 = v40->m128i_i8[5];
                        v40->m128i_i8[5] = v41[5];
                        v41[5] = v47;
                        if ( v35 > v39 + 6 )
                        {
                          v48 = v40->m128i_i8[6];
                          v40->m128i_i8[6] = v41[6];
                          v41[6] = v48;
                          if ( v35 > v39 + 7 )
                          {
                            v49 = v40->m128i_i8[7];
                            v40->m128i_i8[7] = v41[7];
                            v41[7] = v49;
                            if ( v35 > v39 + 8 )
                            {
                              v50 = v40->m128i_i8[8];
                              v40->m128i_i8[8] = v41[8];
                              v41[8] = v50;
                              if ( v35 > v39 + 9 )
                              {
                                v51 = v40->m128i_i8[9];
                                v40->m128i_i8[9] = v41[9];
                                v41[9] = v51;
                                if ( v35 > v39 + 10 )
                                {
                                  v52 = v40->m128i_i8[10];
                                  v40->m128i_i8[10] = v41[10];
                                  v41[10] = v52;
                                  if ( v35 > v39 + 11 )
                                  {
                                    v53 = v40->m128i_i8[11];
                                    v40->m128i_i8[11] = v41[11];
                                    v41[11] = v53;
                                    if ( v35 > v39 + 12 )
                                    {
                                      v54 = v40->m128i_i8[12];
                                      v40->m128i_i8[12] = v41[12];
                                      v41[12] = v54;
                                      if ( v35 > v39 + 13 )
                                      {
                                        v55 = v40->m128i_i8[13];
                                        v40->m128i_i8[13] = v41[13];
                                        v41[13] = v55;
                                        if ( v35 > v39 + 14 )
                                        {
                                          v56 = v40->m128i_i8[14];
                                          v40->m128i_i8[14] = v41[14];
                                          v41[14] = v56;
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
              v40 = (__m128i *)((char *)p_src + v35);
            }
          }
          else
          {
            v40 = (__m128i *)((char *)p_src + v35);
            do
            {
              v63 = v36->m128i_i8[0];
              v64 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v36 = (__m128i *)((char *)v36 + 1);
              p_src[-1].m128i_i8[15] = v63;
              v36[-1].m128i_i8[15] = v64;
            }
            while ( v40 != p_src );
          }
          p_src = v40;
        }
        if ( !(v34 % v26) )
          goto LABEL_42;
        v35 = v26;
        v57 = v26 - v34 % v26;
        while ( 1 )
        {
          v34 = v35;
          v26 = v57;
          v35 -= v57;
          if ( v57 < v35 )
            break;
LABEL_36:
          if ( v35 == 1 )
          {
            v89 = p_src->m128i_i8[v34 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v34 - 1);
            p_src->m128i_i8[0] = v89;
            goto LABEL_42;
          }
          v58 = &p_src->m128i_i8[v34];
          p_src = (__m128i *)((char *)p_src + v34 - v35);
          if ( v26 > 0 )
          {
            v59 = -v26;
            v60 = p_src;
            v61 = &v58[v59];
            do
            {
              v60 = (__m128i *)((char *)v60 - 1);
              --v58;
              v62 = v60->m128i_i8[0];
              v60->m128i_i8[0] = *v58;
              *v58 = v62;
            }
            while ( v58 != v61 );
            p_src = (__m128i *)((char *)p_src + v59);
          }
          v57 = v34 % v35;
          if ( !(v34 % v35) )
            goto LABEL_42;
        }
      }
      v86 = v34 - 1;
      v87 = p_src->m128i_i8[0];
      v88 = v86;
      if ( v86 )
        memmove(p_src, &p_src->m128i_i8[1], v86);
      p_src->m128i_i8[v88] = v87;
    }
  }
LABEL_42:
  sub_9B6F20((unsigned __int64 *)v104, &src);
  return sub_20131D0(v104, v24 + v27);
}
