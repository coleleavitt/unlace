/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4161F0
// Address: 0x00000000004161F0

//----- (00000000004161F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4161F0(__int64 a1, char *a2, char a3, const char *a4, const char *a5, int a6, char *s)
{
  size_t v11; // r14
  void *v12; // rax
  size_t v13; // r14
  void *v14; // rax
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // rbp
  void *v18; // rax
  char *v19; // rax
  const char *i; // r15
  void *v21; // rbp
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  void **v24; // rax
  void *v25; // rdi
  size_t v26; // rax
  __int64 v27; // r13
  size_t v28; // rbp
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __m128i v31; // xmm0
  void **v32; // rax
  void **v33; // rax
  void **v35; // rax
  void **v36; // rsi
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-10A0h]
  char *accept; // [rsp+8h] [rbp-1098h]
  __m128i v41; // [rsp+18h] [rbp-1088h] BYREF
  const char *v42; // [rsp+30h] [rbp-1070h] BYREF
  void *ptr; // [rsp+38h] [rbp-1068h] BYREF
  __m128i v44; // [rsp+40h] [rbp-1060h] BYREF
  char v45[4104]; // [rsp+58h] [rbp-1048h] BYREF
  unsigned __int64 v46; // [rsp+1060h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_4C2120;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_OWORD *)(a1 + 1040) = 0;
  *(_OWORD *)(a1 + 1064) = 0;
  if ( a4 )
  {
    v11 = strlen(a4);
    v12 = sub_481540(a1 + 1056, nullptr, v11 + 1, 1u);
    *(_QWORD *)(a1 + 1056) = v12;
    *(_QWORD *)(a1 + 1064) = v11 + 1;
    memmove(v12, a4, v11);
    *(_BYTE *)(*(_QWORD *)(a1 + 1056) + v11) = 0;
  }
  *(_QWORD *)(a1 + 1080) = 0;
  *(_OWORD *)(a1 + 1088) = 0;
  if ( a5 )
  {
    v13 = strlen(a5);
    v14 = sub_481540(a1 + 1080, nullptr, v13 + 1, 1u);
    *(_QWORD *)(a1 + 1080) = v14;
    *(_QWORD *)(a1 + 1088) = v13 + 1;
    memmove(v14, a5, v13);
    *(_BYTE *)(*(_QWORD *)(a1 + 1080) + v13) = 0;
  }
  *(_QWORD *)(a1 + 1104) = 0;
  *(_OWORD *)(a1 + 1112) = 0;
  if ( s )
  {
    v15 = strlen(s);
    v16 = v15 + 1;
    v17 = v15;
    v18 = sub_481540(a1 + 1104, nullptr, v15 + 1, 1u);
    *(_QWORD *)(a1 + 1104) = v18;
    *(_QWORD *)(a1 + 1112) = v16;
    memmove(v18, s, v17);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + v17) = 0;
  }
  *(_BYTE *)(a1 + 8) = 0;
  v19 = ":";
  *(_DWORD *)(a1 + 1128) = a6;
  if ( !a3 )
    v19 = ";";
  accept = v19;
  sub_4821A0(v45, a2, 4096);
  v38 = a1 + 1032;
  for ( i = sub_482120(v45, accept, &v42); i; i = sub_482120(nullptr, accept, &v42) )
  {
    ptr = nullptr;
    v44 = 0;
    v26 = strlen(i);
    v27 = v26 + 1;
    v28 = v26;
    ptr = sub_481540((__int64)&ptr, nullptr, v26 + 1, 1u);
    v44.m128i_i64[0] = v27;
    memmove(ptr, i, v28);
    *((_BYTE *)ptr + v28) = 0;
    v37 = *(_QWORD *)(a1 + 1040);
    v36 = *(void ***)(a1 + 1032);
    v29 = *(_QWORD *)(a1 + 1048);
    v30 = v37 + 1;
    if ( &ptr < v36 || &ptr >= &v36[3 * v29] )
    {
      if ( v29 < v30 )
      {
        v33 = (void **)sub_481540(v38, v36, v37 + 1, 0x18u);
        *(_QWORD *)(a1 + 1032) = v33;
        v36 = v33;
        v37 = *(_QWORD *)(a1 + 1040);
      }
      v31 = _mm_loadu_si128(&v44);
      v32 = &v36[3 * v37];
      *v32 = ptr;
      *(__m128i *)(v32 + 1) = v31;
      ++*(_QWORD *)(a1 + 1040);
    }
    else
    {
      v21 = ptr;
      v22 = _mm_loadl_epi64(&v44);
      ptr = nullptr;
      v23 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
      v44 = 0;
      if ( v29 < v30 )
      {
        v41.m128i_i64[1] = v23.m128i_i64[0];
        v41.m128i_i64[0] = v22.m128i_i64[0];
        v35 = (void **)sub_481540(v38, v36, v37 + 1, 0x18u);
        *(_QWORD *)(a1 + 1032) = v35;
        v36 = v35;
        v23 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
        v37 = *(_QWORD *)(a1 + 1040);
        v22 = _mm_loadl_epi64(&v41);
      }
      v24 = &v36[3 * v37];
      *v24 = v21;
      v25 = ptr;
      *(__m128i *)(v24 + 1) = _mm_unpacklo_epi64(v22, v23);
      ++*(_QWORD *)(a1 + 1040);
      if ( v25 )
      {
        v44.m128i_i64[0] = 0;
        j__free(v25);
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
// 4C2120: using guessed type __int64 (__fastcall *off_4C2120[2])();
