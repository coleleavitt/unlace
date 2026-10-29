__int64 __fastcall sub_1C43250(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        _QWORD *a10,
        int a11,
        int a12,
        __int64 *a13,
        __int64 a14)
{
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 result; // rax
  __int64 v21; // r14
  size_t v22; // rax
  unsigned int v23; // eax
  size_t v24; // rax
  char *v25; // r15
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  char *v28; // rdi
  _OWORD *v29; // rsi
  __int64 *v30; // rdi
  __int64 v31; // r15
  _QWORD *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // r13
  __int64 v37; // r15
  __int16 v38; // ax
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  char *v41; // rax
  char *v42; // r11
  size_t v43; // r9
  char *v44; // r10
  __m128i *v45; // r8
  size_t v46; // rdx
  char *v47; // rdi
  unsigned int v48; // [rsp+0h] [rbp-168h]
  __int64 v49; // [rsp+0h] [rbp-168h]
  unsigned int v50; // [rsp+8h] [rbp-160h]
  unsigned int v51; // [rsp+Ch] [rbp-15Ch]
  unsigned __int64 v52; // [rsp+18h] [rbp-150h]
  __int64 v53; // [rsp+18h] [rbp-150h]
  __int64 v54; // [rsp+18h] [rbp-150h]
  size_t v55; // [rsp+28h] [rbp-140h]
  size_t v56; // [rsp+28h] [rbp-140h]
  size_t v57; // [rsp+28h] [rbp-140h]
  __m128i *v58; // [rsp+28h] [rbp-140h]
  size_t v59; // [rsp+28h] [rbp-140h]
  size_t v60; // [rsp+28h] [rbp-140h]
  char *v61; // [rsp+30h] [rbp-138h]
  char *v62; // [rsp+30h] [rbp-138h]
  void *v63; // [rsp+30h] [rbp-138h]
  size_t v64; // [rsp+38h] [rbp-130h]
  size_t v65; // [rsp+38h] [rbp-130h]
  unsigned __int64 v66; // [rsp+40h] [rbp-128h]
  char *v67; // [rsp+40h] [rbp-128h]
  unsigned __int64 v68; // [rsp+48h] [rbp-120h]
  unsigned __int64 v69; // [rsp+58h] [rbp-110h] BYREF
  void *src; // [rsp+60h] [rbp-108h] BYREF
  size_t n; // [rsp+68h] [rbp-100h]
  __int64 v72; // [rsp+70h] [rbp-F8h] BYREF
  void *v73; // [rsp+80h] [rbp-E8h] BYREF
  char *v74; // [rsp+88h] [rbp-E0h]
  __m128i v75; // [rsp+90h] [rbp-D8h] BYREF
  void *v76[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD v77[11]; // [rsp+B0h] [rbp-B8h] BYREF

  if ( !a6 )
    return 1;
  v48 = a4;
  v50 = a3;
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x10000) == 0 )
    {
      v17 = a10[1] & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)v17;
      if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) == 34
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
        && sub_F63050(v18, a2, a3, a4) )
      {
        if ( !a5 )
          return sub_1A89A90(*(__int64 **)(a1 + 736), v50, a6, a10, a11, a7, a8);
        v19 = sub_EEB7E0(a5, a2, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)v76, (__int64 *)(a1 + 8), v19, 0x1106u, 0);
        v73 = (void *)sub_EEC8C0(a5, a1 + 8, *(double *)a7.m128_u64);
        sub_1587DB0((__int64)v76, (__int64 *)&v73);
        sub_15F7200(v76);
        return 1;
      }
    }
  }
  if ( (*(_WORD *)a6 & 0x1FF) != 0xF5 )
    BUG();
  v21 = *(_QWORD *)(a6 + 8);
  if ( (v21 & 1) != 0 )
  {
    sub_168B9F0((__int64)v76, (__int64 *)(a1 + 8), *(_DWORD *)(a6 + 16), 0x144Eu, 0);
    sub_15F7200(v76);
    return 1;
  }
  if ( *(char *)(v21 + 28) < 0
    || !a10
    || (unsigned __int8)sub_1E534E0(a1, a10, 0)
    || v48 && (v22 = j__strlen("co_await"), !(unsigned __int8)sub_178C980(a1, a2, v48, "co_await", v22, (__m128i)a7)) )
  {
    sub_17A5050(a1, v21);
    return 1;
  }
  sub_D8B070(
    &src,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    *(unsigned __int16 *)(a2 + 12) >> 1);
  v23 = sub_EEB7E0((unsigned __int64)a10, (__int64)&vsnprintf, *(double *)a7.m128_u64);
  v73 = &v75;
  v51 = v23;
  v24 = j__strlen("__range");
  sub_1C32AD0(&v73, "__range", (__int64)&aRange_3[v24]);
  v25 = (char *)v73;
  v26 = (unsigned __int64)&v74[n];
  if ( v73 != &v75 )
  {
    v27 = v75.m128i_i64[0];
    if ( v26 <= v75.m128i_i64[0] )
      goto LABEL_17;
LABEL_43:
    if ( (v26 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v39 = 2 * v27;
    v54 = v39;
    if ( v26 < v39 )
    {
      v40 = v39 + 1;
      if ( v39 < 0 )
      {
        v40 = 0x8000000000000000LL;
        v54 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v54 = (__int64)&v74[n];
      v40 = v26 + 1;
    }
    v66 = (unsigned __int64)&v74[n];
    v64 = (size_t)v74;
    v61 = (char *)src;
    v57 = n;
    v41 = (char *)operator new(v40);
    v42 = (char *)v64;
    v43 = v57;
    v25 = v41;
    v44 = v61;
    v26 = v66;
    v45 = (__m128i *)v73;
    if ( v64 )
    {
      if ( v64 == 1 )
      {
        *v41 = *(_BYTE *)v73;
      }
      else
      {
        v46 = v64;
        v68 = v66;
        v67 = v61;
        v65 = v57;
        v62 = v42;
        v58 = (__m128i *)v73;
        memcpy(v41, v73, v46);
        v26 = v68;
        v44 = v67;
        v43 = v65;
        v42 = v62;
        v45 = v58;
      }
    }
    if ( v44 && v43 )
    {
      v47 = &v42[(_QWORD)v25];
      if ( v43 == 1 )
      {
        *v47 = *v44;
      }
      else
      {
        v63 = (void *)v26;
        v59 = (size_t)v45;
        memcpy(v47, v44, v43);
        v26 = (unsigned __int64)v63;
        v45 = (__m128i *)v59;
      }
    }
    if ( v45 != &v75 )
    {
      v60 = v26;
      operator delete(v45);
      v26 = v60;
    }
    v73 = v25;
    v75.m128i_i64[0] = v54;
    goto LABEL_20;
  }
  v27 = 15;
  if ( v26 > 0xF )
    goto LABEL_43;
LABEL_17:
  if ( n )
  {
    v28 = &v74[(_QWORD)v73];
    if ( n == 1 )
    {
      *v28 = *(_BYTE *)src;
      v25 = (char *)v73;
    }
    else
    {
      v52 = (unsigned __int64)&v74[n];
      memcpy(v28, src, n);
      v25 = (char *)v73;
      v26 = v52;
    }
  }
LABEL_20:
  v74 = (char *)v26;
  v25[v26] = 0;
  v29 = v73;
  v76[0] = v77;
  if ( v73 == &v75 )
  {
    a7 = (__m128)_mm_load_si128(&v75);
    v29 = v77;
    v77[0] = a7;
  }
  else
  {
    v76[0] = v73;
    *(_QWORD *)&v77[0] = v75.m128i_i64[0];
  }
  v30 = *(__int64 **)(a1 + 248);
  v73 = &v75;
  v76[1] = v74;
  v55 = (size_t)v74;
  v74 = nullptr;
  v75.m128i_i8[0] = 0;
  v31 = sub_A79400(v30);
  v53 = *(_QWORD *)(a1 + 544);
  v56 = sub_6F3470(*(_QWORD *)(a1 + 240) + 552LL, v29, v55);
  v32 = sub_A81910(*(_QWORD **)(a1 + 248), v31, v51);
  v33 = sub_B731A0(*(_QWORD *)(a1 + 248), v53, v51, v51, v56, v31, (__int64)v32, 0);
  *(_BYTE *)(v33 + 29) |= 2u;
  *(_BYTE *)(v33 + 98) |= 0x80u;
  v69 = v33;
  if ( v76[0] != v77 )
    operator delete(v76[0]);
  if ( v73 != &v75 )
    operator delete(v73);
  if ( (unsigned __int8)sub_1C3B150(
                          a1,
                          v69,
                          (unsigned __int64)a10,
                          v51,
                          0xEFAu,
                          *(double *)a7.m128_u64,
                          *(double *)a8.m128_u64) )
    goto LABEL_32;
  v36 = sub_17B2ED0(a1, (__int64 *)&v69, 1u, v34, v35, a7);
  if ( !v36 )
    goto LABEL_32;
  v37 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  v38 = *(_WORD *)v37 & 0xFE00;
  LOBYTE(v38) = -11;
  *(_WORD *)v37 = v38;
  if ( unk_2CD7484 )
    sub_EE9B50(245);
  *(_QWORD *)(v37 + 8) = v36;
  *(_DWORD *)(v37 + 16) = v51;
  *(_DWORD *)(v37 + 20) = v51;
  if ( v37 == 1
    || (result = sub_1C415E0(
                   a1,
                   v50,
                   v48,
                   a5,
                   a9,
                   v37 & 0xFFFFFFFFFFFFFFFELL,
                   a7,
                   a8,
                   0,
                   0,
                   0,
                   0,
                   a6,
                   a11,
                   a12,
                   a13,
                   a14),
        result == 1) )
  {
LABEL_32:
    sub_17A5050(a1, v21);
    result = 1;
  }
  if ( src != &v72 )
  {
    v49 = result;
    operator delete(src);
    return v49;
  }
  return result;
}
