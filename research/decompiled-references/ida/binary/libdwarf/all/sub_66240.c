__int64 __fastcall sub_66240(__int64 a1, __m128i *a2, __int64 a3, unsigned __int8 *a4, unsigned __int64 a5, int a6)
{
  __int64 v7; // rax
  const __m128i *v8; // rsi
  __int8 *v9; // rax
  const __m128i *v10; // rax
  unsigned int v11; // eax
  size_t v12; // r13
  __m128i *v14; // r14
  __m128i *v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // rdx
  unsigned __int64 *v18; // rdx
  int v19; // r15d
  unsigned __int16 *v20; // r8
  int v21; // r9d
  unsigned __int64 v22; // rcx
  __int16 *v23; // rdi
  int v24; // r10d
  __int16 *v25; // rsi
  signed __int64 v26; // rbx
  __int64 v27; // r12
  int v28; // edx
  __int64 v29; // rax
  unsigned __int16 v30; // bp
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // r11
  unsigned __int8 v33; // di
  unsigned __int8 v34; // si
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rax
  int v38; // eax
  char v39; // r10
  int v40; // eax
  char v41; // r8
  unsigned int v42; // eax
  unsigned int v43; // esi
  unsigned __int64 *v44; // rdi
  __int8 *v45; // r8
  const __m128i *v46; // rax
  unsigned __int64 v47; // rdx
  const __m128i *v48; // r12
  signed __int64 v49; // r12
  const void *v50; // rsi
  char *v51; // rax
  __int8 *v52; // rbx
  const __m128i *v53; // r12
  __m128i *v54; // r8
  __m128i v55; // xmm0
  _BOOL8 v56; // rbp
  unsigned __int64 v57; // rax
  unsigned int v58; // eax
  unsigned __int64 *v59; // r11
  __m128i *v60; // rcx
  const __m128i *v61; // rax
  __m128i v62; // xmm4
  __int8 *v63; // rax
  __int64 *v64; // rdx
  __int8 *v65; // rcx
  __int64 v66; // rsi
  unsigned __int64 v67; // rdx
  _DWORD *v68; // r12
  __m128i *v69; // r8
  const __m128i *v70; // r12
  __m128i v71; // xmm7
  unsigned __int64 v72; // [rsp+0h] [rbp-138h]
  const __m128i *v73; // [rsp+8h] [rbp-130h]
  __int64 v75; // [rsp+18h] [rbp-120h]
  unsigned __int16 v76; // [rsp+20h] [rbp-118h]
  signed __int64 v77; // [rsp+20h] [rbp-118h]
  unsigned __int16 v78; // [rsp+32h] [rbp-106h]
  unsigned int v79; // [rsp+34h] [rbp-104h]
  __int64 v80; // [rsp+38h] [rbp-100h]
  unsigned __int64 v81; // [rsp+40h] [rbp-F8h]
  int v83[2]; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v84; // [rsp+60h] [rbp-D8h]
  size_t n; // [rsp+68h] [rbp-D0h]
  __int64 v86; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v87; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+88h] [rbp-B0h]
  unsigned __int64 *v89; // [rsp+90h] [rbp-A8h]
  unsigned __int8 *v90; // [rsp+98h] [rbp-A0h]
  unsigned __int8 *v91; // [rsp+A0h] [rbp-98h]
  __int64 v92; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v94; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v96; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v98; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v99; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v101; // [rsp+F8h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 30368) )
  {
    v75 = *(_QWORD *)(a1 + 30352);
  }
  else
  {
    v7 = (__int64)a2->m128i_i64 + a3;
    if ( a3 <= 0 )
      v7 = (__int64)a2;
    v75 = v7;
  }
  v8 = *(const __m128i **)(a1 + 30120);
  v9 = &v8->m128i_i8[*(_QWORD *)(a1 + 30152)];
  *(_QWORD *)v83 = v8;
  v72 = (unsigned __int64)v9;
  if ( !a6 )
  {
    v14 = a2;
LABEL_14:
    v12 = -70;
    if ( v72 - (unsigned __int64)v8 <= v75 - (__int64)v14 )
    {
      if ( v14 )
      {
        v15 = v14;
        v14 = (__m128i *)((char *)v14 + v72 - (_QWORD)v8);
        memcpy(v15, v8, v72 - (_QWORD)v8);
      }
      return (char *)v14 - (char *)a2;
    }
    return v12;
  }
  v10 = *(const __m128i **)(a1 + 29896);
  *(_DWORD *)(a1 + 30004) = 1;
  v73 = v10;
  v80 = *(_QWORD *)(a1 + 29904);
  v81 = *(_QWORD *)(a1 + 29912);
  v98 = *(unsigned int *)(a1 + 26684);
  v99 = *(unsigned int *)(a1 + 26688);
  v100 = *(unsigned int *)(a1 + 26692);
  if ( !a5 )
    return -20;
  v90 = a4;
  v91 = a4 + 8;
  v11 = a4[a5 - 1];
  v16 = *a4;
  v89 = (unsigned __int64 *)a4;
  v87 = v16;
  switch ( a5 )
  {
    case 1uLL:
      goto LABEL_25;
    case 2uLL:
      goto LABEL_24;
    case 3uLL:
      goto LABEL_23;
    case 4uLL:
      goto LABEL_22;
    case 5uLL:
      goto LABEL_21;
    case 6uLL:
      goto LABEL_20;
    case 7uLL:
      v16 += (unsigned __int64)a4[6] << 48;
LABEL_20:
      v16 += (unsigned __int64)a4[5] << 40;
LABEL_21:
      v16 += (unsigned __int64)a4[4] << 32;
LABEL_22:
      v16 += (unsigned __int64)a4[3] << 24;
LABEL_23:
      v16 += (unsigned __int64)a4[2] << 16;
LABEL_24:
      v87 = ((unsigned __int64)a4[1] << 8) + v16;
LABEL_25:
      if ( !(_BYTE)v11 )
        return -20;
      LODWORD(v88) = __lzcnt(v11) - 8 * a5 + 41;
LABEL_27:
      sub_66160(&v92, &v93, &v87, *(_QWORD *)a1);
      sub_66160((__int64 *)&v94, &v95, v17, *(_QWORD *)(a1 + 16));
      sub_66160((__int64 *)&v96, &v97, v18, *(_QWORD *)(a1 + 8));
      v14 = a2;
      v19 = a6;
      break;
    default:
      v89 = (unsigned __int64 *)&a4[a5 - 8];
      v87 = *v89;
      if ( !(_BYTE)v11 )
        return -20;
      LODWORD(v88) = __lzcnt(v11) - 23;
      if ( a5 > 0xFFFFFFFFFFFFFF88LL )
        return -20;
      goto LABEL_27;
  }
  do
  {
    v20 = (unsigned __int16 *)(v93 + 8 * v92);
    v21 = *((unsigned __int8 *)v20 + 2);
    v22 = *((unsigned int *)v20 + 1);
    v23 = (__int16 *)(v97 + 8 * v96);
    v24 = *((unsigned __int8 *)v23 + 2);
    v25 = (__int16 *)(v95 + 8 * v94);
    v26 = *((unsigned int *)v23 + 1);
    v27 = *v20;
    v28 = *((unsigned __int8 *)v25 + 2);
    v29 = *((unsigned int *)v25 + 1);
    v76 = *v23;
    v30 = *v25;
    v31 = *((_BYTE *)v20 + 3);
    v32 = v28 + v21 + v24;
    v33 = *((_BYTE *)v23 + 3);
    v34 = *((_BYTE *)v25 + 3);
    v78 = v30;
    if ( (unsigned __int8)v28 > 1u )
    {
      v35 = v87 << v88;
      LODWORD(v88) = v88 + v28;
      v36 = v29 + (v35 >> -(char)v28);
      v100 = v99;
      v37 = v98;
      v98 = v36;
      v99 = v37;
      goto LABEL_30;
    }
    v56 = (_DWORD)v22 == 0;
    if ( (_BYTE)v28 )
    {
      v67 = v56 + (_DWORD)v29 + (v87 << v88 >> 63);
      LODWORD(v88) = v88 + 1;
      if ( v67 == 3 )
      {
        v36 = v98 - 1 - (v98 == 1);
      }
      else
      {
        v36 = *(&v98 + v67) - (*(&v98 + v67) == 0);
        if ( v67 == 1 )
        {
LABEL_83:
          v99 = v98;
          v98 = v36;
LABEL_30:
          if ( (_BYTE)v24 )
            goto LABEL_59;
          goto LABEL_31;
        }
      }
      v100 = v99;
      goto LABEL_83;
    }
    v36 = *(&v88 + v56 + 10);
    v57 = *(&v88 + ((_DWORD)v22 != 0) + 10);
    v98 = v36;
    v99 = v57;
    if ( (_BYTE)v24 )
    {
LABEL_59:
      v26 += v87 << v88 >> -(char)v24;
      LODWORD(v88) = v88 + v24;
      if ( v32 <= 0x1Eu )
        goto LABEL_32;
      goto LABEL_60;
    }
LABEL_31:
    if ( v32 <= 0x1Eu )
      goto LABEL_32;
LABEL_60:
    v58 = v88;
    if ( (unsigned int)v88 > 0x40 )
    {
      v89 = (unsigned __int64 *)qword_A9B00;
    }
    else if ( v89 >= (unsigned __int64 *)v91 )
    {
      LODWORD(v88) = v88 & 7;
      v89 = (unsigned __int64 *)((char *)v89 - (v58 >> 3));
      v87 = *v89;
    }
    else if ( v89 != (unsigned __int64 *)v90 )
    {
      v79 = (unsigned int)v88 >> 3;
      v59 = (unsigned __int64 *)((char *)v89 - ((unsigned int)v88 >> 3));
      if ( v90 > (unsigned __int8 *)v59 )
      {
        v79 = (_DWORD)v89 - (_DWORD)v90;
        v59 = (unsigned __int64 *)((char *)v89 - (unsigned int)((_DWORD)v89 - (_DWORD)v90));
      }
      v89 = v59;
      LODWORD(v88) = v88 - 8 * v79;
      v87 = *v59;
    }
LABEL_32:
    if ( (_BYTE)v21 )
    {
      v22 += v87 << v88 >> -(char)v21;
      LODWORD(v88) = v88 + v21;
    }
    if ( v19 != 1 )
    {
      v38 = v88 + v31;
      v39 = 64 - v38;
      v40 = v33 + v38;
      v92 = v27 + ((v87 >> v39) & ~(-1LL << v31));
      v41 = 64 - v40;
      v42 = v34 + v40;
      LODWORD(v88) = v42;
      v96 = v76 + ((v87 >> v41) & ~(-1LL << v33));
      v94 = v78 + ((v87 >> (64 - (unsigned __int8)v42)) & ~(-1LL << v34));
      if ( v42 > 0x40 )
      {
        v89 = (unsigned __int64 *)qword_A9B00;
      }
      else if ( v89 >= (unsigned __int64 *)v91 )
      {
        LODWORD(v88) = v42 & 7;
        v89 = (unsigned __int64 *)((char *)v89 - (v42 >> 3));
        v87 = *v89;
      }
      else if ( v89 != (unsigned __int64 *)v90 )
      {
        v43 = v42 >> 3;
        v44 = (unsigned __int64 *)((char *)v89 - (v42 >> 3));
        if ( v90 > (unsigned __int8 *)v44 )
        {
          v43 = (_DWORD)v89 - (_DWORD)v90;
          v44 = (unsigned __int64 *)((char *)v89 - (unsigned int)((_DWORD)v89 - (_DWORD)v90));
        }
        v89 = v44;
        LODWORD(v88) = v42 - 8 * v43;
        v87 = *v44;
      }
    }
    v45 = &v14->m128i_i8[v22];
    v46 = *(const __m128i **)v83;
    v12 = v22 + v26;
    v47 = *(_QWORD *)v83 + v22;
    v48 = (__m128i *)((char *)v14 + v22 - v36);
    if ( v75 - 32 < (unsigned __int64)v14->m128i_u64 + v22 + v26 || v72 < v47 )
    {
      v84 = v22;
      n = v26;
      v86 = v36;
      v12 = sub_65640((unsigned __int64)v14, v75, (const __m128i **)v83, v72, v73, v80, v22, v26, v36, v81);
    }
    else
    {
      *v14 = _mm_loadu_si128(*(const __m128i **)v83);
      if ( v22 > 0x10 )
      {
        v14[1] = _mm_loadu_si128(v46 + 1);
        if ( (__int64)(v22 - 16) > 16 )
        {
          v60 = v14 + 2;
          v61 = v46 + 2;
          do
          {
            v62 = _mm_loadu_si128(v61);
            v60 += 2;
            v61 += 2;
            v60[-2] = v62;
            v60[-1] = _mm_loadu_si128(v61 - 1);
          }
          while ( v45 > (__int8 *)v60 );
        }
      }
      *(_QWORD *)v83 = v47;
      if ( v36 > v45 - (__int8 *)v73 )
      {
        if ( v36 > (unsigned __int64)&v45[-v80] )
          return -20;
        v49 = (char *)v48 - (char *)v73;
        v50 = (const void *)(v81 + v49);
        if ( v81 >= v81 + v49 + v26 )
        {
          memmove(v45, v50, v26);
          goto LABEL_52;
        }
        v26 += v49;
        v77 = -v49;
        v51 = (char *)memmove(v45, v50, -v49);
        v48 = v73;
        v45 = &v51[v77];
      }
      if ( v36 <= 0xF )
      {
        if ( v36 <= 7 )
        {
          *v45 = v48->m128i_i8[0];
          v45[1] = v48->m128i_i8[1];
          v45[2] = v48->m128i_i8[2];
          v45[3] = v48->m128i_i8[3];
          v68 = (__int32 *)((char *)v48->m128i_i32 + *((unsigned int *)qword_A9AC0 + v36));
          *((_DWORD *)v45 + 1) = *v68;
          v48 = (const __m128i *)((char *)v68 - *((int *)qword_A9AE0 + v36));
        }
        else
        {
          *(_QWORD *)v45 = v48->m128i_i64[0];
        }
        if ( (unsigned __int64)v26 > 8 )
        {
          v63 = v45 + 8;
          v64 = &v48->m128i_i64[1];
          v65 = &v45[v26];
          if ( v45 - (__int8 *)v48 > 15 )
          {
            *(__m128i *)(v45 + 8) = _mm_loadu_si128((const __m128i *)&v48->m128i_u64[1]);
            if ( v26 - 8 > 16 )
            {
              v69 = (__m128i *)(v45 + 24);
              v70 = (const __m128i *)((char *)v48 + 24);
              do
              {
                v71 = _mm_loadu_si128(v70);
                v69 += 2;
                v70 += 2;
                v69[-2] = v71;
                v69[-1] = _mm_loadu_si128(v70 - 1);
              }
              while ( v65 > (__int8 *)v69 );
            }
          }
          else
          {
            do
            {
              v66 = *v64;
              v63 += 8;
              ++v64;
              *((_QWORD *)v63 - 1) = v66;
            }
            while ( v65 > v63 );
          }
        }
      }
      else
      {
        *(__m128i *)v45 = _mm_loadu_si128(v48);
        if ( v26 > 16 )
        {
          v52 = &v45[v26];
          v53 = v48 + 1;
          v54 = (__m128i *)(v45 + 16);
          do
          {
            v55 = _mm_loadu_si128(v53);
            v54 += 2;
            v53 += 2;
            v54[-2] = v55;
            v54[-1] = _mm_loadu_si128(v53 - 1);
          }
          while ( v52 > (__int8 *)v54 );
        }
      }
    }
LABEL_52:
    if ( v12 > 0xFFFFFFFFFFFFFF88LL )
      return v12;
    v14 = (__m128i *)((char *)v14 + v12);
    --v19;
  }
  while ( v19 );
  if ( v89 == (unsigned __int64 *)v90 && (_DWORD)v88 == 64 )
  {
    v8 = *(const __m128i **)v83;
    *(_DWORD *)(a1 + 26684) = v98;
    *(_DWORD *)(a1 + 26688) = v99;
    *(_DWORD *)(a1 + 26692) = v100;
    goto LABEL_14;
  }
  return -20;
}

