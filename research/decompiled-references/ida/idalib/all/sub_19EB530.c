unsigned __int64 __fastcall sub_19EB530(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  char v9; // dl
  __int64 v10; // rbp
  _BYTE *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 result; // rax
  __int64 v15; // r14
  __int64 (__fastcall *v16)(__int64); // rax
  _BOOL4 v18; // r15d
  _BYTE *v19; // rcx
  __int64 v20; // r11
  __m128i *v21; // r9
  __m128i *v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rdi
  __m128i *v25; // rcx
  __m128i *v26; // rsi
  __m128i *v27; // rdi
  unsigned __int64 v28; // rdx
  const __m128i *v29; // rcx
  __int64 v30; // r11
  __m128i *v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdi
  __m128i *v34; // rcx
  __m128i *v35; // rsi
  __m128i *v36; // rdi
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  void **v40; // rdx
  __int64 v41; // r10
  __m128i *v42; // rsi
  void **v43; // rdx
  __int64 v44; // r10
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __m128i *v52; // rax
  __int64 v53; // rdi
  const __m128i *v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rcx
  __m128i *v59; // rax
  __int64 v60; // rax
  int v61; // r10d
  int v62; // r10d
  unsigned int v63; // esi
  __int64 v64; // r11
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 *v67; // rsi
  __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  const __m128i *v70; // rsi
  unsigned __int64 v71; // rdx
  const __m128i *v72; // rsi
  __int64 v73; // r11
  __int64 *v74; // rdi
  __int64 *v75; // rsi
  __int64 v76; // rax
  __int64 *v77; // rdi
  __int64 *v78; // rsi
  __int64 v79; // rax
  char v80; // [rsp+3h] [rbp-95h]
  __int32 v81; // [rsp+4h] [rbp-94h]
  __int64 v82; // [rsp+8h] [rbp-90h]
  bool v83; // [rsp+18h] [rbp-80h]
  void **v84; // [rsp+18h] [rbp-80h]
  __m128i *v85; // [rsp+18h] [rbp-80h]
  void **v86; // [rsp+18h] [rbp-80h]
  __m128i *v87; // [rsp+18h] [rbp-80h]
  unsigned __int64 v88; // [rsp+18h] [rbp-80h]
  __m128i *v89; // [rsp+20h] [rbp-78h]
  __int64 *v90; // [rsp+20h] [rbp-78h]
  unsigned __int64 v91; // [rsp+28h] [rbp-70h]
  unsigned __int64 v92; // [rsp+28h] [rbp-70h]
  unsigned __int8 v93; // [rsp+3Fh] [rbp-59h] BYREF
  _BYTE *v94; // [rsp+40h] [rbp-58h] BYREF
  __int64 v95; // [rsp+48h] [rbp-50h]
  __int64 v96; // [rsp+50h] [rbp-48h]
  _BYTE *v97; // [rsp+58h] [rbp-40h]

  v8 = a3;
  v9 = *(_BYTE *)(a3 + 8);
  v10 = *(_QWORD *)(v8 + 16);
  v81 = a4;
  v11 = *(_BYTE **)v8;
  v82 = a5;
  v80 = 0;
  v83 = (v9 & 0xFD) == 1;
  if ( (v9 & 0xFD) == 1 )
  {
    v60 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 32LL))(v11);
    v61 = *(_DWORD *)(a1 + 32);
    a5 = *(_QWORD *)(a1 + 16);
    if ( !v61 )
    {
      v11 = *(_BYTE **)v8;
      v9 = *(_BYTE *)(v8 + 8);
      v80 = 1;
      goto LABEL_2;
    }
    v62 = v61 - 1;
    v11 = *(_BYTE **)v8;
    v9 = *(_BYTE *)(v8 + 8);
    v63 = v62 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
    a4 = a5 + 16LL * v63;
    v64 = *(_QWORD *)a4;
    if ( v60 != *(_QWORD *)a4 )
    {
      v80 = 1;
      a4 = 1;
      if ( v64 == -4096 )
        goto LABEL_2;
      while ( 1 )
      {
        a6 = (unsigned int)(a4 + 1);
        v63 = v62 & (a4 + v63);
        a4 = a5 + 16LL * v63;
        v73 = *(_QWORD *)a4;
        if ( v60 == *(_QWORD *)a4 )
          break;
        a4 = (unsigned int)a6;
        if ( v73 == -4096 )
          goto LABEL_175;
      }
    }
    v65 = *(_QWORD *)(a4 + 8);
    if ( v65 )
    {
      v80 = 1;
      if ( (v65 & 4) != 0 )
      {
        v66 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v66 )
        {
          v10 |= *v66;
          v80 = 0;
        }
      }
    }
    else
    {
LABEL_175:
      v80 = 1;
    }
  }
