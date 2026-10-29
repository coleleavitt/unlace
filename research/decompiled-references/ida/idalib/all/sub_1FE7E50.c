void __fastcall sub_1FE7E50(__int64 a1)
{
  __int64 v2; // rax
  size_t v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r12
  unsigned __int64 v11; // rcx
  char *v12; // rdx
  void *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  _BYTE *v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  char *v32; // r12
  unsigned __int64 i; // rcx
  char v34; // al
  char *v35; // rbp
  char *v36; // r14
  _QWORD *v37; // rax
  __m128i *v38; // rax
  size_t v39; // rcx
  size_t v40; // rbp
  size_t v41; // rdx
  __m128i *v42; // rcx
  size_t v43; // rsi
  __int64 v44; // rdi
  size_t v45; // r8
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rax
  _BYTE *v48; // rdi
  __int64 v49; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v50[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v51[2]; // [rsp+20h] [rbp-88h] BYREF
  void *v52; // [rsp+30h] [rbp-78h] BYREF
  size_t v53; // [rsp+38h] [rbp-70h]
  __m128i v54; // [rsp+40h] [rbp-68h] BYREF
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  __m128i v57; // [rsp+60h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 10) )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( 0x7FFFFFFFFFFFFFFFLL - v3 <= 5 )
      goto LABEL_104;
    v4 = *(_QWORD *)(a1 + 96);
    v5 = v3 + 6;
    if ( v4 == a1 + 112 )
      v6 = 15;
    else
      v6 = *(_QWORD *)(a1 + 112);
    if ( v5 > v6 )
    {
      sub_998B30(a1 + 96, v3, 0, "const ", 6u);
    }
    else
    {
      v7 = v3 + v4;
      *(_DWORD *)v7 = 1936617315;
      *(_WORD *)(v7 + 4) = 8308;
    }
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 104) = v5;
    *(_BYTE *)(v8 + v3 + 6) = 0;
  }
  v2 = *(unsigned __int8 *)(a1 + 1);
  v49 = a1;
  switch ( v2 )
  {
    case 0LL:
      sub_99BDC0((_QWORD *)(a1 + 96), 0, *(_QWORD *)(a1 + 104), "void", 4u);
      return;
    case 1LL:
      sub_99BDC0((_QWORD *)(a1 + 96), 0, *(_QWORD *)(a1 + 104), "size_t", 6u);
      if ( !*(_BYTE *)(a1 + 8) )
        return;
      v27 = *(_QWORD *)(a1 + 104);
      if ( v27 == 0x7FFFFFFFFFFFFFFFLL || v27 == 9223372036854775806LL )
        goto LABEL_104;
      v28 = *(_QWORD *)(a1 + 96);
      v29 = v27 + 2;
      if ( v28 == a1 + 112 )
        v30 = 15;
      else
        v30 = *(_QWORD *)(a1 + 112);
      if ( v29 > v30 )
        sub_998B30(a1 + 96, *(_QWORD *)(a1 + 104), 0, " *", 2u);
      else
        *(_WORD *)(v28 + v27) = 10784;
      v31 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 104) = v29;
      *(_BYTE *)(v31 + v27 + 2) = 0;
      return;
    case 2LL:
      sub_99BDC0((_QWORD *)(a1 + 96), 0, *(_QWORD *)(a1 + 104), "ptrdiff_t", 9u);
      return;
    case 3LL:
      sub_99BDC0((_QWORD *)(a1 + 96), 0, *(_QWORD *)(a1 + 104), "unsigned long", 0xDu);
      return;
    case 4LL:
      sub_99BDC0((_QWORD *)(a1 + 96), 0, *(_QWORD *)(a1 + 104), "long", 4u);
      return;
    case 5LL:
      v19 = *(_DWORD *)(a1 + 16);
      if ( *(_BYTE *)(a1 + 20) && !v19 )
      {
        v10 = a1 + 96;
        sub_9EE7C0((_QWORD *)(a1 + 96), "bool");
        goto LABEL_18;
      }
      if ( v19 > 0x40 )
      {
        v50[0] = v51;
        v34 = 48;
LABEL_89:
        LOBYTE(v51[0]) = v34;
        v36 = (_BYTE *)(&dword_0 + 1);
        v37 = v51;
        goto LABEL_59;
      }
      v32 = &v57.m128i_i8[5];
      for ( i = 0x40 / v19; ; i /= 0xAu )
      {
        --v32;
        v34 = i % 0xA + 48;
        *v32 = v34;
        if ( i <= 9 )
          break;
      }
      v35 = (char *)(&v57.m128i_u8[5] - (unsigned __int8 *)v32);
      v50[0] = v51;
      v36 = (char *)(&v57.m128i_u8[5] - (unsigned __int8 *)v32);
      if ( (unsigned __int64)(&v57.m128i_u8[5] - (unsigned __int8 *)v32) > 0xF )
      {
        if ( (__int64)v35 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v37 = (_QWORD *)operator new((unsigned __int64)(v35 + 1));
        v51[0] = &v57.m128i_u8[5] - (unsigned __int8 *)v32;
        v50[0] = v37;
        goto LABEL_58;
      }
      if ( v35 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_89;
      v37 = v51;
      if ( v35 )
      {
LABEL_58:
        memcpy(v37, v32, (size_t)v35);
        v37 = (_QWORD *)v50[0];
      }
LABEL_59:
      v50[1] = v36;
      v36[(_QWORD)v37] = 0;
      v38 = (__m128i *)sub_99BDC0(v50, 0, 0, "vbool", 5u);
      v52 = &v54;
      if ( (__m128i *)v38->m128i_i64[0] == &v38[1] )
      {
        v54 = _mm_loadu_si128(v38 + 1);
      }
      else
      {
        v52 = (void *)v38->m128i_i64[0];
        v54.m128i_i64[0] = v38[1].m128i_i64[0];
      }
      v39 = v38->m128i_u64[1];
      v38[1].m128i_i8[0] = 0;
      v53 = v39;
      v38->m128i_i64[0] = (__int64)v38[1].m128i_i64;
      v38->m128i_i64[1] = 0;
      v40 = v53;
      if ( v53 == 0x7FFFFFFFFFFFFFFFLL || v53 == 9223372036854775806LL )
        goto LABEL_104;
      if ( v52 == &v54 )
        v41 = 15;
      else
        v41 = v54.m128i_i64[0];
      if ( v53 + 2 > v41 )
        sub_998B30((__int64)&v52, v53, 0, "_t", 2u);
      else
        *(_WORD *)((char *)v52 + v53) = 29791;
      v53 = v40 + 2;
      *((_BYTE *)v52 + v40 + 2) = 0;
      v42 = (__m128i *)v52;
      src = &v57;
      if ( v52 == &v54 )
      {
        v42 = &v57;
        v57 = _mm_load_si128(&v54);
      }
      else
      {
        src = v52;
        v57.m128i_i64[0] = v54.m128i_i64[0];
      }
      v43 = *(_QWORD *)(a1 + 104);
      v44 = *(_QWORD *)(a1 + 96);
      v10 = a1 + 96;
      v45 = v53;
      v52 = &v54;
      v53 = 0;
      n = v45;
      v46 = v43 + v45;
      v54.m128i_i8[0] = 0;
      if ( v44 == a1 + 112 )
        v47 = 15;
      else
        v47 = *(_QWORD *)(a1 + 112);
      if ( v46 > v47 )
      {
        sub_998B30(a1 + 96, v43, 0, v42, v45);
        v44 = *(_QWORD *)(a1 + 96);
      }
      else if ( v45 )
      {
        v48 = (_BYTE *)(v43 + v44);
        if ( v45 == 1 )
          *v48 = v42->m128i_i8[0];
        else
          memcpy(v48, v42, v45);
        v44 = *(_QWORD *)(a1 + 96);
      }
      *(_QWORD *)(a1 + 104) = v46;
      *(_BYTE *)(v44 + v46) = 0;
      if ( src != &v57 )
        operator delete(src);
      if ( v52 != &v54 )
        operator delete(v52);
      v13 = (void *)v50[0];
      if ( (_QWORD *)v50[0] != v51 )
LABEL_17:
        operator delete(v13);
LABEL_18:
      if ( !*(_BYTE *)(a1 + 8) )
        return;
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 == 0x7FFFFFFFFFFFFFFFLL || v14 == 9223372036854775806LL )
LABEL_104:
        std::__throw_length_error("basic_string::append");
      v15 = *(_QWORD *)(a1 + 96);
      v16 = v14 + 2;
      if ( v15 == a1 + 112 )
        v17 = 15;
      else
        v17 = *(_QWORD *)(a1 + 112);
      if ( v16 > v17 )
        sub_998B30(v10, *(_QWORD *)(a1 + 104), 0, " *", 2u);
      else
        *(_WORD *)(v15 + v14) = 10784;
      v18 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 104) = v16;
      *(_BYTE *)(v18 + v14 + 2) = 0;
      return;
    case 6LL:
      v20 = 3;
      v21 = "int";
      goto LABEL_32;
    case 7LL:
      v20 = 4;
      v21 = (char *)"uint";
