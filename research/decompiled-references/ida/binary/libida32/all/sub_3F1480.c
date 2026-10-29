unsigned __int64 __fastcall sub_3F1480(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r12
  unsigned int *v12; // r14
  char *v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rdx
  char *v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  size_t v19; // r11
  _QWORD *v20; // rbx
  void *v21; // rdi
  __int64 v23; // rdx
  char *v24; // rbp
  char *v25; // rax
  char *v26; // r12
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v36; // rdi
  void *v38; // r8
  void *v39; // rax
  unsigned int *i; // [rsp+0h] [rbp-D8h]
  unsigned int v41; // [rsp+10h] [rbp-C8h]
  int v42; // [rsp+14h] [rbp-C4h]
  char *v43; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v44; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+18h] [rbp-C0h]
  __int64 v46; // [rsp+20h] [rbp-B8h]
  __int64 v47; // [rsp+20h] [rbp-B8h]
  size_t v48; // [rsp+20h] [rbp-B8h]
  void *v49; // [rsp+38h] [rbp-A0h]
  void *src; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-90h]
  void *s; // [rsp+60h] [rbp-78h] BYREF
  __int64 v53; // [rsp+68h] [rbp-70h]
  void *v54; // [rsp+70h] [rbp-68h]
  __int64 v55; // [rsp+78h] [rbp-60h]
  int v56; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+88h] [rbp-50h]
  __int64 v58; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v59 = __readfsqword(0x28u);
  switch_dbctx(v3);
  v4 = *(_QWORD *)(a1 + 64);
  v41 = 0;
  v42 = *(_DWORD *)(a1 + 72);
  if ( *(_QWORD *)(v4 + 56) )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 48) + 176 * v5;
        if ( (*(_BYTE *)(v6 + 164) & 2) == 0 )
          break;
        v5 = ++v41;
        if ( (unsigned __int64)v41 >= *(_QWORD *)(v4 + 56) )
          return v59 - __readfsqword(0x28u);
      }
      v7 = *(_DWORD *)(v6 + 168);
      v8 = *(_DWORD *)(v4 + 100);
      v53 = 1;
      v54 = nullptr;
      v55 = 0;
      v9 = v7 + 1;
      v56 = 1065353216;
      v57 = 0;
      if ( v9 < v8 )
        v9 = v8;
      v58 = 0;
      *(_DWORD *)(v4 + 100) = v9;
      v10 = *(_QWORD *)(a1 + 64);
      s = &v58;
      sub_757350(v10, v41, v6, &s);
      sub_756780(&src, *(_QWORD *)(a1 + 64), v41, 0);
      v11 = 5LL * *(_QWORD *)(v6 + 32);
      v12 = *(unsigned int **)(v6 + 24);
      for ( i = (unsigned int *)((char *)v12 + v11); i != v12; v12 = (unsigned int *)((char *)v12 + 5) )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)v12 + 4) )
          {
            v13 = (char *)a2[1];
            v14 = a2[2];
            if ( v14 < (unsigned __int64)(v13 + 1) )
            {
              v23 = qvector_reserve(a2, 0, v13 + 1, 80);
              v24 = (char *)a2[1];
              v25 = (char *)a2[2];
              a2[2] = v14;
              v26 = (char *)*a2;
              v43 = v25;
              v27 = (__int64)(v24 - 1);
              if ( v27 >= 0 )
              {
                v46 = v23;
                v28 = v23;
                do
                {
                  *(_QWORD *)v28 = *(_QWORD *)v26;
                  v29 = *((_QWORD *)v26 + 1);
                  *((_QWORD *)v26 + 1) = 0;
                  v30 = _mm_loadu_si128((const __m128i *)v26 + 1);
                  *(_QWORD *)(v28 + 8) = v29;
                  *(__m128i *)(v28 + 16) = v30;
                  v31 = *((_QWORD *)v26 + 4);
                  v32 = _mm_loadu_si128((const __m128i *)(v26 + 40));
                  *((_OWORD *)v26 + 1) = 0;
                  *(_QWORD *)(v28 + 32) = v31;
                  *(__m128i *)(v28 + 40) = v32;
                  v33 = *((_QWORD *)v26 + 7);
                  v34 = _mm_loadu_si128((const __m128i *)v26 + 4);
                  *((_QWORD *)v26 + 4) = 0;
                  *(_OWORD *)(v26 + 40) = 0;
                  *(_QWORD *)(v28 + 56) = v33;
                  *(__m128i *)(v28 + 64) = v34;
                  v35 = *((void **)v26 + 4);
                  *((_QWORD *)v26 + 7) = 0;
                  *((_QWORD *)v26 + 9) = 0;
                  if ( v35 )
                  {
                    *((_QWORD *)v26 + 5) = 0;
                    qfree(v35);
                  }
                  v36 = *((void **)v26 + 1);
                  if ( v36 )
                  {
                    *((_QWORD *)v26 + 2) = 0;
                    qfree(v36);
                  }
                  v26 += 80;
                  v28 += 80;
                }
                while ( v27-- != 0 );
                v23 = v46;
                v26 = (char *)*a2;
              }
              v47 = v23;
              qfree(v26);
              v15 = (char *)v47;
              a2[2] = (__int64)v43;
              v13 = (char *)a2[1];
              *a2 = v47;
            }
            else
            {
              v15 = (char *)*a2;
            }
            v16 = &v15[80 * (_QWORD)v13];
            *((_OWORD *)v16 + 1) = 0;
            *(_QWORD *)v16 = -1;
            *(_OWORD *)(v16 + 40) = 0;
            *((_OWORD *)v16 + 4) = 0;
            *((_QWORD *)v16 + 1) = 0;
            *((_QWORD *)v16 + 4) = 0;
            *((_QWORD *)v16 + 7) = 0;
            ++a2[1];
            v17 = *v12;
            *(_QWORD *)v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v41)).m128i_u64[0];
            if ( v16 + 32 != (char *)&src )
            {
              v18 = v51;
              if ( v51 && (v19 = v51 - 1, v51 != 1) )
              {
                v38 = src;
                v39 = *((void **)v16 + 4);
                if ( *((_QWORD *)v16 + 6) < v51 )
                {
                  v49 = src;
                  v48 = v51 - 1;
                  v45 = v51;
                  v39 = (void *)qvector_reserve(v16 + 32, *((_QWORD *)v16 + 4), v51, 1);
                  v38 = v49;
                  v19 = v48;
                  *((_QWORD *)v16 + 4) = v39;
                  v18 = v45;
                }
                *((_QWORD *)v16 + 5) = v18;
                v44 = v18;
                memmove(v39, v38, v19);
                *(_BYTE *)(*((_QWORD *)v16 + 4) + v44 - 1) = 0;
                v17 = *(unsigned int *)v16;
              }
              else
              {
                *((_QWORD *)v16 + 5) = 0;
              }
            }
            (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 64) + 40LL)
                                                                            + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL),
              (unsigned int *)v16 + 2,
              v17,
              0);
            if ( v42 == 5 )
              break;
          }
          v12 = (unsigned int *)((char *)v12 + 5);
          if ( i == v12 )
            goto LABEL_19;
        }
        (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 64) + 40LL)
                                                                        + 16LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL),
          (unsigned int *)v16 + 14,
          *(unsigned int *)v16,
          1);
      }
LABEL_19:
      if ( src )
      {
        v51 = 0;
        qfree(src);
      }
      v20 = v54;
      if ( v54 )
      {
        do
        {
          v21 = v20;
          v20 = (_QWORD *)*v20;
          operator delete(v21, 0x10u);
        }
        while ( v20 );
      }
      memset(s, 0, 8 * v53);
      v55 = 0;
      v54 = nullptr;
      if ( s != &v58 )
        operator delete(s, 8 * v53);
      v4 = *(_QWORD *)(a1 + 64);
      v5 = ++v41;
    }
    while ( (unsigned __int64)v41 < *(_QWORD *)(v4 + 56) );
  }
  return v59 - __readfsqword(0x28u);
}

