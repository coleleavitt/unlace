__int64 __fastcall sub_6E7B10(__int64 a1, __int64 a2, __m128i *a3)
{
  __int64 *v6; // r13
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+10h] [rbp-88h] BYREF
  unsigned int *v31; // [rsp+18h] [rbp-80h] BYREF
  __int64 v32; // [rsp+20h] [rbp-78h] BYREF
  __int64 v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __m128 v36; // [rsp+40h] [rbp-58h] BYREF
  __m128i v37[4]; // [rsp+50h] [rbp-48h] BYREF

  v6 = *(__int64 **)(a1 + 8);
  v7 = *(__int64 **)(a1 + 16);
  v8 = *v6;
  v31 = nullptr;
  v32 = 0;
  v30 = v8;
  v33 = v8;
  v35 = v8;
  v9 = *v7;
  v34 = 0;
  (*(void (__fastcall **)(__int64 *))(v9 + 16))(v7);
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 && *(_DWORD *)(v10 - 4) > 1u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), a2, &v32);
    v14 = *(_QWORD *)(a2 + 8);
    v15 = 1;
    while ( v14 )
    {
      if ( v15 >= *(_DWORD *)(v14 - 4) )
        break;
      v29 = *(_QWORD *)(v14 + 8LL * v15);
      v16 = sub_6DF7C0((__int64)v6, v15);
      v17 = sub_6E1C90(v6, v16, v29);
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v18 = v31;
      if ( v31 )
      {
        v19 = *(v31 - 1);
        if ( v19 != *(v31 - 2) )
          continue;
      }
      v29 = v17;
      sub_3A6B20(&v31);
      v18 = v31;
      v17 = v29;
      v19 = *(v31 - 1);
      v20 = v19;
      v11 = v19 + 1;
      ++v15;
      *(_QWORD *)&v18[2 * v20] = v17;
      v14 = *(_QWORD *)(a2 + 8);
      *(v18 - 1) = v11;
    }
    sub_6E7B10(
      a1,
      (unsigned int)&v30,
      (unsigned int)&v34,
      v11,
      v12,
      v13,
      (unsigned int)&v30,
      v29,
      v30,
      (__int64)v31,
      v32,
      v33,
      v34);
    v36 = _mm_loadh_ps((const double *)&v34);
    v37[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(a3), (__m128i)(unsigned __int64)sub_6E3580(v6, 2, &v36));
    v21 = sub_6E1880(v6, 2, v37);
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    sub_6DE2A0(a3->m128i_i64[0], a3->m128i_i64[1]);
    a3->m128i_i64[0] = v22;
  }
  v23 = v34;
  if ( v34 )
  {
    v24 = v35;
    v25 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v24, v23);
  }
  v26 = v32;
  if ( v32 )
  {
    v27 = v33;
    v25 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v27, v26);
  }
  return sub_2B4F40(&v30);
}

