void __fastcall sub_2F6AD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm6
  __int64 v15; // rax
  __m128i v16; // xmm7
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r15
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r15
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // r15
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // r15
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __m128i v32; // xmm6
  __int64 v33; // rdi
  __m128i v34; // xmm7
  __int64 v35; // rdi
  __m128i si128; // xmm6
  __int64 v37; // rdi
  __m128i v38; // xmm7
  __m128i v39; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+10h] [rbp-98h] BYREF
  __int64 v41; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+38h] [rbp-70h]
  __m128i v45; // [rsp+40h] [rbp-68h] BYREF
  __m128i v46; // [rsp+50h] [rbp-58h] BYREF
  __m128i v47[4]; // [rsp+60h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v3 = a1 + 96;
    while ( a2 != v3 )
    {
      while ( 1 )
      {
        v4 = v3;
        v5 = v3;
        v3 += 96;
        if ( !(unsigned __int8)sub_2E3DE0(v4, a1) )
          break;
        v9 = *(_QWORD *)(v3 - 96);
        v10 = _mm_loadu_si128((const __m128i *)(v3 - 88));
        v11 = _mm_loadu_si128((const __m128i *)(v3 - 64));
        v12 = v5 - a1;
        *(_QWORD *)(v3 - 96) = 0;
        v41 = v9;
        v13 = *(_QWORD *)(v3 - 72);
        v40 = v10;
        v14 = _mm_loadu_si128((const __m128i *)(v3 - 40));
        v42 = v13;
        v15 = *(_QWORD *)(v3 - 48);
        v46 = v11;
        v16 = _mm_loadu_si128((const __m128i *)(v3 - 16));
        v43 = v15;
        v17 = *(_QWORD *)(v3 - 24);
        *(_QWORD *)(v3 - 72) = 0;
        v44 = v17;
        *(_QWORD *)(v3 - 48) = 0;
        v18 = 0xAAAAAAAAAAAAAAABLL * ((v5 - a1) >> 5);
        *(_QWORD *)(v3 - 24) = 0;
        *(_OWORD *)(v3 - 88) = 0;
        *(_OWORD *)(v3 - 64) = 0;
        v47[0] = v14;
        *(_OWORD *)(v3 - 40) = 0;
        v45 = v16;
        *(_OWORD *)(v3 - 16) = 0;
        if ( v5 - a1 > 0 )
        {
          do
          {
            v19 = *(_QWORD *)v5;
            v5 -= 96;
            v20 = *(_QWORD *)v5;
            v21 = _mm_loadu_si128((const __m128i *)(v5 + 8));
            *(_QWORD *)v5 = 0;
            *(_OWORD *)(v5 + 8) = 0;
            if ( v19 )
            {
              *(_QWORD *)(v5 + 104) = 0;
              qfree(v19, (const char *)a1, v12, v6, v7, v8, *(_OWORD *)&v21, *(_OWORD *)&v40);
              v21 = _mm_load_si128(&v39);
            }
            v22 = *(_QWORD *)(v5 + 120);
            *(_QWORD *)(v5 + 96) = v20;
            *(__m128i *)(v5 + 104) = v21;
            v23 = *(_QWORD *)(v5 + 24);
            v24 = _mm_loadu_si128((const __m128i *)(v5 + 32));
            *(_QWORD *)(v5 + 24) = 0;
            *(_OWORD *)(v5 + 32) = 0;
            if ( v22 )
            {
              *(_QWORD *)(v5 + 128) = 0;
              v39 = v24;
              qfree(v22, (const char *)a1);
              v24 = _mm_load_si128(&v39);
            }
            v25 = *(_QWORD *)(v5 + 144);
            *(_QWORD *)(v5 + 120) = v23;
            *(__m128i *)(v5 + 128) = v24;
            v26 = *(_QWORD *)(v5 + 48);
            v27 = _mm_loadu_si128((const __m128i *)(v5 + 56));
            *(_QWORD *)(v5 + 48) = 0;
            *(_OWORD *)(v5 + 56) = 0;
            if ( v25 )
            {
              *(_QWORD *)(v5 + 152) = 0;
              v39 = v27;
              qfree(v25, (const char *)a1);
              v27 = _mm_load_si128(&v39);
            }
            v28 = *(_QWORD *)(v5 + 168);
            *(_QWORD *)(v5 + 144) = v26;
            *(__m128i *)(v5 + 152) = v27;
            v29 = *(_QWORD *)(v5 + 72);
            v30 = _mm_loadu_si128((const __m128i *)(v5 + 80));
            *(_QWORD *)(v5 + 72) = 0;
            *(_OWORD *)(v5 + 80) = 0;
            if ( v28 )
            {
              *(_QWORD *)(v5 + 176) = 0;
              v39 = v30;
              qfree(v28, (const char *)a1);
              v30 = _mm_load_si128(&v39);
            }
            *(_QWORD *)(v5 + 168) = v29;
            *(__m128i *)(v5 + 176) = v30;
            --v18;
          }
          while ( v18 );
        }
        v31 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree(v31, (const char *)a1);
        }
        v32 = _mm_load_si128(&v40);
        v33 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)a1 = v41;
        *(__m128i *)(a1 + 8) = v32;
        if ( v33 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          qfree(v33, (const char *)a1);
        }
        v34 = _mm_load_si128(&v46);
        v35 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 24) = v42;
        *(__m128i *)(a1 + 32) = v34;
        if ( v35 )
        {
          *(_QWORD *)(a1 + 56) = 0;
          qfree(v35, (const char *)a1);
        }
        si128 = _mm_load_si128(v47);
        v37 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 48) = v43;
        *(__m128i *)(a1 + 56) = si128;
        if ( v37 )
        {
          *(_QWORD *)(a1 + 80) = 0;
          qfree(v37, (const char *)a1);
        }
        v38 = _mm_load_si128(&v45);
        *(_QWORD *)(a1 + 72) = v44;
        *(__m128i *)(a1 + 80) = v38;
        if ( a2 == v3 )
          return;
      }
      sub_2F6740((__int64 *)v5);
    }
  }
}
