void __fastcall sub_1168900(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // rdx
  _BYTE *v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  void *v23[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v24[40]; // [rsp+10h] [rbp-28h] BYREF

  sub_1134980(a1, a2, a3, a4);
  v6 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)a1 = off_2C36810;
  v7 = v6 + 1;
  v8 = *(_QWORD *)(a1 + 8) + 104LL;
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v20 = *(_QWORD *)(a1 + 1152);
    v21 = a1 + 1152;
    if ( v20 > v8 || v8 >= v20 + 32 * v6 )
    {
      sub_A8C1F0(v21, v7);
      v9 = *(_QWORD *)(a1 + 1152);
      v6 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v22 = v8 - v20;
      sub_A8C1F0(v21, v7);
      v9 = *(_QWORD *)(a1 + 1152);
      v6 = *(unsigned int *)(a1 + 1160);
      v8 = v9 + v22;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 1152);
  }
  v10 = (_QWORD *)(v9 + 32 * v6);
  *v10 = v10 + 2;
  sub_11655A0(v10, *(_BYTE **)v8, *(_QWORD *)v8 + *(_QWORD *)(v8 + 8));
  ++*(_DWORD *)(a1 + 1160);
  *(_BYTE *)(a1 + 2384) = sub_21B7850(a4, 874, 1189, 1);
  v11 = *(_QWORD *)(a1 + 8);
  v23[0] = v24;
  sub_11655A0(v23, *(_BYTE **)(v11 + 488), *(_QWORD *)(v11 + 488) + *(_QWORD *)(v11 + 496));
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v23[1] <= 7 )
    std::__throw_length_error("basic_string::append");
  sub_9EE560(v23, "/usr/lib", 8u);
  v12 = *(unsigned int *)(a1 + 104);
  v13 = v12 + 1;
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 108) )
  {
    v18 = *(_QWORD *)(a1 + 96);
    v19 = a1 + 96;
    if ( v18 > (unsigned __int64)v23 || (unsigned __int64)v23 >= v18 + 32 * v12 )
    {
      sub_A8C1F0(v19, v13);
      v14 = *(_QWORD *)(a1 + 96);
      v12 = *(unsigned int *)(a1 + 104);
      v15 = (__m128i *)v23;
    }
    else
    {
      sub_A8C1F0(v19, v13);
      v14 = *(_QWORD *)(a1 + 96);
      v12 = *(unsigned int *)(a1 + 104);
      v15 = (__m128i *)((char *)v23 + v14 - v18);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 96);
    v15 = (__m128i *)v23;
  }
  v16 = (__m128i *)(v14 + 32 * v12);
  v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v16[1] = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    v16->m128i_i64[0] = v15->m128i_i64[0];
    v16[1].m128i_i64[0] = v15[1].m128i_i64[0];
  }
  v16->m128i_i64[1] = v15->m128i_i64[1];
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v17 = v23[0];
  v15->m128i_i64[1] = 0;
  v15[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(a1 + 104);
  if ( v17 != v24 )
    operator delete(v17);
}
