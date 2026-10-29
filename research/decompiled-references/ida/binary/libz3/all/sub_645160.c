__int64 __fastcall sub_645160(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v9; // rdx
  _DWORD *v10; // r14
  __int64 v11; // r13
  unsigned int v12; // edx
  int *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int32 v17; // ebx
  const __m128i *v18; // rdx
  int v19; // ecx
  const __m128i *v20; // rsi
  __int64 v21; // rcx
  const __m128i *v22; // rdi
  const __m128i *v23; // rax
  __int32 v24; // ecx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int32 v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  const __m128i *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdx
  const __m128i *v38; // rsi
  __m128i *v39; // rdx
  __m128i *v40; // rdi
  int v41; // ecx
  __int32 v42; // eax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rdi
  bool v47; // zf
  int *v48; // rbx
  int *v49; // rbp
  __int64 v50; // rsi
  __int64 result; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r12
  unsigned int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rbp
  unsigned int v59; // edx
  unsigned int v60; // eax
  __int64 v61; // rbp
  const __m128i *v62; // rax
  int v63; // r10d
  const __m128i *v64; // rdx
  const __m128i *v65; // rcx
  __m128i *v66; // r11
  __int64 v67; // rdx
  __m128i *v68; // rsi
  __m128i *v69; // rdx
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbx
  _QWORD *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rbx
  _QWORD *v77; // rdi
  __int64 v78; // rax
  __int64 i; // rax
  __int64 j; // rax
  __int64 v81; // [rsp+0h] [rbp-148h]
  int v82[2]; // [rsp+8h] [rbp-140h]
  _DWORD *v83; // [rsp+10h] [rbp-138h]
  int v87[2]; // [rsp+30h] [rbp-118h]
  __int64 v88; // [rsp+38h] [rbp-110h]
  __int64 v89; // [rsp+40h] [rbp-108h]
  __int8 *v90; // [rsp+48h] [rbp-100h]
  int v91; // [rsp+50h] [rbp-F8h]
  int v92; // [rsp+50h] [rbp-F8h]
  int *v94; // [rsp+78h] [rbp-D0h]
  __int64 v95; // [rsp+80h] [rbp-C8h]
  int v96[48]; // [rsp+88h] [rbp-C0h] BYREF

  v9 = *(unsigned int *)(a2 + 24);
  v94 = v96;
  *(_QWORD *)v87 = a6;
  v95 = 0x1000000000LL;
  if ( (_DWORD)v9 )
  {
    v10 = a5;
    v11 = a2;
    v81 = a2 + 8 * v9;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v11 + 32);
      if ( (unsigned __int8)sub_15D26C0(a1, v15) )
      {
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v12 = v95;
        if ( (unsigned int)v95 >= HIDWORD(v95) )
        {
          v28 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v95)));
          v12 = v95;
          v13 = (int *)v28;
          if ( (_DWORD)v95 )
          {
            if ( (unsigned int)(v95 - 1) <= 2 || (int *)v28 == v94 + 2 )
            {
              v72 = 0;
              do
              {
                *(_QWORD *)&v13[v72] = *(_QWORD *)&v94[v72];
                v72 += 2;
              }
              while ( 2LL * (unsigned int)v95 != v72 );
            }
            else
            {
              v29 = 0;
              do
              {
                *(__m128i *)&v13[v29] = _mm_loadu_si128((const __m128i *)&v94[v29]);
                v29 += 4;
              }
              while ( v29 != 4LL * ((unsigned int)v95 >> 1) );
              if ( (v95 & 1) != 0 )
                *(_QWORD *)&v13[2 * (v95 & 0xFFFFFFFE)] = *(_QWORD *)&v94[2 * (v95 & 0xFFFFFFFE)];
            }
          }
          if ( v94 != v96 && v94 )
          {
            sub_186B220(v94);
            v12 = v95;
          }
          v94 = v13;
          HIDWORD(v95) *= 2;
        }
        else
        {
          v13 = v94;
        }
        v14 = v12;
        LODWORD(v9) = v12 + 1;
        *(_QWORD *)&v13[2 * v14] = v15;
        goto LABEL_8;
      }
      v16 = (unsigned int)v10[2];
      v17 = *(_DWORD *)(v15 + 16);
      v18 = *(const __m128i **)v10;
      v19 = v16 - 1;
      v16 *= 24;
      v20 = (const __m128i *)(*(_QWORD *)v10 + v16);
      v21 = 24LL * (v17 & v19);
      v22 = (const __m128i *)(*(_QWORD *)v10 + v21);
      if ( v21 != v16 )
      {
        v23 = (const __m128i *)(*(_QWORD *)v10 + v21);
        do
        {
          v24 = v23->m128i_i32[1];
          if ( v24 == 2 )
          {
            if ( v17 == v23->m128i_i32[0] && v17 == v23->m128i_i32[2] )
              goto LABEL_17;
          }
          else if ( !v24 )
          {
            goto LABEL_53;
          }
          v23 = (const __m128i *)((char *)v23 + 24);
        }
        while ( v20 != v23 );
      }
      for ( ; v22 != v18; v18 = (const __m128i *)((char *)v18 + 24) )
      {
        v27 = v18->m128i_i32[1];
        if ( v27 == 2 )
        {
          if ( v17 == v18->m128i_i32[0] && v17 == v18->m128i_i32[2] )
          {
            v23 = v18;
LABEL_17:
            a5 = (_DWORD *)v23[1].m128i_i64[0];
            goto LABEL_18;
          }
        }
        else if ( !v27 )
        {
          break;
        }
      }
