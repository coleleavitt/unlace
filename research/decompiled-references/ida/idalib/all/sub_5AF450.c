unsigned __int64 __fastcall sub_5AF450(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  void *v3; // rax
  bool v4; // zf
  __int64 *v5; // rbx
  void *v6; // rdi
  __int64 v7; // r13
  __m128i v8; // xmm0
  int v9; // eax
  void *v10; // rdi
  void *v11; // r12
  __m128i v12; // xmm1
  int v13; // eax
  __m128i v14; // xmm1
  void *v15; // rdi
  __int64 v16; // rax
  int v18; // eax
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v21; // [rsp+18h] [rbp-50h] BYREF
  int v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v24 = __readfsqword(0x28u);
  v3 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  v21 = v2;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(a2 + 16) == 0;
  ptr = v3;
  v22 = *(_DWORD *)(a1 + 24);
  v23 = *(_QWORD *)(a1 + 32);
  if ( v4 )
LABEL_12:
    std::__throw_bad_function_call();
  v5 = (__int64 *)(a1 - 40);
  while ( (*(int (__fastcall **)(__int64, void **, __int64 *))(a2 + 24))(a2, &ptr, v5) < 0 )
  {
    v6 = (void *)v5[5];
    v7 = *v5;
    *v5 = 0;
    v8 = _mm_loadu_si128((const __m128i *)(v5 + 1));
    *(_OWORD *)(v5 + 1) = 0;
    if ( v6 )
    {
      v5[6] = 0;
      v19 = v8;
      qfree(v6);
      v8 = _mm_load_si128(&v19);
    }
    v9 = *((_DWORD *)v5 + 6);
    v5[5] = v7;
    v5 -= 5;
    *(__m128i *)(v5 + 11) = v8;
    *((_DWORD *)v5 + 26) = v9;
    v5[14] = v5[9];
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_12;
  }
  v10 = (void *)v5[5];
  v11 = ptr;
  ptr = nullptr;
  v12 = _mm_loadu_si128(&v21);
  v21 = 0;
  if ( v10 )
  {
    v5[6] = 0;
    v19 = v12;
    qfree(v10);
    v13 = v22;
    v5[5] = (__int64)v11;
    v14 = _mm_load_si128(&v19);
    v15 = ptr;
    *((_DWORD *)v5 + 16) = v13;
    v16 = v23;
    *((__m128i *)v5 + 3) = v14;
    v5[9] = v16;
    if ( v15 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v15);
    }
  }
  else
  {
    v18 = v22;
    v5[5] = (__int64)v11;
    *((__m128i *)v5 + 3) = v12;
    *((_DWORD *)v5 + 16) = v18;
    v5[9] = v23;
  }
  return v24 - __readfsqword(0x28u);
}
