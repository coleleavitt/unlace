__int64 __fastcall sub_1F6DDE0(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  int v18; // eax
  __m128i v20; // [rsp+0h] [rbp-148h] BYREF
  int v21; // [rsp+10h] [rbp-138h]
  __m128i v22; // [rsp+40h] [rbp-108h] BYREF
  int v23; // [rsp+50h] [rbp-F8h]
  __m128i v24; // [rsp+60h] [rbp-E8h] BYREF
  int v25; // [rsp+70h] [rbp-D8h]
  _BYTE v26[136]; // [rsp+C0h] [rbp-88h] BYREF

  v3 = (__int64 *)a2[3];
  v4 = v3[1];
  v5 = *v3;
  sub_2234D00(v26);
  v6 = a2[14];
  v7 = v4;
  if ( a2[13] <= v4 )
    v7 = a2[13];
  v8 = 0;
  if ( v6 >= v7 )
  {
    if ( v6 > v4 )
      v6 = v4;
    v8 = v6 - v7;
  }
  sub_2236020(v26, v5 + v7, v8);
  sub_22360E0(&v22, v26);
  v9 = v4;
  v10 = _mm_load_si128(&v22);
  if ( a2[8] <= v4 )
    v9 = a2[8];
  v21 = v23;
  v20 = v10;
  sub_2236020(v26, v5, v9);
  v11 = v4;
  v12 = a2[13];
  if ( a2[9] <= v4 )
    v11 = a2[9];
  v13 = 0;
  if ( v12 >= v11 )
  {
    if ( v12 > v4 )
      v12 = v4;
    v13 = v12 - v11;
  }
  sub_2236020(v26, v5 + v11, v13);
  v14 = a2[14];
  v15 = 0;
  if ( v14 <= v4 )
  {
    v15 = v4 - v14;
    v4 = a2[14];
  }
  sub_2236020(v26, v5 + v4, v15);
  sub_22360E0(&v24, v26);
  v16 = _mm_load_si128(&v20);
  v17 = _mm_load_si128(&v24);
  *(_DWORD *)(a1 + 16) = v21;
  v18 = v25;
  *(__m128i *)a1 = v16;
  *(_DWORD *)(a1 + 36) = v18;
  *(__m128i *)(a1 + 20) = v17;
  return a1;
}
