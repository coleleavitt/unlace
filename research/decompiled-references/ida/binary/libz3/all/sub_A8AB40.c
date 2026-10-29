__int64 __fastcall sub_A8AB40(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rax
  _DWORD *v6; // rbp
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  unsigned int *v11; // rax
  unsigned int *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  bool v16; // zf
  unsigned int v17; // [rsp+0h] [rbp-98h]
  __int64 v18; // [rsp+0h] [rbp-98h]
  unsigned int v19; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+8h] [rbp-90h]
  unsigned int v21; // [rsp+10h] [rbp-88h]
  unsigned int v22; // [rsp+14h] [rbp-84h]
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  unsigned int *v30[8]; // [rsp+58h] [rbp-40h] BYREF

  v2 = (__int64)(a1 + 2);
  v25 = *(_QWORD *)(v2 - 8);
  v3 = sub_993400(v2, 0);
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v26 = a1[1];
  v5 = sub_15E1B70(a1[2]);
  v6 = (_DWORD *)v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v27 = a1[1];
  v7 = sub_15E1B70(a1[2]);
  v8 = (_DWORD *)v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v28 = a1[1];
  v9 = sub_15E1A70(a1[2]);
  v10 = (_DWORD *)v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v29 = a1[1];
  v11 = (unsigned int *)sub_15E1B70(a1[2]);
  v12 = v11;
  if ( v11 )
    ++v11[2];
  v21 = sub_A7A500(a1, v11);
  v19 = sub_966380(*a1, v6, v8);
  v22 = sub_966380(*a1, v6, v10);
  v24 = *a1;
  v17 = v21 ^ 1;
  v23 = *(_QWORD *)(*a1 + 24);
  if ( *(_QWORD *)(v23 + 912) )
  {
    v13 = sub_186B270(0x10u);
    v30[0] = (unsigned int *)(v13 + 8);
    *(_QWORD *)v13 = 0x200000002LL;
    *(_QWORD *)(v13 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v19)).m128i_u64[0];
    sub_966E60(v24, v30);
    if ( v30[0] )
      sub_186B220(v30[0] - 2);
  }
  sub_A7A430((__int64)a1, v17, v19);
  if ( *(_QWORD *)(v23 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  v20 = *a1;
  v18 = *(_QWORD *)(*a1 + 24);
  if ( *(_QWORD *)(v18 + 912) )
  {
    v30[0] = nullptr;
    v14 = sub_186B270(0x10u);
    v30[0] = (unsigned int *)(v14 + 8);
    *(_QWORD *)v14 = 0x200000002LL;
    *(_QWORD *)(v14 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v22)).m128i_u64[0];
    sub_966E60(v20, v30);
    if ( v30[0] )
      sub_186B220(v30[0] - 2);
  }
  sub_A7A430((__int64)a1, v21, v22);
  result = v18;
  if ( *(_QWORD *)(v18 + 912) )
    result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v12 )
  {
    v16 = v12[2]-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v29, v12);
  }
  if ( v10 )
  {
    v16 = v10[2]-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v28, v10);
  }
  if ( v8 )
  {
    v16 = v8[2]-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v27, v8);
  }
  if ( v6 )
  {
    v16 = v6[2]-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v26, v6);
  }
  if ( v4 )
  {
    v16 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v25, v4);
  }
  return result;
}

