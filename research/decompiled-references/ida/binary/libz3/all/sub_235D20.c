__int64 __fastcall sub_235D20(__int64 a1, double a2, double a3, __m128 a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r14d
  int v11; // edx
  const __m128i *v12; // rax
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, _QWORD, __m128i *); // r8
  __int64 v18; // rax
  __m128i v19; // rdi
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // [rsp+18h] [rbp-C0h]
  void (__fastcall *v24)(__int64, _QWORD, __m128i *); // [rsp+20h] [rbp-B8h]
  int v25; // [rsp+28h] [rbp-B0h]
  unsigned int v26; // [rsp+2Ch] [rbp-ACh]
  __int64 v27; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 v29; // [rsp+48h] [rbp-90h]
  __int64 v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+58h] [rbp-80h]
  __m128 v32; // [rsp+60h] [rbp-78h]
  __m128 v33; // [rsp+70h] [rbp-68h]
  __m128i v34; // [rsp+80h] [rbp-58h] BYREF
  __m128i v35; // [rsp+90h] [rbp-48h]

  result = sub_F86870(*(_QWORD *)(a1 + 16));
  if ( (_BYTE)result )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(__int64 **)(a1 + 16);
    v28 = 0;
    v30 = 0;
    v29 = v7;
    v31 = v7;
    v9 = *v8;
    v27 = a1;
    v26 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 16))(v8);
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    sub_232F80((__int64)&v27);
    v25 = v11;
    if ( v10 != v11 )
    {
      do
      {
        while ( 1 )
        {
          v12 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                                   *(_QWORD *)(a1 + 16),
                                   v10);
          v13 = (__m128)_mm_loadu_si128(v12);
          v14 = (__m128)_mm_loadu_si128(v12 + 1);
          v15 = v12[1].m128i_i64[0];
          a4 = _mm_movehl_ps(a4, v13);
          a5 = _mm_movehl_ps(a5, v14);
          v32 = v13;
          v33 = v14;
          if ( a4.m128_u64[0] )
            ++*(_DWORD *)(a4.m128_u64[0] + 8);
          if ( v14.m128_u64[0] )
            ++*(_DWORD *)(v14.m128_u64[0] + 8);
          if ( a5.m128_u64[0] )
            *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                      | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
          sub_13AD320(a1 + 32, a4.m128_u64[0], &v28, &v30);
          v16 = *(_QWORD *)(a1 + 16);
          v17 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v16 + 32LL);
          if ( v15 && v30 )
          {
            v24 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v16 + 32LL);
            v23 = *(_QWORD *)(a1 + 16);
            v18 = sub_15DE0E0(*(_QWORD *)(a1 + 8), v14.m128_u64[0], v30);
            v16 = v23;
            v17 = v24;
          }
          else
          {
            v18 = 0;
          }
          v34 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)(unsigned __int64)v28);
          v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)a5.m128_u64[0]);
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          if ( a5.m128_u64[0] )
            *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                      | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          v17(v16, v10, &v34);
          v19 = v34;
          if ( v34.m128i_i64[1] )
          {
            v20 = (*(_DWORD *)(v34.m128i_i64[1] + 8))-- == 1;
            if ( v20 )
            {
              sub_15D7BC0(v19.m128i_i64[0], v19.m128i_i64[1]);
              v19.m128i_i64[0] = v34.m128i_i64[0];
            }
          }
          if ( v35.m128i_i64[1] )
          {
            sub_234C20((__int64 *)(v19.m128i_i64[0] + 648), (unsigned int *)v35.m128i_i64[1]);
            v19.m128i_i64[0] = v34.m128i_i64[0];
          }
          v19.m128i_i64[1] = v35.m128i_i64[0];
          if ( v35.m128i_i64[0] )
          {
            v20 = (*(_DWORD *)(v35.m128i_i64[0] + 8))-- == 1;
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
            || v10 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
          {
            break;
          }
          if ( ++v10 == v25 )
            goto LABEL_40;
        }
        v10 = v26;
      }
      while ( v26 != v25 );
    }
LABEL_40:
    v21 = v30;
    if ( v30 && (v22 = v31, v20 = *(_DWORD *)(v30 + 8) == 1, --*(_DWORD *)(v30 + 8), v20) )
    {
      sub_15D7BC0(v22, v21);
      return sub_22BCA0(v28, v29);
    }
    else
    {
      return sub_22BCA0(v28, v29);
    }
  }
  return result;
}

