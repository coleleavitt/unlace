__int64 __fastcall sub_D52910(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // [rsp+8h] [rbp-A0h]
  __int64 v18; // [rsp+10h] [rbp-98h]
  __int64 v19; // [rsp+18h] [rbp-90h]
  unsigned __int64 v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+28h] [rbp-80h]
  unsigned __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+48h] [rbp-60h]
  __m128i v26; // [rsp+50h] [rbp-58h]
  __m128i v27; // [rsp+60h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 8);
  v20 = 0;
  v21 = v5;
  v22 = 0;
  v23 = v5;
  v24 = 0;
  v25 = v5;
  sub_D51BC0(a1, a2, (__int64 *)&v20, (__int64 *)&v22, &v24);
  v6 = v20;
  v7 = v22;
  v8 = v24;
  v18 = v23;
  v9 = v25;
  v10 = *(_QWORD *)(a1 + 240);
  v17 = v21;
  v26 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v22);
  v11 = sub_15E1AF0(v10);
  v12 = *(_QWORD *)(a1 + 240);
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v8);
  result = sub_15E1AF0(v12);
  if ( result )
    ++*(_DWORD *)(result + 8);
  v14 = *a3;
  if ( *a3 )
  {
    v15 = a3[1];
    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v16 )
    {
      v19 = result;
      sub_15D7BC0(v15, v14);
      result = v19;
    }
  }
  *a3 = result;
  if ( v8 )
  {
    v16 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v9, v8);
  }
  if ( v7 )
  {
    v16 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v18, v7);
  }
  if ( v6 )
  {
    v16 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v17, v6);
  }
  return result;
}

