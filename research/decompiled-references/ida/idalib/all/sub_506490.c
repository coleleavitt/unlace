unsigned __int64 __fastcall sub_506490(double a1, double a2, __m128 a3, __int64 a4, int *a5, int a6, __int64 a7)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  char *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  void *v21; // rdi
  char *v23; // rbx
  char *v24; // rax
  char *v25; // rbp
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __int64 v28; // r14
  __int64 v29; // r13
  char v30; // r15
  __m128i v31; // xmm4
  __int16 v32; // ax
  int v33; // r12d
  char v34; // cl
  __int64 v35; // rcx
  __m128i v36; // xmm0
  void *v37; // rdi
  __int64 v38; // rcx
  void *v39; // rdi
  void *v40; // rdi
  __m128i v41; // xmm6
  void *v42; // rdi
  __m128i v43; // xmm7
  __int16 v44; // ax
  __m128i v45; // [rsp+0h] [rbp-138h] BYREF
  __m128i v46; // [rsp+10h] [rbp-128h] BYREF
  __m128i v47; // [rsp+20h] [rbp-118h] BYREF
  __int16 v48; // [rsp+3Ah] [rbp-FEh]
  int v49; // [rsp+3Ch] [rbp-FCh]
  __m128i v50; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-E8h]
  _QWORD *v52; // [rsp+58h] [rbp-E0h]
  __int64 v53; // [rsp+60h] [rbp-D8h]
  void **v54; // [rsp+68h] [rbp-D0h]
  int v55[4]; // [rsp+70h] [rbp-C8h] BYREF
  void *v56; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v57; // [rsp+88h] [rbp-B0h]
  void *s; // [rsp+98h] [rbp-A0h]
  __int64 v59; // [rsp+A0h] [rbp-98h]
  void *v60; // [rsp+A8h] [rbp-90h]
  __int64 v61; // [rsp+B0h] [rbp-88h]
  int v62; // [rsp+B8h] [rbp-80h]
  __int64 v63; // [rsp+C0h] [rbp-78h]
  _QWORD v64[2]; // [rsp+C8h] [rbp-70h] BYREF
  void *ptr; // [rsp+D8h] [rbp-60h]
  __int128 v66; // [rsp+E0h] [rbp-58h]
  int v67; // [rsp+F0h] [rbp-48h]
  int v68; // [rsp+F4h] [rbp-44h]
  unsigned __int64 v69; // [rsp+F8h] [rbp-40h]

  v49 = a6;
  v69 = __readfsqword(0x28u);
  if ( a7 )
  {
    v53 = sub_3C82F0(a7);
    v8 = *a5;
    v52 = v64;
    s = v64;
    v9 = (unsigned int)a5[1];
    v67 = v8;
    v10 = *((_QWORD *)a5 + 1);
    v57 = 0;
    v66 = 0;
    v56 = nullptr;
    v11 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(v10 + v9));
    v54 = &v56;
    v59 = 1;
    v60 = nullptr;
    v61 = 0;
    v62 = 1065353216;
    v63 = 0;
    v64[0] = 0;
    v64[1] = -1;
    ptr = nullptr;
    v68 = 0;
    *(__m128i *)v55 = v11;
    sub_504CF0(&v56, v53, (char **)v55);
    if ( !a6 )
    {
      v23 = (char *)ptr;
      v24 = (char *)ptr + 88 * v66;
      if ( ptr != v24 )
      {
        v25 = v24 - 88;
        if ( ptr < v24 - 88 )
        {
          do
          {
            a2 = 0.0;
            v26 = _mm_loadu_si128((const __m128i *)v23 + 1);
            v27 = _mm_loadu_si128((const __m128i *)(v23 + 40));
            *((_OWORD *)v23 + 1) = 0;
            v28 = *((_QWORD *)v23 + 1);
            v29 = *((_QWORD *)v23 + 4);
            *(_OWORD *)(v23 + 40) = 0;
            v30 = *v23;
            v31 = _mm_loadu_si128((const __m128i *)v23 + 4);
            v32 = *((_WORD *)v23 + 40);
            v33 = *((_DWORD *)v23 + 14);
            v46 = v26;
            *((_QWORD *)v23 + 1) = 0;
            *((_QWORD *)v23 + 4) = 0;
            v34 = *v25;
            v48 = v32;
            *v23 = v34;
            v35 = *((_QWORD *)v25 + 1);
            v36 = _mm_loadu_si128((const __m128i *)v25 + 1);
            *((_QWORD *)v25 + 1) = 0;
            *((_OWORD *)v25 + 1) = 0;
            v37 = *((void **)v23 + 1);
            v45 = v27;
            v47 = v31;
            if ( v37 )
            {
              *((_QWORD *)v23 + 2) = 0;
              v51 = v35;
              v50 = v36;
              qfree(v37);
              v36 = _mm_load_si128(&v50);
              v35 = v51;
            }
            *((_QWORD *)v23 + 1) = v35;
            *((__m128i *)v23 + 1) = v36;
            v38 = *((_QWORD *)v25 + 4);
            v11 = _mm_loadu_si128((const __m128i *)(v25 + 40));
            *((_QWORD *)v25 + 4) = 0;
            *(_OWORD *)(v25 + 40) = 0;
            v39 = *((void **)v23 + 4);
            if ( v39 )
            {
              *((_QWORD *)v23 + 5) = 0;
              v51 = v38;
              v50 = v11;
              qfree(v39);
              v11 = _mm_load_si128(&v50);
              v38 = v51;
            }
            *((_QWORD *)v23 + 4) = v38;
            *(__m128i *)(v23 + 40) = v11;
            *((_DWORD *)v23 + 14) = *((_DWORD *)v25 + 14);
            *((_QWORD *)v23 + 8) = *((_QWORD *)v25 + 8);
            *((_QWORD *)v23 + 9) = *((_QWORD *)v25 + 9);
            v23[80] = v25[80];
            v23[81] = v25[81];
            v40 = *((void **)v25 + 1);
            *v25 = v30;
            if ( v40 )
            {
              *((_QWORD *)v25 + 2) = 0;
              qfree(v40);
            }
            v41 = _mm_load_si128(&v46);
            v42 = *((void **)v25 + 4);
            *((_QWORD *)v25 + 1) = v28;
            *((__m128i *)v25 + 1) = v41;
            if ( v42 )
            {
              *((_QWORD *)v25 + 5) = 0;
              qfree(v42);
            }
            v43 = _mm_load_si128(&v45);
            *((_QWORD *)v25 + 4) = v29;
            v23 += 88;
            v25 -= 88;
            a3 = (__m128)_mm_load_si128(&v47);
            v44 = v48;
            *((_DWORD *)v25 + 36) = v33;
            *((__m128i *)v25 + 8) = v43;
            *(__m128 *)(v25 + 152) = a3;
            *((_WORD *)v25 + 84) = v44;
          }
          while ( v23 < v25 );
        }
      }
    }
    sub_506270((__int64)v54, v53, v49, *(double *)v11.m128i_i64, a2, *(double *)a3.m128_u64);
    v12 = (char *)ptr;
    if ( ptr )
    {
      v13 = v66;
      if ( (_QWORD)v66 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = &v12[v14];
          v17 = *(void **)&v12[v14 + 32];
          if ( v17 )
          {
            *((_QWORD *)v16 + 5) = 0;
            qfree(v17);
          }
          v18 = *((void **)v16 + 1);
          if ( v18 )
          {
            *((_QWORD *)v16 + 2) = 0;
            qfree(v18);
          }
          ++v15;
          v12 = (char *)ptr;
          v14 += 88;
        }
        while ( v13 != v15 );
      }
      *(_QWORD *)&v66 = 0;
      qfree(v12);
    }
    v19 = v60;
    if ( v60 )
    {
      do
      {
        v20 = v19;
        v19 = (_QWORD *)*v19;
        v21 = (void *)v20[2];
        if ( v21 )
        {
          v20[3] = 0;
          qfree(v21);
        }
        operator delete(v20, 0x28u);
      }
      while ( v19 );
    }
    memset(s, 0, 8 * v59);
    v61 = 0;
    v60 = nullptr;
    if ( s != v52 )
      operator delete(s, 8 * v59);
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
  }
  return v69 - __readfsqword(0x28u);
}