LABEL_32:
      v10 = a1 + 96;
      sub_1FE78D0((__int64)&src, &v49, (unsigned __int64)v21, v20);
      v22 = *(_QWORD *)(a1 + 104);
      v23 = *(_QWORD *)(a1 + 96);
      v24 = n + v22;
      if ( v23 == a1 + 112 )
        v25 = 15;
      else
        v25 = *(_QWORD *)(a1 + 112);
      if ( v24 > v25 )
      {
        sub_998B30(a1 + 96, v22, 0, src, n);
        v23 = *(_QWORD *)(a1 + 96);
      }
      else if ( n )
      {
        v26 = (_BYTE *)(v22 + v23);
        if ( n == 1 )
          *v26 = *(_BYTE *)src;
        else
          memcpy(v26, src, n);
        v23 = *(_QWORD *)(a1 + 96);
      }
      *(_QWORD *)(a1 + 104) = v24;
      *(_BYTE *)(v23 + v24) = 0;
      v13 = src;
      if ( src == &v57 )
        goto LABEL_18;
      goto LABEL_17;
    case 8LL:
      if ( !*(_BYTE *)(a1 + 20) || *(_DWORD *)(a1 + 16) )
      {
        v11 = 5;
        v12 = "float";
        goto LABEL_16;
      }
      v9 = *(_DWORD *)(a1 + 12);
      v10 = a1 + 96;
      if ( v9 == 64 )
      {
        sub_9EE7C0((_QWORD *)(a1 + 96), "double");
      }
      else if ( v9 == 32 )
      {
        sub_9EE7C0((_QWORD *)(a1 + 96), "float");
      }
      else
      {
        sub_9EE7C0((_QWORD *)(a1 + 96), "_Float16");
      }
      goto LABEL_18;
    case 9LL:
      if ( *(_BYTE *)(a1 + 20) && !*(_DWORD *)(a1 + 16) )
      {
        v10 = a1 + 96;
        sub_9EE7C0((_QWORD *)(a1 + 96), "__bf16");
        goto LABEL_18;
      }
      v11 = 6;
      v12 = "bfloat";
LABEL_16:
      v10 = a1 + 96;
      sub_1FE78D0((__int64)&src, &v49, (unsigned __int64)v12, v11);
      sub_9EE560((_QWORD *)(a1 + 96), src, n);
      v13 = src;
      if ( src != &v57 )
        goto LABEL_17;
      goto LABEL_18;
  }
}
