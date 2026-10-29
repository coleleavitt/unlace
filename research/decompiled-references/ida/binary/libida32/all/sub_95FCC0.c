unsigned __int64 __fastcall sub_95FCC0(__int64 a1, const __m128i *a2, __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  char *v20; // [rsp+0h] [rbp-58h]
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v3 = *(__int64 **)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v4 = *(__int64 **)a1;
  v5 = ((__int64)v3 - *(_QWORD *)a1) >> 3;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = ((__int64)v3 - *(_QWORD *)a1) >> 3;
  v7 = __CFADD__(v6, v5);
  v8 = v6 + v5;
  if ( v7 )
  {
    v9 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      v8 = 0xFFFFFFFFFFFFFFFLL;
    v9 = 8 * v8;
  }
  v20 = (char *)v3 - *(_QWORD *)a1;
  v10 = operator new(v9);
  *(_QWORD *)&v20[v10] = 0;
  v11 = operator new(0x20u);
  v22 = v11;
  v12 = _mm_loadu_si128(a2);
  v13 = *a3;
  *(_QWORD *)v11 = &off_2B161A8;
  *(_QWORD *)(v11 + 8) = v13;
  *(__m128i *)(v11 + 16) = v12;
  std::thread::_M_start_thread();
  if ( v22 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 8LL))(v22, &v22);
  v14 = v10;
  if ( v4 != v3 )
  {
    v15 = v4;
    v16 = v10;
    v14 = v10 + (char *)v3 - (char *)v4;
    do
    {
      v17 = *v15;
      v16 += 8;
      ++v15;
      *(_QWORD *)(v16 - 8) = v17;
    }
    while ( v14 != v16 );
  }
  v18 = v14 + 8;
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 16) - (_QWORD)v4);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 16) = v9 + v10;
  return v23 - __readfsqword(0x28u);
}

