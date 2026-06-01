__int64 *__fastcall sub_D56BF0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  int v4; // r13d
  __int64 v6; // rax
  bool v7; // zf
  _DWORD *v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // esi
  int v14; // edx
  _DWORD *v15; // rax
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r14
  __m128i v32; // rdi
  int v33; // [rsp+0h] [rbp-80h]
  __int64 v34; // [rsp+8h] [rbp-78h]
  __int64 v35; // [rsp+8h] [rbp-78h]
  int v36; // [rsp+10h] [rbp-70h]
  int v37; // [rsp+14h] [rbp-6Ch]
  int v38; // [rsp+18h] [rbp-68h]
  __int64 v39; // [rsp+18h] [rbp-68h]
  __m128i v40; // [rsp+20h] [rbp-60h] BYREF
  int v41[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v42; // [rsp+40h] [rbp-40h]
  void *v43; // [rsp+48h] [rbp-38h]

  v4 = (int)a3;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = a3->m128i_i16[2] == 0;
  *a1 = 0;
  a1[1] = v6;
  if ( v7 && (v8 = *(_DWORD **)(a3[1].m128i_i64[0] + 24)) != nullptr && *(_DWORD *)(a2 + 448) == *v8 && v8[1] == 37 )
  {
    v28 = *(_QWORD *)(a2 + 8);
    v29 = *(_QWORD *)(a2 + 240);
    v42 = a3[3].m128i_i64[0];
    *(__m128i *)v41 = _mm_loadu_si128(a3 + 2);
    v30 = sub_15E1AF0(v29);
    v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)v28);
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    sub_14B9B80(*(_QWORD *)(a2 + 640), &v40);
    v31 = v40.m128i_i64[0];
    if ( v40.m128i_i64[0] )
      ++*(_DWORD *)(v40.m128i_i64[0] + 8);
    sub_D501E0(*a1, a1[1]);
    v32 = v40;
    *a1 = v31;
    sub_D50200(v32.m128i_i64[0], v32.m128i_i64[1]);
  }
  else
  {
    v9 = sub_15D1F10(a3);
    v13 = v9;
    v40.m128i_i64[0] = v9;
    v14 = *(_DWORD *)(a2 + 448);
    v34 = *(_QWORD *)(a2 + 8);
    v15 = *(_DWORD **)(v9 + 24);
    if ( v15 && v14 == *v15 && v15[1] == 1 )
    {
      v18 = sub_1674700(a2 + 232, 3);
    }
    else
    {
      v16 = sub_15C5540((int)a2 + 432, v13, v14, v10, v11, v12);
      v17 = sub_15C5560(a2 + 432, v40.m128i_i64[0]);
      v18 = sub_1674700(a2 + 232, (unsigned int)(v17 + v16));
    }
    v38 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    v19 = *(_QWORD *)(a2 + 8);
    v22 = sub_15D2D10(v19, *(_DWORD *)(a2 + 448), 48, 0, 0, 1, (__int64)&v40, v18);
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v23 = sub_15DC610(
            *(_QWORD *)(a2 + 8),
            v22,
            1,
            (int)v41,
            v20,
            v21,
            v33,
            v34,
            v36,
            v38,
            v40.m128i_i32[0],
            v40.m128i_i8[8],
            v4,
            v41[2],
            v42,
            v43);
    v24 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    v25 = *a1;
    if ( *a1 )
    {
      v26 = a1[1];
      v7 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v7 )
        sub_15D7BC0(v26, v25);
    }
    *a1 = v24;
    if ( v22 )
    {
      v7 = (*(_DWORD *)(v22 + 8))-- == 1;
      if ( v7 )
        sub_15D7BC0(v19, v22);
    }
    if ( v39 )
    {
      v37 = *(_DWORD *)(v39 + 8);
      *(_DWORD *)(v39 + 8) = v37 - 1;
      if ( v37 == 1 )
        sub_15D7BC0(v35, v39);
    }
  }
  return a1;
}