LABEL_53:
      v32 = sub_15D1F10(v15);
      v33 = sub_15DB5C0(a1, (unsigned int)*a4, v32);
      ++*a4;
      v34 = (unsigned int)v10[2];
      a5 = (_DWORD *)v33;
      if ( 3 * (int)v34 < (unsigned int)(4 * (v10[3] + v10[4])) )
      {
        v91 = v10[2];
        v90 = (__int8 *)v33;
        LODWORD(v89) = 2 * v34;
        v88 = 24LL * (unsigned int)(2 * v34);
        v62 = (const __m128i *)sub_186B270(v88);
        v63 = v89;
        a6 = v88;
        v35 = v62;
        a5 = v90;
        if ( (_DWORD)v89 )
        {
          v64 = &v62[3 * (v91 & 0x7FFFFFFF)];
          do
          {
            v62->m128i_i64[0] = 0;
            v62 += 3;
            v62[-2].m128i_i64[1] = 0;
          }
          while ( v62 != v64 );
        }
        v65 = *(const __m128i **)v10;
        LODWORD(v83) = v89 - 1;
        v66 = (__m128i *)(*(_QWORD *)v10 + 24LL * (unsigned int)v10[2]);
        v36 = (__int64)v35->m128i_i64 + v88;
        if ( *(__m128i **)v10 != v66 )
        {
          do
          {
            while ( v65->m128i_i32[1] != 2 )
            {
              v65 = (const __m128i *)((char *)v65 + 24);
              if ( v66 == v65 )
                goto LABEL_116;
            }
            v67 = 24LL * (v65->m128i_i32[0] & (unsigned int)v83);
            v68 = (__m128i *)((char *)v35 + v67);
            if ( v88 == v67 )
            {
LABEL_121:
              if ( v35 == v68 )
              {
LABEL_145:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v69 = (__m128i *)v35;
              while ( v69->m128i_i32[1] )
              {
                v69 = (__m128i *)((char *)v69 + 24);
                if ( v68 == v69 )
                  goto LABEL_145;
              }
            }
            else
            {
              v69 = (__m128i *)((char *)v35 + v67);
              while ( v69->m128i_i32[1] )
              {
                v69 = (__m128i *)((char *)v69 + 24);
                if ( (__m128i *)v36 == v69 )
                  goto LABEL_121;
              }
            }
            v70 = _mm_loadu_si128(v65);
            v65 = (const __m128i *)((char *)v65 + 24);
            *v69 = v70;
            v69[1].m128i_i64[0] = v65[-1].m128i_i64[1];
          }
          while ( v66 != v65 );
LABEL_116:
          v66 = *(__m128i **)v10;
        }
        if ( v66 )
        {
          v92 = v89;
          v90 = &v35->m128i_i8[v88];
          v89 = v88;
          v88 = (__int64)a5;
          sub_186B220(v66);
          v63 = v92;
          v36 = (__int64)v90;
          a6 = v89;
          a5 = (_DWORD *)v88;
        }
        *(_QWORD *)v10 = v35;
        v10[2] = v63;
        v10[4] = 0;
      }
      else
      {
        v35 = *(const __m128i **)v10;
        a6 = 24 * v34;
        LODWORD(v83) = v34 - 1;
        v36 = *(_QWORD *)v10 + 24 * v34;
      }
      v37 = 24LL * (v17 & (unsigned int)v83);
      v38 = (const __m128i *)((char *)v35 + v37);
      if ( v37 != a6 )
      {
        v39 = (__m128i *)((char *)v35 + v37);
        v40 = nullptr;
        while ( 1 )
        {
          v41 = v39->m128i_i32[1];
          if ( v41 == 2 )
          {
            if ( v17 == v39->m128i_i32[0] && v17 == v39->m128i_i32[2] )
            {
              v39->m128i_i32[2] = v17;
              v39[1].m128i_i64[0] = (__int64)a5;
              v39->m128i_i32[1] = 2;
              goto LABEL_92;
            }
          }
          else
          {
            if ( !v41 )
            {
              if ( v40 )
                goto LABEL_90;
              v40 = v39;
              goto LABEL_91;
            }
            v40 = v39;
          }
          v39 = (__m128i *)((char *)v39 + 24);
          if ( v39 == (__m128i *)v36 )
            goto LABEL_67;
        }
      }
      v40 = nullptr;
      while ( 1 )
      {
LABEL_67:
        if ( v38 == v35 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v42 = v35->m128i_i32[1];
        if ( v42 != 2 )
          break;
        if ( v17 == v35->m128i_i32[0] && v17 == v35->m128i_i32[2] )
        {
          v35->m128i_i32[2] = v17;
          v35[1].m128i_i64[0] = (__int64)a5;
          v35->m128i_i32[1] = 2;
          goto LABEL_92;
        }
LABEL_66:
        v35 = (const __m128i *)((char *)v35 + 24);
      }
      if ( v42 )
        break;
      if ( v40 )
LABEL_90:
        --v10[4];
      else
        v40 = (__m128i *)v35;
LABEL_91:
      v40->m128i_i32[2] = v17;
      v40[1].m128i_i64[0] = (__int64)a5;
      v40->m128i_i32[1] = 2;
      v40->m128i_i32[0] = v17;
      ++v10[3];
LABEL_92:
      v52 = v17 >> 5;
      v53 = *a3;
      if ( *a3 && (unsigned int)v52 < *(_DWORD *)(v53 - 4) && (*(_DWORD *)(v53 + 4 * v52) & (1 << v17)) != 0 )
      {
        v83 = a5;
        v54 = sub_15D1F10(v15);
        a5 = v83;
        v55 = v54;
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        v56 = *(_DWORD *)(*(_QWORD *)v87 + 16LL);
        v57 = *(_DWORD *)(*(_QWORD *)v87 + 20LL);
        if ( v56 >= v57 )
        {
          v73 = 2 * v57;
          v58 = sub_186B270(8 * v73);
          a5 = v83;
          v56 = *(_DWORD *)(*(_QWORD *)v87 + 16LL);
          v74 = *(_QWORD **)(*(_QWORD *)v87 + 8LL);
          if ( v56 )
          {
            if ( v56 - 1 <= 2 || (_QWORD *)v58 == v74 + 1 )
            {
              for ( i = 0; i != v56; ++i )
                *(_QWORD *)(v58 + i * 8) = v74[i];
            }
            else
            {
              v75 = 0;
              do
              {
                *(__m128i *)(v58 + v75 * 8) = _mm_loadu_si128((const __m128i *)&v74[v75]);
                v75 += 2;
              }
              while ( 2LL * (v56 >> 1) != v75 );
              if ( (v56 & 1) != 0 )
                *(_QWORD *)(v58 + 8LL * (v56 & 0xFFFFFFFE)) = v74[v56 & 0xFFFFFFFE];
            }
          }
          if ( v74 != (_QWORD *)(*(_QWORD *)v87 + 24LL) && v74 )
          {
            sub_186B220(v74);
            a5 = v83;
            v56 = *(_DWORD *)(*(_QWORD *)v87 + 16LL);
          }
          *(_QWORD *)(*(_QWORD *)v87 + 8LL) = v58;
          *(_DWORD *)(*(_QWORD *)v87 + 20LL) = v73;
        }
        else
        {
          v58 = *(_QWORD *)(*(_QWORD *)v87 + 8LL);
        }
        *(_QWORD *)(v58 + 8LL * v56) = v55;
        *(_DWORD *)(*(_QWORD *)v87 + 16LL) = v56 + 1;
        if ( a5 )
          ++a5[2];
        v59 = *(_DWORD *)(a7 + 16);
        v60 = *(_DWORD *)(a7 + 20);
        if ( v59 >= v60 )
        {
          v83 = a5;
          v76 = 2 * v60;
          v61 = sub_186B270(8 * v76);
          a5 = v83;
          v59 = *(_DWORD *)(a7 + 16);
          v77 = *(_QWORD **)(a7 + 8);
          if ( v59 )
          {
            if ( v59 - 1 <= 2 || (_QWORD *)v61 == v77 + 1 )
            {
              for ( j = 0; j != v59; ++j )
                *(_QWORD *)(v61 + j * 8) = v77[j];
            }
            else
            {
              v78 = 0;
              do
              {
                *(__m128i *)(v61 + v78 * 8) = _mm_loadu_si128((const __m128i *)&v77[v78]);
                v78 += 2;
              }
              while ( 2LL * (v59 >> 1) != v78 );
              if ( (v59 & 1) != 0 )
                *(_QWORD *)(v61 + 8LL * (v59 & 0xFFFFFFFE)) = v77[v59 & 0xFFFFFFFE];
            }
          }
          if ( v77 != (_QWORD *)(a7 + 24) && v77 )
          {
            sub_186B220(v77);
            a5 = v83;
            v59 = *(_DWORD *)(a7 + 16);
          }
          *(_QWORD *)(a7 + 8) = v61;
          *(_DWORD *)(a7 + 20) = v76;
        }
        else
        {
          v61 = *(_QWORD *)(a7 + 8);
        }
        *(_QWORD *)(v61 + 8LL * v59) = a5;
        *(_DWORD *)(a7 + 16) = v59 + 1;
      }
LABEL_18:
      if ( a5 )
        ++a5[2];
      v25 = v95;
      if ( (unsigned int)v95 >= HIDWORD(v95) )
      {
        v83 = a5;
        v30 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v95)));
        v25 = v95;
        v13 = (int *)v30;
        a5 = v83;
        if ( (_DWORD)v95 )
        {
          if ( (unsigned int)(v95 - 1) <= 2 || (int *)v30 == v94 + 2 )
          {
            v71 = 0;
            do
            {
              *(_QWORD *)&v13[v71] = *(_QWORD *)&v94[v71];
              v71 += 2;
            }
            while ( 2LL * (unsigned int)v95 != v71 );
          }
          else
          {
            v31 = 0;
            do
            {
              *(__m128i *)&v13[v31] = _mm_loadu_si128((const __m128i *)&v94[v31]);
              v31 += 4;
            }
            while ( 4LL * ((unsigned int)v95 >> 1) != v31 );
            if ( (v95 & 1) != 0 )
              *(_QWORD *)&v13[2 * (v95 & 0xFFFFFFFE)] = *(_QWORD *)&v94[2 * (v95 & 0xFFFFFFFE)];
          }
        }
        if ( v94 && v94 != v96 )
        {
          sub_186B220(v94);
          v25 = v95;
          a5 = v83;
        }
        v94 = v13;
        HIDWORD(v95) *= 2;
      }
      else
      {
        v13 = v94;
      }
      v26 = v25;
      LODWORD(v9) = v25 + 1;
      *(_QWORD *)&v13[2 * v26] = a5;
