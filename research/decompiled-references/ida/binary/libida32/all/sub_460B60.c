unsigned __int64 __fastcall sub_460B60(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  void *v14; // rbp
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-1C8h] BYREF
  void *v24; // [rsp+10h] [rbp-1B8h] BYREF
  __m128i v25; // [rsp+18h] [rbp-1B0h] BYREF
  int v26[2]; // [rsp+30h] [rbp-198h] BYREF
  void *v27; // [rsp+38h] [rbp-190h]
  __int128 v28; // [rsp+40h] [rbp-188h]
  void *v29; // [rsp+50h] [rbp-178h]
  __int128 v30; // [rsp+58h] [rbp-170h]
  void *v31; // [rsp+68h] [rbp-160h]
  __int128 v32; // [rsp+70h] [rbp-158h]
  void *v33; // [rsp+80h] [rbp-148h]
  __int128 v34; // [rsp+88h] [rbp-140h]
  void *v35; // [rsp+98h] [rbp-130h]
  __int128 v36; // [rsp+A0h] [rbp-128h]
  int v37; // [rsp+B0h] [rbp-118h]
  void *v38; // [rsp+B8h] [rbp-110h]
  __int128 v39; // [rsp+C0h] [rbp-108h]
  void *v40; // [rsp+D0h] [rbp-F8h]
  __int128 v41; // [rsp+D8h] [rbp-F0h]
  void *v42; // [rsp+E8h] [rbp-E0h]
  __int128 v43; // [rsp+F0h] [rbp-D8h]
  void *v44; // [rsp+100h] [rbp-C8h]
  __int128 v45; // [rsp+108h] [rbp-C0h]
  int v46; // [rsp+118h] [rbp-B0h]
  void *v47; // [rsp+120h] [rbp-A8h]
  __int128 v48; // [rsp+128h] [rbp-A0h]
  void *v49; // [rsp+138h] [rbp-90h]
  __int128 v50; // [rsp+140h] [rbp-88h]
  void *v51; // [rsp+150h] [rbp-78h]
  __int128 v52; // [rsp+158h] [rbp-70h]
  void *ptr; // [rsp+168h] [rbp-60h]
  __int128 v54; // [rsp+170h] [rbp-58h]
  int v55; // [rsp+180h] [rbp-48h]
  int v56; // [rsp+188h] [rbp-40h]
  int v57; // [rsp+18Ch] [rbp-3Ch]
  int v58; // [rsp+190h] [rbp-38h]
  unsigned __int64 v59; // [rsp+198h] [rbp-30h]

  v4 = *a1;
  v59 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3D58E0 )
    v7 = (unsigned __int64 *)(a1 + 2);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a3, 0) )
  {
    v9 = *((_DWORD *)a1 + 3);
    v27 = nullptr;
    v29 = nullptr;
    *(_QWORD *)v26 = 0xFFFFFFFF00000000LL;
    v31 = nullptr;
    v33 = nullptr;
    v35 = nullptr;
    v37 = -1;
    v38 = nullptr;
    v40 = nullptr;
    v42 = nullptr;
    v44 = nullptr;
    v46 = -1;
    v47 = nullptr;
    v49 = nullptr;
    v51 = nullptr;
    ptr = nullptr;
    v55 = -1;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v45 = 0;
    v48 = 0;
    v50 = 0;
    v52 = 0;
    v54 = 0;
    v56 = -1;
    v10 = a1[4];
    v57 = v9;
    v58 = -1;
    sub_45B310(v26, v10, a3);
    if ( (v26[0] & ~unk_2389830) != 0 )
    {
      sub_45C060((__int64)&v24, (unsigned int *)v26);
      v11 = a2[1];
      v12 = *a2;
      v13 = a2[2];
      v14 = v24;
      v15 = v11 + 1;
      if ( (unsigned __int64)&v24 >= *a2 && (unsigned __int64)&v24 < v12 + 24 * v13 )
      {
        v18 = _mm_loadl_epi64(&v25);
        v19 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
        v24 = nullptr;
        v25 = 0;
        if ( v13 < v15 )
        {
          v23.m128i_i64[1] = v19.m128i_i64[0];
          v23.m128i_i64[0] = v18.m128i_i64[0];
          v22 = qvector_reserve(a2, v12, v11 + 1, 24);
          *a2 = v22;
          v12 = v22;
          v19 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
          v11 = a2[1];
          v18 = _mm_loadl_epi64(&v23);
        }
        v20 = v12 + 24 * v11;
        *(_QWORD *)v20 = v14;
        *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v18, v19);
      }
      else
      {
        if ( v13 < v15 )
        {
          v21 = qvector_reserve(a2, v12, v11 + 1, 24);
          *a2 = v21;
          v12 = v21;
          v11 = a2[1];
        }
        v16 = _mm_loadu_si128(&v25);
        v17 = v12 + 24 * v11;
        *(_QWORD *)v17 = v14;
        *(__m128i *)(v17 + 8) = v16;
      }
      ++a2[1];
      sub_4604E0(v26, (const char *)a2);
    }
    if ( ptr )
    {
      *(_QWORD *)&v54 = 0;
      qfree(ptr);
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40);
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29);
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
  }
  return v59 - __readfsqword(0x28u);
}

