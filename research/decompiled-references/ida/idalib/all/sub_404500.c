unsigned __int64 __fastcall sub_404500(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rdi
  unsigned __int64 *v11; // r8
  __int64 v12; // rbp
  unsigned __int64 *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  _QWORD *v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  size_t v20; // r11
  _QWORD *v21; // rbp
  void *v22; // rdi
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __m128i v37; // xmm0
  void *v38; // rdi
  void *v39; // rdi
  void *v41; // r8
  void *v42; // rax
  unsigned __int64 *i; // [rsp+8h] [rbp-E0h]
  int v45; // [rsp+24h] [rbp-C4h]
  __int64 v46; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v47; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v48; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+30h] [rbp-B8h]
  __int64 v50; // [rsp+30h] [rbp-B8h]
  size_t v51; // [rsp+30h] [rbp-B8h]
  void *v52; // [rsp+48h] [rbp-A0h]
  void *src; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-90h]
  void *s; // [rsp+70h] [rbp-78h] BYREF
  __int64 v56; // [rsp+78h] [rbp-70h]
  void *v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  int v59; // [rsp+90h] [rbp-58h]
  __int64 v60; // [rsp+98h] [rbp-50h]
  __int64 v61; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v62; // [rsp+A8h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v62 = __readfsqword(0x28u);
  switch_dbctx(v3);
  v4 = *(_QWORD *)(a1 + 64);
  v45 = *(_DWORD *)(a1 + 72);
  if ( *(_QWORD *)(v4 + 56) )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 48) + 176 * v5;
        if ( (*(_BYTE *)(v6 + 168) & 2) == 0 )
          break;
        if ( ++v5 >= *(_QWORD *)(v4 + 56) )
          return v62 - __readfsqword(0x28u);
      }
      v7 = *(_DWORD *)(v6 + 172);
      v8 = *(_DWORD *)(v4 + 104);
      v56 = 1;
      v57 = nullptr;
      v58 = 0;
      v9 = v7 + 1;
      v60 = 0;
      v61 = 0;
      if ( v9 < v8 )
        v9 = v8;
      v59 = 1065353216;
      *(_DWORD *)(v4 + 104) = v9;
      v10 = *(_QWORD *)(a1 + 64);
      s = &v61;
      sub_777860(v10, v5, v6, &s);
      sub_776CB0(&src, *(_QWORD *)(a1 + 64), v5, 0);
      v11 = *(unsigned __int64 **)(v6 + 24);
      v12 = 9LL * *(_QWORD *)(v6 + 32);
      v13 = v11;
      for ( i = (unsigned __int64 *)((char *)v11 + v12); i != v13; v13 = (unsigned __int64 *)((char *)v13 + 9) )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)v13 + 8) )
          {
            v14 = a2[1];
            v15 = a2[2];
            if ( v15 < v14 + 1 )
            {
              v24 = qvector_reserve(a2, 0, v14 + 1, 88);
              v25 = a2[1];
              v26 = a2[2];
              a2[2] = v15;
              v27 = *a2;
              v46 = v26;
              v28 = v25 - 1;
              if ( v28 >= 0 )
              {
                v49 = v5;
                v29 = v24;
                v30 = v28;
                v31 = v24;
                do
                {
                  *(__m128i *)v29 = _mm_loadu_si128((const __m128i *)v27);
                  v32 = *(_QWORD *)(v27 + 16);
                  v33 = _mm_loadu_si128((const __m128i *)(v27 + 24));
                  *(_QWORD *)(v27 + 16) = 0;
                  *(_QWORD *)(v29 + 16) = v32;
                  *(__m128i *)(v29 + 24) = v33;
                  v34 = *(_QWORD *)(v27 + 40);
                  v35 = _mm_loadu_si128((const __m128i *)(v27 + 48));
                  *(_OWORD *)(v27 + 24) = 0;
                  *(_QWORD *)(v29 + 40) = v34;
                  *(__m128i *)(v29 + 48) = v35;
                  v36 = *(_QWORD *)(v27 + 64);
                  v37 = _mm_loadu_si128((const __m128i *)(v27 + 72));
                  *(_QWORD *)(v27 + 40) = 0;
                  *(_OWORD *)(v27 + 48) = 0;
                  *(_QWORD *)(v29 + 64) = v36;
                  *(__m128i *)(v29 + 72) = v37;
                  v38 = *(void **)(v27 + 40);
                  *(_QWORD *)(v27 + 64) = 0;
                  *(_QWORD *)(v27 + 80) = 0;
                  if ( v38 )
                  {
                    *(_QWORD *)(v27 + 48) = 0;
                    qfree(v38);
                  }
                  v39 = *(void **)(v27 + 16);
                  if ( v39 )
                  {
                    *(_QWORD *)(v27 + 24) = 0;
                    qfree(v39);
                  }
                  v27 += 88;
                  v29 += 88;
                }
                while ( v30-- != 0 );
                v5 = v49;
                v27 = *a2;
                v24 = v31;
              }
              v50 = v24;
              qfree((void *)v27);
              v16 = v50;
              a2[2] = v46;
              v14 = a2[1];
              *a2 = v50;
            }
            else
            {
              v16 = *a2;
            }
            v17 = (_QWORD *)(v16 + 88 * v14);
            *(_OWORD *)v17 = -1;
            *(_OWORD *)(v17 + 3) = 0;
            *((_OWORD *)v17 + 3) = 0;
            *(_OWORD *)(v17 + 9) = 0;
            v17[2] = 0;
            v17[5] = 0;
            v17[8] = 0;
            ++a2[1];
            v18 = *v13;
            *(__m128i *)v17 = _mm_unpacklo_epi64((__m128i)*v13, (__m128i)v5);
            if ( v17 + 5 != &src )
            {
              v19 = v54;
              if ( v54 && (v20 = v54 - 1, v54 != 1) )
              {
                v41 = src;
                v42 = (void *)v17[5];
                if ( v17[7] < v54 )
                {
                  v52 = src;
                  v51 = v54 - 1;
                  v48 = v54;
                  v42 = (void *)qvector_reserve(v17 + 5, v17[5], v54, 1);
                  v41 = v52;
                  v20 = v51;
                  v17[5] = v42;
                  v19 = v48;
                }
                v17[6] = v19;
                v47 = v19;
                memmove(v42, v41, v20);
                *(_BYTE *)(v17[5] + v47 - 1) = 0;
                v18 = *v17;
              }
              else
              {
                v17[6] = 0;
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 64)
                                                                                             + 40LL)
                                                                               + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL),
              v17 + 2,
              v18,
              0);
            if ( v45 == 5 )
              break;
          }
          v13 = (unsigned __int64 *)((char *)v13 + 9);
          if ( i == v13 )
            goto LABEL_19;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 64) + 40LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL),
          v17 + 8,
          *v17,
          1);
      }
LABEL_19:
      if ( src )
      {
        v54 = 0;
        qfree(src);
      }
      v21 = v57;
      if ( v57 )
      {
        do
        {
          v22 = v21;
          v21 = (_QWORD *)*v21;
          operator delete(v22, 0x10u);
        }
        while ( v21 );
      }
      memset(s, 0, 8 * v56);
      v58 = 0;
      v57 = nullptr;
      if ( s != &v61 )
        operator delete(s, 8 * v56);
      ++v5;
      v4 = *(_QWORD *)(a1 + 64);
    }
    while ( v5 < *(_QWORD *)(v4 + 56) );
  }
  return v62 - __readfsqword(0x28u);
}
