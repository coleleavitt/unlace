__int64 __fastcall sub_2356B0(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // eax
  _DWORD *v6; // rdi
  unsigned int v7; // r12d
  int v8; // r13d
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned int *v13; // r9
  void (__fastcall *v14)(__int64, _QWORD, __m128i *); // r15
  __int64 v15; // rax
  __m128i v16; // rdi
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v21; // [rsp+14h] [rbp-84h]
  unsigned int *v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  __m128i v27; // [rsp+40h] [rbp-58h] BYREF
  __m128i v28; // [rsp+50h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(__int64 **)(a1 + 16);
  v23 = 0;
  v24 = v2;
  v26 = v2;
  v4 = *v3;
  v25 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 16))(v3);
  v6 = *(_DWORD **)(a1 + 16);
  v21 = v5;
  v7 = v6[2];
  (*(void (**)(void))(*(_QWORD *)v6 + 16LL))();
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
LABEL_2:
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                       *(_QWORD *)(a1 + 16),
                       v7);
      sub_913A40(a1 + 48, v9[1], &v23, &v25);
      v10 = *(_QWORD *)(a1 + 8);
      if ( v23 == v9[1] )
        goto LABEL_21;
      v11 = *(_QWORD *)(a1 + 16);
      v12 = v9[2];
      v13 = (unsigned int *)v9[3];
      v14 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v11 + 32LL);
      if ( v12 )
      {
        if ( v25 )
          break;
      }
      v27 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(unsigned __int64)v23);
      v28 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v13);
      if ( !v23 )
      {
        if ( v13 )
          *v13 = (*v13 + 1) & 0x3FFFFFFF | *v13 & 0xC0000000;
        goto LABEL_12;
      }
      ++*(_DWORD *)(v23 + 8);
      v15 = 0;
      if ( v13 )
        goto LABEL_9;
LABEL_12:
      v14(v11, v7, &v27);
      v16 = v27;
      if ( v27.m128i_i64[1] )
      {
        v17 = (*(_DWORD *)(v27.m128i_i64[1] + 8))-- == 1;
        if ( v17 )
        {
          sub_15D7BC0(v16.m128i_i64[0], v16.m128i_i64[1]);
          v16.m128i_i64[0] = v27.m128i_i64[0];
        }
      }
      if ( v28.m128i_i64[1] )
      {
        sub_234C20((__int64 *)(v16.m128i_i64[0] + 648), (unsigned int *)v28.m128i_i64[1]);
        v16.m128i_i64[0] = v27.m128i_i64[0];
      }
      v16.m128i_i64[1] = v28.m128i_i64[0];
      if ( v28.m128i_i64[0] )
      {
        v17 = (*(_DWORD *)(v28.m128i_i64[0] + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v16.m128i_i64[0], v16.m128i_i64[1]);
      }
      v10 = *(_QWORD *)(a1 + 8);
LABEL_21:
      if ( !(unsigned __int8)sub_18290A0(v10)
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
        || v7 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
      {
        v7 = v21;
        goto LABEL_2;
      }
      if ( ++v7 == v8 )
        goto LABEL_25;
    }
    v22 = (unsigned int *)v9[3];
    v15 = sub_15DE0E0(v10, v12, v25);
    v13 = v22;
    v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)v23);
    v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v22);
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    if ( v22 )
LABEL_9:
      *v13 = (*v13 + 1) & 0x3FFFFFFF | *v13 & 0xC0000000;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    goto LABEL_12;
  }
LABEL_25:
  v18 = v25;
  if ( v25 )
  {
    v19 = v26;
    v17 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v19, v18);
  }
  return sub_22BCA0(v23, v24);
}