LABEL_2:
  if ( v9 == 1 )
  {
    if ( (v11[28] & 0x7Fu) - 34 > 5 )
      BUG();
    if ( (char)v11[82] < 0 )
      goto LABEL_5;
    v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL);
    if ( v16 == sub_9A8F10 ? sub_B7F5F0(v11, &v94, (__int64)sub_9A8F10, a4, a5, a6) : ((unsigned __int8 (*)(void))v16)() )
      goto LABEL_5;
  }
  else if ( v9 && v9 != 2 )
  {
    goto LABEL_5;
  }
  v80 = 0;
LABEL_5:
  v12 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    v13 = 0;
  }
  else if ( (v12 & 2) != 0 )
  {
    v13 = 1;
  }
  else if ( (v12 & 4) != 0 )
  {
    v13 = 2;
  }
  else
  {
    v13 = 3;
    if ( (v12 & 8) == 0 )
      goto LABEL_9;
  }
  v90 = a2 + 2;
  v45 = v8;
  v46 = v13;
  v47 = v45;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v93 = v46;
        if ( !(unsigned __int8)sub_F5EE50(&v93, v83, v10) )
          goto LABEL_101;
        if ( !v80 || (dword_2646E30[v93] & 1) == 0 )
        {
          v48 = *((unsigned int *)a2 + 6);
          v49 = a2[2];
          v50 = *((unsigned int *)a2 + 7);
          v51 = v48 + 1;
          v52 = (__m128i *)(v49 + 32 * v48);
          if ( *(_BYTE *)(v47 + 9) )
          {
            LOBYTE(v94) = v93;
            v54 = (const __m128i *)&v94;
            WORD1(v94) = 256;
            v97 = nullptr;
            v95 = v82;
            LODWORD(v96) = v81;
            if ( v51 <= v50 )
              goto LABEL_100;
            v67 = a2 + 4;
            v91 = v49;
            if ( v49 <= (unsigned __int64)&v94 && v52 > (__m128i *)&v94 )
              goto LABEL_133;
          }
          else
          {
            LOBYTE(v94) = v93;
            v53 = *(_QWORD *)v47;
            WORD1(v94) = 1792;
            v95 = v82;
            v97 = (_BYTE *)v53;
            LODWORD(v96) = v81;
            v54 = (const __m128i *)&v94;
            if ( v51 <= v50 )
            {
LABEL_100:
              *v52 = _mm_loadu_si128(v54);
              v52[1] = _mm_loadu_si128(v54 + 1);
              ++*((_DWORD *)a2 + 6);
              goto LABEL_101;
            }
            v67 = a2 + 4;
            v91 = v49;
            if ( v49 <= (unsigned __int64)&v94 && v52 > (__m128i *)&v94 )
            {
LABEL_133:
              sub_2237220(v90, v67, v51, 32);
              v68 = a2[2];
              v54 = (const __m128i *)((char *)&v94 + v68 - v91);
              v52 = (__m128i *)(v68 + 32LL * *((unsigned int *)a2 + 6));
              goto LABEL_100;
            }
          }
          sub_2237220(v90, v67, v51, 32);
          v54 = (const __m128i *)&v94;
          v52 = (__m128i *)(a2[2] + 32LL * *((unsigned int *)a2 + 6));
          goto LABEL_100;
        }
        v56 = *((unsigned int *)a2 + 12);
        v57 = a2[5];
        v58 = *((unsigned int *)a2 + 13);
        v59 = (__m128i *)(v57 + 24 * v56);
        if ( v56 >= v58 )
        {
          v71 = v56 + 1;
          v94 = *(_BYTE **)v47;
          BYTE4(v95) = 0;
          v72 = (const __m128i *)&v94;
          LODWORD(v95) = v81;
          v96 = v82;
          if ( v58 < v71 )
          {
            v74 = a2 + 5;
            v75 = a2 + 7;
            v92 = v57;
            if ( v57 > (unsigned __int64)&v94 || v59 <= (__m128i *)&v94 )
            {
              sub_2237220(v74, v75, v71, 24);
              v72 = (const __m128i *)&v94;
              v59 = (__m128i *)(a2[5] + 24LL * *((unsigned int *)a2 + 12));
            }
            else
            {
              sub_2237220(v74, v75, v71, 24);
              v76 = a2[5];
              v72 = (const __m128i *)((char *)&v94 + v76 - v92);
              v59 = (__m128i *)(v76 + 24LL * *((unsigned int *)a2 + 12));
            }
          }
          *v59 = _mm_loadu_si128(v72);
          v59[1].m128i_i64[0] = v72[1].m128i_i64[0];
          ++*((_DWORD *)a2 + 12);
        }
        else
        {
          v59->m128i_i64[0] = *(_QWORD *)v47;
          v59->m128i_i8[12] = 0;
          v59->m128i_i32[2] = v81;
          v59[1].m128i_i64[0] = v82;
          ++*((_DWORD *)a2 + 12);
        }
