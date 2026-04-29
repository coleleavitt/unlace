unsigned __int64 __fastcall sub_2D9400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rsi
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v17; // [rsp+18h] [rbp-C0h]
  __m128i v18; // [rsp+30h] [rbp-A8h]
  _BYTE v19[16]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v20; // [rsp+60h] [rbp-78h] BYREF
  __int128 v21; // [rsp+70h] [rbp-68h] BYREF
  __m128i v22; // [rsp+80h] [rbp-58h]
  unsigned __int64 v23; // [rsp+98h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 64 )
  {
    v5 = a1 + 128;
    do
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5 - 64, a1) >= 0 )
          break;
        v7 = v5 - 64 - a1;
        v8 = *(_DWORD *)(v5 - 40);
        v9 = v5;
        v10 = *(_DWORD *)(v5 - 16);
        v11 = *(_QWORD *)(v5 - 8);
        v12 = v5;
        v17 = _mm_loadu_si128((const __m128i *)(v5 - 56));
        v13 = v7 >> 6;
        v18 = _mm_loadu_si128((const __m128i *)(v5 - 32));
        if ( v7 > 0 )
        {
          do
          {
            v14 = *(_QWORD *)(v12 - 120);
            v12 -= 64;
            *(_QWORD *)(v12 + 8) = v14;
            *(_DWORD *)(v12 + 16) = *(_DWORD *)(v12 - 48);
            *(_DWORD *)(v12 + 24) = *(_DWORD *)(v12 - 40);
            *(_QWORD *)(v12 + 32) = *(_QWORD *)(v12 - 32);
            *(_DWORD *)(v12 + 40) = *(_DWORD *)(v12 - 24);
            *(_DWORD *)(v12 + 48) = *(_DWORD *)(v12 - 16);
            *(_QWORD *)(v12 + 56) = *(_QWORD *)(v12 - 8);
            --v13;
          }
          while ( v13 );
        }
        *(_DWORD *)(a1 + 24) = v8;
        v5 += 64;
        *(_DWORD *)(a1 + 48) = v10;
        *(_QWORD *)(a1 + 8) = v17.m128i_i64[0];
        *(_QWORD *)(a1 + 56) = v11;
        *(_DWORD *)(a1 + 16) = v17.m128i_i32[2];
        *(_QWORD *)(a1 + 32) = v18.m128i_i64[0];
        *(_DWORD *)(a1 + 40) = v18.m128i_i32[2];
        if ( v9 == a2 )
          return v23 - __readfsqword(0x28u);
      }
      sub_2C8DA0((__int64)v19, (const __m128i *)a3);
      v22 = 0u;
      v21 = 0;
      if ( v20.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v20.m128i_i64[0])(&v21, v19, 2);
        v22 = _mm_load_si128(&v20);
      }
      sub_2D9290(v5 - 64, (__int64)&v21);
      if ( v22.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v22.m128i_i64[0])(&v21, &v21, 3);
      if ( v20.m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v20.m128i_i64[0])(v19, v19, 3);
      v6 = v5;
      v5 += 64;
    }
    while ( v6 != a2 );
  }
  return v23 - __readfsqword(0x28u);
}
