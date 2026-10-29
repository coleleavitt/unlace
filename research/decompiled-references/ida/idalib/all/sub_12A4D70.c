void __fastcall sub_12A4D70(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i *v10; // rax
  __m128i *v11; // rdx
  __int64 *v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  void *v15[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-E8h] BYREF
  char *v17; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-B8h]
  _BYTE v19[32]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v20; // [rsp+70h] [rbp-88h]
  _BYTE v21[32]; // [rsp+80h] [rbp-78h] BYREF
  __int16 v22; // [rsp+A0h] [rbp-58h]
  _BYTE v23[32]; // [rsp+B0h] [rbp-48h] BYREF
  __int16 v24; // [rsp+D0h] [rbp-28h]

  sub_121FCF0(a1, a2, a3, a4);
  *(_QWORD *)a1 = off_2C3F098;
  v24 = 257;
  v17 = "/usr/lib";
  v5 = *(_QWORD *)(a1 + 8);
  v22 = 257;
  v20 = 257;
  v6 = *(_QWORD *)(v5 + 496);
  v18 = 259;
  sub_1130220(v15, *(_BYTE **)(v5 + 488), v6, (__int64)&v17, (__int64)v19, (__int64)v21, (__int64)v23);
  v7 = *(unsigned int *)(a1 + 632);
  v8 = v7 + 1;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v13 = *(_QWORD *)(a1 + 624);
    v14 = a1 + 624;
    if ( v13 > (unsigned __int64)v15 || (unsigned __int64)v15 >= v13 + 32 * v7 )
    {
      sub_A8C1F0(v14, v8);
      v9 = *(_QWORD *)(a1 + 624);
      v7 = *(unsigned int *)(a1 + 632);
      v10 = (__m128i *)v15;
    }
    else
    {
      sub_A8C1F0(v14, v8);
      v9 = *(_QWORD *)(a1 + 624);
      v7 = *(unsigned int *)(a1 + 632);
      v10 = (__m128i *)((char *)v15 + v9 - v13);
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 624);
    v10 = (__m128i *)v15;
  }
  v11 = (__m128i *)(v9 + 32 * v7);
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
  {
    v11[1] = _mm_loadu_si128(v10 + 1);
  }
  else
  {
    v11->m128i_i64[0] = v10->m128i_i64[0];
    v11[1].m128i_i64[0] = v10[1].m128i_i64[0];
  }
  v11->m128i_i64[1] = v10->m128i_i64[1];
  v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
  v12 = (__int64 *)v15[0];
  v10->m128i_i64[1] = 0;
  v10[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(a1 + 632);
  if ( v12 != &v16 )
    operator delete(v12);
}
