__int64 __fastcall sub_61D2F0(
        _QWORD *a1,
        const void *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  size_t v13; // rax
  size_t v14; // rbp
  void *v16; // rdi
  size_t v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  char *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rbx
  __m128 v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // r14
  _QWORD *v32; // r13
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  v10 = a1[5];
  v11 = a1[6];
  if ( v11 < v10 + 1 )
  {
    v18 = qvector_reserve(a1 + 4, 0, v10 + 1, 72);
    v19 = a1[6];
    v20 = a1[5];
    a1[6] = v11;
    v35 = v18;
    v21 = (char *)a1[4];
    v36 = v19;
    v22 = v20 - 1;
    if ( v22 >= 0 )
    {
      v23 = v18 + 32;
      do
      {
        v28 = *(_QWORD *)v21;
        v29 = _mm_loadu_si128((const __m128i *)(v21 + 8));
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v23 - 32) = v28;
        *(__m128i *)(v23 - 24) = v29;
        v30 = *((_QWORD *)v21 + 5);
        if ( v30 )
        {
          v24 = _mm_loadh_ps((const double *)v21 + 6);
          *(_DWORD *)v23 = *((_DWORD *)v21 + 8);
          v25 = *((_QWORD *)v21 + 7);
          *(__m128 *)(v23 + 8) = v24;
          *(_QWORD *)(v23 + 24) = v25;
          *(_QWORD *)(v30 + 8) = v23;
          v26 = *((_QWORD *)v21 + 8);
          *((_QWORD *)v21 + 5) = 0;
          *(_QWORD *)(v23 + 32) = v26;
          *((_QWORD *)v21 + 6) = v21 + 32;
          *((_QWORD *)v21 + 7) = v21 + 32;
          *((_QWORD *)v21 + 8) = 0;
        }
        else
        {
          *(_DWORD *)v23 = 0;
          *(_QWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = v23;
          *(_QWORD *)(v23 + 24) = v23;
          *(_QWORD *)(v23 + 32) = 0;
          v31 = *((_QWORD *)v21 + 5);
          while ( v31 )
          {
            v32 = (_QWORD *)v31;
            sub_61C350(*(_QWORD **)(v31 + 24));
            v33 = *(void **)(v31 + 32);
            v31 = *(_QWORD *)(v31 + 16);
            if ( v33 )
            {
              v32[5] = 0;
              qfree(v33);
            }
            operator delete(v32, 0x38u);
          }
        }
        v27 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v27);
        }
        --v22;
        v21 += 72;
        v23 += 72;
      }
      while ( v22 != -1 );
      v21 = (char *)a1[4];
    }
    qfree(v21);
    a1[4] = v35;
    a1[6] = v36;
    v10 = a1[5];
  }
  else
  {
    v35 = a1[4];
  }
  v12 = v35 + 72 * v10;
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 48) = v12 + 32;
  *(_QWORD *)(v12 + 56) = v12 + 32;
  *(_DWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_OWORD *)(v12 + 8) = 0;
  ++a1[5];
  if ( a2 && (v13 = strlen((const char *)a2), (v14 = v13) != 0) )
  {
    v16 = *(void **)v12;
    v17 = v13 + 1;
    if ( *(_QWORD *)(v12 + 16) < v13 + 1 )
    {
      v34 = qvector_reserve(v12, *(_QWORD *)v12, v13 + 1, 1);
      *(_QWORD *)v12 = v34;
      v16 = (void *)v34;
    }
    *(_QWORD *)(v12 + 8) = v17;
    memmove(v16, a2, v14);
    *(_BYTE *)(*(_QWORD *)v12 + v14) = 0;
  }
  else
  {
    *(_QWORD *)(v12 + 8) = 0;
  }
  return process_zipfile((_DWORD)a2, (unsigned int)sub_61C610, v12, a4, a5, a6, a7, a8, a9);
}
