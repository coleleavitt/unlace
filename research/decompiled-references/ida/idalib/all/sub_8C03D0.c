__int64 __fastcall sub_8C03D0(__int64 a1, __m128i *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r14
  __int64 v7; // rax
  const __m128i *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r12d
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm3
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-A8h] BYREF
  char v19; // [rsp+8h] [rbp-A0h]
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  __int128 v21; // [rsp+18h] [rbp-90h]
  bool v22; // [rsp+28h] [rbp-80h]
  __m128i v23; // [rsp+30h] [rbp-78h]
  __m128i v24; // [rsp+40h] [rbp-68h]
  __m128i v25; // [rsp+50h] [rbp-58h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v19 = 32;
  v21 = 0;
  v18 = &off_2B3E4E8;
  ptr = nullptr;
  if ( a3 )
  {
    v4 = strlen(a3);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v21 = v5;
    memmove(ptr, a3, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v22 = a2 != nullptr;
  v8 = (const __m128i *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(a1 + 40, &v18);
  v11 = sub_8BE300((_QWORD *)(a1 + 40), (__int64)v8, 33, nullptr, v9, v10);
  if ( !v11 && a2 )
  {
    v13 = _mm_loadu_si128(a2);
    v14 = _mm_loadu_si128(a2 + 1);
    v15 = _mm_loadu_si128(a2 + 2);
    *a2 = _mm_loadu_si128(v8 + 1);
    v16 = _mm_loadu_si128(v8 + 2);
    v23 = v13;
    a2[1] = v16;
    v17 = _mm_loadu_si128(v8 + 3);
    v24 = v14;
    a2[2] = v17;
    v25 = v15;
    v8[1] = v13;
    v8[2] = v14;
    v8[3] = v15;
  }
  if ( v8 )
    (*(void (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 8))(v8);
  sub_8D57C0(&v18);
  return v11;
}
