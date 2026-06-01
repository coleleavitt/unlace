__m128i *__fastcall sub_1CAFE90(__m128i *a1, _QWORD **a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  _QWORD *v17; // rsi
  __m128i v18; // xmm1
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned int v23; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v24; // [rsp+18h] [rbp-60h] BYREF
  __m128i v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]

  if ( *(_DWORD *)a3 == 1 )
  {
    v21 = *(_QWORD *)(a3 + 8);
    v22 = a1->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
    a1->m128i_i64[1] = v21;
    a1->m128i_i64[0] = v22;
    a1[1].m128i_i64[1] = v21 & 0xFFFFFFFFFFFFFFFCLL | 1;
  }
  else if ( *(_DWORD *)a3 )
  {
    sub_F22A90(&v25, *(_QWORD *)(a3 + 8));
    v9 = *(_DWORD *)(a3 + 68);
    v10 = *(unsigned int *)(a3 + 64);
    v11 = *a2;
    v12 = v25.m128i_i64[0];
    v26 = 0;
    v23 = v10;
    v25 = 0;
    v16 = sub_15AB9E0(a3 + 16, v11, v13, v14, v10, v15);
    v25.m128i_i64[1] = v12;
    v17 = *a2;
    v25.m128i_i32[0] = ((v9 != 0) + 6) | v25.m128i_i32[0] & 0x80000000;
    v18 = _mm_load_si128(&v25);
    a1[1].m128i_i64[0] = v26;
    *a1 = v18;
    sub_F1ECA0(&a1[1].m128i_u64[1], v17, v16, v19, v23, v9);
  }
  else
  {
    v5 = sub_1E5F010(*(_QWORD *)(a3 + 8), &v24);
    v6 = (unsigned __int64)v24;
    v7 = v5;
    if ( !v24 )
    {
      v6 = (unsigned __int64)sub_A81910(*a2, v5, *(_DWORD *)(a3 + 64));
      v24 = (_QWORD *)v6;
    }
    sub_F1D250((__int64)&v25, v7, 0, 0);
    v8 = v26;
    *a1 = _mm_load_si128(&v25);
    a1[1].m128i_i64[0] = v8;
    a1[1].m128i_i64[1] = v6 & 0xFFFFFFFFFFFFFFFCLL | 2;
  }
  return a1;
}
