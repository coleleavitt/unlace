unsigned __int64 __fastcall sub_2074D40(__int64 a1, int *a2, int *a3, __int32 *a4, __int64 a5, __int64 a6)
{
  __m128i *v9; // rax
  int v10; // r8d
  __m128i *v11; // rax
  int v12; // r8d
  __m128i *v13; // rax
  __int32 v14; // edx
  __int64 v15; // r14
  _QWORD *v16; // r13
  char *v17; // r13
  size_t v18; // rdx
  char *v19; // rsi
  __int64 v20; // rax
  __m128i *v21; // r13
  __int64 v22; // rax
  __m128i *v23; // rax
  __int64 v24; // r12
  __m128i *v25; // rcx
  signed __int64 v26; // rsi
  signed __int64 v27; // r13
  __m128i *p_dest; // rbp
  char *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r8
  __m128i *v33; // rdi
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // r9
  __m128i *v37; // rcx
  __int8 *v38; // rdi
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
  __int8 v49; // dl
  __int8 v50; // dl
  __int8 v51; // dl
  __int8 v52; // dl
  __int8 v53; // dl
  __int64 v54; // rdx
  __int8 *v55; // rcx
  __m128i *v56; // rdx
  __int8 v57; // si
  __int8 v58; // r8
  __int8 v59; // dl
  __m128i v60; // xmm4
  __m128i v61; // xmm5
  const __m128i *v62; // rax
  const __m128i *v63; // rdx
  __m128i v64; // xmm0
  __m128i v65; // xmm2
  __int8 *v66; // rax
  __int8 *v67; // rdx
  __int8 v68; // si
  char v69; // si
  char v70; // si
  char v71; // si
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
  char v82; // cl
  size_t v83; // rax
  __int8 v84; // r15
  size_t v85; // r14
  __int8 v86; // r14
  __m128i *v87; // rdx
  __m128i *v88; // rax
  __int8 v89; // di
  __int8 v90; // si
  __m128i v92; // [rsp+8h] [rbp-128h] BYREF
  __m128i v93; // [rsp+18h] [rbp-118h] BYREF
  __m128i v94; // [rsp+28h] [rbp-108h] BYREF
  __int64 v95; // [rsp+38h] [rbp-F8h]
  __int64 v96; // [rsp+50h] [rbp-E0h] BYREF
  __int64 v97; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v99; // [rsp+68h] [rbp-C8h] BYREF
  __int64 src; // [rsp+70h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+78h] [rbp-B8h] BYREF
  _OWORD v102[3]; // [rsp+88h] [rbp-A8h] BYREF
  __m128i v103; // [rsp+B8h] [rbp-78h] BYREF
  __m128i v104; // [rsp+C8h] [rbp-68h]
  __m128i v105; // [rsp+D8h] [rbp-58h]
  __m128i si128; // [rsp+E8h] [rbp-48h]

  dest = 0;
  memset(v102, 0, sizeof(v102));
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v96 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v9 = sub_20728A0(&dest, &v96, &dest, (unsigned __int64)&v103, a1);
  v10 = *a2;
  v97 = v96;
  v11 = sub_A0C4A0(&dest, &v97, v9, (unsigned __int64)&v103, v10);
  v12 = *a3;
  v98 = v97;
  v13 = sub_A0C4A0(&dest, &v98, v11, (unsigned __int64)&v103, v12);
  v14 = *a4;
  v15 = v98;
  v16 = (__int64 *)((char *)v13->m128i_i64 + 4);
  LODWORD(src) = *a4;
  if ( (__m128i *)((char *)v13->m128i_i64 + 4) <= &v103 )
  {
    v13->m128i_i32[0] = v14;
  }
  else
  {
    v17 = (char *)((char *)&v103 - (char *)v13);
    memcpy(v13, &src, (char *)&v103 - (char *)v13);
    if ( v15 )
    {
      v15 += 64;
      sub_9B6F20((unsigned __int64 *)&v103, &dest);
    }
    else
    {
      v15 = 64;
      sub_A09B80((unsigned __int64 *)&v92, &dest, si128.m128i_u64[1]);
      v60 = _mm_loadu_si128(&v93);
      v61 = _mm_loadu_si128(&v94);
      v103 = _mm_loadu_si128(&v92);
      v104 = v60;
      v105 = v61;
      si128.m128i_i64[0] = v95;
    }
    v18 = 4LL - (_QWORD)v17;
    v19 = (char *)&src + (_QWORD)v17;
    v16 = (__int64 *)((char *)dest.m128i_i64 + 4LL - (_QWORD)v17);
    memcpy(&dest, v19, v18);
  }
  v99 = v15;
  v20 = sub_220C570(a5);
  v21 = sub_A232E0(&dest, &v99, v16, (unsigned __int64)&v103, v20);
  src = v99;
  v22 = sub_220C570(a6);
  v23 = sub_A232E0(&dest, &src, v21, (unsigned __int64)&v103, v22);
  v24 = src;
  v25 = v23;
  v26 = (char *)v23 - (char *)&dest;
  v27 = (char *)v23 - (char *)&dest;
  if ( !src )
    return sub_2012F20(&dest, v26, si128.m128i_i64[1]);
  if ( v23 != &dest && v23 != &v103 )
  {
    p_dest = &dest;
    v30 = (char *)((char *)&v103 - (char *)v23);
    v31 = 64;
    if ( v30 == (char *)v26 )
    {
      v62 = v25;
      if ( (v25 >= (__m128i *)v102 || &dest >= &v25[1])
        && (unsigned __int64)v25->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
      {
        v63 = &dest;
        do
        {
          v64 = _mm_load_si128(v63);
          v65 = _mm_loadu_si128(v62++);
          ++v63;
          v63[-1] = v65;
          v62[-1] = v64;
        }
        while ( v62 != (const __m128i *)&v25->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL] );
        v66 = &dest.m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        v67 = &v25->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v26 != (v26 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v68 = *v66;
          *v66 = *v67;
          *v67 = v68;
          if ( v25 != (__m128i *)(v66 + 1) )
          {
            v69 = v66[1];
            v66[1] = v67[1];
            v67[1] = v69;
            if ( v25 != (__m128i *)(v66 + 2) )
            {
              v70 = v66[2];
              v66[2] = v67[2];
              v67[2] = v70;
              if ( v25 != (__m128i *)(v66 + 3) )
              {
                v71 = v66[3];
                v66[3] = v67[3];
                v67[3] = v71;
                if ( v25 != (__m128i *)(v66 + 4) )
                {
                  v72 = v66[4];
                  v66[4] = v67[4];
                  v67[4] = v72;
                  if ( v25 != (__m128i *)(v66 + 5) )
                  {
                    v73 = v66[5];
                    v66[5] = v67[5];
                    v67[5] = v73;
                    if ( v25 != (__m128i *)(v66 + 6) )
                    {
                      v74 = v66[6];
                      v66[6] = v67[6];
                      v67[6] = v74;
                      if ( v25 != (__m128i *)(v66 + 7) )
                      {
                        v75 = v66[7];
                        v66[7] = v67[7];
                        v67[7] = v75;
                        if ( v25 != (__m128i *)(v66 + 8) )
                        {
                          v76 = v66[8];
                          v66[8] = v67[8];
                          v67[8] = v76;
                          if ( v25 != (__m128i *)(v66 + 9) )
                          {
                            v77 = v66[9];
                            v66[9] = v67[9];
                            v67[9] = v77;
                            if ( v25 != (__m128i *)(v66 + 10) )
                            {
                              v78 = v66[10];
                              v66[10] = v67[10];
                              v67[10] = v78;
                              if ( v25 != (__m128i *)(v66 + 11) )
                              {
                                v79 = v66[11];
                                v66[11] = v67[11];
                                v67[11] = v79;
                                if ( v25 != (__m128i *)(v66 + 12) )
                                {
                                  v80 = v66[12];
                                  v66[12] = v67[12];
                                  v67[12] = v80;
                                  if ( v25 != (__m128i *)(v66 + 13) )
                                  {
                                    v81 = v66[13];
                                    v66[13] = v67[13];
                                    v67[13] = v81;
                                    if ( v25 != (__m128i *)(v66 + 14) )
                                    {
                                      v82 = v66[14];
                                      v66[14] = v67[14];
                                      v67[14] = v82;
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
        v87 = v25;
        v88 = &dest;
        do
        {
          v89 = v87->m128i_i8[0];
          v90 = v88->m128i_i8[0];
          v88 = (__m128i *)((char *)v88 + 1);
          v87 = (__m128i *)((char *)v87 + 1);
          v88[-1].m128i_i8[15] = v89;
          v87[-1].m128i_i8[15] = v90;
        }
        while ( v25 != v88 );
      }
    }
    else
    {
      v32 = 64 - v26;
      if ( v26 >= 64 - v26 )
        goto LABEL_39;
      while ( v26 != 1 )
      {
        v33 = (__m128i *)((char *)p_dest + v26);
        if ( v32 > 0 )
        {
          if ( (v33 >= &p_dest[1] || v26 + 16 <= 0) && (unsigned __int64)(v32 - 1) > 0xE )
          {
            v34 = 0;
            do
            {
              v35 = _mm_loadu_si128(&p_dest[v34 / 0x10]);
              p_dest[v34 / 0x10] = _mm_loadu_si128(&v33[v34 / 0x10]);
              v33[v34 / 0x10] = v35;
              v34 += 16LL;
            }
            while ( v34 != (v32 & 0xFFFFFFFFFFFFFFF0LL) );
            v36 = v32 & 0x7FFFFFFFFFFFFFF0LL;
            v37 = (__m128i *)((char *)p_dest + (v32 & 0xFFFFFFFFFFFFFFF0LL));
            v38 = &v33->m128i_i8[v32 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v32 != (v32 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v39 = v37->m128i_i8[0];
              v37->m128i_i8[0] = *v38;
              *v38 = v39;
              if ( v32 > v36 + 1 )
              {
                v40 = v37->m128i_i8[1];
                v37->m128i_i8[1] = v38[1];
                v38[1] = v40;
                if ( v32 > v36 + 2 )
                {
                  v41 = v37->m128i_i8[2];
                  v37->m128i_i8[2] = v38[2];
                  v38[2] = v41;
                  if ( v32 > v36 + 3 )
                  {
                    v42 = v37->m128i_i8[3];
                    v37->m128i_i8[3] = v38[3];
                    v38[3] = v42;
                    if ( v32 > v36 + 4 )
                    {
                      v43 = v37->m128i_i8[4];
                      v37->m128i_i8[4] = v38[4];
                      v38[4] = v43;
                      if ( v32 > v36 + 5 )
                      {
                        v44 = v37->m128i_i8[5];
                        v37->m128i_i8[5] = v38[5];
                        v38[5] = v44;
                        if ( v32 > v36 + 6 )
                        {
                          v45 = v37->m128i_i8[6];
                          v37->m128i_i8[6] = v38[6];
                          v38[6] = v45;
                          if ( v32 > v36 + 7 )
                          {
                            v46 = v37->m128i_i8[7];
                            v37->m128i_i8[7] = v38[7];
                            v38[7] = v46;
                            if ( v32 > v36 + 8 )
                            {
                              v47 = v37->m128i_i8[8];
                              v37->m128i_i8[8] = v38[8];
                              v38[8] = v47;
                              if ( v32 > v36 + 9 )
                              {
                                v48 = v37->m128i_i8[9];
                                v37->m128i_i8[9] = v38[9];
                                v38[9] = v48;
                                if ( v32 > v36 + 10 )
                                {
                                  v49 = v37->m128i_i8[10];
                                  v37->m128i_i8[10] = v38[10];
                                  v38[10] = v49;
                                  if ( v32 > v36 + 11 )
                                  {
                                    v50 = v37->m128i_i8[11];
                                    v37->m128i_i8[11] = v38[11];
                                    v38[11] = v50;
                                    if ( v32 > v36 + 12 )
                                    {
                                      v51 = v37->m128i_i8[12];
                                      v37->m128i_i8[12] = v38[12];
                                      v38[12] = v51;
                                      if ( v32 > v36 + 13 )
                                      {
                                        v52 = v37->m128i_i8[13];
                                        v37->m128i_i8[13] = v38[13];
                                        v38[13] = v52;
                                        if ( v32 > v36 + 14 )
                                        {
                                          v53 = v37->m128i_i8[14];
                                          v37->m128i_i8[14] = v38[14];
                                          v38[14] = v53;
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
              v37 = (__m128i *)((char *)p_dest + v32);
            }
          }
          else
          {
            v37 = (__m128i *)((char *)p_dest + v32);
            do
            {
              v58 = v33->m128i_i8[0];
              v59 = p_dest->m128i_i8[0];
              p_dest = (__m128i *)((char *)p_dest + 1);
              v33 = (__m128i *)((char *)v33 + 1);
              p_dest[-1].m128i_i8[15] = v58;
              v33[-1].m128i_i8[15] = v59;
            }
            while ( p_dest != v37 );
          }
          p_dest = v37;
        }
        if ( !(v31 % v26) )
          goto LABEL_44;
        v32 = v26;
        v54 = v26 - v31 % v26;
        while ( 1 )
        {
          v31 = v32;
          v26 = v54;
          v32 -= v54;
          if ( v54 < v32 )
            break;
LABEL_39:
          if ( v32 == 1 )
          {
            v86 = p_dest->m128i_i8[v31 - 1];
            memmove(&p_dest->m128i_i8[1], p_dest, v31 - 1);
            p_dest->m128i_i8[0] = v86;
            goto LABEL_44;
          }
          v55 = &p_dest->m128i_i8[v31];
          v56 = (__m128i *)((char *)p_dest + v31 - v32);
          p_dest = v56;
          if ( v26 > 0 )
          {
            p_dest = (__m128i *)((char *)v56 - v26);
            do
            {
              v56 = (__m128i *)((char *)v56 - 1);
              --v55;
              v57 = v56->m128i_i8[0];
              v56->m128i_i8[0] = *v55;
              *v55 = v57;
            }
            while ( v56 != p_dest );
          }
          v54 = v31 % v32;
          if ( !(v31 % v32) )
            goto LABEL_44;
        }
      }
      v83 = v31 - 1;
      v84 = p_dest->m128i_i8[0];
      v85 = v83;
      if ( v83 )
        memmove(p_dest, &p_dest->m128i_i8[1], v83);
      p_dest->m128i_i8[v85] = v84;
    }
  }
LABEL_44:
  sub_9B6F20((unsigned __int64 *)&v103, &dest);
  return sub_20131D0(&v103, v24 + v27);
}
