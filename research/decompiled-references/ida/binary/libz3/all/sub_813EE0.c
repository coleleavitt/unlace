__int64 __fastcall sub_813EE0(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  char **exception; // rbx
  __int64 v12; // rax
  _DWORD *v13; // rax
  int v14; // r9d
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int32 v18; // esi
  int v19; // ecx
  __int64 v20; // rsi
  int *v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned int *i; // r15
  _QWORD *v27; // rbp
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // ebx
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  __m128i *v37; // rax
  unsigned int v38; // r14d
  size_t v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  _DWORD *v42; // rcx
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  _QWORD *v47; // rax
  __int64 v48; // r8
  unsigned int v49; // edi
  unsigned int v50; // ecx
  void *v53; // [rsp+30h] [rbp-88h]
  _DWORD *v54; // [rsp+30h] [rbp-88h]
  _QWORD *v55; // [rsp+38h] [rbp-80h]
  void *v56[2]; // [rsp+40h] [rbp-78h] BYREF
  int v57[2]; // [rsp+50h] [rbp-68h]
  __m128i v58; // [rsp+60h] [rbp-58h] BYREF
  int v59; // [rsp+70h] [rbp-48h]

  ++*(_DWORD *)(a1 + 188);
  v53 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a6)).m128i_u64[0];
  v55 = *(_QWORD **)(a1 + 24);
  v12 = sub_7E4EC0(a1);
  v13 = (_DWORD *)sub_180C100(v12, 56);
  v57[0] = 3;
  v13[4] = a3;
  v15 = a2;
  *((_QWORD *)v13 + 1) = 0xFFFFFFFF00000000LL;
  v16 = *(_QWORD *)(a1 + 24);
  v17 = v55[411];
  v13[5] = a4;
  *((_QWORD *)v13 + 3) = v53;
  v18 = *(_DWORD *)(v16 + 3612);
  v19 = *(_DWORD *)(v17 + 4 * v15);
  *(_QWORD *)v13 = a1;
  LODWORD(v56[0]) = v18;
  v56[1] = v13;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      v58.m128i_i32[0] = v18;
      v58.m128i_i64[1] = (__int64)v13;
      v59 = 3;
      if ( !v18 && !*((_BYTE *)v55 + 3832) )
      {
        v37 = (__m128i *)(v55[412] + 24LL * (a2 >> 1));
        if ( v37->m128i_i32[0] )
        {
          *v37 = _mm_load_si128(&v58);
          v37[1].m128i_i32[0] = v59;
        }
      }
    }
    else if ( v19 == -1 )
    {
      LODWORD(v56[0]) = v18;
      v56[1] = v13;
      v57[0] = 3;
      sub_11B4C90((_DWORD)v55, a2 ^ 1, a2 ^ 1, -1, (_DWORD)v55, v14, (__int128)_mm_load_si128((const __m128i *)v56), 3);
      v16 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    LODWORD(v56[0]) = v18;
    v56[1] = v13;
    v57[0] = 3;
    sub_11C3360(
      (_DWORD)v55,
      a2,
      v16,
      0,
      (_DWORD)v55,
      v14,
      (__int128)_mm_load_si128((const __m128i *)v56),
      *(__int64 *)v57);
    v16 = *(_QWORD *)(a1 + 24);
  }
  v20 = *(_QWORD *)(v16 + 3288);
  if ( *(_DWORD *)(v20 + 4LL * a2) != -1 )
  {
    v21 = (int *)(*(_QWORD *)(a1 + 608) + 4LL * a4);
    if ( *v21 == a5 )
    {
      v48 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * a4);
      if ( v48 && (v49 = *(_DWORD *)(v48 - 4)) != 0 )
      {
        v50 = a5;
        while ( *(_DWORD *)(v20 + 4LL * *(unsigned int *)(v48 + 4LL * (v50 % v49))) )
        {
          if ( a5 + v49 == ++v50 )
            goto LABEL_52;
        }
        *v21 = v50 % v49;
      }
      else
      {
LABEL_52:
        sub_812250(a1, a4);
      }
    }
    v22 = a2;
    v23 = *(_QWORD *)(a1 + 624);
    v24 = v22 >> 1;
    if ( v23 )
    {
      if ( (unsigned int)v24 < *(_DWORD *)(v23 - 4) )
      {
        v23 = *(_QWORD *)(v23 + 8 * v24);
        if ( !*(_DWORD *)(a1 + 104) )
          goto LABEL_11;
        goto LABEL_10;
      }
      v23 = 0;
    }
    if ( !*(_DWORD *)(a1 + 104) )
      return 1;
    do
LABEL_10:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
LABEL_11:
    if ( v23 )
    {
      for ( i = *(unsigned int **)(v23 + 16); i; ++*((_DWORD *)v27 - 1) )
      {
        v30 = *i;
        v31 = i[1];
        if ( !a7 )
        {
          v32 = *(_QWORD *)(a1 + 560);
          while ( 1 )
          {
            v33 = v30;
            do
            {
              v34 = v33;
              v33 = *(_DWORD *)(v32 + 4LL * v33);
            }
            while ( v34 != v33 );
            v35 = a4;
            do
            {
              v36 = v35;
              v35 = *(_DWORD *)(v32 + 4LL * v35);
            }
            while ( v36 != v35 );
            if ( v35 != v34 || a5 != v31 )
              break;
            i = *((unsigned int **)i + 1);
            if ( !i )
              return 1;
            v30 = *i;
            v31 = i[1];
          }
        }
        v27 = *(_QWORD **)(a1 + 680);
        if ( v27 )
        {
          v28 = *((unsigned int *)v27 - 1);
          if ( (_DWORD)v28 == *((_DWORD *)v27 - 2) )
          {
            v38 = (unsigned int)(3 * v28 + 1) >> 1;
            v39 = 16 * v38 + 8;
            if ( 16 * (int)v28 + 8 >= (unsigned int)v39 || (unsigned int)v28 >= v38 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v58.m128i_i64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v58);
              sub_233E40((__int64)&v58);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = sub_186B270(v39);
            v41 = *(_QWORD *)(a1 + 680);
            v42 = (_DWORD *)v40;
            v27 = (_QWORD *)(v40 + 8);
            if ( v41 )
            {
              v43 = *(unsigned int *)(v41 - 4);
              *(_DWORD *)(v40 + 4) = v43;
              v44 = 0;
              v45 = 16 * v43;
              if ( v45 )
              {
                do
                {
                  *(__m128i *)&v42[v44 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v41 + v44));
                  v44 += 16LL;
                }
                while ( v45 != v44 );
              }
              v54 = v42;
              sub_186B220((void *)(v41 - 8));
              v42 = v54;
              v29 = &v27[2 * (unsigned int)v54[1]];
            }
            else
            {
              *(_DWORD *)(v40 + 4) = 0;
              v29 = (_QWORD *)(v40 + 8);
            }
            *(_QWORD *)(a1 + 680) = v27;
            *v42 = v38;
          }
          else
          {
            v29 = &v27[2 * v28];
          }
        }
        else
        {
          v47 = (_QWORD *)sub_186B270(0x28u);
          v27 = v47 + 1;
          *v47 = 2;
          *(_QWORD *)(a1 + 680) = v47 + 1;
          v29 = v47 + 1;
        }
        i = *((unsigned int **)i + 1);
        *(_DWORD *)v29 = v30;
        *((_DWORD *)v29 + 1) = v31;
        v29[1] = 0;
      }
    }
    return 1;
  }
  ++*(_DWORD *)(a1 + 176);
  return 0;
}

