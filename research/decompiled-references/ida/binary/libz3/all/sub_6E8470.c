__int64 __fastcall sub_6E8470(__int64 a1, unsigned __int64 *a2, unsigned __int8 a3, __m128i *a4)
{
  __int64 *v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int *v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // [rsp+10h] [rbp-98h]
  __int64 v20; // [rsp+10h] [rbp-98h]
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  unsigned int *v23; // [rsp+28h] [rbp-80h] BYREF
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+48h] [rbp-60h]
  __m128 v28; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v29[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = *(__int64 **)(a1 + 8);
  v6 = *v5;
  v23 = nullptr;
  v24 = 0;
  v22 = v6;
  v25 = v6;
  v26 = 0;
  v27 = v6;
  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64 *, __m128i *))(**(_QWORD **)(a1 + 16) + 16LL))(
      *(_QWORD *)(a1 + 16),
      a2,
      a4);
  }
  else
  {
    v29[0] = *a2;
    sub_3EE030((__int64)v29, (__int64)a2);
    sub_6E08C0((__int64)v5, (__int64 *)v29);
    (*(void (__fastcall **)(_QWORD, _OWORD *, __m128i *))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v29, a4);
    sub_2B4F40((__int64 *)v29);
  }
  v7 = a2[1];
  if ( v7 && *(_DWORD *)(v7 - 4) > 1u )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**(_QWORD **)(a1 + 16) + 24LL))(
      *(_QWORD *)(a1 + 16),
      a2,
      &v24);
    v10 = a2[1];
    v11 = 1;
    while ( v10 )
    {
      if ( v11 >= *(_DWORD *)(v10 - 4) )
        break;
      v19 = *(_QWORD *)(v10 + 8LL * v11);
      v12 = sub_6DF7C0((__int64)v5, v11);
      v13 = sub_6E1C90(v5, v12, v19);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v14 = v23;
      if ( v23 )
      {
        v15 = *(v23 - 1);
        if ( v15 != *(v23 - 2) )
          continue;
      }
      v20 = v13;
      sub_3A6B20(&v23);
      v14 = v23;
      v13 = v20;
      v15 = *(v23 - 1);
      ++v11;
      *(_QWORD *)&v14[2 * v15] = v13;
      v10 = a2[1];
      *(v14 - 1) = v15 + 1;
    }
    sub_6E8470(a1, (unsigned int)&v22, a3 ^ 1, (unsigned int)&v26, v8, v9);
    v28 = _mm_loadh_ps((const double *)&v26);
    v29[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(a4), (__m128i)(unsigned __int64)sub_6E3580(v5, 2, &v28));
    v16 = sub_6E1880(v5, 2, v29);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    sub_6DE2A0(a4->m128i_i64[0], a4->m128i_i64[1]);
    a4->m128i_i64[0] = v17;
  }
  sub_6DE2A0(v26, v27);
  sub_6DE2A0(v24, v25);
  return sub_2B4F40(&v22);
}

