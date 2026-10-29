/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E0A0
// Address: 0x000000000045E0A0

//----- (000000000045E0A0) ----------------------------------------------------
_BYTE *__fastcall sub_45E0A0(_QWORD *a1, __int64 a2, const void *a3, unsigned int a4)
{
  __int64 v4; // rbp
  _BYTE *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  char *v9; // r15
  size_t v10; // rax
  size_t v11; // rbx
  char *v13; // rax
  __int64 v14; // rdx
  char *v15; // r15
  __int64 v16; // r13
  char *v17; // r14
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rsi
  __m128i v21; // xmm0
  void *v22; // rdi
  void *v23; // rdi
  void *v25; // rdi
  unsigned __int64 v26; // r14
  void *v27; // rax
  char *v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v6 = sub_4813B0(a4 + 1);
  if ( v6 )
  {
    v7 = a1[30];
    v8 = a1[31];
    if ( v8 < v7 + 1 )
    {
      v13 = (char *)sub_481540((__int64)(a1 + 29), nullptr, v7 + 1, 0x48u);
      v14 = a1[31];
      a1[31] = v8;
      v30 = v13;
      v31 = v14;
      v15 = (char *)a1[29];
      v16 = a1[30] - 1LL;
      if ( v16 >= 0 )
      {
        v17 = v13;
        do
        {
          v18 = *(_QWORD *)v15;
          v19 = _mm_loadu_si128((const __m128i *)(v15 + 8));
          *(_QWORD *)v15 = 0;
          *(_OWORD *)(v15 + 8) = 0;
          *(_QWORD *)v17 = v18;
          *(__m128i *)(v17 + 8) = v19;
          v20 = *((_QWORD *)v15 + 3);
          v21 = _mm_loadu_si128((const __m128i *)v15 + 2);
          *((_QWORD *)v15 + 3) = 0;
          *((_QWORD *)v17 + 3) = v20;
          *((__m128i *)v17 + 2) = v21;
          LODWORD(v20) = *((_DWORD *)v15 + 12);
          *((_QWORD *)v15 + 5) = 0;
          *((_DWORD *)v17 + 12) = v20;
          *((_QWORD *)v17 + 7) = *((_QWORD *)v15 + 7);
          *((_QWORD *)v17 + 8) = *((_QWORD *)v15 + 8);
          v22 = *((void **)v15 + 3);
          if ( v22 )
          {
            *((_QWORD *)v15 + 4) = 0;
            j__free(v22);
          }
          v23 = *(void **)v15;
          if ( *(_QWORD *)v15 )
          {
            *((_QWORD *)v15 + 1) = 0;
            j__free(v23);
          }
          v15 += 72;
          v17 += 72;
        }
        while ( v16-- != 0 );
        v15 = (char *)a1[29];
      }
      j__free(v15);
      a1[29] = v30;
      a1[31] = v31;
      v7 = a1[30];
    }
    else
    {
      v30 = (char *)a1[29];
    }
    v9 = &v30[72 * v7];
    *(_QWORD *)v9 = 0;
    *((_QWORD *)v9 + 3) = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *((_OWORD *)v9 + 2) = 0;
    ++a1[30];
    *((_QWORD *)v9 + 8) = a2;
    if ( a3 && (v10 = strlen((const char *)a3), (v11 = v10) != 0) )
    {
      v25 = *((void **)v9 + 3);
      v26 = v10 + 1;
      if ( *((_QWORD *)v9 + 5) < v10 + 1 )
      {
        v27 = sub_481540((__int64)(v9 + 24), *((void **)v9 + 3), v26, 1u);
        *((_QWORD *)v9 + 3) = v27;
        v25 = v27;
      }
      *((_QWORD *)v9 + 4) = v26;
      memmove(v25, a3, v11);
      *(_BYTE *)(*((_QWORD *)v9 + 3) + v11) = 0;
    }
    else
    {
      *((_QWORD *)v9 + 4) = 0;
    }
    *((_DWORD *)v9 + 12) = v4;
    *((_QWORD *)v9 + 7) = v6;
    v6[v4] = 0;
  }
  return v6;
}
