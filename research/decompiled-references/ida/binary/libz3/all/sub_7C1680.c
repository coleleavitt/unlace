__int64 __fastcall sub_7C1680(__int64 a1, __int64 *a2, __int64 **a3)
{
  char **v3; // r14
  __int64 v4; // rdx
  char **exception; // r14
  __int64 v6; // rdx
  char **v7; // rbp
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int *v10; // r13
  _DWORD *v11; // rbx
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r15
  __int64 *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdx
  _DWORD *v21; // r14
  __int64 v22; // rdx
  _DWORD *v23; // r8
  unsigned int *v24; // rbp
  __int64 v25; // rax
  _DWORD *v26; // rdx
  unsigned int *v27; // r14
  unsigned int v28; // r15d
  unsigned int *v29; // rbp
  __int64 v30; // rax
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // edx
  size_t v40; // rsi
  unsigned int v41; // r14d
  unsigned int *v42; // rax
  char *v43; // rdx
  char *v44; // rdi
  unsigned int *v45; // r8
  unsigned int *v46; // rdx
  unsigned int v47; // esi
  _BYTE *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  unsigned int *v51; // rcx
  __int64 *v52; // rdx
  __int64 v53; // rax
  __int64 *v54; // r14
  __int64 v55; // rax
  __m128i v56; // xmm1
  _QWORD *v57; // rdx
  __int64 v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rdi
  unsigned int v61; // edx
  unsigned int *v62; // rdx
  __int64 *v63; // r14
  __int64 v64; // r11
  __int64 *v65; // r9
  unsigned __int64 v66; // rdi
  __int64 *v67; // rsi
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // r9
  __m128i v70; // xmm0
  unsigned __int64 v71; // r9
  __int64 *v72; // rsi
  __int64 v73; // rdi
  unsigned int *v74; // r15
  unsigned int *v75; // rbp
  void *v76; // rdi
  __int64 *v77; // rcx
  _QWORD *v78; // rax
  _DWORD *v79; // rdi
  __int64 v80; // rax
  unsigned int v82; // [rsp+8h] [rbp-A0h]
  char v83; // [rsp+8h] [rbp-A0h]
  unsigned int v84; // [rsp+8h] [rbp-A0h]
  __int64 *v85; // [rsp+8h] [rbp-A0h]
  unsigned int *v86; // [rsp+8h] [rbp-A0h]
  _DWORD *v88; // [rsp+10h] [rbp-98h]
  unsigned __int64 v89; // [rsp+10h] [rbp-98h]
  unsigned int v91; // [rsp+20h] [rbp-88h]
  __int64 *v92; // [rsp+28h] [rbp-80h]
  _QWORD v93[2]; // [rsp+38h] [rbp-70h] BYREF
  unsigned int *v94; // [rsp+48h] [rbp-60h] BYREF
  __int64 v95[11]; // [rsp+50h] [rbp-58h] BYREF

  result = *a2;
  if ( *a2 )
  {
    v10 = nullptr;
    v11 = nullptr;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= *(_DWORD *)(result - 4) )
      {
LABEL_11:
        result = a1;
        v17 = *(__int64 **)(a1 + 744);
        if ( v17 )
        {
          result = *((unsigned int *)v17 - 1);
          v18 = &v17[result];
          if ( v17 != v18 )
            goto LABEL_13;
        }
LABEL_77:
        if ( v10 )
          result = sub_186B220(v10 - 2);
        if ( v11 )
          return sub_186B220(v11 - 2);
        return result;
      }
      v13 = *(_DWORD *)(result + 4LL * v12);
      v14 = v13 + 1;
      if ( v11 )
      {
        v82 = *(v11 - 1);
        if ( v82 < v14 )
        {
          v38 = *(v11 - 2);
          if ( v38 < v14 )
            goto LABEL_50;
          *(v11 - 1) = v14;
          v43 = (char *)v11 + v14;
          v44 = (char *)v11 + v82;
          goto LABEL_54;
        }
      }
      else if ( v13 != -1 )
      {
        v37 = sub_186B270(0xAu);
        v38 = 2;
        *(_QWORD *)v37 = 2;
        v11 = (_DWORD *)(v37 + 8);
        if ( v14 <= 2 )
        {
          *(_DWORD *)(v37 + 4) = v14;
          memset((void *)(v37 + 8), 0, v14);
          goto LABEL_6;
        }
        v82 = 0;
        do
        {
LABEL_50:
          v39 = (3 * v38 + 1) >> 1;
          v40 = v39 + 8;
          v41 = v39;
          if ( v38 + 8 >= (unsigned int)v40 || v38 >= v39 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v95, "Overflow encountered when expanding vector", v6);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v95);
            sub_233E40((__int64)v95);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (unsigned int *)sub_186B300(v11 - 2, v40);
          *v42 = v41;
          v11 = v42 + 2;
          v38 = v41;
        }
        while ( v41 < v14 );
        v42[1] = v14;
        v43 = (char *)v11 + v14;
        v44 = (char *)v11 + v82;
        if ( v14 == v82 )
          goto LABEL_6;
LABEL_54:
        memset(v44, 0, v43 - v44);
      }