LABEL_8:
      LODWORD(v95) = v9;
      v11 += 8;
      if ( v81 == v11 )
        goto LABEL_73;
    }
    v40 = (__m128i *)v35;
    goto LABEL_66;
  }
  v13 = v96;
LABEL_73:
  v43 = sub_15DC610(
          a1,
          *(_QWORD *)(a2 + 16),
          v9,
          (int)v13,
          (int)a5,
          a6,
          v81,
          (int)v96,
          (int)v83,
          (int)a3,
          (int)a4,
          a2,
          v87[0],
          v88,
          v89,
          v90);
  v44 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  v45 = *a8;
  if ( *a8 )
  {
    v46 = a8[1];
    v47 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v47 )
      sub_15D7BC0(v46, v45);
  }
  *a8 = v44;
  v48 = v94;
  v49 = &v94[2 * (unsigned int)v95];
  if ( v94 < v49 )
  {
    do
    {
      while ( 1 )
      {
        v50 = *(_QWORD *)v48;
        if ( *(_QWORD *)v48 )
        {
          v47 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v47 )
            break;
        }
        v48 += 2;
        if ( v48 >= v49 )
          goto LABEL_84;
      }
      sub_15D7BC0(a1, v50);
      v48 += 2;
    }
    while ( v48 < v49 );
LABEL_84:
    v48 = v94;
  }
  result = *(_QWORD *)v82;
  if ( v48 != *(int **)v82 )
  {
    if ( v48 )
      return sub_186B220(v48);
  }
  return result;
}

