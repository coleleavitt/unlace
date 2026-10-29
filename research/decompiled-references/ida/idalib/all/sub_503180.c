__int64 __fastcall sub_503180(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v5; // edx
  Elf64_Sym *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  void *v17; // rdi
  __m128i v18; // xmm0
  void *v19; // r15
  char v20; // al
  void *v21; // rdi
  __m128i v22; // xmm0
  __m128i *v23; // r15
  Elf64_Sym *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  unsigned __int64 v31; // rsi
  void *v32; // rdi
  void *v33; // r12
  __m128i v34; // xmm0
  char v35; // al
  void *v36; // rdi
  Elf64_Sym *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 (__fastcall *v42)(__int64, __int64); // rax
  unsigned __int64 v43; // rsi
  void *v44; // rdi
  void *v45; // r12
  __m128i v46; // xmm0
  char v47; // al
  void *v48; // rdi
  Elf64_Sym *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 (__fastcall *v55)(__int64, __int64); // rax
  unsigned __int64 v56; // rsi
  void *v57; // rdi
  void *v58; // rbx
  __m128i v59; // xmm1
  __m128i v60; // xmm1
  char v61; // al
  void *v62; // rdi
  char v64; // al
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  __m128i v73; // [rsp+0h] [rbp-90h] BYREF
  void **p_ptr; // [rsp+18h] [rbp-78h]
  __m128i v75; // [rsp+20h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-60h] BYREF
  __m128i v77; // [rsp+38h] [rbp-58h] BYREF
  char v78; // [rsp+48h] [rbp-48h]
  unsigned __int64 v79; // [rsp+58h] [rbp-38h]

  v75.m128i_i64[0] = a3;
  v79 = __readfsqword(0x28u);
  v5 = *a4;
  if ( *a4 == a4[1] )
    return 0xFFFFFFFFLL;
  v10 = &stru_10000;
  v11 = *(_QWORD *)(a1[1] + 32);
  v12 = (unsigned int)(*(_DWORD *)(v11 + 24) - 1);
  if ( (unsigned int)v12 <= 7 )
  {
    LODWORD(v10) = dword_23AE1C0[v12];
    if ( (_DWORD)v10 != (_DWORD)&stru_10000 )
    {
      LODWORD(v10) = v5 | (unsigned int)v10;
      if ( v5 >= (unsigned int)&stru_10000 )
        v10 = &stru_10000;
    }
  }
  v13 = *a1;
  v78 = 0;
  ptr = nullptr;
  v77 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(v13 + 16);
  v15 = *(_QWORD *)(v11 + 16) & v75.m128i_i64[0];
  v16 = -1;
  if ( v14 != sub_4F3C60 )
  {
    LODWORD(p_ptr) = (_DWORD)v10;
    v65 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64, _QWORD, __int64))v14)(a1, v15, 0, -1);
    LODWORD(v10) = (_DWORD)p_ptr;
    v15 = v65;
    v16 = v66;
  }
  p_ptr = &ptr;
  reg_finder_find((__int64)a1, (__int64)&ptr, v15, v16, (unsigned __int32)v10, 0, a5);
  v17 = *(void **)a2;
  v18 = _mm_loadu_si128(&v77);
  v77 = 0;
  v19 = ptr;
  ptr = nullptr;
  if ( v17 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v73 = v18;
    qfree(v17);
    v20 = v78;
    v21 = ptr;
    *(_QWORD *)a2 = v19;
    v22 = _mm_load_si128(&v73);
    v23 = (__m128i *)(a2 + 8);
    *(_BYTE *)(a2 + 24) = v20;
    *(__m128i *)(a2 + 8) = v22;
    if ( v21 )
    {
      v77.m128i_i64[0] = 0;
      qfree(v21);
      v20 = *(_BYTE *)(a2 + 24);
    }
    if ( (unsigned __int8)(v20 - 10) <= 3u )
      return 0;
  }
  else
  {
    v64 = v78;
    *(_QWORD *)a2 = v19;
    v23 = (__m128i *)(a2 + 8);
    *(__m128i *)(a2 + 8) = v18;
    *(_BYTE *)(a2 + 24) = v64;
    if ( (unsigned __int8)(v64 - 10) <= 3u )
      return 0;
  }
  v24 = &stru_10000;
  v25 = *(_QWORD *)(a1[1] + 32);
  v26 = (unsigned int)(*(_DWORD *)(v25 + 24) - 1);
  if ( (unsigned int)v26 <= 7 )
  {
    LODWORD(v24) = dword_23AE1C0[v26];
    if ( (_DWORD)v24 != (_DWORD)&stru_10000 )
    {
      v27 = a4[1];
      LODWORD(v24) = v27 | (unsigned int)v24;
      if ( v27 >= (unsigned int)&stru_10000 )
        v24 = &stru_10000;
    }
  }
  v28 = *a1;
  v78 = 0;
  ptr = nullptr;
  v29 = -1;
  v77 = 0;
  v30 = *(__int64 (__fastcall **)(__int64, __int64))(v28 + 16);
  v31 = *(_QWORD *)(v25 + 16) & v75.m128i_i64[0];
  if ( v30 != sub_4F3C60 )
  {
    v73.m128i_i32[0] = (int)v24;
    v67 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64, _QWORD, __int64))v30)(a1, v31, 0, -1);
    LODWORD(v24) = v73.m128i_i32[0];
    v31 = v67;
    v29 = v68;
  }
  reg_finder_find((__int64)a1, (__int64)p_ptr, v31, v29, (unsigned __int32)v24, 0, a5);
  v32 = *(void **)a2;
  v33 = ptr;
  ptr = nullptr;
  v34 = _mm_loadu_si128(&v77);
  v77 = 0;
  if ( v32 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v73 = v34;
    qfree(v32);
    v35 = v78;
    v36 = ptr;
    *(_QWORD *)a2 = v33;
    *v23 = _mm_load_si128(&v73);
    *(_BYTE *)(a2 + 24) = v35;
    if ( v36 )
    {
      v77.m128i_i64[0] = 0;
      qfree(v36);
      v35 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v35 = v78;
    *(_QWORD *)a2 = v33;
    *v23 = v34;
    *(_BYTE *)(a2 + 24) = v35;
  }
  if ( (unsigned __int8)(v35 - 10) > 3u )
  {
    v37 = &stru_10000;
    v38 = *(_QWORD *)(a1[1] + 32);
    v39 = (unsigned int)(*(_DWORD *)(v38 + 24) - 1);
    if ( (unsigned int)v39 <= 7 )
    {
      LODWORD(v37) = dword_23AE1C0[v39];
      if ( (_DWORD)v37 != (_DWORD)&stru_10000 )
      {
        LODWORD(v37) = *a4 | (unsigned int)v37;
        if ( *a4 >= (unsigned int)&stru_10000 )
          v37 = &stru_10000;
      }
    }
    v40 = *a1;
    v78 = 0;
    ptr = nullptr;
    v41 = -1;
    v77 = 0;
    v42 = *(__int64 (__fastcall **)(__int64, __int64))(v40 + 16);
    v43 = *(_QWORD *)(v38 + 16) & v75.m128i_i64[0];
    if ( v42 != sub_4F3C60 )
    {
      v73.m128i_i32[0] = (int)v37;
      v69 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64, _QWORD, __int64))v42)(a1, v43, 0, -1);
      LODWORD(v37) = v73.m128i_i32[0];
      v43 = v69;
      v41 = v70;
    }
    reg_finder_find((__int64)a1, (__int64)p_ptr, v43, v41, (unsigned __int32)v37, 0, 0);
    v44 = *(void **)a2;
    v45 = ptr;
    ptr = nullptr;
    v46 = _mm_loadu_si128(&v77);
    v77 = 0;
    if ( v44 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v73 = v46;
      qfree(v44);
      v47 = v78;
      v48 = ptr;
      *(_QWORD *)a2 = v45;
      *v23 = _mm_load_si128(&v73);
      *(_BYTE *)(a2 + 24) = v47;
      if ( v48 )
      {
        v77.m128i_i64[0] = 0;
        qfree(v48);
        v47 = *(_BYTE *)(a2 + 24);
      }
    }
    else
    {
      v47 = v78;
      *(_QWORD *)a2 = v45;
      *v23 = v46;
      *(_BYTE *)(a2 + 24) = v47;
    }
    if ( (unsigned __int8)(v47 - 10) > 3u )
    {
      v49 = &stru_10000;
      v50 = *(_QWORD *)(a1[1] + 32);
      v51 = (unsigned int)(*(_DWORD *)(v50 + 24) - 1);
      if ( (unsigned int)v51 <= 7 )
      {
        LODWORD(v49) = dword_23AE1C0[v51];
        if ( (_DWORD)v49 != (_DWORD)&stru_10000 )
        {
          v52 = a4[1];
          LODWORD(v49) = v52 | (unsigned int)v49;
          if ( v52 >= (unsigned int)&stru_10000 )
            v49 = &stru_10000;
        }
      }
      v53 = *a1;
      v78 = 0;
      ptr = nullptr;
      v54 = -1;
      v77 = 0;
      v55 = *(__int64 (__fastcall **)(__int64, __int64))(v53 + 16);
      v56 = *(_QWORD *)(v50 + 16) & v75.m128i_i64[0];
      if ( v55 != sub_4F3C60 )
      {
        v75.m128i_i32[0] = (int)v49;
        v71 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64, _QWORD, __int64))v55)(a1, v56, 0, -1);
        LODWORD(v49) = v75.m128i_i32[0];
        v56 = v71;
        v54 = v72;
      }
      reg_finder_find((__int64)a1, (__int64)p_ptr, v56, v54, (unsigned __int32)v49, 0, 0);
      v57 = *(void **)a2;
      v58 = ptr;
      ptr = nullptr;
      v59 = _mm_loadu_si128(&v77);
      v77 = 0;
      if ( v57 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v75 = v59;
        qfree(v57);
        v60 = _mm_load_si128(&v75);
        v61 = v78;
        *(_QWORD *)a2 = v58;
        v62 = ptr;
        *v23 = v60;
        *(_BYTE *)(a2 + 24) = v61;
        if ( v62 )
        {
          v77.m128i_i64[0] = 0;
          qfree(v62);
          v61 = *(_BYTE *)(a2 + 24);
        }
      }
      else
      {
        v61 = v78;
        *(_QWORD *)a2 = v58;
        *v23 = v59;
        *(_BYTE *)(a2 + 24) = v61;
      }
      if ( (unsigned __int8)(v61 - 10) > 3u )
        return 0xFFFFFFFFLL;
      return 1;
    }
    return 0;
  }
  return 1;
}
