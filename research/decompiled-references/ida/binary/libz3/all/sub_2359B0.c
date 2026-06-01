__int64 __fastcall sub_2359B0(__int64 a1, double a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  _DWORD *v10; // rdi
  unsigned int v11; // r14d
  const __m128i *v12; // rax
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, _QWORD, __m128i *); // r8
  __int64 v18; // rax
  __m128i v19; // rdi
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24; // [rsp+0h] [rbp-B8h]
  __int64 v25; // [rsp+8h] [rbp-B0h]
  void (__fastcall *v26)(__int64, _QWORD, __m128i *); // [rsp+10h] [rbp-A8h]
  int v27; // [rsp+18h] [rbp-A0h]
  unsigned int v28; // [rsp+1Ch] [rbp-9Ch]
  __int64 v29; // [rsp+20h] [rbp-98h] BYREF
  __int64 v30; // [rsp+28h] [rbp-90h]
  __int64 v31; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h]
  __m128 v33; // [rsp+40h] [rbp-78h]
  __m128 v34; // [rsp+50h] [rbp-68h]
  __m128i v35; // [rsp+60h] [rbp-58h] BYREF
  __m128i v36; // [rsp+70h] [rbp-48h]

  *(_DWORD *)(a1 + 32) = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v29 = 0;
  v7 = *(__int64 **)(a1 + 16);
  v30 = v6;
  v32 = v6;
  v8 = *v7;
  v31 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 16))(v7);
  v10 = *(_DWORD **)(a1 + 16);
  v28 = v9;
  v11 = v10[2];
  (*(void (**)(void))(*(_QWORD *)v10 + 16LL))();
  v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v24 = a1 + 48;
  if ( v11 != v27 )
  {
    do
    {
      while ( 1 )
      {
        v12 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                                 *(_QWORD *)(a1 + 16),
                                 v11);
        v13 = (__m128)_mm_loadu_si128(v12);
        v14 = (__m128)_mm_loadu_si128(v12 + 1);
        a4 = _mm_movehl_ps(a4, v13);
        a5 = _mm_movehl_ps(a5, v14);
        v33 = v13;
        v34 = v14;
        if ( a4.m128_u64[0] )
          ++*(_DWORD *)(a4.m128_u64[0] + 8);
        if ( v14.m128_u64[0] )
          ++*(_DWORD *)(v14.m128_u64[0] + 8);
        if ( a5.m128_u64[0] )
          *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                    | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
        sub_14BB8A0(v24, a4.m128_u64[0], &v29, &v31);
        v15 = sub_14B6440(v24);
        v16 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 32) += v15;
        v17 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v16 + 32LL);
        if ( v14.m128_u64[0] && v31 )
        {
          v26 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v16 + 32LL);
          v25 = v16;
          v18 = sub_15DE0E0(*(_QWORD *)(a1 + 8), v14.m128_u64[0], v31);
          v16 = v25;
          v17 = v26;
        }
        else
        {
          v18 = 0;
        }
        v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)v29);
        v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)a5.m128_u64[0]);
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        if ( a5.m128_u64[0] )
          *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                    | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v17(v16, v11, &v35);
        v19 = v35;
        if ( v35.m128i_i64[1] )
        {
          v20 = (*(_DWORD *)(v35.m128i_i64[1] + 8))-- == 1;
          if ( v20 )
          {
            sub_15D7BC0(v19.m128i_i64[0], v19.m128i_i64[1]);
            v19.m128i_i64[0] = v35.m128i_i64[0];
          }
        }
        if ( v36.m128i_i64[1] )
        {
          sub_234C20((__int64 *)(v19.m128i_i64[0] + 648), (unsigned int *)v36.m128i_i64[1]);
          v19.m128i_i64[0] = v35.m128i_i64[0];
        }
        v19.m128i_i64[1] = v36.m128i_i64[0];
        if ( v36.m128i_i64[0] )
        {
          v20 = (*(_DWORD *)(v36.m128i_i64[0] + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v19.m128i_i64[0], v19.m128i_i64[1]);
        }
        if ( a4.m128_u64[0] )
        {
          v20 = (*(_DWORD *)(a4.m128_u64[0] + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v13.m128_u64[0], a4.m128_u64[0]);
        }
        if ( a5.m128_u64[0] )
          sub_234C20((__int64 *)(v13.m128_u64[0] + 648), (unsigned int *)a5.m128_u64[0]);
        if ( v14.m128_u64[0] )
        {
          v20 = (*(_DWORD *)(v14.m128_u64[0] + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v13.m128_u64[0], v14.m128_u64[0]);
        }
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
          || v11 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
        {
          break;
        }
        if ( ++v11 == v27 )
          goto LABEL_39;
      }
      v11 = v28;
    }
    while ( v28 != v27 );
  }
LABEL_39:
  v21 = v31;
  if ( v31 )
  {
    v22 = v32;
    v20 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v20 )
      sub_15D7BC0(v22, v21);
  }
  return sub_22BCA0(v29, v30);
}