LABEL_6:
      v15 = (char *)v11 + v13;
      if ( !*v15 )
      {
        *v15 = 1;
        if ( !v10 || (v16 = *(v10 - 1), (_DWORD)v16 == *(v10 - 2)) )
        {
          v93[1] = v11;
          v94 = v10;
          sub_2FD3F0(&v94);
          v10 = v94;
          v16 = *(v94 - 1);
        }
        v10[v16] = v13;
        ++*(v10 - 1);
      }
      ++v12;
      result = *a2;
      if ( !*a2 )
        goto LABEL_11;
    }
  }
  v17 = *(__int64 **)(a1 + 744);
  if ( !v17 )
    return result;
  result = *((unsigned int *)v17 - 1);
  v10 = nullptr;
  v11 = nullptr;
  v18 = &v17[result];
  if ( v17 == v18 )
    return result;
LABEL_13:
  v83 = 0;
  do
  {
    while ( 1 )
    {
      v19 = *v17;
      result = *(unsigned int *)(*v17 + 8);
      if ( !(_DWORD)result && *(_DWORD *)(v19 + 16) == -2 )
      {
        result = sub_828140(v19);
        v20 = (unsigned int)(*(_DWORD *)(result + 60) + 1);
        if ( (_DWORD)v20 == *(_DWORD *)(result + 32) )
        {
          v21 = (_DWORD *)(result + 64);
          v22 = 4 * v20;
          v23 = (_DWORD *)(result + 64 + v22);
          if ( v22 )
          {
            if ( v11 )
            {
              v24 = nullptr;
              do
              {
                result = *v21 ^ 1u;
                if ( (unsigned int)result < *(v11 - 1) && *((_BYTE *)v11 + (unsigned int)result) )
                {
                  v88 = v23;
                  LODWORD(v95[0]) = *v21 ^ 1;
                  v93[0] = v24;
                  result = sub_7B5E20(v93, (unsigned int *)v95);
                  v24 = (unsigned int *)v93[0];
                  v23 = v88;
                }
                ++v21;
              }
              while ( v23 != v21 );
              if ( v24 )
                break;
            }
          }
        }
      }
LABEL_14:
      if ( v18 == ++v17 )
        goto LABEL_28;
    }
    v25 = *(v24 - 1);
    if ( (unsigned int)v25 > 1 )
    {
      v45 = &v24[v25];
      v46 = v24;
      do
      {
        while ( 1 )
        {
          v47 = *v46;
          if ( *v46 >= *(v11 - 1) )
            break;
          v48 = (char *)v11 + v47;
          if ( !*v48 )
            break;
          *v48 = 0;
          if ( v10 )
          {
            LODWORD(v49) = *(v10 - 1);
            v50 = (unsigned int)(v49 - 1);
            while ( (_DWORD)v49 )
            {
              v49 = (unsigned int)(v49 - 1);
              v51 = &v10[v49];
              if ( v47 == *v51 )
                goto LABEL_64;
            }
            v51 = v10;
          }
          else
          {
            v50 = 0xFFFFFFFFLL;
            v51 = nullptr;
          }
LABEL_64:
          ++v46;
          *v51 = v10[v50];
          --*(v10 - 1);
          if ( v46 == v45 )
          {
            v52 = *a3;
            if ( *a3 )
              goto LABEL_66;
LABEL_103:
            v78 = (_QWORD *)sub_186B270(0x18u);
            *v78 = 2;
            v54 = v78 + 1;
            *a3 = v78 + 1;
            goto LABEL_67;
          }
        }
        ++v46;
      }
      while ( v45 != v46 );
      v52 = *a3;
      if ( !*a3 )
        goto LABEL_103;
LABEL_66:
      v53 = *((unsigned int *)v52 - 1);
      v54 = &v52[v53];
      if ( (_DWORD)v53 == *((_DWORD *)v52 - 2) )
      {
        v91 = (unsigned int)(3 * v53 + 1) >> 1;
        v61 = 8 * v91 + 8;
        if ( 8 * (int)v53 + 8 >= v61 || (unsigned int)v53 >= (unsigned int)(3 * v53 + 1) >> 1 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v95, "Overflow encountered when expanding vector", v4);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v95);
          sub_233E40((__int64)v95);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = (unsigned int *)sub_186B270(v61);
        v63 = *a3;
        v89 = (unsigned __int64)(v62 + 2);
        if ( *a3 )
        {
          v64 = *((unsigned int *)v63 - 1);
          v62[1] = v64;
          v65 = &v63[v64];
          if ( v63 != v65 )
          {
            v66 = 8 * v64 - 8;
            v67 = v63;
            if ( v66 <= 8 || v63 < (__int64 *)v62 + 3 && v89 < (unsigned __int64)(v63 + 2) )
            {
              v79 = v62 + 2;
              do
              {
                v80 = *v67;
                *v67++ = 0;
                v79 += 2;
                *((_QWORD *)v79 - 1) = v80;
              }
              while ( v67 != v65 );
            }
            else
            {
              v68 = 0;
              v69 = (v66 >> 3) + 1;
              do
              {
                v70 = _mm_loadu_si128((const __m128i *)&v63[v68 / 2]);
                *(_OWORD *)&v63[v68 / 2] = 0;
                *(__m128i *)&v62[v68 + 2] = v70;
                v68 += 4LL;
              }
              while ( v68 != 4 * (v69 >> 1) );
              if ( (v69 & 1) != 0 )
              {
                v71 = v69 & 0xFFFFFFFFFFFFFFFELL;
                v72 = &v63[v71];
                v73 = *v72;
                *v72 = 0;
                *(_QWORD *)(v89 + 8 * v71) = v73;
              }
            }
          }
          v85 = &v63[v64];
          if ( (_DWORD)v64 )
          {
            v92 = v17;
            v74 = v24;
            v75 = v62;
            do
            {
              while ( *v63 )
              {
                v76 = (void *)(*v63++ - 8);
                sub_186B220(v76);
                if ( v85 == v63 )
                  goto LABEL_97;
              }
              ++v63;
            }
            while ( v85 != v63 );
LABEL_97:
            v62 = v75;
            v24 = v74;
            v17 = v92;
            v63 = *a3;
          }
          v86 = v62;
          sub_186B220(v63 - 1);
          v62 = v86;
          v77 = (__int64 *)v89;
          v54 = (__int64 *)(v89 + 8LL * v86[1]);
        }
        else
        {
          v62[1] = 0;
          v54 = (__int64 *)(v62 + 2);
          v77 = (__int64 *)(v62 + 2);
        }
        *a3 = v77;
        *v62 = v91;
      }
LABEL_67:
      v55 = *(v24 - 2);
      v56 = _mm_cvtsi32_si128(*(v24 - 1));
      *v54 = 0;
      v84 = v55;
      v57 = (_QWORD *)sub_186B270(4 * v55 + 8);
      *v57 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v84), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v56))).m128i_u64[0];
      v58 = *(v24 - 1);
      *v54 = (__int64)(v57 + 1);
      v59 = 0;
      v60 = 4 * v58;
      if ( v60 )
      {
        do
        {
          *(_DWORD *)((char *)v57 + v59 + 8) = v24[v59 / 4];
          v59 += 4LL;
        }
        while ( v59 != v60 );
      }
      ++*((_DWORD *)*a3 - 1);
      result = sub_186B220(v24 - 2);
      v83 = 1;
      goto LABEL_14;
    }
    ++v17;
    result = sub_186B220(v24 - 2);
  }
  while ( v18 != v17 );
