unsigned __int64 __fastcall sub_2D9BB0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r14
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __m128i v19; // [rsp+0h] [rbp-198h] BYREF
  const __m128i *v20; // [rsp+18h] [rbp-180h]
  __int64 v21; // [rsp+20h] [rbp-178h]
  __int64 v22; // [rsp+28h] [rbp-170h]
  __int64 v23; // [rsp+30h] [rbp-168h]
  const __m128i *v24; // [rsp+38h] [rbp-160h]
  __m128i v25[3]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v26[12]; // [rsp+70h] [rbp-128h] BYREF
  char v27[48]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+100h] [rbp-98h]
  _BYTE v29[16]; // [rsp+110h] [rbp-88h] BYREF
  __m128i v30; // [rsp+120h] [rbp-78h] BYREF
  __int128 v31; // [rsp+130h] [rbp-68h] BYREF
  __m128i v32; // [rsp+140h] [rbp-58h]
  unsigned __int64 v33; // [rsp+158h] [rbp-40h]

  v22 = a1;
  v23 = a2;
  v20 = a3;
  v33 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 200 )
  {
    v3 = a1 + 400;
    do
    {
      if ( !v20[1].m128i_i64[0] )
        std::__throw_bad_function_call();
      v4 = v22;
      if ( ((int (__fastcall *)(const __m128i *, __int64, __int64))v20[1].m128i_i64[1])(v20, v3 - 200, v22) >= 0 )
      {
        sub_2C90B0((__int64)v29, v20);
        v32 = 0u;
        v31 = 0;
        if ( v30.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v30.m128i_i64[0])(&v31, v29, 2);
          v32 = _mm_load_si128(&v30);
        }
        sub_2D9A60((const __m128i *)(v3 - 200), (__int64)&v31);
        if ( v32.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v32.m128i_i64[0])(&v31, &v31, 3);
        if ( v30.m128i_i64[0] )
          ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v30.m128i_i64[0])(v29, v29, 3);
        v21 = v3;
      }
      else
      {
        v5 = v3 - 200 - v4;
        v24 = v25;
        v6 = v3 - 192;
        sub_2C6F90(v25, (const __m128i *)(v3 - 200));
        v21 = v3;
        v25[0].m128i_i64[0] = (__int64)off_4AF550;
        v28 = *(_QWORD *)(v3 - 8);
        v7 = 0x8F5C28F5C28F5C29LL * (v5 >> 3);
        if ( v5 > 0 )
        {
          do
          {
            v8 = v6;
            v9 = v6;
            v6 -= 200;
            copy_argloc(v8, v6);
            *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 - 184);
            *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 - 176);
            *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 - 168);
            copy_argloc(v8 + 40, v8 - 160);
            v10 = *(_QWORD *)(v8 - 144);
            v11 = *(_QWORD *)(v8 + 64);
            v12 = *(_QWORD *)(v8 - 136);
            v13 = _mm_loadu_si128((const __m128i *)(v8 - 128));
            *(_QWORD *)(v8 - 136) = 0;
            *(_QWORD *)(v8 + 56) = v10;
            *(_OWORD *)(v8 - 128) = 0;
            if ( v11 )
            {
              *(_QWORD *)(v8 + 72) = 0;
              v19 = v13;
              qfree(v11);
              v13 = _mm_load_si128(&v19);
            }
            *(_QWORD *)(v8 + 64) = v12;
            *(__m128i *)(v8 + 72) = v13;
            copy_tinfo_t(v9 + 88, v9 - 112);
            v14 = *(_QWORD *)(v8 + 96);
            v15 = *(_QWORD *)(v8 - 104);
            *(_QWORD *)(v8 - 104) = 0;
            v16 = _mm_loadu_si128((const __m128i *)(v8 - 96));
            *(_OWORD *)(v8 - 96) = 0;
            if ( v14 )
            {
              *(_QWORD *)(v8 + 104) = 0;
              v19 = v16;
              qfree(v14);
              v16 = _mm_load_si128(&v19);
            }
            v17 = *(_QWORD *)(v8 - 80);
            *(_QWORD *)(v8 + 96) = v15;
            *(__m128i *)(v8 + 104) = v16;
            *(_QWORD *)(v8 + 120) = v17;
            *(_DWORD *)(v8 + 128) = *(_DWORD *)(v8 - 72);
            copy_argloc(v9 + 136, v9 - 64);
            *(_QWORD *)(v8 + 152) = *(_QWORD *)(v8 - 48);
            *(_QWORD *)(v8 + 160) = *(_QWORD *)(v8 - 40);
            *(_DWORD *)(v8 + 168) = *(_DWORD *)(v8 - 32);
            *(_DWORD *)(v8 + 176) = *(_DWORD *)(v8 - 24);
            *(_QWORD *)(v8 + 184) = *(_QWORD *)(v8 - 16);
            --v7;
          }
          while ( v7 );
        }
        sub_2ABBE0(v22, v24);
        *(_QWORD *)(v22 + 192) = v28;
        v25[0].m128i_i64[0] = (__int64)&off_4ADD28;
        cleanup_argloc(v27);
        sub_2B2600(v26);
        cleanup_argloc(&v25[0].m128i_u64[1]);
      }
      v3 += 200;
    }
    while ( v21 != v23 );
  }
  return v33 - __readfsqword(0x28u);
}
