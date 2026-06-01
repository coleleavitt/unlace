/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4561A0
// Address: 0x00000000004561A0

//----- (00000000004561A0) ----------------------------------------------------
char *__fastcall sub_4561A0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // r14
  char *v4; // rdi
  __int64 v5; // r14
  __int64 i; // rbp
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  __m128i si128; // xmm3
  __int64 v12; // r13
  __int128 v13; // xmm0
  char *v14; // rbx
  __int64 v15; // rbp
  __m128i v16; // xmm1
  void *v17; // rax
  size_t v18; // r8
  void *v19; // rax
  size_t v20; // rdx
  char *v21; // [rsp+8h] [rbp-50h]
  size_t n[2]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1];
  v21 = nullptr;
  if ( v3 )
  {
    v12 = 0;
    v13 = 0;
    v21 = (char *)sub_4814F0(80 * v3);
    v14 = v21;
    do
    {
      v15 = *a2 + 80 * v12;
      v16 = _mm_loadu_si128((const __m128i *)v15);
      *((_QWORD *)v14 + 2) = 0;
      *(_OWORD *)(v14 + 24) = v13;
      *(__m128i *)v14 = v16;
      if ( *(_QWORD *)(v15 + 24) )
      {
        n[0] = *(_QWORD *)(v15 + 24);
        v19 = sub_4814F0(n[0]);
        v20 = n[0];
        *((_QWORD *)v14 + 2) = v19;
        *((_QWORD *)v14 + 4) = v20;
        memcpy(v19, *(const void **)(v15 + 16), v20);
        v13 = 0;
        *((_QWORD *)v14 + 3) = n[0];
      }
      *((_QWORD *)v14 + 5) = 0;
      *((_OWORD *)v14 + 3) = v13;
      if ( *(_QWORD *)(v15 + 48) )
      {
        n[0] = *(_QWORD *)(v15 + 48);
        v17 = sub_4814F0(n[0]);
        v18 = n[0];
        *((_QWORD *)v14 + 5) = v17;
        *((_QWORD *)v14 + 7) = v18;
        memcpy(v17, *(const void **)(v15 + 40), v18);
        v13 = 0;
        *((_QWORD *)v14 + 6) = n[0];
      }
      ++v12;
      v14 += 80;
      *((_QWORD *)v14 - 2) = *(_QWORD *)(v15 + 64);
      *((_WORD *)v14 - 4) = *(_WORD *)(v15 + 72);
    }
    while ( v3 != v12 );
  }
  v4 = *(char **)(a1 + 456);
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 464);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[80 * i];
        v8 = *((void **)v7 + 5);
        if ( v8 )
        {
          *((_QWORD *)v7 + 6) = 0;
          j__free(v8);
        }
        v9 = *((void **)v7 + 2);
        if ( v9 )
        {
          *((_QWORD *)v7 + 3) = 0;
          j__free(v9);
        }
        v4 = *(char **)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    j__free(v4);
  }
  si128 = _mm_load_si128((const __m128i *)n);
  *(_QWORD *)(a1 + 456) = v21;
  *(__m128i *)(a1 + 464) = si128;
  return v21;
}
