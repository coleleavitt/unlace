unsigned __int64 __fastcall interactive_graph_t__::vfunc_23(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *v7; // rbp
  __int64 (*v8)(void); // rax
  int v9; // eax
  unsigned __int64 v11; // rdx
  const char *v12; // rdx
  const char *v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  const char *v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __m128i si128; // xmm0
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-38h] BYREF
  char v29; // [rsp+17h] [rbp-21h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-20h]

  v7 = (const char *)a2;
  v30 = __readfsqword(0x28u);
  v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v8 == (char *)interactive_graph_t__::vfunc_7 )
    v9 = *(_DWORD *)(a1 + 184);
  else
    v9 = v8();
  if ( v9 == a2 )
    return v30 - __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 232);
  if ( a2 >= v11 )
  {
    if ( v11 >= a2 )
      goto LABEL_7;
    v19 = *(_QWORD *)(a1 + 224);
    a4 = *(_QWORD *)(a1 + 240);
    a5 = a1 + 224;
    if ( (unsigned __int64)&xmmword_8CC930 >= v19 && (unsigned __int64)&xmmword_8CC930 < v19 + 16 * a4 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_8CC930);
      if ( a4 >= (unsigned __int64)v7
        || (v28 = si128,
            v27 = qvector_reserve(a1 + 224, v19, v7, 16),
            v11 = *(_QWORD *)(a1 + 232),
            si128 = _mm_load_si128(&v28),
            *(_QWORD *)(a1 + 224) = v27,
            v19 = v27,
            v11 < (unsigned __int64)v7) )
      {
        while ( 1 )
        {
          v23 = v11++;
          *(__m128i *)(v19 + 16 * v23) = si128;
          if ( v7 == (const char *)v11 )
            break;
          v19 = *(_QWORD *)(a1 + 224);
        }
      }
    }
    else if ( a4 >= (unsigned __int64)v7
           || (v25 = qvector_reserve(a1 + 224, v19, v7, 16),
               v11 = *(_QWORD *)(a1 + 232),
               *(_QWORD *)(a1 + 224) = v25,
               v19 = v25,
               v11 < (unsigned __int64)v7) )
    {
      while ( 1 )
      {
        v20 = v11++;
        *(__m128i *)(v19 + 16 * v20) = _mm_load_si128((const __m128i *)&xmmword_8CC930);
        if ( v7 == (const char *)v11 )
          break;
        v19 = *(_QWORD *)(a1 + 224);
      }
    }
  }
  *(_QWORD *)(a1 + 232) = v7;
LABEL_7:
  if ( v7 != *(const char **)(a1 + 184) )
    sub_290900((__int64 *)(a1 + 176), v7, v11, a4, a5, a6);
  if ( v7 != *(const char **)(a1 + 208) )
    sub_290900((__int64 *)(a1 + 200), v7, v11, a4, a5, a6);
  v12 = *(const char **)(a1 + 112);
  v29 = 0;
  if ( v7 >= v12 )
  {
    if ( v12 >= v7 )
    {
      v13 = *(const char **)(a1 + 88);
      if ( v13 >= v7 )
        goto LABEL_14;
      goto LABEL_23;
    }
    v14 = *(_QWORD *)(a1 + 104);
    v15 = *(_QWORD *)(a1 + 120);
    v16 = a1 + 104;
    if ( (unsigned __int64)&v29 >= v14 && (unsigned __int64)&v29 < v14 + v15 )
    {
      if ( v15 >= (unsigned __int64)v7
        || (v26 = qvector_reserve(v16, v14, v7, 1),
            v12 = *(const char **)(a1 + 112),
            *(_QWORD *)(a1 + 104) = v26,
            v14 = v26,
            v12 < v7) )
      {
        while ( 1 )
        {
          (v12++)[v14] = 0;
          if ( v7 == v12 )
            break;
          v14 = *(_QWORD *)(a1 + 104);
        }
      }
    }
    else if ( v15 >= (unsigned __int64)v7
           || (v24 = qvector_reserve(v16, v14, v7, 1),
               v12 = *(const char **)(a1 + 112),
               *(_QWORD *)(a1 + 104) = v24,
               v14 = v24,
               v12 < v7) )
    {
      while ( 1 )
      {
        (v12++)[v14] = v29;
        if ( v7 == v12 )
          break;
        v14 = *(_QWORD *)(a1 + 104);
      }
    }
  }
  v13 = *(const char **)(a1 + 88);
  *(_QWORD *)(a1 + 112) = v7;
  if ( v13 >= v7 )
  {
LABEL_14:
    if ( v7 != v13 )
      *(_QWORD *)(a1 + 88) = v7;
    return v30 - __readfsqword(0x28u);
  }
LABEL_23:
  v17 = *(_QWORD *)(a1 + 80);
  v18 = v13;
  if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)v7 )
  {
    v21 = qvector_reserve(a1 + 80, v17, v7, 4);
    v18 = *(const char **)(a1 + 88);
    *(_QWORD *)(a1 + 80) = v21;
    v17 = v21;
  }
  memset((void *)(v17 + 4LL * (_QWORD)v18), 0, 4 * (v7 - v18));
  *(_QWORD *)(a1 + 88) = v7;
  do
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * (_QWORD)v13) = (_DWORD)v13;
    ++v13;
  }
  while ( v7 != v13 );
  return v30 - __readfsqword(0x28u);
}
