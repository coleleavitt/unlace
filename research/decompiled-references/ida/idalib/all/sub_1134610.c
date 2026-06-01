void __fastcall sub_1134610(__int64 a1, __int64 *a2, __int64 **a3)
{
  __int64 v4; // rax
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // rdx
  __int64 v17; // r13
  __int64 *v18; // [rsp+0h] [rbp-1A8h]
  _QWORD v20[4]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v21; // [rsp+30h] [rbp-178h]
  _BYTE v22[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v23; // [rsp+60h] [rbp-148h]
  _BYTE v24[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v25; // [rsp+90h] [rbp-118h]
  void *v26[2]; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v27[16]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v28; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  _BYTE v31[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE **)(v4 + 248);
  v6 = *(_QWORD *)(v4 + 256);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v31;
  sub_A1FE50(&ptr, v5, &v5[v6]);
  v28 = 257;
  v20[0] = "lib";
  v25 = 257;
  v23 = 257;
  v21 = 259;
  sub_228A3B0(&ptr, v20, v22, v24, v26);
  v7 = (__int64)&(*a3)[2 * (_QWORD)a3[1]];
  v8 = *a3;
  v18 = (__int64 *)v7;
  while ( v18 != v8 )
  {
    v23 = 257;
    v25 = 257;
    v9 = *v8;
    v8 += 2;
    v21 = 261;
    v20[0] = v9;
    v10 = *(v8 - 1);
    v28 = 257;
    v20[1] = v10;
    sub_228A3B0(&ptr, v20, v22, v24, v26);
  }
  v11 = *a2;
  v26[0] = v27;
  sub_112B570(v26, ptr, (__int64)ptr + si128.m128i_i64[0]);
  v12 = *(unsigned int *)(v11 + 8);
  v13 = v12 + 1;
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
  {
    v17 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 > (unsigned __int64)v26 || (unsigned __int64)v26 >= v17 + 32 * v12 )
    {
      sub_A8C1F0(v11, v13);
      v14 = *(_QWORD *)v11;
      v12 = *(unsigned int *)(v11 + 8);
      v15 = (__m128i *)v26;
    }
    else
    {
      sub_A8C1F0(v11, v13);
      v14 = *(_QWORD *)v11;
      v12 = *(unsigned int *)(v11 + 8);
      v15 = (__m128i *)((char *)v26 + *(_QWORD *)v11 - v17);
    }
  }
  else
  {
    v14 = *(_QWORD *)v11;
    v15 = (__m128i *)v26;
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
  v15->m128i_i64[1] = 0;
  v15[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(v11 + 8);
  if ( v26[0] != v27 )
    operator delete(v26[0]);
  if ( ptr != v31 )
    free(ptr);
}
