unsigned __int64 __fastcall sub_3F4B20(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  void (__fastcall *v6)(__int128 *, __int64, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // rax
  __int64 *v9; // r15
  __int64 v10; // rax
  __m128i v11; // xmm6
  __m128i v12; // xmm7
  __int64 v13; // rax
  __m128i v14; // xmm6
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  void *v20; // rdi
  __int64 v21; // r14
  __m128i v22; // xmm0
  int v23; // eax
  void *v24; // rdi
  __int64 v25; // r14
  __m128i v26; // xmm0
  void *v27; // rdi
  __int64 v28; // r14
  __m128i v29; // xmm0
  __int64 v30; // rax
  void *v31; // rdi
  __m128i v32; // xmm7
  void *v33; // rdi
  __m128i v34; // xmm5
  void *v35; // rdi
  __m128i v36; // xmm6
  __int64 v37; // rax
  __m128i v39; // [rsp+0h] [rbp-F8h] BYREF
  __int64 *v40; // [rsp+10h] [rbp-E8h]
  __int64 v41; // [rsp+18h] [rbp-E0h]
  __int64 v42; // [rsp+20h] [rbp-D8h]
  __int64 v43; // [rsp+28h] [rbp-D0h]
  __int64 v44; // [rsp+30h] [rbp-C8h]
  __int64 v45; // [rsp+38h] [rbp-C0h]
  __m128i v46; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v47; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v48; // [rsp+60h] [rbp-98h] BYREF
  __int128 v49; // [rsp+70h] [rbp-88h] BYREF
  __m128i v50; // [rsp+80h] [rbp-78h] BYREF
  __int128 v51; // [rsp+90h] [rbp-68h] BYREF
  __m128i v52; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v53; // [rsp+B8h] [rbp-40h]

  v40 = a2;
  v53 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = a1 + 11;
    if ( a2 != a1 + 11 )
    {
      do
      {
        while ( 1 )
        {
          v9 = v3;
          if ( !*(_QWORD *)(a3 + 16) )
            std::__throw_bad_function_call();
          if ( (*(int (__fastcall **)(__int64, __int64 *, __int64 *))(a3 + 24))(a3, v3, a1) >= 0 )
            break;
          v10 = *v3;
          v11 = _mm_loadu_si128((const __m128i *)v3 + 1);
          v12 = _mm_loadu_si128((const __m128i *)(v3 + 5));
          *((_OWORD *)v3 + 1) = 0;
          v3 += 11;
          v42 = v10;
          v13 = *(v3 - 10);
          v47 = v11;
          v14 = _mm_loadu_si128((const __m128i *)(v3 - 3));
          v43 = v13;
          v15 = *(v3 - 7);
          *(v3 - 10) = 0;
          v44 = v15;
          v16 = *(v3 - 4);
          *(v3 - 7) = 0;
          v45 = v16;
          v17 = *(v3 - 1);
          *((_OWORD *)v3 - 3) = 0;
          v41 = v17;
          *(_OWORD *)(v3 - 3) = 0;
          v48 = v12;
          v46 = v14;
          *(v3 - 4) = 0;
          v18 = 0x2E8BA2E8BA2E8BA3LL * (v9 - a1);
          if ( (char *)v9 - (char *)a1 > 0 )
          {
            do
            {
              v19 = *((_DWORD *)v9 - 22);
              v20 = (void *)v9[1];
              v9 -= 11;
              v21 = v9[1];
              v22 = _mm_loadu_si128((const __m128i *)v9 + 1);
              v9[1] = 0;
              *((_DWORD *)v9 + 22) = v19;
              v23 = *((_DWORD *)v9 + 1);
              *((_OWORD *)v9 + 1) = 0;
              *((_DWORD *)v9 + 23) = v23;
              if ( v20 )
              {
                v9[13] = 0;
                v39 = v22;
                qfree(v20);
                v22 = _mm_load_si128(&v39);
              }
              v24 = (void *)v9[15];
              v9[12] = v21;
              *(__m128i *)(v9 + 13) = v22;
              v25 = v9[4];
              v26 = _mm_loadu_si128((const __m128i *)(v9 + 5));
              v9[4] = 0;
              *(_OWORD *)(v9 + 5) = 0;
              if ( v24 )
              {
                v9[16] = 0;
                v39 = v26;
                qfree(v24);
                v26 = _mm_load_si128(&v39);
              }
              v27 = (void *)v9[18];
              v9[15] = v25;
              *((__m128i *)v9 + 8) = v26;
              v28 = v9[7];
              v29 = _mm_loadu_si128((const __m128i *)v9 + 4);
              v9[7] = 0;
              *((_OWORD *)v9 + 4) = 0;
              if ( v27 )
              {
                v9[19] = 0;
                v39 = v29;
                qfree(v27);
                v29 = _mm_load_si128(&v39);
              }
              v30 = v9[10];
              v9[18] = v28;
              *(__m128i *)(v9 + 19) = v29;
              v9[21] = v30;
              --v18;
            }
            while ( v18 );
          }
          v31 = (void *)a1[1];
          *a1 = v42;
          if ( v31 )
          {
            a1[2] = 0;
            qfree(v31);
          }
          v32 = _mm_load_si128(&v47);
          v33 = (void *)a1[4];
          a1[1] = v43;
          *((__m128i *)a1 + 1) = v32;
          if ( v33 )
          {
            a1[5] = 0;
            qfree(v33);
          }
          v34 = _mm_load_si128(&v48);
          v35 = (void *)a1[7];
          a1[4] = v44;
          *(__m128i *)(a1 + 5) = v34;
          if ( v35 )
          {
            a1[8] = 0;
            qfree(v35);
          }
          v36 = _mm_load_si128(&v46);
          a1[7] = v45;
          v37 = v41;
          *((__m128i *)a1 + 4) = v36;
          a1[10] = v37;
          if ( v40 == v3 )
            return v53 - __readfsqword(0x28u);
        }
        v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
        v50 = 0u;
        v49 = 0;
        if ( v6 )
        {
          v6(&v49, a3, 2);
          v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
          v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
          v52 = 0u;
          v51 = 0;
          v50 = v7;
          if ( v8 )
          {
            v8(&v51, &v49, 2);
            v52 = _mm_load_si128(&v50);
          }
        }
        else
        {
          v51 = 0;
          v52 = 0u;
        }
        sub_3F47C0(v3, (__int64)&v51);
        if ( v52.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
        if ( v50.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v50.m128i_i64[0])(&v49, &v49, 3);
        v3 += 11;
      }
      while ( v40 != v3 );
    }
  }
  return v53 - __readfsqword(0x28u);
}

