__m128i *__fastcall sub_1F6DFF0(__m128i *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  __m128i *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r13
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // rsi
  __int32 v10; // eax
  __m128i *v12; // rbx
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  unsigned __int64 v15; // rbp
  __int64 v16; // r15
  unsigned __int8 v17; // dl
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  __m128i *v21; // rbx
  unsigned __int8 v22; // dl
  unsigned __int64 v23; // rsi
  __int32 v24; // eax
  __m128i v25; // [rsp+0h] [rbp-A8h] BYREF
  __int32 v26; // [rsp+10h] [rbp-98h]
  int v27; // [rsp+14h] [rbp-94h] BYREF
  __m128i v28; // [rsp+20h] [rbp-88h] BYREF
  __int32 v29; // [rsp+30h] [rbp-78h]
  char v30; // [rsp+34h] [rbp-74h] BYREF
  __m128i v31; // [rsp+40h] [rbp-68h] BYREF
  __int32 v32; // [rsp+50h] [rbp-58h]
  __m128i v33; // [rsp+54h] [rbp-54h] BYREF
  __int32 v34; // [rsp+64h] [rbp-44h]

  v2 = a2[7];
  if ( !v2 )
    goto LABEL_8;
  v3 = *(_DWORD *)(v2 + 36);
  if ( v3 <= 7 && ((1LL << v3) & 0xBC) != 0 )
  {
    v5 = &v31;
    sub_1F6DF10(&v31, (__int64)a2);
    v6 = a2[11];
    v7 = a2[2];
    do
    {
      v8 = v5->m128i_i8[0];
      v9 = v6;
      v5 = (__m128i *)((char *)v5 + 1);
      v6 += 8LL;
      sub_A1F830(v7, v9, v8);
    }
    while ( v5 != &v33 );
    v10 = v32;
    *a1 = _mm_load_si128(&v31);
    a1[1].m128i_i32[0] = v10;
    return a1;
  }
  if ( (*(_BYTE *)(**(_QWORD **)(a2[5] + 104LL) + 626LL) & 1) == 0 )
  {
LABEL_8:
    a1[1].m128i_i32[0] = 0;
    *a1 = 0;
    return a1;
  }
  v12 = &v25;
  sub_1F6DDE0((__int64)&v31, a2);
  v13 = _mm_load_si128(&v31);
  v14 = _mm_loadu_si128(&v33);
  v15 = a2[10];
  v26 = v32;
  v16 = a2[2];
  v25 = v13;
  v29 = v34;
  v28 = v14;
  do
  {
    v17 = v12->m128i_i8[0];
    v18 = v15;
    v12 = (__m128i *)((char *)v12 + 1);
    v15 += 8LL;
    sub_A1F830(v16, v18, v17);
  }
  while ( v12 != (__m128i *)&v27 );
  v19 = a2[11];
  v20 = a2[2];
  v21 = &v28;
  do
  {
    v22 = v21->m128i_i8[0];
    v23 = v19;
    v21 = (__m128i *)((char *)v21 + 1);
    v19 += 8LL;
    sub_A1F830(v20, v23, v22);
  }
  while ( v21 != (__m128i *)&v30 );
  v24 = v29;
  *a1 = _mm_load_si128(&v28);
  a1[1].m128i_i32[0] = v24;
  return a1;
}
