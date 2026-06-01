__int64 __fastcall sub_207D690(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebp
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r13
  __int8 v10; // r12
  int v11; // edi
  __m128i *v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // r10
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  bool v18; // zf
  int v19; // eax
  int v20; // ebp
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  _QWORD *v25; // rdi
  int v26; // edi
  unsigned int v27; // r8d
  _QWORD *v28; // r9
  __m128i *v29; // rax
  __m128i *v30; // rax
  _BYTE *v31; // rax
  __m128i *v32; // rax
  __int64 v33; // r15
  __m128i *v34; // rcx
  signed __int64 v35; // rsi
  signed __int64 v36; // r13
  char *v37; // r13
  __m128i v38; // xmm6
  __m128i v39; // xmm7
  __m128i v40; // xmm3
  __m128i *p_dest; // r12
  __int64 v42; // rax
  __int64 v43; // r8
  __m128i *v44; // rdx
  unsigned __int64 v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __m128i *v48; // rcx
  __int8 *v49; // rdx
  __int8 v50; // r9
  __int8 v51; // r9
  __int8 v52; // r9
  __int8 v53; // r9
  __int8 v54; // r9
  __int8 v55; // r9
  __int8 v56; // r9
  __int8 v57; // r9
  __int8 v58; // r9
  __int8 v59; // r9
  __int8 v60; // r9
  __int8 v61; // r9
  __int8 v62; // r9
  __int8 v63; // r9
  __int8 v64; // di
  __int64 v65; // rdx
  __int8 *v66; // rcx
  signed __int64 v67; // rsi
  __m128i *v68; // rdi
  __int8 *v69; // r10
  __int8 v70; // dl
  const __m128i *v71; // rax
  const __m128i *v72; // rdx
  __m128i v73; // xmm0
  __m128i v74; // xmm2
  __int8 *v75; // rax
  __int8 *v76; // rdx
  __int8 v77; // si
  char v78; // si
  char v79; // si
  char v80; // si
  char v81; // si
  char v82; // si
  char v83; // si
  char v84; // si
  char v85; // si
  char v86; // si
  char v87; // si
  char v88; // si
  char v89; // si
  char v90; // si
  char v91; // cl
  __int8 v92; // r8
  __int8 v93; // di
  __int8 v94; // r14
  size_t v95; // rax
  __int8 v96; // cl
  size_t v97; // r14
  __m128i *v98; // rdx
  __m128i *v99; // rax
  __int8 v100; // di
  __int8 v101; // si
  __int64 v102; // [rsp+8h] [rbp-170h]
  __int8 v105; // [rsp+20h] [rbp-158h]
  char *v106; // [rsp+28h] [rbp-150h]
  __m128i v107; // [rsp+30h] [rbp-148h] BYREF
  __m128i v108; // [rsp+40h] [rbp-138h] BYREF
  __m128i v109; // [rsp+50h] [rbp-128h] BYREF
  __int64 v110; // [rsp+60h] [rbp-118h]
  __int8 v111; // [rsp+77h] [rbp-101h] BYREF
  __int64 v112; // [rsp+78h] [rbp-100h] BYREF
  __int64 v113; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v114; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v115; // [rsp+90h] [rbp-E8h] BYREF
  __int64 src; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v118; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v119; // [rsp+B0h] [rbp-C8h]
  int v120; // [rsp+B8h] [rbp-C0h]
  __int16 v121; // [rsp+BCh] [rbp-BCh] BYREF
  char v122[2]; // [rsp+BEh] [rbp-BAh] BYREF
  __m128i dest; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v124[3]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v125; // [rsp+100h] [rbp-78h] BYREF
  __m128i v126; // [rsp+110h] [rbp-68h]
  __m128i v127; // [rsp+120h] [rbp-58h]
  __m128i si128; // [rsp+130h] [rbp-48h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v102 = *a1;
  v5 = *a2;
  v6 = *(_BYTE *)(*a2 - 16);
  if ( (v6 & 2) != 0 )
  {
    v18 = *(_DWORD *)(v5 - 24) == 2;
    v117 = **(_QWORD **)(v5 - 32);
    if ( v18 )
    {
      v7 = *(__int64 **)(v5 - 32);
      goto LABEL_5;
    }
LABEL_12:
    v8 = 0;
    goto LABEL_6;
  }
  v7 = (__int64 *)(v5 - 8LL * ((v6 >> 2) & 0xF) - 16);
  v117 = *v7;
  if ( ((*(_WORD *)(v5 - 16) >> 6) & 0xF) != 2 )
    goto LABEL_12;
LABEL_5:
  v8 = v7[1];
LABEL_6:
  v9 = *(_QWORD *)(v5 + 16) & 0x1FFFFFFFFFFFFFFFLL;
  v118 = v8;
  v119 = v9 | v119 & 0xE000000000000000LL;
  v10 = *(_BYTE *)(v5 + 23) >> 5;
  HIBYTE(v119) = (32 * v10) | HIBYTE(v119) & 0x1F;
  v11 = *(_DWORD *)(v5 + 4);
  v120 = v11;
  v121 = *(_WORD *)(v5 + 2);
  v122[0] = (unsigned __int8)BYTE1(*(_QWORD *)v5) >> 7;
  if ( v119 )
  {
    v112 = 0;
    dest = 0;
    memset(v124, 0, sizeof(v124));
    v125 = 0;
    v126 = 0;
    v127 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v12 = sub_A0C4A0(&dest, &v112, &dest, (unsigned __int64)&v125, v11);
    v13 = v112;
    v14 = (__int64 *)((char *)v12->m128i_i64 + 2);
    LOWORD(src) = v121;
    if ( &v12->m128i_i16[1] <= (__int16 *)&v125 )
    {
      v12->m128i_i16[0] = v121;
    }
    else
    {
      v106 = (char *)((char *)&v125 - (char *)v12);
      memcpy(v12, &src, (char *)&v125 - (char *)v12);
      if ( v13 )
      {
        v13 += 64;
        sub_9B6F20((unsigned __int64 *)&v125, &dest);
      }
      else
      {
        v13 = 64;
        sub_A09B80((unsigned __int64 *)&v107, &dest, si128.m128i_u64[1]);
        v15 = _mm_loadu_si128(&v107);
        v16 = _mm_loadu_si128(&v108);
        v17 = _mm_loadu_si128(&v109);
        si128.m128i_i64[0] = v110;
        v125 = v15;
        v126 = v16;
        v127 = v17;
      }
      memcpy(&dest, (char *)&src + (_QWORD)v106, 2LL - (_QWORD)v106);
      v14 = (__int64 *)((char *)dest.m128i_i64 + 2LL - (_QWORD)v106);
    }
    v113 = v13;
    v29 = sub_206E9E0(&dest, &v113, v14, (unsigned __int64)&v125, v117);
    v114 = v113;
    v30 = sub_206E9E0(&dest, &v114, v29, (unsigned __int64)&v125, v118);
    v115 = v114;
    v31 = sub_207A9D0(&dest, &v115, v30, (unsigned __int64)&v125, v122[0]);
    src = v115;
    v32 = sub_A232E0(&dest, &src, v31, (unsigned __int64)&v125, v9);
    v33 = src;
    v111 = v10;
    v34 = (__m128i *)&v32->m128i_i8[1];
    if ( &v32->m128i_i8[1] > (__int8 *)&v125 )
    {
      v37 = (char *)((char *)&v125 - (char *)v32);
      memcpy(v32, &v111, (char *)&v125 - (char *)v32);
      if ( v33 )
      {
        v33 += 64;
        sub_9B6F20((unsigned __int64 *)&v125, &dest);
      }
      else
      {
        v33 = 64;
        sub_A09B80((unsigned __int64 *)&v107, &dest, si128.m128i_u64[1]);
        v38 = _mm_loadu_si128(&v107);
        v39 = _mm_loadu_si128(&v108);
        v40 = _mm_loadu_si128(&v109);
        si128.m128i_i64[0] = v110;
        v125 = v38;
        v126 = v39;
        v127 = v40;
      }
      memcpy(&dest, &v111 + (_QWORD)v37, 1LL - (_QWORD)v37);
      v34 = (__m128i *)((char *)&dest + 1LL - (_QWORD)v37);
    }
    else
    {
      v32->m128i_i8[0] = v10;
    }
    v35 = (char *)v34 - (char *)&dest;
    v36 = (char *)v34 - (char *)&dest;
    if ( v33 )
    {
      if ( v34 != &dest && v34 != &v125 )
      {
        p_dest = &dest;
        v42 = 64;
        if ( v35 == (char *)&v125 - (char *)v34 )
        {
          v71 = v34;
          if ( (v34 >= (__m128i *)v124 || &dest >= &v34[1])
            && (unsigned __int64)v34->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
          {
            v72 = &dest;
            do
            {
              v73 = _mm_load_si128(v72);
              v74 = _mm_loadu_si128(v71++);
              ++v72;
              v72[-1] = v74;
              v71[-1] = v73;
            }
            while ( v71 != (const __m128i *)&v34->m128i_i8[v35 & 0xFFFFFFFFFFFFFFF0LL] );
            v75 = &dest.m128i_i8[v35 & 0xFFFFFFFFFFFFFFF0LL];
            v76 = &v34->m128i_i8[v35 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != v35 )
            {
              v77 = *v75;
              *v75 = *v76;
              *v76 = v77;
              if ( v34 != (__m128i *)(v75 + 1) )
              {
                v78 = v75[1];
                v75[1] = v76[1];
                v76[1] = v78;
                if ( v34 != (__m128i *)(v75 + 2) )
                {
                  v79 = v75[2];
                  v75[2] = v76[2];
                  v76[2] = v79;
                  if ( v34 != (__m128i *)(v75 + 3) )
                  {
                    v80 = v75[3];
                    v75[3] = v76[3];
                    v76[3] = v80;
                    if ( v34 != (__m128i *)(v75 + 4) )
                    {
                      v81 = v75[4];
                      v75[4] = v76[4];
                      v76[4] = v81;
                      if ( v34 != (__m128i *)(v75 + 5) )
                      {
                        v82 = v75[5];
                        v75[5] = v76[5];
                        v76[5] = v82;
                        if ( v34 != (__m128i *)(v75 + 6) )
                        {
                          v83 = v75[6];
                          v75[6] = v76[6];
                          v76[6] = v83;
                          if ( v34 != (__m128i *)(v75 + 7) )
                          {
                            v84 = v75[7];
                            v75[7] = v76[7];
                            v76[7] = v84;
                            if ( v34 != (__m128i *)(v75 + 8) )
                            {
                              v85 = v75[8];
                              v75[8] = v76[8];
                              v76[8] = v85;
                              if ( v34 != (__m128i *)(v75 + 9) )
                              {
                                v86 = v75[9];
                                v75[9] = v76[9];
                                v76[9] = v86;
                                if ( v34 != (__m128i *)(v75 + 10) )
                                {
                                  v87 = v75[10];
                                  v75[10] = v76[10];
                                  v76[10] = v87;
                                  if ( v34 != (__m128i *)(v75 + 11) )
                                  {
                                    v88 = v75[11];
                                    v75[11] = v76[11];
                                    v76[11] = v88;
                                    if ( v34 != (__m128i *)(v75 + 12) )
                                    {
                                      v89 = v75[12];
                                      v75[12] = v76[12];
                                      v76[12] = v89;
                                      if ( v34 != (__m128i *)(v75 + 13) )
                                      {
                                        v90 = v75[13];
                                        v75[13] = v76[13];
                                        v76[13] = v90;
                                        if ( v34 != (__m128i *)(v75 + 14) )
                                        {
                                          v91 = v75[14];
                                          v75[14] = v76[14];
                                          v76[14] = v91;
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
            v98 = v34;
            v99 = &dest;
            do
            {
              v100 = v98->m128i_i8[0];
              v101 = v99->m128i_i8[0];
              v99 = (__m128i *)((char *)v99 + 1);
              v98 = (__m128i *)((char *)v98 + 1);
              v99[-1].m128i_i8[15] = v100;
              v98[-1].m128i_i8[15] = v101;
            }
            while ( v34 != v99 );
          }
        }
        else
        {
          while ( 1 )
          {
            v43 = v42 - v35;
            if ( v35 < v42 - v35 )
              break;
LABEL_63:
            if ( v43 == 1 )
            {
              v94 = p_dest->m128i_i8[v42 - 1];
              memmove(&p_dest->m128i_i8[1], p_dest, v42 - 1);
              p_dest->m128i_i8[0] = v94;
              goto LABEL_90;
            }
            v66 = &p_dest->m128i_i8[v42];
            p_dest = (__m128i *)((char *)p_dest + v42 - v43);
            if ( v35 > 0 )
            {
              v67 = -v35;
              v68 = p_dest;
              v69 = &v66[v67];
              do
              {
                v68 = (__m128i *)((char *)v68 - 1);
                --v66;
                v70 = v68->m128i_i8[0];
                v68->m128i_i8[0] = *v66;
                *v66 = v70;
              }
              while ( v66 != v69 );
              p_dest = (__m128i *)((char *)p_dest + v67);
            }
            v35 = v42 % v43;
            if ( !(v42 % v43) )
              goto LABEL_90;
            v42 = v43;
          }
          while ( v35 != 1 )
          {
            v44 = (__m128i *)((char *)p_dest + v35);
            if ( v43 > 0 )
            {
              if ( (v35 + 16 <= 0 || v44 >= &p_dest[1]) && (unsigned __int64)(v43 - 1) > 0xE )
              {
                v45 = 0;
                do
                {
                  v46 = _mm_loadu_si128(&p_dest[v45 / 0x10]);
                  p_dest[v45 / 0x10] = _mm_loadu_si128(&v44[v45 / 0x10]);
                  v44[v45 / 0x10] = v46;
                  v45 += 16LL;
                }
                while ( v45 != (v43 & 0xFFFFFFFFFFFFFFF0LL) );
                v47 = v43 & 0x7FFFFFFFFFFFFFF0LL;
                v48 = (__m128i *)((char *)p_dest + (v43 & 0xFFFFFFFFFFFFFFF0LL));
                v49 = &v44->m128i_i8[v43 & 0xFFFFFFFFFFFFFFF0LL];
                if ( (v43 & 0xFFFFFFFFFFFFFFF0LL) != v43 )
                {
                  v50 = v48->m128i_i8[0];
                  v48->m128i_i8[0] = *v49;
                  *v49 = v50;
                  if ( v43 > v47 + 1 )
                  {
                    v51 = v48->m128i_i8[1];
                    v48->m128i_i8[1] = v49[1];
                    v49[1] = v51;
                    if ( v43 > v47 + 2 )
                    {
                      v52 = v48->m128i_i8[2];
                      v48->m128i_i8[2] = v49[2];
                      v49[2] = v52;
                      if ( v43 > v47 + 3 )
                      {
                        v53 = v48->m128i_i8[3];
                        v48->m128i_i8[3] = v49[3];
                        v49[3] = v53;
                        if ( v43 > v47 + 4 )
                        {
                          v54 = v48->m128i_i8[4];
                          v48->m128i_i8[4] = v49[4];
                          v49[4] = v54;
                          if ( v43 > v47 + 5 )
                          {
                            v55 = v48->m128i_i8[5];
                            v48->m128i_i8[5] = v49[5];
                            v49[5] = v55;
                            if ( v43 > v47 + 6 )
                            {
                              v56 = v48->m128i_i8[6];
                              v48->m128i_i8[6] = v49[6];
                              v49[6] = v56;
                              if ( v43 > v47 + 7 )
                              {
                                v57 = v48->m128i_i8[7];
                                v48->m128i_i8[7] = v49[7];
                                v49[7] = v57;
                                if ( v43 > v47 + 8 )
                                {
                                  v58 = v48->m128i_i8[8];
                                  v48->m128i_i8[8] = v49[8];
                                  v49[8] = v58;
                                  if ( v43 > v47 + 9 )
                                  {
                                    v59 = v48->m128i_i8[9];
                                    v48->m128i_i8[9] = v49[9];
                                    v49[9] = v59;
                                    if ( v43 > v47 + 10 )
                                    {
                                      v60 = v48->m128i_i8[10];
                                      v48->m128i_i8[10] = v49[10];
                                      v49[10] = v60;
                                      if ( v43 > v47 + 11 )
                                      {
                                        v61 = v48->m128i_i8[11];
                                        v48->m128i_i8[11] = v49[11];
                                        v49[11] = v61;
                                        if ( v43 > v47 + 12 )
                                        {
                                          v62 = v48->m128i_i8[12];
                                          v48->m128i_i8[12] = v49[12];
                                          v49[12] = v62;
                                          if ( v43 > v47 + 13 )
                                          {
                                            v63 = v48->m128i_i8[13];
                                            v48->m128i_i8[13] = v49[13];
                                            v49[13] = v63;
                                            if ( v43 > v47 + 14 )
                                            {
                                              v64 = v48->m128i_i8[14];
                                              v48->m128i_i8[14] = v49[14];
                                              v49[14] = v64;
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
                  v48 = (__m128i *)((char *)p_dest + v43);
                }
              }
              else
              {
                v48 = (__m128i *)((char *)p_dest + v43);
                do
                {
                  v92 = v44->m128i_i8[0];
                  v93 = p_dest->m128i_i8[0];
                  p_dest = (__m128i *)((char *)p_dest + 1);
                  v44 = (__m128i *)((char *)v44 + 1);
                  p_dest[-1].m128i_i8[15] = v92;
                  v44[-1].m128i_i8[15] = v93;
                }
                while ( p_dest != v48 );
              }
              p_dest = v48;
            }
            v65 = v42 % v35;
            if ( !(v42 % v35) )
              goto LABEL_90;
            v42 = v35;
            v35 -= v65;
            v43 = v42 - v35;
            if ( v35 >= v42 - v35 )
              goto LABEL_63;
          }
          v95 = v42 - 1;
          v96 = p_dest->m128i_i8[0];
          v97 = v95;
          if ( v95 )
          {
            v105 = p_dest->m128i_i8[0];
            memmove(p_dest, &p_dest->m128i_i8[1], v95);
            v96 = v105;
          }
          p_dest->m128i_i8[v97] = v96;
        }
      }
LABEL_90:
      sub_9B6F20((unsigned __int64 *)&v125, &dest);
      v19 = sub_20131D0(&v125, v36 + v33);
    }
    else
    {
      v19 = sub_2012F20(&dest, v35, si128.m128i_i64[1]);
    }
  }
  else
  {
    v19 = sub_207CEB0(v11, &v121, &v117, &v118, v122);
  }
  v20 = v3 - 1;
  v21 = v20 & v19;
  v22 = (_QWORD *)(v102 + 8LL * v21);
  v23 = *v22;
  if ( *a2 == *v22 )
  {
LABEL_32:
    *a3 = v22;
    return 1;
  }
  else
  {
    if ( v23 != -4096 )
    {
      v24 = 1;
      v25 = nullptr;
      while ( 1 )
      {
        if ( v23 != -8192 || v25 )
          v22 = v25;
        v26 = v24 + 1;
        v27 = v21 + v24;
        v21 = v20 & v27;
        v28 = (_QWORD *)(v102 + 8LL * (v20 & v27));
        v23 = *v28;
        if ( *v28 == *a2 )
        {
          v22 = (_QWORD *)(v102 + 8LL * (v20 & v27));
          goto LABEL_32;
        }
        if ( v23 == -4096 )
          break;
        v24 = v26;
        v25 = v22;
        v22 = v28;
      }
      if ( !v22 )
        v22 = (_QWORD *)(v102 + 8LL * (v20 & v27));
    }
    *a3 = v22;
    return 0;
  }
}
