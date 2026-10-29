unsigned __int64 __fastcall sub_506680(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // r13d
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  void *v5; // rdi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  _DWORD *v9; // rsi
  size_t v10; // rdx
  char *v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  char *v14; // rbx
  _DWORD *v15; // rsi
  size_t v16; // rdx
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r12d
  size_t v21; // rdi
  unsigned int *v22; // r15
  __int64 *v23; // r14
  __int64 v24; // rbx
  int v25; // r8d
  __int64 *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __m128i v29; // xmm0
  __int64 *v30; // rbx
  __int64 v31; // rdi
  void *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // rbp
  __int64 v37; // rdx
  char *v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned __int64 result; // rax
  unsigned int *v45; // rax
  int v46; // ebp
  _QWORD *v47; // rcx
  __int64 v48; // rax
  unsigned int *v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  unsigned int *v52; // rax
  __int64 **v53; // r15
  __int64 v54; // rbx
  __int64 *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 *v58; // rcx
  unsigned int v59; // r15d
  unsigned int *v60; // rdx
  unsigned int v61; // ecx
  size_t v62; // rsi
  unsigned int *v63; // rdx
  _QWORD *v64; // rax
  __int64 *v65; // rdx
  _DWORD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // ecx
  size_t v70; // rsi
  unsigned int *v71; // rax
  _DWORD *v72; // rdx
  __int64 *v73; // rcx
  unsigned int v74; // edx
  size_t v75; // rsi
  unsigned int *v76; // rax
  unsigned int v77; // edx
  size_t v78; // rsi
  unsigned int *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 *v85; // r12
  __int64 *v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  char **v89; // rbp
  char **exception; // r12
  unsigned __int64 *v91; // [rsp+0h] [rbp-98h]
  unsigned int v92; // [rsp+0h] [rbp-98h]
  unsigned int v93; // [rsp+0h] [rbp-98h]
  unsigned int v94; // [rsp+0h] [rbp-98h]
  unsigned int v95; // [rsp+8h] [rbp-90h]
  char *dest; // [rsp+18h] [rbp-80h]
  __int64 v98; // [rsp+20h] [rbp-78h]
  unsigned int v99; // [rsp+2Ch] [rbp-6Ch]
  __int64 v100; // [rsp+40h] [rbp-58h] BYREF

  v1 = **(_QWORD ***)(a1 + 48);
  v91 = *(unsigned __int64 **)(a1 + 48);
  if ( v1 )
  {
    v2 = *((_DWORD *)v1 - 1);
    *(_BYTE *)(a1 + 56) = 1;
    if ( v2 )
    {
      v3 = &v1[2 * v2];
      do
      {
        while ( 1 )
        {
          v4 = v1[1];
          if ( v4 )
            sub_186B220((void *)(v4 - 8));
          if ( !*v1 )
            break;
          v5 = (void *)(*v1 - 8LL);
          v1 += 2;
          sub_186B220(v5);
          if ( v3 == v1 )
            goto LABEL_8;
        }
        v1 += 2;
      }
      while ( v1 != v3 );
LABEL_8:
      v1 = (_QWORD *)*v91;
      v91 = *(unsigned __int64 **)(a1 + 48);
    }
    *((_DWORD *)v1 - 1) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 56) = 1;
    v2 = 0;
  }
  v6 = *(_QWORD *)(a1 + 32);
  v98 = v6;
  if ( v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
    v8 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    v9 = *(_DWORD **)(a1 + 32);
    v98 = v8 + 8;
    *(_QWORD *)v8 = v7.m128i_i64[0];
    if ( v9 )
    {
      v10 = 4LL * (unsigned int)*(v9 - 1);
      if ( v10 <= 4 )
      {
        if ( v10 == 4 )
          *(_DWORD *)(v8 + 8) = *v9;
      }
      else
      {
        memmove((void *)(v8 + 8), v9, v10);
      }
    }
  }
  v11 = *(char **)(a1 + 40);
  dest = v11;
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    v13 = *((unsigned int *)v11 - 2);
    v95 = v13;
    v14 = (char *)sub_186B270(4 * v13 + 8);
    *(_QWORD *)v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v95), _mm_cvtsi32_si128(v12)).m128i_u64[0];
    dest = v14 + 8;
    v15 = *(_DWORD **)(a1 + 40);
    if ( !v15 )
    {
      v17 = *v91;
      if ( *v91 )
        goto LABEL_19;
      v99 = 0;
      if ( v2 )
        goto LABEL_21;
      goto LABEL_98;
    }
    v16 = 4LL * (unsigned int)*(v15 - 1);
    if ( v16 <= 4 )
    {
      if ( v16 == 4 )
        *((_DWORD *)v14 + 2) = *v15;
    }
    else
    {
      memmove(dest, v15, v16);
    }
    v17 = *v91;
    if ( *v91 )
    {
LABEL_19:
      v99 = *(_DWORD *)(v17 - 4);
      if ( v99 >= v2 )
      {
        v83 = 16LL * v2;
        v84 = 16LL * v99;
        v85 = (__int64 *)(v17 + v83);
        v86 = (__int64 *)(v17 + v84);
        if ( v83 != v84 )
        {
          do
          {
            while ( 1 )
            {
              v87 = v85[1];
              if ( v87 )
                sub_186B220((void *)(v87 - 8));
              v88 = *v85;
              if ( !*v85 )
                break;
              v85 += 2;
              sub_186B220((void *)(v88 - 8));
              if ( v86 == v85 )
                goto LABEL_94;
            }
            v85 += 2;
          }
          while ( v86 != v85 );
LABEL_94:
          v17 = *v91;
        }
        *(_DWORD *)(v17 - 4) = v2;
LABEL_96:
        if ( !dest )
          goto LABEL_99;
        v14 = dest - 8;
        goto LABEL_98;
      }
      if ( v17 )
      {
LABEL_22:
        while ( 1 )
        {
          v19 = *(_DWORD *)(v17 - 8);
          if ( v19 >= v2 )
            break;
          while ( 1 )
          {
            v20 = (3 * v19 + 1) >> 1;
            v21 = 16 * v20 + 8;
            if ( 16 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v100, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v100);
              sub_233E40((__int64)&v100);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v22 = (unsigned int *)sub_186B270(v21);
            v17 = (unsigned __int64)(v22 + 2);
            v23 = (__int64 *)*v91;
            if ( !*v91 )
              break;
            v24 = *((unsigned int *)v23 - 1);
            v22[1] = v24;
            v25 = v24;
            v26 = &v23[2 * v24];
            if ( v26 != v23 )
            {
              if ( v17 < (unsigned __int64)(v23 + 2) && v23 < (__int64 *)v22 + 3 )
              {
                v65 = v23;
                v66 = v22 + 2;
                do
                {
                  v67 = *v65;
                  *v65 = 0;
                  v65 += 2;
                  v66 += 4;
                  *((_QWORD *)v66 - 2) = v67;
                  v68 = *(v65 - 1);
                  *(v65 - 1) = 0;
                  *((_QWORD *)v66 - 1) = v68;
                }
                while ( v26 != v65 );
              }
              else
              {
                v27 = 0;
                v28 = 0;
                do
                {
                  v29 = _mm_loadu_si128((const __m128i *)&v23[v27 / 2]);
                  ++v28;
                  *(_OWORD *)&v23[v27 / 2] = 0;
                  *(__m128i *)&v22[v27 + 2] = v29;
                  v27 += 4LL;
                }
                while ( v28 < ((unsigned __int64)(16 * v24 - 16) >> 4) + 1 );
              }
            }
            v30 = &v23[2 * v24];
            if ( v25 )
            {
              do
              {
                while ( 1 )
                {
                  v31 = v23[1];
                  if ( v31 )
                    sub_186B220((void *)(v31 - 8));
                  if ( !*v23 )
                    break;
                  v32 = (void *)(*v23 - 8);
                  v23 += 2;
                  sub_186B220(v32);
                  if ( v30 == v23 )
                    goto LABEL_36;
                }
                v23 += 2;
              }
              while ( v23 != v30 );
LABEL_36:
              v23 = (__int64 *)*v91;
            }
            sub_186B220(v23 - 1);
            *v91 = v17;
            *v22 = v20;
            v19 = *v22;
            if ( *v22 >= v2 )
              goto LABEL_38;
          }
          v22[1] = 0;
          *v91 = v17;
          *v22 = v20;
        }
LABEL_38:
        *(_DWORD *)(v17 - 4) = v2;
        v33 = 16LL * v2;
        v34 = 16LL * v99;
        v35 = (__int64 *)(v17 + v34);
        v36 = (__int64 *)(v33 + v17);
        if ( v34 != v33 )
        {
          v37 = v98;
          v38 = dest;
          do
          {
            *v35 = v37;
            v35 += 2;
            v37 = 0;
            *(v35 - 1) = (__int64)v38;
            v38 = nullptr;
          }
          while ( v36 != v35 );
          goto LABEL_41;
        }
        goto LABEL_96;
      }
LABEL_21:
      v18 = (_QWORD *)sub_186B270(0x28u);
      *v18 = 2;
      v17 = (unsigned __int64)(v18 + 1);
      *v91 = (unsigned __int64)(v18 + 1);
      goto LABEL_22;
    }
    if ( !v2 )
    {
LABEL_98:
      sub_186B220(v14);
      goto LABEL_99;
    }
