void __fastcall sub_B18A00(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int **a7)
{
  unsigned int v8; // r12d
  __int64 v9; // rbp
  unsigned int **v10; // r13
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int *v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rcx
  unsigned int *v16; // rax
  int v17; // edx
  unsigned int *v18; // rcx
  __int64 v19; // r12
  int v20; // esi
  unsigned int *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rbx
  int v24; // edx
  unsigned int *v25; // rsi
  unsigned int v26; // eax
  int v27; // eax
  unsigned int **v28; // r12
  unsigned int v29; // r12d
  unsigned int v30; // r15d
  int *v31; // r13
  unsigned int *v32; // r10
  int v33; // edi
  int v34; // eax
  int v35; // esi
  int v36; // edi
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int *v39; // rbx
  unsigned int v40; // edx
  int v41; // eax
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int *v49; // rsi
  unsigned int *v50; // rdx
  int v51; // edi
  __int64 v52; // rax
  unsigned int v53; // esi
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int *v56; // rax
  unsigned int v57; // r8d
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned int v60; // edx
  unsigned int v61; // eax
  _QWORD *v62; // rax
  char **exception; // r12
  char **v64; // r12
  unsigned int v67; // [rsp+10h] [rbp-B8h]
  unsigned int v68; // [rsp+10h] [rbp-B8h]
  unsigned int v69; // [rsp+10h] [rbp-B8h]
  int ptr; // [rsp+20h] [rbp-A8h]
  __int64 v73; // [rsp+28h] [rbp-A0h]
  unsigned int *v74; // [rsp+30h] [rbp-98h]
  unsigned int v75; // [rsp+38h] [rbp-90h]
  unsigned int v76; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v77; // [rsp+3Ch] [rbp-8Ch]
  int v78; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned int *v79; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v80; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v81; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v82; // [rsp+78h] [rbp-50h]
  unsigned int **v83; // [rsp+D0h] [rbp+8h]

  v8 = a5;
  v9 = a1;
  v10 = a7;
  if ( a2 )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        ++*(_DWORD *)(a1 + 20);
        v12 = sub_B036D0(*(__int64 **)(a1 + 8));
        v13 = *a7;
        v14 = v12;
        if ( !*a7 )
          break;
        v15 = *(v13 - 1);
        if ( (_DWORD)v15 == *(v13 - 2) )
          break;
        ++v11;
        v13[v15] = v12;
        ++*(v13 - 1);
        if ( a2 == v11 )
          goto LABEL_7;
      }
      ++v11;
      sub_692C60(a7);
      v13 = *a7;
      v13[*(*a7 - 1)] = v14;
      ++*(v13 - 1);
    }
    while ( a2 != v11 );
