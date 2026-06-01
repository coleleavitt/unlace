__int64 __fastcall clang_Type_getOffsetOf(
        const char *src,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // r13
  size_t v15; // rax
  __int64 v16; // rbp
  size_t v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r15d
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rbx
  char *v38; // rdx
  void *v39; // rdi
  unsigned int v40; // eax
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdx
  void *v46; // rax
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-88h]
  __m128i v49; // [rsp+0h] [rbp-88h]
  _QWORD *v50; // [rsp+28h] [rbp-60h]
  _QWORD *v51; // [rsp+28h] [rbp-60h]
  __m128i v52; // [rsp+30h] [rbp-58h] BYREF

  v48 = _mm_loadu_si128((const __m128i *)&a7);
  clang_getTypeDeclaration((__int64)&v52, a2, a3, a4, a5, a6, v48.m128i_i32[0], v48.m128i_i64[1], a8);
  result = sub_690D00(*((__int64 *)&a7 + 1), a2, v9, v10, v11, v12, (__int128)_mm_load_si128(&v52));
  if ( !result )
  {
    if ( !src )
      return -5;
    if ( !a8 )
      BUG();
    v14 = *(_QWORD *)(*(_QWORD *)(a8 + 8) + 80LL);
    v15 = strlen(src);
    v16 = *(_QWORD *)(v14 + 17344);
    v17 = v15;
    v18 = sub_25E2710(src, v15);
    v19 = (__int64)src;
    v20 = v16;
    v21 = (unsigned int)sub_25E2870(v16, src, v17, v18);
    v24 = v21;
    v25 = (_QWORD *)(*(_QWORD *)v16 + 8 * v21);
    v26 = *v25;
    if ( *v25 )
    {
      if ( v26 != -8 )
        goto LABEL_6;
      --*(_DWORD *)(v16 + 16);
    }
    v36 = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(v16 + 104) += v17 + 17;
    v37 = (_QWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v38 = (char *)v37 + v17 + 17;
    if ( *(_QWORD *)(v16 + 32) >= (unsigned __int64)v38 && v36 )
    {
      *(_QWORD *)(v16 + 24) = v38;
    }
    else
    {
      v51 = v25;
      v47 = sub_690BC0(v16 + 24, v17 + 17, 3);
      v25 = v51;
      v37 = (_QWORD *)v47;
    }
    v39 = v37 + 2;
    if ( v17 )
    {
      v50 = v25;
      v46 = memcpy(v39, src, v17);
      v25 = v50;
      v39 = v46;
    }
    *((_BYTE *)v39 + v17) = 0;
    v19 = v24;
    v20 = v16;
    *v37 = v17;
    v37[1] = 0;
    *v25 = v37;
    ++*(_DWORD *)(v16 + 12);
    v40 = sub_25E2C40(v16, v24);
    v21 = *(_QWORD *)v16;
    v41 = (__int64 *)(*(_QWORD *)v16 + 8LL * v40);
    v26 = *v41;
    if ( *v41 == -8 || !v26 )
    {
      do
      {
        do
        {
          v26 = v41[1];
          ++v41;
        }
        while ( !v26 );
      }
      while ( v26 == -8 );
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
        goto LABEL_7;
LABEL_31:
      v20 = *(_QWORD *)(v16 + 120);
      if ( !v20
        || (v19 = (__int64)src,
            v42 = (*(__int64 (__fastcall **)(__int64, const char *, size_t))(*(_QWORD *)v20 + 16LL))(v20, src, v17),
            *(_QWORD *)(v26 + 8) = v42,
            (v27 = v42) == 0) )
      {
        v43 = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 104) += 24LL;
        v44 = (_QWORD *)((v43 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        v25 = v44 + 3;
        if ( *(_QWORD *)(v16 + 32) >= (unsigned __int64)(v44 + 3) && v43 )
        {
          *(_QWORD *)(v16 + 24) = v25;
        }
        else
        {
          v20 = v16 + 24;
          v19 = 24;
          v44 = (_QWORD *)sub_690BC0(v16 + 24, 24, 3);
        }
        v45 = *v44 & 0xFFFFFC0000000000LL;
        v44[1] = 0;
        v21 = v45 | 0x1FFFC05;
        *v44 = v21;
        *(_QWORD *)(v26 + 8) = v44;
        v44[2] = v26;
        v27 = *(_QWORD *)(v26 + 8);
      }
LABEL_7:
      v49 = _mm_load_si128(&v52);
      v28 = sub_63A250(v20, v19, v21, (__int64)v25, v22, v23, v49.m128i_i32[0], v49.m128i_i64[1]);
      v29 = v28;
      if ( v28 && (*(_BYTE *)(v28 + 28) & 0x7Fu) - 56 >= 4 )
        v29 = 0;
      v30 = sub_78B3D0(v29);
      v31 = sub_7A0650(v30 + 64, v27);
      if ( v31 )
      {
        v32 = v31 >> 2;
        if ( (v31 & 4) == 0 )
        {
          v33 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
          v34 = v33;
          if ( (v32 & 1) != 0 && v33 )
            v34 = (_QWORD *)*v33;
          v35 = *((_BYTE *)v34 + 28) & 0x7F;
          if ( (*((_BYTE *)v34 + 28) & 0x7Fu) - 47 <= 2 || (_BYTE)v35 == 30 )
            return sub_AC0230(v14, v34, v35);
        }
      }
      return -5;
    }
LABEL_6:
    v27 = *(_QWORD *)(v26 + 8);
    if ( v27 )
      goto LABEL_7;
    goto LABEL_31;
  }
  return result;
}

