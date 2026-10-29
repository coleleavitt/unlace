__int64 __fastcall sub_E0D810(
        __int64 a1,
        unsigned __int64 *a2,
        int a3,
        __int32 *a4,
        unsigned int a5,
        __int64 *a6,
        __int64 a7)
{
  void *v7; // rbx
  void *exception; // rbx
  void *v9; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdi
  const __m128i *v15; // rax
  int *v16; // rax
  int v17; // ecx
  int v18; // edx
  __m128i *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int32 v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i *v25; // r15
  __int64 v26; // r14
  const __m128i *v27; // rdi
  bool v28; // zf
  __m128i v29; // xmm0
  __int64 v30; // r10
  unsigned int v31; // r11d
  __int64 v32; // r15
  __int64 result; // rax
  unsigned int v34; // esi
  __int64 v35; // rdi
  const __m128i *v36; // rax
  __int64 v37; // r10
  unsigned int v38; // r11d
  __int64 v39; // r10
  unsigned int v40; // r11d
  __int64 v41; // rbx
  char *v42; // rbx
  char *v43; // rsi
  _BYTE *v44; // rdi
  __int64 v45; // r12
  char *v46; // rdi
  __int32 v47; // [rsp+4h] [rbp-19Ch]
  __m128i *v48; // [rsp+10h] [rbp-190h]
  int v49; // [rsp+18h] [rbp-188h]
  int v50; // [rsp+1Ch] [rbp-184h]
  __int32 *v51; // [rsp+20h] [rbp-180h]
  __int64 v55; // [rsp+38h] [rbp-168h]
  __m128i v56; // [rsp+40h] [rbp-160h] BYREF
  __m128i v57; // [rsp+50h] [rbp-150h] BYREF
  void *ptr; // [rsp+60h] [rbp-140h] BYREF
  __int64 v59; // [rsp+68h] [rbp-138h]
  _BYTE v60[304]; // [rsp+70h] [rbp-130h] BYREF

  if ( a6 )
  {
    if ( sub_DF78C0(a1, a2, a5, (__int64)a6) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_E0F430(
        exception,
        "invalid function declaration reference, named expressions (aka macros) cannot be referenced ",
        a2);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( a3 )
    {
      v56 = (__m128i)0xFFFFFFFFuLL;
      goto LABEL_5;
    }
  }
  else if ( a3 )
  {
    v56 = (__m128i)0xFFFFFFFFuLL;
    if ( a5 )
    {
LABEL_43:
      v37 = *(_QWORD *)(a1 + 624);
      v38 = *(_DWORD *)(a1 + 632);
      ptr = (void *)*a2;
      if ( sub_DF6190(v37, v38, (unsigned __int64 *)&ptr) )
      {
        v41 = sub_DF6190(v39, v40, (unsigned __int64 *)&ptr);
        sub_DFBCB0(a1);
        result = sub_E0CA70((__int64 *)(v41 + 16), *(_QWORD *)(a1 + 296), a5, a6, a7);
        if ( result )
          return result;
      }
      goto LABEL_59;
    }
LABEL_5:
    v59 = 0xFFFFFFFFLL;
    v13 = *(_DWORD *)(a1 + 544);
    v14 = *(_QWORD *)(a1 + 536);
    ptr = (void *)*a2;
    v15 = (const __m128i *)sub_DF6000(v14, v13, (unsigned __int64 *)&ptr);
    if ( v15 )
    {
      v56 = _mm_loadu_si128(v15 + 1);
      v49 = _mm_cvtsi128_si32(v56);
      v47 = v56.m128i_i32[1];
      if ( !v56.m128i_i32[1] )
        goto LABEL_14;
      goto LABEL_7;
    }
    goto LABEL_43;
  }
  ptr = (void *)*a2;
  if ( sub_DF6190(*(_QWORD *)(a1 + 624), *(_DWORD *)(a1 + 632), (unsigned __int64 *)&ptr) )
  {
    v32 = sub_DF6190(v30, v31, (unsigned __int64 *)&ptr);
    sub_DFBCB0(a1);
    result = sub_E0CA70((__int64 *)(v32 + 16), *(_QWORD *)(a1 + 296), a5, a6, a7);
    if ( result )
      return result;
  }
  v56 = (__m128i)0xFFFFFFFFuLL;
  if ( a5 && !a6
    || (v59 = 0xFFFFFFFFLL,
        v34 = *(_DWORD *)(a1 + 544),
        v35 = *(_QWORD *)(a1 + 536),
        ptr = (void *)*a2,
        (v36 = (const __m128i *)sub_DF6000(v35, v34, (unsigned __int64 *)&ptr)) == nullptr) )
  {
LABEL_59:
    v9 = __cxa_allocate_exception(0x30u);
    sub_E0F430(v9, "invalid function declaration reference, unknown indexed function ", a2);
    __cxa_throw(v9, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v56 = _mm_loadu_si128(v36 + 1);
  v49 = _mm_cvtsi128_si32(v56);
  v47 = v56.m128i_i32[1];
  if ( !v56.m128i_i32[1] )
    goto LABEL_38;
LABEL_7:
  if ( a5 )
  {
    v16 = *(int **)(*a6 + 24);
    if ( v16 )
      v17 = *v16;
    else
      v17 = -1;
    v18 = v49;
    v19 = &v56;
    while ( v17 != v18 )
    {
      v19 = (__m128i *)v19->m128i_i64[1];
      if ( !v19 )
        goto LABEL_14;
      v18 = v19->m128i_i32[0];
    }
    v49 = v17;
    v47 = v19->m128i_i32[1];
  }
LABEL_14:
  if ( !a3 )
  {
LABEL_38:
    sub_DFBCB0(a1);
    result = sub_15D2D10(*(_QWORD *)(a1 + 296), v49, v47, 0, 0, a5, (__int64)a6, a7);
    goto LABEL_39;
  }
  v20 = 16;
  ptr = v60;
  v59 = 0x1000000000LL;
  v51 = &a4[a3];
  v21 = 0;
  while ( 1 )
  {
    v22 = *a4;
    v57.m128i_i8[8] = 0;
    v57.m128i_i32[0] = v22;
    if ( (unsigned int)v21 < v20 )
    {
      *((__m128i *)ptr + v21) = _mm_load_si128(&v57);
LABEL_17:
      v57.m128i_i32[0] = 0;
      goto LABEL_18;
    }
    v50 = 2 * v20;
    v23 = sub_186B270(32LL * v20);
    v24 = (unsigned int)v59;
    v48 = (__m128i *)v23;
    if ( (_DWORD)v59 )
    {
      v25 = (__m128i *)v23;
      v26 = 0;
      do
      {
        v27 = (const __m128i *)((char *)ptr + 16 * v26);
        v28 = v27->m128i_i8[8] == 0;
        *v25 = _mm_loadu_si128(v27);
        v27->m128i_i32[0] = 0;
        if ( !v28 )
          v27->m128i_i8[8] = 0;
        sub_15D0DF0(v27);
        v24 = (unsigned int)v59;
        ++v26;
        ++v25;
      }
      while ( (unsigned int)v26 < (unsigned int)v59 );
    }
    if ( ptr && ptr != v60 )
    {
      sub_186B220(ptr);
      v24 = (unsigned int)v59;
    }
    v29 = _mm_load_si128(&v57);
    v28 = v57.m128i_i8[8] == 0;
    ptr = v48;
    HIDWORD(v59) = v50;
    v48[v24] = v29;
    if ( v28 )
      goto LABEL_17;
    v57.m128i_i32[0] = 0;
    v57.m128i_i8[8] = 0;
LABEL_18:
    LODWORD(v59) = v59 + 1;
    ++a4;
    sub_15D0DF0(&v57);
    if ( a4 == v51 )
      break;
    v21 = (unsigned int)v59;
    v20 = HIDWORD(v59);
  }
  sub_DFBCB0(a1);
  result = sub_15D2D10(*(_QWORD *)(a1 + 296), v49, v47, a3, (_DWORD)ptr, a5, (__int64)a6, a7);
  v42 = (char *)ptr;
  v43 = (char *)ptr + 16 * (unsigned int)v59;
  v44 = v43;
  if ( ptr != v43 )
  {
    v45 = result;
    do
    {
      v46 = v42;
      v42 += 16;
      sub_15D0DF0(v46);
    }
    while ( v43 != v42 );
    v44 = ptr;
    result = v45;
  }
  if ( v44 == v60 || !v44 )
  {
LABEL_39:
    if ( !result )
      goto LABEL_57;
    return result;
  }
  v55 = result;
  sub_186B220(v44);
  result = v55;
  if ( !v55 )
  {
LABEL_57:
    v7 = __cxa_allocate_exception(0x30u);
    sub_E0F430(v7, "invalid function declaration reference, invalid builtin reference ", a2);
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return result;
}