LABEL_7:
    v9 = a1;
    v16 = v13;
    v8 = a5;
    v17 = *(_DWORD *)(a1 + 16);
    if ( v17 == 1 )
      goto LABEL_40;
    if ( !a3 )
    {
      if ( !a5 )
      {
        if ( !v17 )
          return;
        goto LABEL_40;
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 16) == 1 )
      return;
    if ( !a3 )
    {
      if ( !a5 )
        return;
      v16 = *a7;
      goto LABEL_17;
    }
    v16 = *a7;
  }
  v67 = v8;
  v18 = v16;
  v19 = 0;
  while ( 1 )
  {
    v20 = *(_DWORD *)(a4 + v19 * 4);
    v21 = &v18[v19];
    v22 = dword_1C7ED20;
    if ( dword_1C7ED24 != v20 )
    {
      v22 = dword_1C7ED24;
      if ( v20 != dword_1C7ED20 )
        v22 = v20 ^ 1;
    }
    ++v19;
    v81 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(*v21)).m128i_u64[0];
    sub_B0DE40(v9, &v81);
    if ( a3 == v19 )
      break;
    v18 = *a7;
  }
  v8 = v67;
  if ( v67 )
  {
    v16 = *a7;
LABEL_17:
    v23 = 0;
    while ( 1 )
    {
      v24 = *(_DWORD *)(a6 + 4 * v23);
      v25 = &v16[v23];
      v26 = dword_1C7ED20;
      if ( v24 != dword_1C7ED24 )
      {
        v26 = dword_1C7ED24;
        if ( v24 != dword_1C7ED20 )
          v26 = v24 ^ 1;
      }
      ++v23;
      v81 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(*v25)).m128i_u64[0];
      sub_B0DE40(v9, &v81);
      if ( (unsigned int)v23 >= v8 )
        break;
      v16 = *a7;
    }
    v27 = 1;
    if ( a3 )
    {
      v68 = v8;
      v28 = a7;
      do
      {
        ptr = v27;
        v83 = v28;
        v29 = 1;
        v30 = v27;
        v31 = (int *)(a4 + 4LL * (unsigned int)(v27 - 1));
        do
        {
          v38 = v30++;
          if ( a2 < v30 )
            break;
          v32 = &(*v83)[v38];
          v33 = *(_DWORD *)(a6 + 4LL * (v29 - 1));
          v34 = dword_1C7ED20;
          v35 = dword_1C7ED20;
          if ( dword_1C7ED24 != v33 )
          {
            v35 = v33 ^ 1;
            if ( v33 == dword_1C7ED20 )
              v35 = dword_1C7ED24;
          }
          v36 = *v31;
          if ( dword_1C7ED24 != *v31 )
          {
            v34 = dword_1C7ED24;
            if ( v36 != dword_1C7ED20 )
              v34 = v36 ^ 1;
          }
          v37 = *v32;
          ++v29;
          v81 = __PAIR64__(v35, v34);
          v82 = v37;
          sub_B0DC80(v9, &v81);
        }
        while ( v68 >= v29 );
        v28 = v83;
        v27 = ptr + 1;
      }
      while ( a3 >= ptr + 1 );
      v8 = v68;
      v10 = v83;
    }
  }
  if ( *(_DWORD *)(v9 + 16) && a2 )
  {
    v16 = *v10;
LABEL_40:
    v75 = 1;
    v39 = nullptr;
    v73 = 0;
    while ( 1 )
    {
      if ( v39 )
        *(v39 - 1) = 0;
      v40 = v16[v73];
      v41 = dword_1C7ED20;
      if ( v40 != dword_1C7ED24 )
      {
        v41 = dword_1C7ED24;
        if ( v40 != dword_1C7ED20 )
          v41 = v40 ^ 1;
      }
      v78 = v41;
      v79 = v39;
      sub_B0E290(&v79, (unsigned int *)&v78);
      v39 = v79;
      if ( (unsigned int)v73 >= a3 )
        break;
      if ( (unsigned int)v73 >= v8 )
        goto LABEL_48;
LABEL_55:
      v45 = v75;
      v46 = 0;
      if ( a3 <= v75 )
        v45 = a3;
      v69 = v45;
      do
      {
        while ( 1 )
        {
          v47 = (unsigned int)(v73 - v46);
          if ( (unsigned int)v47 < v8 )
            break;
          if ( (unsigned int)++v46 >= v69 )
            goto LABEL_64;
        }
        if ( v39 )
        {
          v48 = *(v39 - 1);
          v49 = &v39[v48];
          if ( (_DWORD)v48 == *(v39 - 2) )
          {
            v54 = (unsigned int)(3 * v48 + 1) >> 1;
            v55 = 4 * v54 + 8;
            if ( 4 * (int)v48 + 8 >= (unsigned int)v55 || (unsigned int)v48 >= v54 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_B035D0((__int64 *)&v81, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v81);
              sub_233E40((__int64)&v81);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v76 = (unsigned int)(3 * v48 + 1) >> 1;
            v56 = (unsigned int *)sub_186B300(v39 - 2, v55);
            v39 = v56 + 2;
            v47 = (unsigned int)(v73 - v46);
            *v56 = v76;
            v49 = &v56[v56[1] + 2];
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x10u);
          v47 = (unsigned int)(v73 - v46);
          *v62 = 2;
          v39 = (unsigned int *)(v62 + 1);
          v49 = (unsigned int *)(v62 + 1);
        }
        v50 = (unsigned int *)(a6 + 4 * v47);
        *v49 = *(_DWORD *)(a4 + 4 * v46);
        v51 = *(v39 - 1);
        v52 = (unsigned int)(v51 + 1);
        *(v39 - 1) = v52;
        if ( (_DWORD)v52 == *(v39 - 2) )
        {
          v57 = (unsigned int)(3 * v52 + 1) >> 1;
          v58 = 4 * v57 + 8;
          if ( 4 * v51 + 12 >= (unsigned int)v58 || (unsigned int)v52 >= v57 )
          {
            v64 = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0((__int64 *)&v81, "Overflow encountered when expanding vector");
            *v64 = (char *)off_1C63128;
            sub_2333C0(v64 + 1, &v81);
            sub_233E40((__int64)&v81);
            __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v77 = (unsigned int)(3 * v52 + 1) >> 1;
          v74 = v50;
          v59 = (unsigned int *)sub_186B300(v39 - 2, v58);
          v39 = v59 + 2;
          v50 = v74;
          *v59 = v77;
          v52 = v59[1];
        }
        v39[v52] = *v50;
        v53 = *(v39 - 1) + 1;
        *(v39 - 1) = v53;
        sub_B17C90(v9, v53, v39);
        ++v46;
        *(v39 - 1) -= 2;
      }
      while ( (unsigned int)v46 < v69 );
LABEL_64:
      ++v73;
      if ( v75 >= a2 )
      {
        if ( v39 )
          sub_186B220(v39 - 2);
        return;
      }
      ++v75;
      v16 = *v10;
    }
    v60 = (*v10)[v73];
    v61 = dword_1C7ED20;
    if ( v60 != dword_1C7ED24 )
    {
      v61 = dword_1C7ED24;
      if ( v60 != dword_1C7ED20 )
        v61 = v60 ^ 1;
    }
    v80 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(v61),
            _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4LL * ((unsigned int)v73 - a3)))).m128i_u64[0];
    sub_B0DE40(v9, &v80);
    if ( (unsigned int)v73 >= v8 )
    {
LABEL_48:
      v42 = (*v10)[v73];
      v43 = dword_1C7ED20;
      if ( v42 != dword_1C7ED24 )
      {
        v43 = dword_1C7ED24;
        if ( v42 != dword_1C7ED20 )
          v43 = v42 ^ 1;
      }
      v81 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(v43),
              _mm_cvtsi32_si128(*(_DWORD *)(a4 + 4LL * ((unsigned int)v73 - v8)))).m128i_u64[0];
      sub_B0DE40(v9, &v81);
    }
    v44 = v75;
    if ( a3 <= v75 )
      v44 = a3;
    if ( !v44 )
      goto LABEL_64;
    goto LABEL_55;
  }
}