LABEL_103:
    v99 = 0;
    goto LABEL_21;
  }
  v17 = *v91;
  if ( *v91 )
    goto LABEL_19;
  if ( v2 )
    goto LABEL_103;
LABEL_99:
  if ( v98 )
    sub_186B220((void *)(v98 - 8));
LABEL_41:
  v39 = *(_QWORD **)(a1 + 120);
  if ( v39 )
  {
    v40 = v39[4];
    if ( v40 )
      sub_186B220((void *)(v40 - 8));
    v41 = v39[3];
    if ( v41 )
      sub_186B220((void *)(v41 - 8));
    v42 = v39[2];
    if ( v42 )
      sub_186B220((void *)(v42 - 8));
    sub_186B220(v39);
  }
  v43 = sub_186B270(0x38u);
  *(_QWORD *)(v43 + 32) = 0;
  result = (unsigned __int64)off_1C4F498;
  *(_QWORD *)(v43 + 48) = v43;
  *(_QWORD *)(v43 + 40) = off_1C4F498;
  *(__m128i *)v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 64), (__m128i)(unsigned __int64)(a1 + 64));
  *(_QWORD *)(a1 + 120) = v43;
  *(_OWORD *)(v43 + 16) = 0;
  if ( v2 )
  {
    v45 = nullptr;
    v46 = 0;
    while ( v45 )
    {
      v59 = *(v45 - 1);
      v60 = &v45[v59];
      if ( v59 != *(v45 - 2) )
        goto LABEL_51;
      v61 = (3 * v59 + 1) >> 1;
      v62 = 4 * v61 + 8;
      if ( 4 * v59 + 8 >= (unsigned int)v62 || v59 >= v61 )
      {
LABEL_116:
        v89 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v100, "Overflow encountered when expanding vector");
        *v89 = (char *)off_1C63128;
        sub_2333C0(v89 + 1, &v100);
        sub_233E40((__int64)&v100);
        __cxa_throw(v89, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v63 = (unsigned int *)sub_186B300(v45 - 2, v62);
      *(_QWORD *)(v43 + 16) = v63 + 2;
      *v63 = (3 * v59 + 1) >> 1;
      v47 = *(_QWORD **)(v43 + 24);
      v63[v63[1]++ + 2] = v59;
      if ( !v47 )
      {
LABEL_67:
        v64 = (_QWORD *)sub_186B270(0x10u);
        v47 = v64 + 1;
        *v64 = 2;
        *(_QWORD *)(v43 + 24) = v64 + 1;
        v49 = (unsigned int *)(v64 + 1);
        goto LABEL_54;
      }
LABEL_52:
      v48 = *((unsigned int *)v47 - 1);
      if ( (_DWORD)v48 == *((_DWORD *)v47 - 2) )
      {
        v77 = (unsigned int)(3 * v48 + 1) >> 1;
        v78 = 4 * v77 + 8;
        if ( 4 * (int)v48 + 8 >= (unsigned int)v78 || (unsigned int)v48 >= v77 )
          goto LABEL_116;
        v94 = (unsigned int)(3 * v48 + 1) >> 1;
        v79 = (unsigned int *)sub_186B300(v47 - 1, v78);
        v47 = v79 + 2;
        *(_QWORD *)(v43 + 24) = v79 + 2;
        *v79 = v94;
        v49 = &v79[v79[1] + 2];
      }
      else
      {
        v49 = (unsigned int *)v47 + v48;
      }
LABEL_54:
      *v49 = 1;
      ++*((_DWORD *)v47 - 1);
      v50 = *(_QWORD **)(v43 + 32);
      if ( v50 )
      {
        v51 = *((unsigned int *)v50 - 1);
        if ( (_DWORD)v51 == *((_DWORD *)v50 - 2) )
        {
          v74 = (unsigned int)(3 * v51 + 1) >> 1;
          v75 = 4 * v74 + 8;
          if ( 4 * (int)v51 + 8 >= (unsigned int)v75 || (unsigned int)v51 >= v74 )
            goto LABEL_116;
          v93 = (unsigned int)(3 * v51 + 1) >> 1;
          v76 = (unsigned int *)sub_186B300(v50 - 1, v75);
          v50 = v76 + 2;
          *(_QWORD *)(v43 + 32) = v76 + 2;
          *v76 = v93;
          v52 = &v76[v76[1] + 2];
        }
        else
        {
          v52 = (unsigned int *)v50 + v51;
        }
      }
      else
      {
        v82 = (_QWORD *)sub_186B270(0x10u);
        v50 = v82 + 1;
        *v82 = 2;
        *(_QWORD *)(v43 + 32) = v82 + 1;
        v52 = (unsigned int *)(v82 + 1);
      }
      *v52 = v59;
      v53 = *(__int64 ***)(v43 + 8);
      v54 = v43 + 40;
      ++*((_DWORD *)v50 - 1);
      v55 = *v53;
      if ( !*v53 )
      {
        v81 = (_QWORD *)sub_186B270(0x18u);
        v55 = v81 + 1;
        *v81 = 2;
        result = 1;
        *v53 = v55;
        v58 = v55;
LABEL_60:
        ++v46;
        *v58 = v54;
        *((_DWORD *)v55 - 1) = result;
        if ( v46 == v2 )
          return result;
        goto LABEL_61;
      }
      v56 = *((_DWORD *)v55 - 1);
      if ( v56 != *((_DWORD *)v55 - 2) )
      {
        v57 = v56;
        result = v56 + 1;
        v58 = &v55[v57];
        goto LABEL_60;
      }
      v69 = (3 * v56 + 1) >> 1;
      v70 = 8 * v69 + 8;
      if ( 8 * v56 + 8 >= (unsigned int)v70 || v56 >= v69 )
        goto LABEL_116;
      v92 = (3 * v56 + 1) >> 1;
      ++v46;
      v71 = (unsigned int *)sub_186B300(v55 - 1, v70);
      v72 = v71 + 2;
      *v53 = (__int64 *)(v71 + 2);
      *v71 = v92;
      LODWORD(v71) = v71[1];
      v73 = (__int64 *)&v72[2 * (unsigned int)v71];
      result = (unsigned int)((_DWORD)v71 + 1);
      *v73 = v54;
      *(v72 - 1) = result;
      if ( v46 == v2 )
        return result;
LABEL_61:
      v43 = *(_QWORD *)(a1 + 120);
      v45 = *(unsigned int **)(v43 + 16);
    }
    v59 = 0;
    v80 = (_QWORD *)sub_186B270(0x10u);
    *v80 = 2;
    v45 = (unsigned int *)(v80 + 1);
    *(_QWORD *)(v43 + 16) = v45;
    v60 = v45;
LABEL_51:
    v47 = *(_QWORD **)(v43 + 24);
    *v60 = v59;
    ++*(v45 - 1);
    if ( !v47 )
      goto LABEL_67;
    goto LABEL_52;
  }
  return result;
}

