unsigned __int64 __fastcall sub_475030(__int64 *a1, __int64 *a2, unsigned __int64 a3)
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
  __m128i v23; // [rsp+0h] [rbp-1D8h] BYREF
  void *v24; // [rsp+10h] [rbp-1C8h] BYREF
  __m128i v25; // [rsp+18h] [rbp-1C0h] BYREF
  int v26; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-1A0h]
  void *v28; // [rsp+40h] [rbp-198h]
  __int128 v29; // [rsp+48h] [rbp-190h]
  void *v30; // [rsp+58h] [rbp-180h]
  __int128 v31; // [rsp+60h] [rbp-178h]
  void *v32; // [rsp+70h] [rbp-168h]
  __int128 v33; // [rsp+78h] [rbp-160h]
  void *v34; // [rsp+88h] [rbp-150h]
  __int128 v35; // [rsp+90h] [rbp-148h]
  void *v36; // [rsp+A0h] [rbp-138h]
  __int128 v37; // [rsp+A8h] [rbp-130h]
  int v38; // [rsp+B8h] [rbp-120h]
  void *v39; // [rsp+C0h] [rbp-118h]
  __int128 v40; // [rsp+C8h] [rbp-110h]
  void *v41; // [rsp+D8h] [rbp-100h]
  __int128 v42; // [rsp+E0h] [rbp-F8h]
  void *v43; // [rsp+F0h] [rbp-E8h]
  __int128 v44; // [rsp+F8h] [rbp-E0h]
  void *v45; // [rsp+108h] [rbp-D0h]
  __int128 v46; // [rsp+110h] [rbp-C8h]
  int v47; // [rsp+120h] [rbp-B8h]
  void *v48; // [rsp+128h] [rbp-B0h]
  __int128 v49; // [rsp+130h] [rbp-A8h]
  void *v50; // [rsp+140h] [rbp-98h]
  __int128 v51; // [rsp+148h] [rbp-90h]
  void *v52; // [rsp+158h] [rbp-80h]
  __int128 v53; // [rsp+160h] [rbp-78h]
  void *ptr; // [rsp+170h] [rbp-68h]
  __int128 v55; // [rsp+178h] [rbp-60h]
  int v56; // [rsp+188h] [rbp-50h]
  int v57; // [rsp+190h] [rbp-48h]
  int v58; // [rsp+194h] [rbp-44h]
  __int64 v59; // [rsp+198h] [rbp-40h]
  unsigned __int64 v60; // [rsp+1A8h] [rbp-30h]

  v4 = *a1;
  v60 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a1 + 2);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a3, 0) )
  {
    v9 = *((_DWORD *)a1 + 3);
    v26 = 0;
    v27 = -1;
    v28 = nullptr;
    v30 = nullptr;
    v32 = nullptr;
    v34 = nullptr;
    v36 = nullptr;
    v38 = -1;
    v39 = nullptr;
    v41 = nullptr;
    v43 = nullptr;
    v45 = nullptr;
    v47 = -1;
    v48 = nullptr;
    v50 = nullptr;
    v52 = nullptr;
    ptr = nullptr;
    v56 = -1;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v46 = 0;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    v55 = 0;
    v57 = -1;
    v10 = a1[4];
    v58 = v9;
    v59 = -1;
    sub_46F710(&v26, v10, a3);
    if ( (v26 & ~unk_23AD870) != 0 )
    {
      sub_470470((__int64)&v24, &v26);
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
      sub_4749B0(&v26, a2);
    }
    if ( ptr )
    {
      *(_QWORD *)&v55 = 0;
      qfree(ptr);
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v52);
    }
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50);
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
  }
  return v60 - __readfsqword(0x28u);
}
