void __fastcall sub_5D38A0(char **a1, int a2, int a3, char **a4)
{
  int v4; // eax
  char *v9; // rdi
  __m128i v10; // xmm0
  char *v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  int v14; // edx
  __m128i v15; // xmm0
  int v16; // eax
  char *v17; // rax
  char *v18; // rdx
  char *v19; // r14
  char *i; // rbp
  char *v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rdx
  char *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __int64 v31; // rcx
  __m128i v32; // xmm0
  void *v33; // rdi
  void *v34; // rdi
  __int64 v36; // [rsp+0h] [rbp-50h]
  __int64 v37; // [rsp+0h] [rbp-50h]
  int v38[2]; // [rsp+8h] [rbp-48h]

  v4 = *((_DWORD *)a1 + 14);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      *((_DWORD *)a1 + 7) = a3;
      v11 = a1[9];
      v12 = (unsigned __int64)a1[10];
      if ( v12 < (unsigned __int64)(v11 + 1) )
      {
        v23 = qvector_reserve(a1 + 8, 0, v11 + 1, 56);
        v24 = a1[10];
        v25 = a1[9];
        a1[10] = (char *)v12;
        *(_QWORD *)v38 = v23;
        v26 = a1[8];
        v27 = (__int64)(v25 - 1);
        if ( v27 >= 0 )
        {
          v28 = v23;
          do
          {
            v29 = *(_QWORD *)v26;
            v30 = _mm_loadu_si128((const __m128i *)(v26 + 8));
            *(_QWORD *)v26 = 0;
            *(_OWORD *)(v26 + 8) = 0;
            *(_QWORD *)v28 = v29;
            *(__m128i *)(v28 + 8) = v30;
            v31 = *((_QWORD *)v26 + 3);
            v32 = _mm_loadu_si128((const __m128i *)v26 + 2);
            *((_QWORD *)v26 + 3) = 0;
            *(_QWORD *)(v28 + 24) = v31;
            *(__m128i *)(v28 + 32) = v32;
            LODWORD(v31) = *((_DWORD *)v26 + 12);
            *((_QWORD *)v26 + 5) = 0;
            *(_DWORD *)(v28 + 48) = v31;
            *(_DWORD *)(v28 + 52) = *((_DWORD *)v26 + 13);
            v33 = *((void **)v26 + 3);
            if ( v33 )
            {
              *((_QWORD *)v26 + 4) = 0;
              v36 = v27;
              qfree(v33);
              v27 = v36;
            }
            v34 = *(void **)v26;
            if ( *(_QWORD *)v26 )
            {
              *((_QWORD *)v26 + 1) = 0;
              v37 = v27;
              qfree(v34);
              v27 = v37;
            }
            v26 += 56;
            v28 += 56;
          }
          while ( v27-- != 0 );
          v26 = a1[8];
        }
        qfree(v26);
        a1[8] = *(char **)v38;
        a1[10] = v24;
        v11 = a1[9];
      }
      else
      {
        *(_QWORD *)v38 = a1[8];
      }
      v13 = *(_QWORD *)v38 + 56LL * (_QWORD)v11;
      *(_OWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 48) = 0;
      *(_OWORD *)(v13 + 8) = 0;
      *(_QWORD *)v13 = 0;
      v14 = *((_DWORD *)a1 + 14);
      ++a1[9];
      v15 = _mm_loadu_si128((const __m128i *)(v13 + 32));
      *(_DWORD *)(v13 + 48) = v14;
      v16 = *((_DWORD *)a1 + 7);
      if ( v14 != 1 )
        v16 = *((_DWORD *)a1 + 6);
      *(_DWORD *)(v13 + 52) = v16;
      v17 = *(char **)(v13 + 24);
      *(_QWORD *)(v13 + 24) = a1[4];
      *(_QWORD *)(v13 + 32) = a1[5];
      *(_QWORD *)(v13 + 40) = a1[6];
      a1[4] = v17;
      *(__m128i *)(a1 + 5) = v15;
      sub_5D2E20(v13, (const char *)a1);
      v18 = *a1;
      if ( *a1 )
      {
        v19 = a1[1];
        if ( v19 )
        {
          for ( i = nullptr; i != v19; ++i )
          {
            v21 = &v18[24 * (_QWORD)i];
            v22 = *(void **)v21;
            if ( *(_QWORD *)v21 )
            {
              *((_QWORD *)v21 + 1) = 0;
              qfree(v22);
              v18 = *a1;
            }
          }
        }
        a1[1] = nullptr;
        qfree(v18);
        *a1 = nullptr;
        a1[2] = nullptr;
      }
      *((_DWORD *)a1 + 7) = 0;
    }
    *((_DWORD *)a1 + 6) = a3;
    v9 = a1[4];
    *((_DWORD *)a1 + 14) = a2;
    if ( a4 )
    {
      v10 = _mm_loadu_si128((const __m128i *)(a1 + 5));
      a1[4] = *a4;
      a1[5] = a4[1];
      a1[6] = a4[2];
      *a4 = v9;
      *(__m128i *)(a4 + 1) = v10;
    }
    else if ( v9 )
    {
      a1[5] = nullptr;
      qfree(v9);
      a1[4] = nullptr;
      a1[6] = nullptr;
    }
  }
}

