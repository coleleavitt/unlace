void __fastcall sub_1193440(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  std::_V2 *v11; // rdi
  std::_V2 *v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // r15
  size_t v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  size_t v23; // rax
  const char *v24; // rax
  char *v25; // rdx
  char *v26; // r14
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  const char *v30; // rbx
  size_t v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 **v34; // rbx
  __int64 *v35; // rbp
  __int64 v36; // rax
  int v37; // edx
  __int64 *v38; // rdi
  const char **v39; // rbp
  const char **v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r13
  const char *v43; // rsi
  size_t v44; // rdx
  __int64 v45; // rax
  _BYTE *v46; // rdx
  __int64 **v47; // rax
  __int64 **v48; // rbx
  size_t v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  size_t v52; // rax
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rax
  size_t v56; // rdx
  __int64 v57; // r14
  const char *v58; // r15
  __int64 v59; // rax
  __int64 v60; // rax
  size_t v61; // rdx
  __int64 v62; // rbx
  const char *v63; // rbp
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 **v66; // [rsp+18h] [rbp-1F0h]
  void *v69[2]; // [rsp+50h] [rbp-1B8h] BYREF
  char v70; // [rsp+60h] [rbp-1A8h] BYREF
  void *v71; // [rsp+70h] [rbp-198h] BYREF
  __int64 v72; // [rsp+78h] [rbp-190h]
  __m128i si128; // [rsp+80h] [rbp-188h] BYREF
  char v74; // [rsp+90h] [rbp-178h]
  void *v75; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-160h]
  _BYTE v77[128]; // [rsp+B0h] [rbp-158h] BYREF
  void *ptr; // [rsp+130h] [rbp-D8h] BYREF
  __m128i v79; // [rsp+138h] [rbp-D0h] BYREF
  __int64 v80; // [rsp+148h] [rbp-C0h] BYREF
  char v81; // [rsp+150h] [rbp-B8h]

  v11 = *(std::_V2 **)(a2 + 80);
  if ( !sub_10DCD30((__int64)v11, 0x48u) )
  {
    v12 = *(std::_V2 **)(a1 + 40);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    if ( !v12 )
    {
      LODWORD(v71) = 0;
      v72 = std::_V2::system_category(v11);
      v12 = (std::_V2 *)operator new(0x60u);
      sub_227D450(v12);
      v65 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v12;
      if ( v65 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 8LL))(v65, a3);
        v12 = *(std::_V2 **)(a1 + 40);
      }
    }
    (*(void (__fastcall **)(void **))(**(_QWORD **)(v13 + 8) + 80LL))(&v71);
    if ( (v74 & 1) != 0 )
    {
      v81 &= ~1u;
      sub_1189430(&ptr, ".");
      if ( (v74 & 1) == 0 && v71 != &si128 )
        operator delete(v71);
      if ( (v81 & 1) != 0 )
      {
        v74 |= 1u;
        LODWORD(v71) = (_DWORD)ptr;
      }
      else
      {
        v74 &= ~1u;
        v71 = &si128;
        if ( ptr == &v79.m128i_u64[1] )
        {
          si128 = _mm_load_si128((const __m128i *)&v79.m128i_u64[1]);
        }
        else
        {
          v71 = ptr;
          si128.m128i_i64[0] = v79.m128i_i64[1];
        }
      }
      v72 = v79.m128i_i64[0];
    }
    v14 = sub_995540((__int64)v12, "{ \"directory\": \"");
    sub_2275830(&ptr, v71, v72, 1);
    v15 = sub_227BF10(v14, ptr, v79.m128i_i64[0]);
    sub_995540(v15, "\"");
    if ( ptr != &v79.m128i_u64[1] )
      operator delete(ptr);
    v16 = sub_995540((__int64)v12, ", \"file\": \"");
    v17 = *(const char **)a8;
    v18 = 0;
    v19 = v16;
    if ( *(_QWORD *)a8 )
      v18 = j__strlen(*(const char **)a8);
    sub_2275830(&ptr, v17, v18, 1);
    v20 = sub_227BF10(v19, ptr, v79.m128i_i64[0]);
    sub_995540(v20, "\"");
    if ( ptr != &v79.m128i_u64[1] )
      operator delete(ptr);
    if ( *(_DWORD *)(a7 + 8) == 1 )
    {
      v55 = sub_995540((__int64)v12, ", \"output\": \"");
      v56 = 0;
      v57 = v55;
      v58 = *(const char **)a7;
      if ( *(_QWORD *)a7 )
        v56 = j__strlen(*(const char **)a7);
      sub_2275830(&ptr, v58, v56, 1);
      v59 = sub_227BF10(v57, ptr, v79.m128i_i64[0]);
      sub_995540(v59, "\"");
      if ( ptr != &v79.m128i_u64[1] )
        operator delete(ptr);
    }
    v21 = sub_995540((__int64)v12, ", \"arguments\": [\"");
    sub_2275830(&ptr, *(_QWORD *)(v13 + 136), *(_QWORD *)(v13 + 144), 1);
    v22 = sub_227BF10(v21, ptr, v79.m128i_i64[0]);
    sub_995540(v22, "\"");
    if ( ptr != &v79.m128i_u64[1] )
      operator delete(ptr);
    ptr = &v80;
    v79 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v23 = j__strlen("-x");
    sub_A1FE50(&ptr, "-x", &aReserveX[v23 + 7]);
    v24 = (const char *)sub_12CC8C0(*(unsigned int *)(a8 + 24));
    v25 = nullptr;
    v26 = (char *)v24;
    if ( v24 )
      v25 = (char *)&v24[j__strlen(v24)];
    sub_A1FE50(&ptr, v26, v25);
    v27 = sub_995540((__int64)v12, ", \"");
    sub_2275830(&v75, ptr, v79.m128i_i64[0], 1);
    v28 = sub_227BF10(v27, v75, v76);
    sub_995540(v28, "\"");
    if ( v75 != v77 )
      operator delete(v75);
    if ( *(_QWORD *)(v13 + 496) )
    {
      if ( !sub_10DCD30(a9, 0xCF4u) )
      {
        v52 = j__strlen("--sysroot=");
        v79.m128i_i64[0] = 0;
        sub_A1FE50(&ptr, "--sysroot=", &aSysroot[v52]);
        sub_A1FE50(&ptr, *(_BYTE **)(v13 + 488), (_BYTE *)(*(_QWORD *)(v13 + 488) + *(_QWORD *)(v13 + 496)));
        v53 = sub_995540((__int64)v12, ", \"");
        sub_2275830(&v75, ptr, v79.m128i_i64[0], 1);
        v54 = sub_227BF10(v53, v75, v76);
        sub_995540(v54, "\"");
        if ( v75 != v77 )
          operator delete(v75);
      }
    }
    v29 = sub_995540((__int64)v12, ", \"");
    v30 = *(const char **)a8;
    v31 = 0;
    v32 = v29;
    if ( *(_QWORD *)a8 )
      v31 = j__strlen(v30);
    sub_2275830(&v75, v30, v31, 1);
    v33 = sub_227BF10(v32, v75, v76);
    sub_995540(v33, "\"");
    if ( v75 != v77 )
      operator delete(v75);
    if ( *(_DWORD *)(a7 + 8) == 1 )
    {
      v60 = sub_995540((__int64)v12, ", \"-o\", \"");
      v61 = 0;
      v62 = v60;
      v63 = *(const char **)a7;
      if ( *(_QWORD *)a7 )
        v61 = j__strlen(*(const char **)a7);
      sub_2275830(&v75, v63, v61, 1);
      v64 = sub_227BF10(v62, v75, v76);
      sub_995540(v64, "\"");
      if ( v75 != v77 )
        operator delete(v75);
    }
    v34 = *(__int64 ***)(a9 + 8);
    v66 = &v34[*(unsigned int *)(a9 + 16)];
    if ( v34 != v66 )
    {
      while ( !*v34 )
      {
        if ( v66 == ++v34 )
          goto LABEL_55;
      }
      while ( 1 )
      {
        v35 = *v34;
        v36 = **v34;
        if ( *(_DWORD *)(v36 + 40) != 3510
          && (!sub_21BB380(v35[1], *(unsigned __int16 *)(v36 + 56))
           || *(_DWORD *)(sub_21BB380(v35[1], *(unsigned __int16 *)(*v35 + 56)) + 40) != 9) )
        {
          v37 = *(_DWORD *)(*v35 + 40);
          if ( v37 != 2009 && *(_BYTE *)(*v35 + 44) != 1 && v37 != 3116 )
          {
            v75 = v77;
            v38 = *v34;
            v76 = 0x1000000000LL;
            sub_21B5A40(v38, a9, &v75);
            v39 = (const char **)v75;
            v40 = (const char **)((char *)v75 + 8 * (unsigned int)v76);
            if ( v75 != v40 )
            {
              do
              {
                while ( 1 )
                {
                  v41 = *((_QWORD *)v12 + 4);
                  if ( (unsigned __int64)(*((_QWORD *)v12 + 3) - v41) > 2 )
                  {
                    *(_BYTE *)(v41 + 2) = 34;
                    v42 = (__int64)v12;
                    *(_WORD *)v41 = 8236;
                    *((_QWORD *)v12 + 4) += 3LL;
                  }
                  else
                  {
                    v42 = sub_227BF10(v12, ", \"", 3);
                  }
                  v43 = *v39;
                  v44 = 0;
                  if ( *v39 )
                  {
                    v43 = *v39;
                    v44 = strlen(*v39);
                  }
                  sub_2275830(v69, v43, v44, 1);
                  v45 = sub_227BF10(v42, v69[0], v69[1]);
                  v46 = *(_BYTE **)(v45 + 32);
                  if ( *(_BYTE **)(v45 + 24) == v46 )
                  {
                    sub_227BF10(v45, "\"", 1);
                  }
                  else
                  {
                    *v46 = 34;
                    ++*(_QWORD *)(v45 + 32);
                  }
                  if ( v69[0] == &v70 )
                    break;
                  operator delete(v69[0]);
                  if ( v40 == ++v39 )
                    goto LABEL_41;
                }
                ++v39;
              }
              while ( v40 != v39 );
LABEL_41:
              v40 = (const char **)v75;
            }
            if ( v40 != (const char **)v77 )
              free(v40);
          }
        }
        v47 = v34 + 1;
        if ( v66 == v34 + 1 )
          break;
        if ( !v34[1] )
        {
          v48 = v34 + 2;
          do
          {
            v47 = v48;
            if ( v66 == v48 )
              goto LABEL_55;
            ++v48;
          }
          while ( !*(v48 - 1) );
        }
        v34 = v47;
      }
    }
LABEL_55:
    v49 = j__strlen("--target=");
    v79.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, "--target=", &aTarget_4[v49]);
    sub_A1FE50(&ptr, a5, &a5[a6]);
    v50 = sub_995540((__int64)v12, ", \"");
    sub_2275830(&v75, ptr, v79.m128i_i64[0], 1);
    v51 = sub_227BF10(v50, v75, v76);
    sub_995540(v51, "\"]},\n");
    if ( v75 != v77 )
      operator delete(v75);
    if ( ptr != &v80 )
      free(ptr);
    if ( (v74 & 1) == 0 && v71 != &si128 )
      operator delete(v71);
  }
}
