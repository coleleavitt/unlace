__int64 __fastcall sub_2354D0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int v4; // eax
  _DWORD *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  int v8; // r13d
  __int64 v9; // rbp
  __m128i v10; // xmm0
  __int64 *v11; // rdi
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64 *, _QWORD, __m128i *); // rcx
  unsigned int *v14; // rdx
  __m128i v15; // rdi
  bool v16; // zf
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+8h] [rbp-60h]
  __m128i v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned int *v22; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v18 = 0;
  v19 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v5 = *(_DWORD **)(a1 + 16);
  v6 = v4;
  v7 = v5[2];
  (*(void (**)(void))(*(_QWORD *)v5 + 16LL))();
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  while ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v7);
      sub_90EAE0(a1 + 32, *(_QWORD *)(v9 + 8), &v18, a1 + 528);
      v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)v18);
      if ( *(_QWORD *)(v9 + 8) != v18 )
      {
        v11 = *(__int64 **)(a1 + 16);
        v12 = *v11;
        v20 = v10;
        v21 = 0;
        v13 = *(void (__fastcall **)(__int64 *, _QWORD, __m128i *))(v12 + 32);
        v14 = *(unsigned int **)(v9 + 24);
        v22 = v14;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( v14 )
          *v14 = (*v14 + 1) & 0x3FFFFFFF | *v14 & 0xC0000000;
        v13(v11, v7, &v20);
        v15 = v20;
        if ( v20.m128i_i64[1] )
        {
          v16 = (*(_DWORD *)(v20.m128i_i64[1] + 8))-- == 1;
          if ( v16 )
          {
            sub_15D7BC0(v15.m128i_i64[0], v15.m128i_i64[1]);
            v15.m128i_i64[0] = v20.m128i_i64[0];
          }
        }
        if ( v22 )
        {
          sub_234C20((__int64 *)(v15.m128i_i64[0] + 648), v22);
          v15.m128i_i64[0] = v20.m128i_i64[0];
        }
        v15.m128i_i64[1] = v21;
        if ( v21 )
        {
          v16 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v15.m128i_i64[0], v15.m128i_i64[1]);
        }
      }
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
        || (*(unsigned __int8 (__fastcall **)(_QWORD, double))(**(_QWORD **)(a1 + 16) + 48LL))(
             *(_QWORD *)(a1 + 16),
             *(double *)v10.m128i_i64)
        || v7 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
      {
        break;
      }
      if ( ++v7 == v8 )
        return sub_22BCA0(v18, v19);
    }
    v7 = v6;
  }
  return sub_22BCA0(v18, v19);
}

