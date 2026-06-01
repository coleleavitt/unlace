__int64 __fastcall sub_28DA30(__int64 a1)
{
  __int64 std_dirtree; // r15
  __int64 v3; // rdx
  __int64 eah; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  unsigned __int64 *v16; // rax
  __int64 v17; // rax
  __m128i *v18; // rsi
  __int64 v19; // rsi
  const char *v20; // rsi
  __int64 v21; // rdx
  double v22; // xmm0_8
  __int64 *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v37; // r14
  _QWORD *v38; // rsi
  unsigned __int64 v39; // r9
  _QWORD *v40; // rcx
  unsigned __int64 v41; // rdx
  _QWORD **v42; // rax
  void *v43; // rdi
  __int64 v44; // rax
  __int64 n; // [rsp+8h] [rbp-180h]
  __int64 v46; // [rsp+10h] [rbp-178h] BYREF
  __int128 v47; // [rsp+18h] [rbp-170h]
  __int64 v48; // [rsp+28h] [rbp-160h]
  __int128 v49; // [rsp+30h] [rbp-158h]
  __int64 v50; // [rsp+40h] [rbp-148h]
  __int128 v51; // [rsp+48h] [rbp-140h]
  __int64 v52; // [rsp+58h] [rbp-130h]
  __int128 v53; // [rsp+60h] [rbp-128h] BYREF
  int v54; // [rsp+70h] [rbp-118h]
  __int64 v55; // [rsp+80h] [rbp-108h] BYREF
  __int128 v56; // [rsp+88h] [rbp-100h]
  unsigned __int64 v57; // [rsp+98h] [rbp-F0h]
  _QWORD v58[14]; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v59[7]; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v60; // [rsp+148h] [rbp-40h] BYREF

  v60 = __readfsqword(0x28u);
  std_dirtree = get_std_dirtree(1);
  if ( !std_dirtree )
    return std_dirtree;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 496;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  sub_197020(&v46, "Function name", 32, (int)&stru_50000, nullptr);
  sub_197020(&v46, "Segment", 8, 0, nullptr);
  eah = get_eah(&v46, "Segment", v3);
  sub_197020(&v46, "Start", (unsigned int)(2 * *(_DWORD *)(eah + 24)), 1074003968, nullptr);
  sub_197020(&v46, "Length", 8, 268566528, nullptr);
  sub_197020(&v46, "Locals", 8, 268566528, nullptr);
  sub_197020(&v46, "Arguments", 8, 268566528, nullptr);
  sub_197020(&v46, "R", 1, 0, "Function returns");
  sub_197020(&v46, "F", 1, 0, "Far function");
  sub_197020(&v46, "L", 1, 0, "Library function");
  sub_197020(&v46, "M", 1, 0, "Lumina function");
  sub_197020(&v46, "O", 1, 0, "Outlined code");
  sub_197020(&v46, "S", 1, 0, "Static function");
  sub_197020(&v46, "B", 1, 0, "Function uses frame pointer (BP)");
  sub_197020(&v46, "T", 1, 0, "Function has prototype");
  sub_197020(&v46, "=", 1, 0, "BP points at the bottom of the stack frame");
  sub_197020(&v46, "X", 1, 0, "Exception handler code");
  v5 = operator new(0x138u);
  sub_497880(v5, std_dirtree, &v46);
  *(_QWORD *)(v5 + 240) = 1;
  *(_QWORD *)(v5 + 232) = v5 + 280;
  *(_QWORD *)(v5 + 248) = 0;
  *(_QWORD *)v5 = &standalone_dirtree_item_model_t___vtable;
  *(_QWORD *)(v5 + 224) = &off_86FDF8;
  *(_QWORD *)(v5 + 256) = 0;
  *(_DWORD *)(v5 + 264) = 1065353216;
  *(_QWORD *)(v5 + 272) = 0;
  *(_BYTE *)(v5 + 288) = 0;
  *(_QWORD *)(v5 + 296) = v5;
  *(_QWORD *)(v5 + 280) = 0;
  v6 = (_QWORD *)operator new(0x10u);
  *v6 = 0;
  v7 = v6;
  v8 = *(_QWORD *)(v5 + 256);
  v6[1] = 0;
  v9 = *(_QWORD *)(v5 + 240);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(v5 + 264),
                          v9,
                          v8,
                          1u) )
  {
    v37 = v10;
    if ( v10 == 1 )
    {
      *(_QWORD *)(v5 + 280) = 0;
      v14 = (_QWORD *)(v5 + 280);
    }
    else
    {
      if ( v10 >> 60 )
      {
        if ( v10 >> 61 )
          sub_162118(v5 + 264, v9, v10, v11, v12, v13);
        std::__throw_bad_alloc();
      }
      n = 8 * v10;
      v14 = (_QWORD *)operator new(8 * v10);
      memset(v14, 0, n);
    }
    v38 = *(_QWORD **)(v5 + 248);
    v39 = 0;
    *(_QWORD *)(v5 + 248) = 0;
    while ( v38 )
    {
      while ( 1 )
      {
        v40 = v38;
        v38 = (_QWORD *)*v38;
        v41 = v40[1] % v37;
        v42 = (_QWORD **)&v14[v41];
        if ( !*v42 )
          break;
        *v40 = **v42;
        **v42 = v40;
        if ( !v38 )
          goto LABEL_47;
      }
      *v40 = *(_QWORD *)(v5 + 248);
      *(_QWORD *)(v5 + 248) = v40;
      *v42 = (_QWORD *)(v5 + 248);
      if ( *v40 )
        v14[v39] = v40;
      v39 = v41;
    }
LABEL_47:
    v43 = *(void **)(v5 + 232);
    if ( (void *)(v5 + 280) != v43 )
      operator delete(v43, 8LL * *(_QWORD *)(v5 + 240));
    *(_QWORD *)(v5 + 240) = v37;
    *(_QWORD *)(v5 + 232) = v14;
    v15 = (_QWORD *)*v14;
    if ( *v14 )
      goto LABEL_4;
LABEL_50:
    v44 = *(_QWORD *)(v5 + 248);
    *(_QWORD *)(v5 + 248) = v7;
    *v7 = v44;
    if ( v44 )
    {
      v14[*(_QWORD *)(v44 + 8) % *(_QWORD *)(v5 + 240)] = v7;
      v14 = *(_QWORD **)(v5 + 232);
    }
    *v14 = v5 + 248;
    goto LABEL_5;
  }
  v14 = *(_QWORD **)(v5 + 232);
  v15 = (_QWORD *)*v14;
  if ( !*v14 )
    goto LABEL_50;
