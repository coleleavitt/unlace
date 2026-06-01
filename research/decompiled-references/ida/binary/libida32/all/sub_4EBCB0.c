__int64 __fastcall sub_4EBCB0(__int64 *a1, __int64 a2, __int32 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v5; // edx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // edx
  unsigned __int64 (__fastcall *v14)(__int64, int); // rax
  void *v15; // rdi
  __m128i v16; // xmm0
  void *v17; // r15
  char v18; // al
  void *v19; // rdi
  __m128i v20; // xmm0
  __m128i *v21; // r15
  int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int v27; // edx
  unsigned __int64 (__fastcall *v28)(__int64, int); // rax
  void *v29; // rdi
  void *v30; // r12
  __m128i v31; // xmm0
  char v32; // al
  void *v33; // rdi
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // edx
  unsigned __int64 (__fastcall *v39)(__int64, int); // rax
  void *v40; // rdi
  void *v41; // r12
  __m128i v42; // xmm0
  char v43; // al
  void *v44; // rdi
  int v45; // r8d
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 (__fastcall *v50)(__int64, int); // rax
  void *v51; // rdi
  void *v52; // rbx
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  char v55; // al
  void *v56; // rdi
  char v58; // al
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __m128i v63; // [rsp+0h] [rbp-90h] BYREF
  void **p_ptr; // [rsp+18h] [rbp-78h]
  __m128i v65; // [rsp+20h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-60h] BYREF
  __m128i v67; // [rsp+38h] [rbp-58h] BYREF
  char v68; // [rsp+48h] [rbp-48h]
  unsigned __int64 v69; // [rsp+58h] [rbp-38h]

  v65.m128i_i32[0] = a3;
  v69 = __readfsqword(0x28u);
  v5 = *a4;
  if ( *a4 == a4[1] )
    return 0xFFFFFFFFLL;
  v9 = 0x10000;
  v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[1] + 32) + 8LL) - 1);
  if ( (unsigned int)v10 <= 7 )
  {
    v9 = dword_238A060[v10];
    if ( v9 != 0x10000 )
    {
      v9 |= v5;
      if ( v5 >= 0x10000 )
        v9 = 0x10000;
    }
  }
  v11 = *a1;
  v68 = 0;
  LODWORD(v12) = -1;
  v67 = 0;
  v13 = v65.m128i_i32[0];
  ptr = nullptr;
  v14 = *(unsigned __int64 (__fastcall **)(__int64, int))(v11 + 16);
  if ( v14 != sub_4DC6B0 )
  {
    LODWORD(p_ptr) = v9;
    v59 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v14)(a1, v65.m128i_u32[0], 0, 0xFFFFFFFFLL);
    v9 = (int)p_ptr;
    v13 = v59;
    v12 = HIDWORD(v59);
  }
  p_ptr = &ptr;
  reg_finder_find((int)a1, (int)&ptr, v13, v12, v9, 0, a5);
  v15 = *(void **)a2;
  v16 = _mm_loadu_si128(&v67);
  v67 = 0;
  v17 = ptr;
  ptr = nullptr;
  if ( v15 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v63 = v16;
    qfree(v15);
    v18 = v68;
    v19 = ptr;
    *(_QWORD *)a2 = v17;
    v20 = _mm_load_si128(&v63);
    v21 = (__m128i *)(a2 + 8);
    *(_BYTE *)(a2 + 24) = v18;
    *(__m128i *)(a2 + 8) = v20;
    if ( v19 )
    {
      v67.m128i_i64[0] = 0;
      qfree(v19);
      v18 = *(_BYTE *)(a2 + 24);
    }
    if ( (unsigned __int8)(v18 - 10) <= 3u )
      return 0;
  }
  else
  {
    v58 = v68;
    *(_QWORD *)a2 = v17;
    v21 = (__m128i *)(a2 + 8);
    *(__m128i *)(a2 + 8) = v16;
    *(_BYTE *)(a2 + 24) = v58;
    if ( (unsigned __int8)(v58 - 10) <= 3u )
      return 0;
  }
  v22 = 0x10000;
  v23 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[1] + 32) + 8LL) - 1);
  if ( (unsigned int)v23 <= 7 )
  {
    v22 = dword_238A060[v23];
    if ( v22 != 0x10000 )
    {
      v24 = a4[1];
      v22 |= v24;
      if ( v24 >= 0x10000 )
        v22 = 0x10000;
    }
  }
  v25 = *a1;
  v68 = 0;
  LODWORD(v26) = -1;
  v67 = 0;
  v27 = v65.m128i_i32[0];
  ptr = nullptr;
  v28 = *(unsigned __int64 (__fastcall **)(__int64, int))(v25 + 16);
  if ( v28 != sub_4DC6B0 )
  {
    v63.m128i_i32[0] = v22;
    v60 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v28)(a1, v65.m128i_u32[0], 0, 0xFFFFFFFFLL);
    v22 = v63.m128i_i32[0];
    v27 = v60;
    v26 = HIDWORD(v60);
  }
  reg_finder_find((int)a1, (int)p_ptr, v27, v26, v22, 0, a5);
  v29 = *(void **)a2;
  v30 = ptr;
  ptr = nullptr;
  v31 = _mm_loadu_si128(&v67);
  v67 = 0;
  if ( v29 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v63 = v31;
    qfree(v29);
    v32 = v68;
    v33 = ptr;
    *(_QWORD *)a2 = v30;
    *v21 = _mm_load_si128(&v63);
    *(_BYTE *)(a2 + 24) = v32;
    if ( v33 )
    {
      v67.m128i_i64[0] = 0;
      qfree(v33);
      v32 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v32 = v68;
    *(_QWORD *)a2 = v30;
    *v21 = v31;
    *(_BYTE *)(a2 + 24) = v32;
  }
  if ( (unsigned __int8)(v32 - 10) > 3u )
  {
    v34 = 0x10000;
    v35 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[1] + 32) + 8LL) - 1);
    if ( (unsigned int)v35 <= 7 )
    {
      v34 = dword_238A060[v35];
      if ( v34 != 0x10000 )
      {
        v34 |= *a4;
        if ( *a4 >= 0x10000 )
          v34 = 0x10000;
      }
    }
    v36 = *a1;
    v68 = 0;
    LODWORD(v37) = -1;
    v67 = 0;
    v38 = v65.m128i_i32[0];
    ptr = nullptr;
    v39 = *(unsigned __int64 (__fastcall **)(__int64, int))(v36 + 16);
    if ( v39 != sub_4DC6B0 )
    {
      v63.m128i_i32[0] = v34;
      v61 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v39)(a1, v65.m128i_u32[0], 0, 0xFFFFFFFFLL);
      v34 = v63.m128i_i32[0];
      v38 = v61;
      v37 = HIDWORD(v61);
    }
    reg_finder_find((int)a1, (int)p_ptr, v38, v37, v34, 0, 0);
    v40 = *(void **)a2;
    v41 = ptr;
    ptr = nullptr;
    v42 = _mm_loadu_si128(&v67);
    v67 = 0;
    if ( v40 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v63 = v42;
      qfree(v40);
      v43 = v68;
      v44 = ptr;
      *(_QWORD *)a2 = v41;
      *v21 = _mm_load_si128(&v63);
      *(_BYTE *)(a2 + 24) = v43;
      if ( v44 )
      {
        v67.m128i_i64[0] = 0;
        qfree(v44);
        v43 = *(_BYTE *)(a2 + 24);
      }
    }
    else
    {
      v43 = v68;
      *(_QWORD *)a2 = v41;
      *v21 = v42;
      *(_BYTE *)(a2 + 24) = v43;
    }
    if ( (unsigned __int8)(v43 - 10) > 3u )
    {
      v45 = 0x10000;
      v46 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[1] + 32) + 8LL) - 1);
      if ( (unsigned int)v46 <= 7 )
      {
        v45 = dword_238A060[v46];
        if ( v45 != 0x10000 )
        {
          v47 = a4[1];
          v45 |= v47;
          if ( v47 >= 0x10000 )
            v45 = 0x10000;
        }
      }
      v48 = *a1;
      v68 = 0;
      LODWORD(v49) = -1;
      ptr = nullptr;
      v67 = 0;
      v50 = *(unsigned __int64 (__fastcall **)(__int64, int))(v48 + 16);
      if ( v50 != sub_4DC6B0 )
      {
        v63.m128i_i32[0] = v45;
        v62 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v50)(a1, v65.m128i_u32[0], 0, 0xFFFFFFFFLL);
        v65.m128i_i32[0] = v62;
        v45 = v63.m128i_i32[0];
        v49 = HIDWORD(v62);
      }
      reg_finder_find((int)a1, (int)p_ptr, v65.m128i_i32[0], v49, v45, 0, 0);
      v51 = *(void **)a2;
      v52 = ptr;
      ptr = nullptr;
      v53 = _mm_loadu_si128(&v67);
      v67 = 0;
      if ( v51 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v65 = v53;
        qfree(v51);
        v54 = _mm_load_si128(&v65);
        v55 = v68;
        *(_QWORD *)a2 = v52;
        v56 = ptr;
        *v21 = v54;
        *(_BYTE *)(a2 + 24) = v55;
        if ( v56 )
        {
          v67.m128i_i64[0] = 0;
          qfree(v56);
          v55 = *(_BYTE *)(a2 + 24);
        }
      }
      else
      {
        v55 = v68;
        *(_QWORD *)a2 = v52;
        *v21 = v53;
        *(_BYTE *)(a2 + 24) = v55;
      }
      if ( (unsigned __int8)(v55 - 10) > 3u )
        return 0xFFFFFFFFLL;
      return 1;
    }
    return 0;
  }
  return 1;
}

