unsigned __int64 __fastcall sub_5AF620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void (__fastcall *v6)(__int128 *, __int64, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __m128i v11; // xmm2
  __int128 v12; // xmm1
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  void *v15; // rdi
  void *v16; // r13
  __m128i v17; // xmm0
  int v18; // edx
  void *v19; // rdi
  __m128i v20; // xmm3
  int v21; // eax
  __m128i v23; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B8h]
  __int64 v25; // [rsp+18h] [rbp-B0h]
  int v26; // [rsp+24h] [rbp-A4h]
  __int64 v27; // [rsp+28h] [rbp-A0h]
  __m128i v28; // [rsp+30h] [rbp-98h] BYREF
  __int128 v29; // [rsp+40h] [rbp-88h] BYREF
  __m128i v30; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+60h] [rbp-68h] BYREF
  __m128i v32; // [rsp+70h] [rbp-58h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v24 = a2;
  v33 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = a1 + 40;
    if ( a2 != a1 + 40 )
    {
      do
      {
        while ( 1 )
        {
          v9 = v3;
          if ( !*(_QWORD *)(a3 + 16) )
            std::__throw_bad_function_call();
          if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v3, a1) >= 0 )
            break;
          v10 = *(_QWORD *)v3;
          v11 = _mm_loadu_si128((const __m128i *)(v3 + 8));
          *(_OWORD *)(v3 + 8) = 0;
          v12 = 0;
          v3 += 40;
          v25 = v10;
          LODWORD(v10) = *(_DWORD *)(v3 - 16);
          *(_QWORD *)(v3 - 40) = 0;
          v26 = v10;
          v13 = *(_QWORD *)(v3 - 8);
          v28 = v11;
          v27 = v13;
          v14 = 0xCCCCCCCCCCCCCCCDLL * ((v9 - a1) >> 3);
          if ( v9 - a1 > 0 )
          {
            do
            {
              v15 = *(void **)v9;
              v9 -= 40;
              v16 = *(void **)v9;
              v17 = _mm_loadu_si128((const __m128i *)(v9 + 8));
              *(_QWORD *)v9 = 0;
              *(_OWORD *)(v9 + 8) = v12;
              if ( v15 )
              {
                *(_QWORD *)(v9 + 48) = 0;
                v23 = v17;
                qfree(v15);
                v17 = _mm_load_si128(&v23);
                v12 = 0;
              }
              v18 = *(_DWORD *)(v9 + 24);
              *(_QWORD *)(v9 + 40) = v16;
              *(__m128i *)(v9 + 48) = v17;
              *(_DWORD *)(v9 + 64) = v18;
              *(_QWORD *)(v9 + 72) = *(_QWORD *)(v9 + 32);
              --v14;
            }
            while ( v14 );
          }
          v19 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            qfree(v19);
          }
          v20 = _mm_load_si128(&v28);
          *(_QWORD *)a1 = v25;
          v21 = v26;
          *(__m128i *)(a1 + 8) = v20;
          *(_DWORD *)(a1 + 24) = v21;
          *(_QWORD *)(a1 + 32) = v27;
          if ( v24 == v3 )
            return v33 - __readfsqword(0x28u);
        }
        v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
        v30 = 0u;
        v29 = 0;
        if ( v6 )
        {
          v6(&v29, a3, 2);
          v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
          v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
          v32 = 0u;
          v30 = v7;
          v31 = 0;
          if ( v8 )
          {
            v8(&v31, &v29, 2);
            v32 = _mm_load_si128(&v30);
          }
        }
        else
        {
          v32 = 0u;
          v31 = 0;
        }
        sub_5AF450(v3, (__int64)&v31);
        if ( v32.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v32.m128i_i64[0])(&v31, &v31, 3);
        if ( v30.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v30.m128i_i64[0])(&v29, &v29, 3);
        v3 += 40;
      }
      while ( v24 != v3 );
    }
  }
  return v33 - __readfsqword(0x28u);
}
