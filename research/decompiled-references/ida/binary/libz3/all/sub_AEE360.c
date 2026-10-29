__int64 __fastcall sub_AEE360(__int64 a1, int a2, __m128i *a3, __int64 a4, int a5, int a6)
{
  __m128i v7; // xmm0
  __int64 v8; // rax
  unsigned int v9; // r13d
  __m128i *v10; // rbp
  _DWORD *v11; // r15
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r14
  int v15; // eax
  __int64 result; // rax
  int v17; // [rsp+0h] [rbp-68h]
  int v18[2]; // [rsp+8h] [rbp-60h]
  unsigned int v19; // [rsp+8h] [rbp-60h]
  int v20; // [rsp+10h] [rbp-58h]
  unsigned int *v21; // [rsp+10h] [rbp-58h]
  int v22[2]; // [rsp+18h] [rbp-50h]
  int v23[4]; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+40h] [rbp-28h]
  void *v27; // [rsp+48h] [rbp-20h]

  v7 = _mm_loadu_si128(a3 + 2);
  v8 = sub_15DC610(
         *(_QWORD *)(a1 + 24),
         a2,
         2,
         (int)v23,
         a5,
         a6,
         v17,
         a3[1].m128i_i64[0],
         v20,
         *(_QWORD *)(a1 + 24),
         v7.m128i_i32[0],
         v7.m128i_i8[8],
         v24,
         v25,
         v26,
         v27);
  v21 = (unsigned int *)v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  sub_AEE2E0(a1, (unsigned int *)a3);
  sub_AEE2E0(a1, v21);
  v9 = sub_B645B0(*(_QWORD *)(a1 + 16), v21);
  v10 = a3;
  while ( 1 )
  {
    result = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 != v10[1].m128i_i64[0] )
      break;
    v11 = (_DWORD *)v10[2].m128i_i64[1];
    v10 = (__m128i *)v10[2].m128i_i64[0];
    v12 = *(_QWORD *)(a1 + 16);
    v13 = sub_966380(a1, a3, v10);
    sub_B6A470(v12, *(unsigned int *)(a1 + 8), v9, v13 ^ 1u, 0, 0);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = sub_966380(a1, a3, v11);
    sub_B6A470(v14, *(unsigned int *)(a1 + 8), v9, v15 ^ 1u, 0, 0);
  }
  if ( v21 )
  {
    v19 = v21[2];
    result = v19 - 1;
    v21[2] = result;
    if ( v19 == 1 )
      return sub_15D7BC0(*(_QWORD *)v22, v21);
  }
  return result;
}

