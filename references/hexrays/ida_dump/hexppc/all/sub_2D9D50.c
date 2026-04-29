unsigned __int64 __fastcall sub_2D9D50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // eax
  __m128i v8; // xmm2
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r13
  __m128i v17; // xmm0
  int v18; // edx
  __int64 v19; // rdi
  __m128i v20; // xmm3
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v24; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-C8h]
  __int64 v26; // [rsp+18h] [rbp-C0h]
  __m128i v27; // [rsp+20h] [rbp-B8h] BYREF
  int v28; // [rsp+34h] [rbp-A4h]
  __int64 v29; // [rsp+38h] [rbp-A0h]
  __int64 v30; // [rsp+40h] [rbp-98h]
  __int64 v31; // [rsp+48h] [rbp-90h]
  _BYTE v32[16]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v33; // [rsp+60h] [rbp-78h] BYREF
  __int128 v34; // [rsp+70h] [rbp-68h] BYREF
  __m128i v35; // [rsp+80h] [rbp-58h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v26 = a2;
  v36 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 56 )
  {
    v5 = a1 + 112;
    do
    {
      while ( 1 )
      {
        v6 = v5 - 56;
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5 - 56, a1) >= 0 )
          break;
        v7 = *(_DWORD *)(v5 - 48);
        v8 = _mm_loadu_si128((const __m128i *)(v5 - 32));
        v25 = v5;
        v9 = 0;
        v28 = v7;
        v10 = *(_QWORD *)(v5 - 40);
        v27 = v8;
        v29 = v10;
        v11 = *(_QWORD *)(v5 - 16);
        *(_QWORD *)(v5 - 40) = 0;
        v31 = v11;
        v12 = *(_QWORD *)(v5 - 8);
        *(_OWORD *)(v5 - 32) = 0;
        v30 = v12;
        v13 = 0x6DB6DB6DB6DB6DB7LL * ((v6 - a1) >> 3);
        if ( v6 - a1 > 0 )
        {
          do
          {
            v14 = *(_DWORD *)(v6 - 48);
            v15 = *(_QWORD *)(v6 + 16);
            v6 -= 56;
            v16 = *(_QWORD *)(v6 + 16);
            v17 = _mm_loadu_si128((const __m128i *)(v6 + 24));
            *(_QWORD *)(v6 + 16) = 0;
            *(_OWORD *)(v6 + 24) = v9;
            *(_DWORD *)(v6 + 64) = v14;
            if ( v15 )
            {
              *(_QWORD *)(v6 + 80) = 0;
              v24 = v17;
              qfree(v15);
              v17 = _mm_load_si128(&v24);
              v9 = 0;
            }
            v18 = *(_DWORD *)(v6 + 40);
            *(_QWORD *)(v6 + 72) = v16;
            *(__m128i *)(v6 + 80) = v17;
            *(_DWORD *)(v6 + 96) = v18;
            *(_DWORD *)(v6 + 100) = *(_DWORD *)(v6 + 44);
            *(_QWORD *)(v6 + 104) = *(_QWORD *)(v6 + 48);
            --v13;
          }
          while ( v13 );
        }
        v19 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 8) = v28;
        if ( v19 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          qfree(v19);
        }
        v20 = _mm_load_si128(&v27);
        v5 += 56;
        v21 = v26;
        *(_QWORD *)(a1 + 16) = v29;
        v22 = v31;
        *(__m128i *)(a1 + 24) = v20;
        *(_QWORD *)(a1 + 40) = v22;
        *(_QWORD *)(a1 + 48) = v30;
        if ( v25 == v21 )
          return v36 - __readfsqword(0x28u);
      }
      sub_2CA3C0((__int64)v32, (const __m128i *)a3);
      v35 = 0u;
      v34 = 0;
      if ( v33.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v33.m128i_i64[0])(&v34, v32, 2);
        v35 = _mm_load_si128(&v33);
      }
      sub_2D9B30(v5 - 56, (__int64)&v34);
      if ( v35.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v35.m128i_i64[0])(&v34, &v34, 3);
      if ( v33.m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v33.m128i_i64[0])(v32, v32, 3);
      v25 = v5;
      v5 += 56;
    }
    while ( v25 != v26 );
  }
  return v36 - __readfsqword(0x28u);
}
