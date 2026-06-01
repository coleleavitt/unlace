__int64 __fastcall sub_77F070(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // rcx
  __m128i v7; // xmm1
  void *v8; // rax
  __m128i v9; // xmm0
  char *v13; // rax
  bool v14; // zf
  __int32 v15; // r15d
  __int64 v16; // rax
  __m128i *v17; // rax
  __int64 *v18; // r9
  __int64 v19; // rbp
  __int8 v20; // dl
  unsigned __int64 *v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __m128i v24; // xmm0
  __m128i *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  char *v29; // rbp
  __int8 v30; // al
  __int8 v31; // r12
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int8 v35; // r15
  char *v36; // rsi
  __int32 v37; // ebp
  __m128i *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rsi
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int8 v43; // r10
  char v44; // r11
  __m128i v45; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v46; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+27h] [rbp-A1h]
  __int8 v48; // [rsp+2Fh] [rbp-99h]
  void *v49; // [rsp+30h] [rbp-98h] BYREF
  __m128i v50; // [rsp+38h] [rbp-90h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v52; // [rsp+58h] [rbp-70h]
  __m128i v53; // [rsp+70h] [rbp-58h] BYREF
  __int64 v54; // [rsp+80h] [rbp-48h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v45.m128i_i64[1] = a3;
  v4 = a2[1];
  v55 = __readfsqword(0x28u);
  v50 = 0;
  v49 = nullptr;
  ptr = nullptr;
  v52 = 0;
  if ( v4 )
  {
    v45.m128i_i64[0] = (__int64)&ptr;
    v13 = (char *)qvector_reserve(&ptr, 0, v4, 24);
    v14 = a2[1] == 0;
    ptr = v13;
    v5 = v13;
    if ( v14 )
    {
      v27 = v52 - 1;
    }
    else
    {
      v15 = 0;
      v16 = 0;
      do
      {
        v47 = sub_7787B0((__int64)a1, (unsigned __int64 *)(*a2 + 16 * v16));
        v19 = v47;
        v48 = v20;
        if ( v47 == -1 )
        {
          v44 = 2;
          v21 = (unsigned __int64 *)&v49;
        }
        else
        {
          v21 = (unsigned __int64 *)v45.m128i_i64[0];
          v44 = 0;
        }
        v41 = *v18;
        BYTE1(v54) = v44;
        v40 = *v21;
        v22 = v21[2];
        HIDWORD(v54) = v15;
        v53.m128i_i64[1] = v47;
        v43 = v48;
        v42 = v21[1];
        v53.m128i_i64[0] = v41;
        LOBYTE(v54) = v48;
        v23 = v42 + 1;
        if ( (unsigned __int64)&v53 < v40 || (unsigned __int64)&v53 >= v40 + 24 * v22 )
        {
          if ( v22 < v23 )
          {
            v26 = qvector_reserve(v21, v40, v42 + 1, 24);
            *v21 = v26;
            v40 = v26;
            v42 = v21[1];
          }
          v24 = _mm_load_si128(&v53);
          v25 = (__m128i *)(v40 + 24 * v42);
          v25[1].m128i_i64[0] = v54;
          *v25 = v24;
        }
        else
        {
          if ( v22 < v23 )
          {
            v46.m128i_i8[15] = v48;
            v46.m128i_i8[14] = v44;
            v46.m128i_i64[0] = v41;
            v39 = qvector_reserve(v21, v40, v42 + 1, 24);
            *v21 = v39;
            v40 = v39;
            v41 = v46.m128i_i64[0];
            v42 = v21[1];
            v43 = v46.m128i_i8[15];
            v44 = v46.m128i_i8[14];
          }
          v17 = (__m128i *)(v40 + 24 * v42);
          v17[1].m128i_i8[0] = v43;
          v17[1].m128i_i8[1] = v44;
          v17[1].m128i_i32[1] = v15;
          *v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v19);
        }
        ++v15;
        ++v21[1];
        v16 = v15;
      }
      while ( (unsigned __int64)v15 < a2[1] );
      v5 = (char *)ptr;
      v27 = v52 - 1;
    }
    if ( v27 >= 0 )
    {
      do
      {
        v29 = &v5[24 * v27];
        if ( !v29[17] )
        {
          v30 = sub_77EFD0(a1, *(_QWORD *)v29, (__int64)(v29 + 8));
          v29[17] = v30;
          v31 = v30;
          if ( v30 )
          {
            v32 = v50.m128i_i64[0];
            v33 = _mm_loadl_epi64((const __m128i *)v29);
            v34 = _mm_loadl_epi64((const __m128i *)(v29 + 8));
            v35 = v29[16];
            v36 = (char *)v49;
            v37 = *((_DWORD *)v29 + 5);
            if ( v50.m128i_i64[1] < (unsigned __int64)(v50.m128i_i64[0] + 1) )
            {
              v46.m128i_i64[0] = v34.m128i_i64[0];
              v45.m128i_i64[0] = v33.m128i_i64[0];
              v49 = (void *)qvector_reserve(&v49, v49, v50.m128i_i64[0] + 1, 24);
              v32 = v50.m128i_i64[0];
              v36 = (char *)v49;
              v34 = _mm_loadl_epi64(&v46);
              v33 = _mm_loadl_epi64(&v45);
            }
            v38 = (__m128i *)&v36[24 * v32];
            *v38 = _mm_unpacklo_epi64(v33, v34);
            v38[1].m128i_i8[0] = v35;
            ++v50.m128i_i64[0];
            v38[1].m128i_i8[1] = v31;
            v38[1].m128i_i32[1] = v37;
          }
          v5 = (char *)ptr;
        }
      }
      while ( v27-- != 0 );
    }
    if ( !v45.m128i_i64[1] )
      goto LABEL_4;
  }
  else
  {
    v5 = nullptr;
    if ( !a3 )
      goto LABEL_6;
  }
  v6 = v45.m128i_i64[1];
  v7 = _mm_loadu_si128(&v50);
  v8 = *(void **)v45.m128i_i64[1];
  v9 = _mm_loadu_si128((const __m128i *)(v45.m128i_i64[1] + 8));
  *(_QWORD *)v45.m128i_i64[1] = v49;
  *(__m128i *)(v6 + 8) = v7;
  v49 = v8;
  v50 = v9;
LABEL_4:
  if ( v5 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v5);
  }
LABEL_6:
  if ( v49 )
  {
    v50.m128i_i64[0] = 0;
    qfree(v49);
  }
  return 0;
}
