unsigned __int64 __fastcall sub_4EEF10(double a1, double a2, __m128i a3, __int64 a4, int *a5, int a6, __int64 a7)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  char *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbx
  char *v15; // rbp
  void *v16; // rdi
  void *v17; // rdi
  _QWORD *v18; // rbx
  _QWORD *v19; // rbp
  void *v20; // rdi
  char *v22; // rbx
  char *v23; // rax
  char *v24; // rbp
  __m128i v25; // xmm3
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // r13
  char v29; // r15
  __int64 v30; // r12
  char v31; // cl
  __int64 v32; // rcx
  __m128i v33; // xmm0
  void *v34; // rdi
  __int64 v35; // rcx
  void *v36; // rdi
  void *v37; // rdi
  __m128i v38; // xmm5
  void *v39; // rdi
  int v40; // eax
  __m128i v41; // xmm6
  __m128i v42; // [rsp+0h] [rbp-128h] BYREF
  __m128i v43; // [rsp+10h] [rbp-118h] BYREF
  int v44; // [rsp+24h] [rbp-104h]
  __int16 v45; // [rsp+2Ah] [rbp-FEh]
  int v46; // [rsp+2Ch] [rbp-FCh]
  __m128i v47; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-E8h]
  _QWORD *v49; // [rsp+48h] [rbp-E0h]
  __int64 v50; // [rsp+50h] [rbp-D8h]
  void **v51; // [rsp+58h] [rbp-D0h]
  int v52[4]; // [rsp+60h] [rbp-C8h] BYREF
  void *v53; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v54; // [rsp+78h] [rbp-B0h]
  void *s; // [rsp+88h] [rbp-A0h]
  __int64 v56; // [rsp+90h] [rbp-98h]
  void *v57; // [rsp+98h] [rbp-90h]
  __int64 v58; // [rsp+A0h] [rbp-88h]
  int v59; // [rsp+A8h] [rbp-80h]
  __int64 v60; // [rsp+B0h] [rbp-78h]
  _QWORD v61[2]; // [rsp+B8h] [rbp-70h] BYREF
  void *ptr; // [rsp+C8h] [rbp-60h]
  __int128 v63; // [rsp+D0h] [rbp-58h]
  int v64; // [rsp+E0h] [rbp-48h]
  int v65; // [rsp+E4h] [rbp-44h]
  unsigned __int64 v66; // [rsp+E8h] [rbp-40h]

  v46 = a6;
  v66 = __readfsqword(0x28u);
  if ( a7 )
  {
    v50 = sub_3C3080(a7);
    v8 = *a5;
    v49 = v61;
    s = v61;
    v9 = (unsigned int)a5[1];
    v64 = v8;
    v10 = *((_QWORD *)a5 + 1);
    v54 = 0;
    v63 = 0;
    v53 = nullptr;
    v11 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(v10 + v9));
    v51 = &v53;
    v56 = 1;
    v57 = nullptr;
    v58 = 0;
    v59 = 1065353216;
    v60 = 0;
    v61[0] = 0;
    v61[1] = -1;
    ptr = nullptr;
    v65 = 0;
    *(__m128i *)v52 = v11;
    sub_4ED7B0(&v53, v50, (char **)v52);
    if ( !a6 )
    {
      v22 = (char *)ptr;
      v23 = (char *)ptr + 72 * v63;
      if ( ptr != v23 )
      {
        v24 = v23 - 72;
        if ( ptr < v23 - 72 )
        {
          do
          {
            a2 = 0.0;
            a3 = _mm_loadu_si128((const __m128i *)v22 + 1);
            v25 = _mm_loadu_si128((const __m128i *)(v22 + 40));
            *((_OWORD *)v22 + 1) = 0;
            v26 = *((_DWORD *)v22 + 16);
            v27 = *((_QWORD *)v22 + 1);
            *(_OWORD *)(v22 + 40) = 0;
            v28 = *((_QWORD *)v22 + 4);
            v29 = *v22;
            *((_QWORD *)v22 + 1) = 0;
            v30 = *((_QWORD *)v22 + 7);
            *((_QWORD *)v22 + 4) = 0;
            v31 = *v24;
            v44 = v26;
            LOWORD(v26) = *((_WORD *)v22 + 34);
            *v22 = v31;
            v32 = *((_QWORD *)v24 + 1);
            v33 = _mm_loadu_si128((const __m128i *)v24 + 1);
            *((_QWORD *)v24 + 1) = 0;
            *((_OWORD *)v24 + 1) = 0;
            v34 = *((void **)v22 + 1);
            v45 = v26;
            v42 = a3;
            v43 = v25;
            if ( v34 )
            {
              *((_QWORD *)v22 + 2) = 0;
              v48 = v32;
              v47 = v33;
              qfree(v34);
              v33 = _mm_load_si128(&v47);
              v32 = v48;
            }
            *((_QWORD *)v22 + 1) = v32;
            *((__m128i *)v22 + 1) = v33;
            v35 = *((_QWORD *)v24 + 4);
            v11 = _mm_loadu_si128((const __m128i *)(v24 + 40));
            *((_QWORD *)v24 + 4) = 0;
            *(_OWORD *)(v24 + 40) = 0;
            v36 = *((void **)v22 + 4);
            if ( v36 )
            {
              *((_QWORD *)v22 + 5) = 0;
              v48 = v35;
              v47 = v11;
              qfree(v36);
              v11 = _mm_load_si128(&v47);
              v35 = v48;
            }
            *((_QWORD *)v22 + 4) = v35;
            *(__m128i *)(v22 + 40) = v11;
            *((_DWORD *)v22 + 14) = *((_DWORD *)v24 + 14);
            *((_DWORD *)v22 + 15) = *((_DWORD *)v24 + 15);
            *((_DWORD *)v22 + 16) = *((_DWORD *)v24 + 16);
            v22[68] = v24[68];
            v22[69] = v24[69];
            v37 = *((void **)v24 + 1);
            *v24 = v29;
            if ( v37 )
            {
              *((_QWORD *)v24 + 2) = 0;
              qfree(v37);
            }
            v38 = _mm_load_si128(&v42);
            v39 = *((void **)v24 + 4);
            *((_QWORD *)v24 + 1) = v27;
            *((__m128i *)v24 + 1) = v38;
            if ( v39 )
            {
              *((_QWORD *)v24 + 5) = 0;
              qfree(v39);
            }
            v40 = v44;
            *((_QWORD *)v24 + 4) = v28;
            v22 += 72;
            v24 -= 72;
            v41 = _mm_load_si128(&v43);
            *((_QWORD *)v24 + 16) = v30;
            *((_DWORD *)v24 + 34) = v40;
            LOWORD(v40) = v45;
            *((__m128i *)v24 + 7) = v41;
            *((_WORD *)v24 + 70) = v40;
          }
          while ( v22 < v24 );
        }
      }
    }
    sub_4EED10((__int64)v51, v50, v46, *(double *)v11.m128i_i64, a2, *(double *)a3.m128i_i64);
    v12 = (char *)ptr;
    if ( ptr )
    {
      v13 = v63;
      if ( (_QWORD)v63 )
      {
        v14 = 0;
        do
        {
          v15 = &v12[72 * v14];
          v16 = *((void **)v15 + 4);
          if ( v16 )
          {
            *((_QWORD *)v15 + 5) = 0;
            qfree(v16);
          }
          v17 = *((void **)v15 + 1);
          if ( v17 )
          {
            *((_QWORD *)v15 + 2) = 0;
            qfree(v17);
          }
          ++v14;
          v12 = (char *)ptr;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v63 = 0;
      qfree(v12);
    }
    v18 = v57;
    if ( v57 )
    {
      do
      {
        v19 = v18;
        v18 = (_QWORD *)*v18;
        v20 = (void *)v19[2];
        if ( v20 )
        {
          v19[3] = 0;
          qfree(v20);
        }
        operator delete(v19, 0x28u);
      }
      while ( v18 );
    }
    memset(s, 0, 8 * v56);
    v58 = 0;
    v57 = nullptr;
    if ( s != v49 )
      operator delete(s, 8 * v56);
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
  }
  return v66 - __readfsqword(0x28u);
}