LABEL_101:
        if ( v46 == 3 )
          goto LABEL_107;
        v55 = *a2;
        if ( !_bittest64(&v55, v46 + 1) )
          break;
        ++v46;
      }
      if ( v46 == 2 )
        goto LABEL_107;
      if ( (v55 & (1LL << ((unsigned __int8)v46 + 2))) == 0 )
        break;
      v46 += 2;
    }
    if ( v46 || (v55 & 8) == 0 )
      break;
    v46 = 3;
  }
LABEL_107:
  v8 = v47;
LABEL_9:
  result = a2[1];
  if ( (result & 1) != 0 )
  {
    v15 = 0;
    goto LABEL_21;
  }
  if ( (result & 2) != 0 )
  {
    v15 = 1;
    goto LABEL_21;
  }
  if ( (result & 4) != 0 )
  {
    v15 = 2;
    goto LABEL_21;
  }
  v15 = 3;
  if ( (result & 8) != 0 )
  {
LABEL_21:
    v18 = v83;
    while ( 1 )
    {
      v93 = v15;
      result = sub_F5EE50(&v93, v18, v10);
      if ( (_BYTE)result )
        break;
LABEL_45:
      if ( v15 == 3 )
        return result;
      result = a2[1];
      if ( _bittest64((const __int64 *)&result, v15 + 1) )
      {
        ++v15;
      }
      else
      {
        if ( v15 == 2 )
          return result;
        if ( (result & (1LL << ((unsigned __int8)v15 + 2))) != 0 )
        {
          v15 += 2;
        }
        else
        {
          if ( v15 || (result & 8) == 0 )
            return result;
          v15 = 3;
        }
      }
    }
    if ( v80 && (dword_2646E30[v93] & 1) != 0 )
    {
      v37 = *((unsigned int *)a2 + 12);
      v38 = a2[5];
      v39 = *((unsigned int *)a2 + 13);
      result = v38 + 24 * v37;
      if ( v37 >= v39 )
      {
        v69 = v37 + 1;
        v94 = *(_BYTE **)v8;
        BYTE4(v95) = 0;
        v70 = (const __m128i *)&v94;
        LODWORD(v95) = v81;
        v96 = v82;
        if ( v39 < v69 )
        {
          v77 = a2 + 5;
          v78 = a2 + 7;
          v88 = v38;
          if ( v38 > (unsigned __int64)&v94 || result <= (unsigned __int64)&v94 )
          {
            sub_2237220(v77, v78, v69, 24);
            v70 = (const __m128i *)&v94;
            result = a2[5] + 24LL * *((unsigned int *)a2 + 12);
          }
          else
          {
            sub_2237220(v77, v78, v69, 24);
            v79 = a2[5];
            v70 = (const __m128i *)((char *)&v94 + v79 - v88);
            result = v79 + 24LL * *((unsigned int *)a2 + 12);
          }
        }
        *(__m128i *)result = _mm_loadu_si128(v70);
        *(_QWORD *)(result + 16) = v70[1].m128i_i64[0];
        ++*((_DWORD *)a2 + 12);
      }
      else
      {
        *(_QWORD *)result = *(_QWORD *)v8;
        *(_BYTE *)(result + 12) = 0;
        *(_QWORD *)(result + 16) = v82;
        *(_DWORD *)(result + 8) = v81;
        ++*((_DWORD *)a2 + 12);
      }
      goto LABEL_45;
    }
    result = a2[4];
    if ( !*(_BYTE *)(v8 + 9) )
    {
      v19 = *(_BYTE **)v8;
      LOBYTE(v94) = v93;
      WORD1(v94) = 1792;
      v95 = v82;
      v97 = v19;
      LODWORD(v96) = v81;
      if ( !result )
      {
        result = operator new(0x30u);
        v40 = (void **)a2[4];
        v29 = (const __m128i *)&v94;
        v22 = (__m128i *)(result + 16);
        *(_QWORD *)(result + 8) = 0x100000000LL;
        *(_QWORD *)result = result + 16;
        a2[4] = result;
        if ( !v40 )
          goto LABEL_44;
        if ( *v40 != v40 + 2 )
        {
          v84 = v40;
          free(*v40);
          v40 = v84;
        }
        operator delete(v40, 0x30u);
        result = a2[4];
        v29 = (const __m128i *)&v94;
        v41 = *(unsigned int *)(result + 8);
        v21 = *(__m128i **)result;
        v28 = v41 + 1;
        v22 = (__m128i *)(*(_QWORD *)result + 32 * v41);
        if ( v28 <= *(unsigned int *)(result + 12) )
          goto LABEL_44;
        goto LABEL_83;
      }
      v20 = *(unsigned int *)(result + 8);
      v21 = *(__m128i **)result;
      v22 = (__m128i *)(*(_QWORD *)result + 32 * v20);
      v23 = (32 * v20) >> 5;
      v24 = (32 * v20) >> 7;
      if ( v24 )
      {
        if ( v93 == v21->m128i_i8[0] )
        {
          v25 = *(__m128i **)result;
        }
        else
        {
          if ( v93 == v21[2].m128i_i8[0] )
          {
            if ( v22 != &v21[2] && v21 != (__m128i *)-32LL )
              goto LABEL_45;
            goto LABEL_43;
          }
          v25 = v21 + 4;
          if ( v93 != v21[4].m128i_i8[0] )
          {
            v26 = *(__m128i **)result;
            v25 = v21 + 6;
            v27 = &v21[8 * v24];
            if ( v93 != v21[6].m128i_i8[0] )
            {
              while ( 1 )
              {
                v25 = v26 + 8;
                if ( &v26[8] == v27 )
                {
                  v23 = ((char *)v22 - (char *)v27) >> 5;
                  goto LABEL_40;
                }
                if ( v93 == v26[8].m128i_i8[0] )
                  goto LABEL_75;
                if ( v93 == v26[10].m128i_i8[0] )
                  break;
                if ( v93 == v26[12].m128i_i8[0] )
                {
                  if ( &v26[12] != v22 )
                    goto LABEL_45;
                  goto LABEL_43;
                }
                if ( v93 == v26[14].m128i_i8[0] )
                {
                  v25 = v26 + 14;
                  goto LABEL_75;
                }
                v26 += 8;
              }
              if ( v22 != &v26[10] )
                goto LABEL_45;
              goto LABEL_43;
            }
          }
        }
LABEL_75:
        if ( v25 != v22 )
          goto LABEL_45;
LABEL_43:
        v28 = v20 + 1;
        v29 = (const __m128i *)&v94;
        if ( v20 + 1 <= (unsigned __int64)*(unsigned int *)(result + 12) )
        {
LABEL_44:
          *v22 = _mm_loadu_si128(v29);
          v22[1] = _mm_loadu_si128(v29 + 1);
          ++*(_DWORD *)(result + 8);
          goto LABEL_45;
        }
LABEL_83:
        v42 = (__m128i *)(result + 16);
        v89 = v21;
        if ( v21 <= (__m128i *)&v94 && v22 > (__m128i *)&v94 )
        {
LABEL_85:
          v85 = (__m128i *)result;
          sub_2237220(result, v42, v28, 32);
          result = (unsigned __int64)v85;
          v29 = (const __m128i *)(v85->m128i_i64[0] + (char *)&v94 - (char *)v89);
          v22 = (__m128i *)(32LL * v85->m128i_u32[2] + v85->m128i_i64[0]);
          goto LABEL_44;
        }
LABEL_150:
        v87 = (__m128i *)result;
        sub_2237220(result, v42, v28, 32);
        result = (unsigned __int64)v87;
        v29 = (const __m128i *)&v94;
        v22 = (__m128i *)(v87->m128i_i64[0] + 32LL * v87->m128i_u32[2]);
        goto LABEL_44;
      }
      v25 = *(__m128i **)result;
LABEL_40:
      if ( v23 != 2 )
      {
        if ( v23 != 3 )
        {
          if ( v23 != 1 )
            goto LABEL_43;
          goto LABEL_148;
        }
        if ( v93 == v25->m128i_i8[0] )
          goto LABEL_75;
        v25 += 2;
      }
      if ( v93 == v25->m128i_i8[0] )
        goto LABEL_75;
      v25 += 2;
LABEL_148:
      if ( v93 != v25->m128i_i8[0] )
        goto LABEL_43;
      goto LABEL_75;
    }
    LOBYTE(v94) = v93;
    WORD1(v94) = 256;
    v95 = v82;
    v97 = nullptr;
    LODWORD(v96) = v81;
    if ( !result )
    {
      result = operator new(0x30u);
      v43 = (void **)a2[4];
      v29 = (const __m128i *)&v94;
      v22 = (__m128i *)(result + 16);
      *(_QWORD *)(result + 8) = 0x100000000LL;
      *(_QWORD *)result = result + 16;
      a2[4] = result;
      if ( !v43 )
        goto LABEL_44;
      if ( *v43 != v43 + 2 )
      {
        v86 = v43;
        free(*v43);
        v43 = v86;
      }
      operator delete(v43, 0x30u);
      result = a2[4];
      v29 = (const __m128i *)&v94;
      v44 = *(unsigned int *)(result + 8);
      v31 = *(__m128i **)result;
      v28 = v44 + 1;
      v22 = (__m128i *)(*(_QWORD *)result + 32 * v44);
      if ( *(unsigned int *)(result + 12) >= v28 )
        goto LABEL_44;
      goto LABEL_90;
    }
    v30 = *(unsigned int *)(result + 8);
    v31 = *(__m128i **)result;
    v22 = (__m128i *)(*(_QWORD *)result + 32 * v30);
    v32 = (32 * v30) >> 5;
    v33 = (32 * v30) >> 7;
    if ( v33 )
    {
      if ( v31->m128i_i8[0] == v93 )
      {
        v34 = *(__m128i **)result;
      }
      else
      {
        if ( v31[2].m128i_i8[0] == v93 )
        {
          if ( &v31[2] != v22 && v31 != (__m128i *)-32LL )
            goto LABEL_45;
          goto LABEL_69;
        }
        v34 = v31 + 4;
        if ( v93 != v31[4].m128i_i8[0] )
        {
          v35 = *(__m128i **)result;
          v34 = v31 + 6;
          v36 = &v31[8 * v33];
          if ( v93 != v31[6].m128i_i8[0] )
          {
            while ( 1 )
            {
              v34 = v35 + 8;
              if ( &v35[8] == v36 )
              {
                v32 = ((char *)v22 - (char *)v36) >> 5;
                goto LABEL_66;
              }
              if ( v93 == v35[8].m128i_i8[0] )
                goto LABEL_72;
              if ( v93 == v35[10].m128i_i8[0] )
                break;
              if ( v93 == v35[12].m128i_i8[0] )
              {
                if ( &v35[12] != v22 )
                  goto LABEL_45;
                goto LABEL_69;
              }
              if ( v93 == v35[14].m128i_i8[0] )
              {
                v34 = v35 + 14;
                goto LABEL_72;
              }
              v35 += 8;
            }
            if ( v22 != &v35[10] )
              goto LABEL_45;
            goto LABEL_69;
          }
        }
      }
LABEL_72:
      if ( v34 != v22 )
        goto LABEL_45;
LABEL_69:
      v28 = v30 + 1;
      v29 = (const __m128i *)&v94;
      if ( *(unsigned int *)(result + 12) >= (unsigned __int64)(v30 + 1) )
        goto LABEL_44;
LABEL_90:
      v42 = (__m128i *)(result + 16);
      v89 = v31;
      if ( v31 <= (__m128i *)&v94 && v22 > (__m128i *)&v94 )
        goto LABEL_85;
      goto LABEL_150;
    }
    v34 = *(__m128i **)result;
LABEL_66:
    if ( v32 != 2 )
    {
      if ( v32 != 3 )
      {
        if ( v32 != 1 )
          goto LABEL_69;
        goto LABEL_142;
      }
      if ( v93 == v34->m128i_i8[0] )
        goto LABEL_72;
      v34 += 2;
    }
    if ( v93 == v34->m128i_i8[0] )
      goto LABEL_72;
    v34 += 2;
LABEL_142:
    if ( v93 != v34->m128i_i8[0] )
      goto LABEL_69;
    goto LABEL_72;
  }
  return result;
}
