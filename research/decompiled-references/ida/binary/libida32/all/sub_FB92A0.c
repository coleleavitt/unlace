unsigned __int64 __fastcall sub_FB92A0(
        std::_V2 *a1,
        size_t a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 *a5,
        __int64 a6,
        _QWORD *a7,
        char a8)
{
  char v9; // r14
  void *v13; // rsi
  size_t v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // r8
  _BYTE *v19; // rax
  size_t v20; // r15
  size_t v21; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  _BOOL8 v28; // r15
  _QWORD *v29; // rax
  void (__fastcall *v30)(__int64 *, _QWORD *, void **); // rax
  size_t v31; // rdx
  void (__fastcall *v32)(void **, _QWORD *, void **); // rax
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(__int64, __int64); // rcx
  _BYTE *v35; // rax
  size_t v36; // rcx
  size_t v37; // rdx
  __m128i v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // [rsp-8h] [rbp-150h]
  size_t v48; // [rsp+8h] [rbp-140h]
  size_t v49; // [rsp+8h] [rbp-140h]
  _BYTE *v50; // [rsp+8h] [rbp-140h]
  __int64 v51; // [rsp+8h] [rbp-140h]
  size_t v52; // [rsp+8h] [rbp-140h]
  __int64 v53; // [rsp+10h] [rbp-138h]
  __int64 v54; // [rsp+18h] [rbp-130h]
  size_t v55; // [rsp+20h] [rbp-128h]
  _BYTE *v56; // [rsp+20h] [rbp-128h]
  __int64 v57; // [rsp+28h] [rbp-120h]
  __int64 v58[2]; // [rsp+30h] [rbp-118h] BYREF
  char v59; // [rsp+40h] [rbp-108h]
  void *src; // [rsp+50h] [rbp-F8h] BYREF
  size_t n; // [rsp+58h] [rbp-F0h]
  __int64 v62; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v63; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+80h] [rbp-C8h]
  __int64 v65; // [rsp+88h] [rbp-C0h]
  __int64 v66; // [rsp+90h] [rbp-B8h]
  __int64 v67; // [rsp+98h] [rbp-B0h]
  char v68; // [rsp+A0h] [rbp-A8h]
  char v69; // [rsp+A8h] [rbp-A0h]
  void *v70; // [rsp+B0h] [rbp-98h] BYREF
  size_t v71; // [rsp+B8h] [rbp-90h]
  __int64 v72; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v73; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-68h]
  __int64 v75; // [rsp+E8h] [rbp-60h]
  __int64 v76; // [rsp+F0h] [rbp-58h]
  __int64 v77; // [rsp+F8h] [rbp-50h]
  char v78; // [rsp+100h] [rbp-48h]
  char v79; // [rsp+108h] [rbp-40h]

  v9 = a4 ^ 1;
  v54 = std::_V2::system_category(a1);
  if ( a6 )
  {
    v13 = a1;
    v53 = (*(__int64 (__fastcall **)(__int64, std::_V2 *, size_t, __int64, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)a6 + 24LL))(
            a6,
            a1,
            a2,
            a3,
            a4,
            a5,
            a7);
    v16 = v53;
    v17 = v46;
    goto LABEL_3;
  }
  v29 = (_QWORD *)*a7;
  if ( a5 && !v9 )
  {
    if ( a8 )
    {
      v30 = (void (__fastcall *)(__int64 *, _QWORD *, void **))v29[6];
      v70 = a1;
      v71 = a2;
      v13 = a7;
      v73.m128i_i16[0] = 261;
      v30(v58, a7, &v70);
    }
    else
    {
      v34 = (__int64 (__fastcall *)(__int64, __int64))v29[7];
      v70 = a1;
      v73.m128i_i16[0] = 261;
      v13 = a7;
      v71 = a2;
      if ( v34 == sub_FB9270 )
        ((void (__fastcall *)(__int64 *, _QWORD *, void **))v29[6])(v58, a7, &v70);
      else
        ((void (__fastcall *)(__int64 *, _QWORD *, void **))v34)(v58, a7, &v70);
    }
    if ( (v59 & 1) != 0 )
    {
      v16 = v58[0];
      v31 = v58[1];
LABEL_26:
      v48 = v31;
      sub_FB9280(v58);
      v14 = v48;
      goto LABEL_3;
    }
    v13 = (void *)v58[0];
    (*(void (__fastcall **)(void **))(*(_QWORD *)v58[0] + 16LL))(&v70);
    if ( (v79 & 1) != 0 )
    {
      v33 = *a5;
      *a5 = 0;
      if ( !v33 || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33), (v79 & 1) != 0) )
      {
        v16 = (unsigned int)v70;
        v31 = v71;
        goto LABEL_26;
      }
LABEL_33:
      if ( v70 != &v72 )
      {
        operator delete(v70);
        v16 = 0;
        v31 = v54;
        goto LABEL_26;
      }
