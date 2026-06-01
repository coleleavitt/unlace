void __fastcall sub_1CC6660(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, double a6, __m128 si128)
{
  const __m128i *v7; // rdx
  __int64 *v9; // r12
  __int16 v12; // ax
  void *v13; // rcx
  void *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r13
  unsigned __int64 *v20; // rbp
  unsigned __int64 *v21; // rbx
  unsigned __int64 v22; // rdi
  void *v23; // rcx
  void *v24; // rax
  __m128i v25; // xmm2
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __m128i v34; // xmm3
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned __int64 *v39; // rbp
  unsigned __int64 *v40; // r14
  unsigned __int64 v41; // rdi
  __int64 *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  void *v47; // rax
  _QWORD *v48; // rax
  void **v49; // rcx
  __m128i v50; // xmm4
  int v51; // eax
  _BOOL8 v53; // [rsp+8h] [rbp-1F8h]
  int v54[2]; // [rsp+8h] [rbp-1F8h]
  void **v55; // [rsp+10h] [rbp-1F0h]
  int v56[2]; // [rsp+20h] [rbp-1E0h] BYREF
  int v57[2]; // [rsp+2Ch] [rbp-1D4h] BYREF
  char v58; // [rsp+34h] [rbp-1CCh]
  int v59[4]; // [rsp+38h] [rbp-1C8h] BYREF
  int v60[2]; // [rsp+48h] [rbp-1B8h]
  void *v61[2]; // [rsp+58h] [rbp-1A8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-198h] BYREF
  int v63[2]; // [rsp+78h] [rbp-188h] BYREF
  int v64[2]; // [rsp+80h] [rbp-180h]
  int v65[4]; // [rsp+88h] [rbp-178h]
  int v66[2]; // [rsp+98h] [rbp-168h]
  int v67[4]; // [rsp+A8h] [rbp-158h] BYREF
  void *v68[2]; // [rsp+B8h] [rbp-148h]
  int v69[4]; // [rsp+C8h] [rbp-138h]
  int v70[2]; // [rsp+D8h] [rbp-128h] BYREF
  void *ptr; // [rsp+E8h] [rbp-118h]
  int v72; // [rsp+F0h] [rbp-110h]
  _BYTE v73[32]; // [rsp+F8h] [rbp-108h] BYREF
  void *v74; // [rsp+118h] [rbp-E8h]
  unsigned __int64 *v75; // [rsp+120h] [rbp-E0h]
  void *v76[2]; // [rsp+138h] [rbp-C8h] BYREF
  void *v77; // [rsp+148h] [rbp-B8h] BYREF
  unsigned __int8 *v78; // [rsp+158h] [rbp-A8h] BYREF
  char v79; // [rsp+1B0h] [rbp-50h]
  unsigned int v80; // [rsp+1B8h] [rbp-48h]
  char v81; // [rsp+1BCh] [rbp-44h]

  if ( a3 == 1 )
    return;
  v7 = (const __m128i *)(a3 & 0xFFFFFFFFFFFFFFFELL);
  v9 = (__int64 *)v7;
  v12 = v7->m128i_i16[0] & 0x1FF;
  *(_QWORD *)v59 = 0;
  v59[2] = 0;
  *(_QWORD *)v60 = 0;
  *(_OWORD *)v67 = 0;
  *(_OWORD *)v68 = 0;
  *(_OWORD *)v69 = 0;
  if ( v12 == 71 )
  {
    v13 = *(void **)(v7[1].m128i_i64[0] + 40);
    v14 = (void *)v7[1].m128i_i64[1];
    LODWORD(v76[1]) = v7->m128i_i32[1];
    v76[0] = v13;
    si128 = (__m128)_mm_load_si128((const __m128i *)v76);
    v77 = v14;
    *(__m128 *)v59 = si128;
    *(_QWORD *)v60 = v14;
    if ( (v7->m128i_i64[0] & 0x80000) != 0 )
    {
      v15 = v7[2].m128i_i64[0];
      v16 = v7[2].m128i_i64[1];
    }
    else
    {
      v16 = 0;
      v15 = 0;
    }
    sub_15AB8B0((__int64)v67, v15, v16);
    if ( (*v9 & 0x200000) != 0 )
    {
      v17 = 0;
      v18 = 0;
      v19 = v9[2 * ((*v9 & 0x80000) != 0) + 4];
    }
    else
    {
      v19 = v9[2];
      v17 = 0;
      v18 = 0;
    }
  }
  else
  {
    if ( v12 != 46 )
    {
      if ( v12 == 69 )
      {
        v34 = _mm_loadu_si128(v7 + 2);
        v35 = v7[3].m128i_i64[0];
        v36 = v7[1].m128i_i64[1];
        v37 = v9[2];
        *(__m128i *)v59 = v34;
      }
      else
      {
        v50 = _mm_loadu_si128(v7 + 3);
        v35 = v7[4].m128i_i64[0];
        v36 = v7[2].m128i_i64[1];
        v37 = v9[4];
        *(__m128i *)v59 = v50;
      }
      *(_QWORD *)v60 = v35;
      sub_15AB8B0((__int64)v67, v37, v36);
      sub_168B9F0((__int64)v76, (__int64 *)(a1 + 8), v59[2], 0x1404u, 0);
      *(_QWORD *)v63 = *(_QWORD *)v59;
      v38 = sub_15894B0((__int64)v76, (__int64 *)v63);
      v70[0] = a4;
      v70[1] = a5;
      sub_1587DB0(v38, (__int64 *)v70);
      sub_15F7200(v76);
      if ( !HIDWORD(v68[1]) )
        return;
LABEL_44:
      free(v68[0]);
      return;
    }
    v23 = *(void **)(v7[1].m128i_i64[1] + 40);
    v24 = (void *)v7[2].m128i_i64[0];
    LODWORD(v76[1]) = v7[2].m128i_i32[2];
    v76[0] = v23;
    v25 = _mm_load_si128((const __m128i *)v76);
    v77 = v24;
    *(__m128i *)v59 = v25;
    *(_QWORD *)v60 = v24;
    if ( (v7->m128i_i64[0] & 0x100000) != 0 )
    {
      v26 = v7[3].m128i_i64[0];
      v27 = v7[3].m128i_i64[1];
    }
    else
    {
      v27 = 0;
      v26 = 0;
    }
    sub_15AB8B0((__int64)v67, v26, v27);
    v32 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v9[2] + 8) & 0xFFFFFFFFFFFFFFF0LL), v26, v28, v29, v30, v31);
    v19 = v9[3];
    v18 = 3;
    v17 = (unsigned __int64)v32;
    v33 = v32 + 8;
    if ( v17 )
      v17 = (unsigned __int64)v33;
  }
  *(_QWORD *)v66 = a1;
  *(_QWORD *)v56 = *(_QWORD *)v59;
  *(_QWORD *)v63 = &off_2BE43A0;
  *(_QWORD *)v64 = 16842752;
  *(_OWORD *)v65 = 0;
  sub_1A6BD60(
    v70,
    a1,
    (const __m128i *)v59,
    v18,
    a2,
    (__m128i *)v67,
    0.0,
    *(double *)si128.m128_u64,
    (__int64)v63,
    1,
    v17,
    0,
    0,
    1u);
  if ( *(_QWORD *)v70 && v72 && (!*(_QWORD *)ptr || sub_1CB3DC0(*(_QWORD *)ptr, 1, 1) || v72 && !*(_QWORD *)ptr) )
  {
    if ( v17 )
    {
      sub_1A39F10(v61, (__int64 *)v70, *(_QWORD *)(a1 + 232));
      if ( v73[28] )
      {
        sub_B86A00((__int64)v76, (__int64 *)v56);
        v49 = (void **)v76[0];
        if ( v76[1] == v61[1] )
        {
          v55 = (void **)v76[0];
          v51 = sub_9B48C0(v76[0], v61[0], (size_t)v76[1]);
          v49 = v55;
          v53 = v51 == 0;
        }
        else
        {
          v53 = 0;
        }
        if ( v49 != &v77 )
          operator delete(v49);
      }
      else
      {
        v53 = 0;
      }
      sub_168B9B0((__int64)v76, a1 + 8, 4305);
      sub_AE9DF0((unsigned __int8 **)v76, *(__int64 *)v56, 9u);
      sub_AE9DF0((unsigned __int8 **)v76, v17, 0xCu);
      sub_AE9DF0((unsigned __int8 **)v76, v53, 2u);
      v58 = 1;
      *(_QWORD *)v57 = *(_QWORD *)v67;
      sub_AEC610((__int64 *)v76, (__int64 *)v57);
      sub_1A60AF0(a1, (__int64)v70, v76, 0);
      if ( v76[0] && v76[1] )
        sub_1580C40((unsigned __int64)v76[1], (unsigned __int64)v76[0]);
      if ( v61[0] != &v62 )
        operator delete(v61[0]);
    }
    else
    {
      sub_168B9B0((__int64)v76, a1 + 8, 4307);
      sub_AE9DF0((unsigned __int8 **)v76, *(__int64 *)v56, 9u);
      sub_1A60AF0(a1, (__int64)v70, v76, 0);
      if ( v76[0] && v76[1] )
        sub_1580C40((unsigned __int64)v76[1], (unsigned __int64)v76[0]);
    }
    if ( v19 )
    {
      sub_168B9F0((__int64)v76, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x17ECu, 0);
      sub_15F7200(v76);
    }
    v20 = v75;
    v21 = (unsigned __int64 *)v74;
    if ( v75 != v74 )
    {
      do
      {
        if ( *v21 )
        {
          v22 = v21[1];
          if ( v22 )
            sub_1580C40(v22, *v21);
        }
        v21 += 3;
      }
      while ( v20 != v21 );
      v21 = (unsigned __int64 *)v74;
    }
    if ( v21 )
      operator delete(v21);
    if ( ptr != v73 )
      free(ptr);
  }
  else
  {
    v39 = v75;
    v40 = (unsigned __int64 *)v74;
    if ( v75 != v74 )
    {
      do
      {
        if ( *v40 )
        {
          v41 = v40[1];
          if ( v41 )
            sub_1580C40(v41, *v40);
        }
        v40 += 3;
      }
      while ( v39 != v40 );
      v40 = (unsigned __int64 *)v74;
    }
    if ( v40 )
      operator delete(v40);
    if ( ptr != v73 )
      free(ptr);
    v42 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v76, v42, v59[2], 0x10D2u, 0);
    if ( v79 )
    {
      sub_AE9DF0(&v78, *(__int64 *)v56, 9u);
    }
    else if ( v81 )
    {
      v43 = sub_168B9E0(v76);
      v47 = v77;
      if ( v77 )
      {
        *(_QWORD *)v54 = v43;
        v47 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v77 + 32LL))(v77);
        v43 = *(_QWORD *)v54;
      }
      *(_QWORD *)v70 = v47;
      v48 = sub_1587BC0(v43, (__int64 *)v70, v43, v44, v45, v46);
      sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v80 + 8), *(__int64 *)v56, 9u);
    }
    v70[0] = a4;
    v70[1] = a5;
    sub_1587DB0((__int64)v76, (__int64 *)v70);
    sub_15F7200(v76);
    if ( v19 )
    {
      sub_168B9F0((__int64)v76, v42, *(_DWORD *)(v19 + 24), 0x17ECu, 0);
      sub_15F7200(v76);
    }
  }
  if ( HIDWORD(v68[1]) )
    goto LABEL_44;
}
