unsigned __int64 __fastcall sub_2DE120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __m128i v8; // xmm2
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rdi
  __m128i v19; // xmm3
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128i v23; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-D8h]
  char *v25; // [rsp+18h] [rbp-D0h]
  __int64 v26; // [rsp+20h] [rbp-C8h]
  __int64 v27; // [rsp+28h] [rbp-C0h]
  __int64 v28; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+38h] [rbp-B0h]
  int v30; // [rsp+44h] [rbp-A4h]
  __int64 v31; // [rsp+48h] [rbp-A0h]
  __m128i v32; // [rsp+50h] [rbp-98h] BYREF
  char v33; // [rsp+60h] [rbp-88h] BYREF
  __m128i v34; // [rsp+70h] [rbp-78h] BYREF
  __int128 v35; // [rsp+80h] [rbp-68h] BYREF
  __m128i v36; // [rsp+90h] [rbp-58h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-40h]

  v26 = a2;
  v37 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 64 )
  {
    v5 = a1 + 128;
    v25 = &v33;
    do
    {
      while ( 1 )
      {
        v6 = v5 - 64;
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5 - 64, a1) >= 0 )
          break;
        v7 = *(_QWORD *)(v5 - 56);
        v8 = _mm_loadu_si128((const __m128i *)(v5 - 40));
        v24 = v5;
        v9 = 0;
        v27 = v7;
        v10 = *(_QWORD *)(v5 - 48);
        *(_QWORD *)(v5 - 48) = 0;
        v11 = (v6 - a1) >> 6;
        v28 = v10;
        v12 = *(_QWORD *)(v5 - 24);
        v32 = v8;
        v29 = v12;
        LODWORD(v12) = *(_DWORD *)(v5 - 16);
        *(_OWORD *)(v5 - 40) = 0;
        v30 = v12;
        v31 = *(_QWORD *)(v5 - 8);
        if ( v6 - a1 > 0 )
        {
          do
          {
            v13 = *(_QWORD *)(v6 - 56);
            v14 = *(_QWORD *)(v6 + 16);
            v6 -= 64;
            v15 = *(_QWORD *)(v6 + 16);
            v16 = _mm_loadu_si128((const __m128i *)(v6 + 24));
            *(_QWORD *)(v6 + 16) = 0;
            *(_OWORD *)(v6 + 24) = v9;
            *(_QWORD *)(v6 + 72) = v13;
            if ( v14 )
            {
              *(_QWORD *)(v6 + 88) = 0;
              v23 = v16;
              qfree();
              v16 = _mm_load_si128(&v23);
              v9 = 0;
            }
            v17 = *(_QWORD *)(v6 + 40);
            *(_QWORD *)(v6 + 80) = v15;
            *(__m128i *)(v6 + 88) = v16;
            *(_QWORD *)(v6 + 104) = v17;
            *(_DWORD *)(v6 + 112) = *(_DWORD *)(v6 + 48);
            *(_QWORD *)(v6 + 120) = *(_QWORD *)(v6 + 56);
            --v11;
          }
          while ( v11 );
        }
        v18 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v27;
        if ( v18 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          qfree();
        }
        v19 = _mm_load_si128(&v32);
        v5 += 64;
        v20 = v26;
        *(_QWORD *)(a1 + 16) = v28;
        v21 = v29;
        *(__m128i *)(a1 + 24) = v19;
        *(_QWORD *)(a1 + 40) = v21;
        *(_DWORD *)(a1 + 48) = v30;
        *(_QWORD *)(a1 + 56) = v31;
        if ( v24 == v20 )
          return v37 - __readfsqword(0x28u);
      }
      sub_2CE0D0((__int64)v25, (const __m128i *)a3);
      v36 = 0u;
      v35 = 0;
      if ( v34.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, char *, __int64))v34.m128i_i64[0])(&v35, v25, 2);
        v36 = _mm_load_si128(&v34);
      }
      sub_2DDEE0(v5 - 64, (__int64)&v35);
      if ( v36.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v36.m128i_i64[0])(&v35, &v35, 3);
      if ( v34.m128i_i64[0] )
        ((void (__fastcall *)(char *, char *, __int64))v34.m128i_i64[0])(v25, v25, 3);
      v24 = v5;
      v5 += 64;
    }
    while ( v24 != v26 );
  }
  return v37 - __readfsqword(0x28u);
}
