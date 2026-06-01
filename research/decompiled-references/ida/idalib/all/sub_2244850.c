unsigned __int64 __fastcall sub_2244850(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 i; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __m128i v14; // xmm0
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // [rsp+8h] [rbp-80h]
  __m128i v19; // [rsp+10h] [rbp-78h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  __m128i v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  sub_22447A0(&v22, a1, a2, a4, a5);
  result = v22.m128i_u64[1];
  v9 = v22.m128i_i64[0];
  v10 = v23;
  for ( i = v24; result; result -= v17 )
  {
    v22.m128i_i64[1] = result;
    v12 = *(unsigned int *)(a3 + 8);
    v13 = *(unsigned int *)(a3 + 12);
    v22.m128i_i64[0] = v9;
    v14 = _mm_load_si128(&v22);
    if ( v12 + 1 > v13 )
    {
      v19 = v14;
      v18 = i;
      sub_2237220(a3, (const void *)(a3 + 16), v12 + 1, 16);
      v12 = *(unsigned int *)(a3 + 8);
      v14 = _mm_load_si128(&v19);
      i = v18;
    }
    *(__m128i *)(*(_QWORD *)a3 + 16 * v12) = v14;
    ++*(_DWORD *)(a3 + 8);
    v21 = i;
    v20 = v10;
    v15 = sub_2246FB0(&v20, a4, a5, 0);
    result = sub_2246EC0(&v20, a4, a5, v15);
    if ( result > v21 )
    {
      v16 = v21;
      i = 0;
    }
    else
    {
      v16 = result;
      i = v21 - result;
    }
    v17 = v15;
    v10 = v20 + v16;
    if ( v15 > v21 )
      v17 = v21;
    if ( result < v17 )
      break;
    if ( result > v21 )
      result = v21;
    v9 = v17 + v20;
  }
  return result;
}