LABEL_4:
  *v7 = *v15;
  *(_QWORD *)*v14 = v7;
LABEL_5:
  ++*(_QWORD *)(v5 + 256);
  v56 = 0;
  v55 = 0;
  *(_QWORD *)(v5 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  v57 = 0xFFFFFFFF00000000LL;
  v16 = v58;
  do
  {
    *v16 = 0;
    v16 += 7;
    *((_OWORD *)v16 - 3) = 0;
    *(v16 - 4) = 0;
    *(_OWORD *)(v16 - 3) = 0;
    *((_DWORD *)v16 - 2) = -1;
  }
  while ( &v60 != v16 );
  if ( *((_QWORD *)&v56 + 1) <= 0x36u )
  {
    v17 = qvector_reserve(&v55, 0, 55, 1);
    v55 = v17;
  }
  else
  {
    v17 = v55;
  }
  *(_QWORD *)&v56 = 55;
  *(__m128i *)v17 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  *(__m128i *)(v17 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  LODWORD(v57) = v57 | 0x1D;
  *(__m128i *)(v17 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC4F0);
  v18 = (__m128i *)v58[0];
  *(_QWORD *)(v17 + 46) = 0x7377656976627573LL;
  HIDWORD(v57) = 3;
  *(_BYTE *)(v55 + 54) = 0;
  if ( v58[2] <= 0x10u )
  {
    v58[0] = qvector_reserve(v58, v18, 17, 1);
    v18 = (__m128i *)v58[0];
  }
  v58[1] = 17;
  *v18 = _mm_load_si128((const __m128i *)&xmmword_5DCC80);
  *(_BYTE *)(v58[0] + 16LL) = 0;
  v19 = v59[0];
  if ( v59[2] <= 0x15u )
  {
    v59[0] = qvector_reserve(v59, v59[0], 22, 1);
    v19 = v59[0];
  }
  v59[1] = 22;
  *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_5DCC70);
  *(_QWORD *)(v19 + 13) = 0x2E2E2E2973286E6FLL;
  *(_BYTE *)(v59[0] + 21LL) = 0;
  std_dirtree = operator new(0x9C8u);
  sub_28D360(std_dirtree, a1, 7u, (__int64)&v55, 0);
  v20 = (const char *)v5;
  v22 = sub_2DC890(std_dirtree, v5, v21);
  v23 = v59;
  do
  {
    v24 = v23[3];
    if ( v24 )
    {
      v23[4] = 0;
      v22 = qfree(v24, v20, v22);
    }
    v25 = *v23;
    if ( *v23 )
    {
      v23[1] = 0;
      v22 = qfree(v25, v20, v22);
    }
    v23 -= 7;
  }
  while ( v23 != (__int64 *)((char *)&v53 + 8) );
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    v22 = qfree(v55, v20, v22);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    v22 = qfree(v52, v20, v22);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    v22 = qfree(v50, v20, v22);
  }
  v26 = v48;
  if ( v48 )
  {
    v27 = v49;
    if ( (_QWORD)v49 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          v22 = qfree(v30, v20, v22);
          v26 = v48;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v49 = 0;
    v22 = qfree(v26, v20, v22);
  }
  v31 = v46;
  if ( v46 )
  {
    v32 = v47;
    if ( (_QWORD)v47 )
    {
      v33 = 0;
      do
      {
        v34 = (__int64 *)(v31 + 24 * v33);
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          v22 = qfree(v35, v20, v22);
          v31 = v46;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v47 = 0;
    qfree(v31, v20, v22);
  }
  return std_dirtree;
}