LABEL_28:
  if ( !v83 )
    goto LABEL_77;
  result = (__int64)a2;
  v26 = (_DWORD *)*a2;
  if ( *a2 )
    *(v26 - 1) = 0;
  if ( v10 )
  {
    v27 = &v10[*(v10 - 1)];
    if ( v27 != v10 )
    {
      v28 = *v10;
      v29 = v10;
      if ( v26 )
        goto LABEL_42;
      v30 = sub_186B270(0x10u);
      *(_QWORD *)v30 = 2;
      v26 = (_DWORD *)(v30 + 8);
      v29 = v10 + 1;
      *a2 = v30 + 8;
      *(_DWORD *)(v30 + 8) = v28;
      ++*(_DWORD *)(v30 + 4);
      if ( v27 != v10 + 1 )
      {
        do
        {
          v28 = *v29;
LABEL_42:
          v32 = (unsigned int)*(v26 - 1);
          if ( (_DWORD)v32 == *(v26 - 2) )
          {
            v33 = (unsigned int)(3 * v32 + 1) >> 1;
            v34 = 4 * v33 + 8;
            if ( 4 * (int)v32 + 8 >= (unsigned int)v34 || (unsigned int)v32 >= v33 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v95, "Overflow encountered when expanding vector", v8);
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v95);
              sub_233E40((__int64)v95);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v35 = (unsigned int *)sub_186B300(v26 - 2, v34);
            v26 = v35 + 2;
            *v35 = v33;
            v36 = v35[1];
            *a2 = (__int64)v26;
            v31 = &v26[v36];
          }
          else
          {
            v31 = &v26[v32];
          }
          ++v29;
          *v31 = v28;
          ++*(v26 - 1);
        }
        while ( v27 != v29 );
      }
    }
    result = sub_186B220(v10 - 2);
  }
  if ( v11 )
    return sub_186B220(v11 - 2);
  return result;
}