LABEL_47:
      v31 = v54;
      v16 = 0;
      goto LABEL_26;
    }
    v35 = *(_BYTE **)a3;
    v13 = (void *)(a3 + 16);
    v36 = v71;
    if ( *(_QWORD *)a3 == a3 + 16 )
      v37 = 15;
    else
      v37 = *(_QWORD *)(a3 + 16);
    if ( v71 <= v37 )
    {
LABEL_41:
      if ( v36 )
      {
        v13 = v70;
        if ( v36 == 1 )
        {
          *v35 = *(_BYTE *)v70;
          v35 = *(_BYTE **)a3;
        }
        else
        {
          v49 = v36;
          memcpy(v35, v70, v36);
          v35 = *(_BYTE **)a3;
          v36 = v49;
        }
      }
      *(_QWORD *)(a3 + 8) = v36;
      v35[v36] = 0;
      v38 = _mm_load_si128(&v73);
      *(_QWORD *)(a3 + 48) = v74;
      v39 = v75;
      *(__m128i *)(a3 + 32) = v38;
      *(_QWORD *)(a3 + 56) = v39;
      *(_QWORD *)(a3 + 64) = v76;
      *(_QWORD *)(a3 + 72) = v77;
      v40 = *a5;
      *(_BYTE *)(a3 + 80) = v78;
      v41 = v58[0];
      v58[0] = 0;
      *a5 = v41;
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
      if ( (v79 & 1) != 0 )
        goto LABEL_47;
      goto LABEL_33;
    }
    if ( (v71 & 0x8000000000000000LL) == 0LL )
    {
      v44 = 2 * v37;
      if ( v71 >= v44 )
      {
        v44 = v71;
      }
      else if ( v44 < 0 )
      {
        v44 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v55 = v71;
      v51 = v44;
      v35 = (_BYTE *)operator new(v44 + 1);
      v13 = (void *)(a3 + 16);
      v45 = v51;
      v36 = v55;
      if ( a3 + 16 != *(_QWORD *)a3 )
      {
        v57 = v51;
        v56 = v35;
        v52 = v36;
        operator delete(*(void **)a3);
        v45 = v57;
        v35 = v56;
        v36 = v52;
      }
      *(_QWORD *)a3 = v35;
      *(_QWORD *)(a3 + 16) = v45;
      goto LABEL_41;
    }
LABEL_69:
    std::__throw_length_error("basic_string::_M_create");
  }
  v32 = (void (__fastcall *)(void **, _QWORD *, void **))v29[5];
  v71 = a2;
  v73.m128i_i16[0] = 261;
  v13 = a7;
  v70 = a1;
  v32(&src, a7, &v70);
  if ( (v69 & 1) == 0 )
  {
    v19 = *(_BYTE **)a3;
    v14 = a3 + 16;
    v20 = n;
    if ( *(_QWORD *)a3 == a3 + 16 )
      v21 = 15;
    else
      v21 = *(_QWORD *)(a3 + 16);
    if ( n > v21 )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_69;
      v42 = 2 * v21;
      if ( n < v42 )
      {
        v43 = v42 + 1;
        if ( v42 < 0 )
        {
          v43 = 0x8000000000000000LL;
          v42 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v43 = n + 1;
        v42 = n;
      }
      v19 = (_BYTE *)operator new(v43);
      v14 = a3 + 16;
      if ( a3 + 16 != *(_QWORD *)a3 )
      {
        v50 = v19;
        operator delete(*(void **)a3);
        v19 = v50;
      }
      *(_QWORD *)a3 = v19;
      *(_QWORD *)(a3 + 16) = v42;
    }
    if ( v20 )
    {
      v13 = src;
      if ( v20 == 1 )
      {
        v14 = *(unsigned __int8 *)src;
        *v19 = v14;
      }
      else
      {
        memcpy(v19, src, v20);
      }
      v19 = *(_BYTE **)a3;
    }
    *(_QWORD *)(a3 + 8) = v20;
    v19[v20] = 0;
    v22 = _mm_load_si128(&v63);
    *(_QWORD *)(a3 + 48) = v64;
    v23 = v65;
    *(__m128i *)(a3 + 32) = v22;
    *(_QWORD *)(a3 + 56) = v23;
    *(_QWORD *)(a3 + 64) = v66;
    *(_QWORD *)(a3 + 72) = v67;
    *(_BYTE *)(a3 + 80) = v68;
    if ( (v69 & 1) == 0 && src != &v62 )
      operator delete(src);
    goto LABEL_15;
  }
  v16 = (unsigned int)src;
  v14 = n;
LABEL_3:
  if ( v16 )
    return v53 & 0xFFFFFFFF00000000LL | v16;
LABEL_15:
  if ( (unsigned __int8)sub_2237190(a3, v13, v14, v15, v17) == v9 )
    return 0;
  if ( a5 )
  {
    v27 = *a5;
    *a5 = 0;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
  v28 = (unsigned __int8)sub_2237190(a3, v13, v24, v25, v26) != 0;
  std::_V2::generic_category((std::_V2 *)a3);
  return (v28 + 20) & 0x3F;
}

