_BYTE *__fastcall sub_1351470(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  size_t v17; // r12
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rax
  size_t v30; // r12
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // r14
  __int64 *v34; // [rsp+8h] [rbp-60h]
  __int64 *v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  __int64 v43; // [rsp+28h] [rbp-40h]

  *(_QWORD *)a1 = a1 + 16;
  sub_12FAA20((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_12FAA20((_QWORD *)(a1 + 32), *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_12FAA20((_QWORD *)(a1 + 64), *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  *(_QWORD *)(a1 + 96) = a1 + 112;
  sub_12FAA20((_QWORD *)(a1 + 96), *(_BYTE **)(a2 + 96), *(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 104));
  *(_QWORD *)(a1 + 128) = a1 + 144;
  sub_12FAA20((_QWORD *)(a1 + 128), *(_BYTE **)(a2 + 128), *(_QWORD *)(a2 + 128) + *(_QWORD *)(a2 + 136));
  *(_QWORD *)(a1 + 160) = a1 + 176;
  sub_12FAA20((_QWORD *)(a1 + 160), *(_BYTE **)(a2 + 160), *(_QWORD *)(a2 + 160) + *(_QWORD *)(a2 + 168));
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 192);
  *(_QWORD *)(a1 + 200) = a1 + 216;
  sub_12FAA20((_QWORD *)(a1 + 200), *(_BYTE **)(a2 + 200), *(_QWORD *)(a2 + 200) + *(_QWORD *)(a2 + 208));
  sub_C23620(a1 + 232, (__int64 *)(a2 + 232));
  sub_C23620(a1 + 256, (__int64 *)(a2 + 256));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 280) = 0;
  *(__m128i *)(a1 + 288) = si128;
  if ( *(_DWORD *)(a2 + 292) )
  {
    sub_2244BF0(a1 + 280, *(unsigned int *)(a2 + 288));
    v10 = *(_QWORD *)(a2 + 280);
    v11 = *(_QWORD *)(a1 + 280);
    v12 = *(unsigned int *)(a1 + 288);
    v13 = 8 * v12 + 8;
    v40 = v10;
    v38 = v11;
    *(_DWORD *)(a1 + 292) = *(_DWORD *)(a2 + 292);
    v14 = *(unsigned int *)(a2 + 296);
    *(_DWORD *)(a1 + 296) = v14;
    if ( (_DWORD)v12 )
    {
      v15 = 0;
      v42 = 8LL * (unsigned int)(v12 - 1);
      v16 = v10;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v16 + v15);
        v34 = (__int64 *)(v11 + v15);
        if ( v20 == -8 || !v20 )
        {
          *v34 = v20;
        }
        else
        {
          v17 = *(_QWORD *)v20;
          v18 = sub_22300B0(*(_QWORD *)v20 + 17LL, 8, v14, v10, v8, v9);
          v8 = v18;
          if ( v17 )
          {
            v36 = v18;
            memcpy((void *)(v18 + 16), (const void *)(v20 + 16), v17);
            v8 = v36;
          }
          *(_BYTE *)(v8 + v17 + 16) = 0;
          v19 = *(_BYTE *)(v20 + 8);
          *(_QWORD *)v8 = v17;
          v10 = v38;
          *(_BYTE *)(v8 + 8) = v19;
          *v34 = v8;
          *(_DWORD *)(v38 + v13) = *(_DWORD *)(v40 + v13);
        }
        v13 += 4;
        if ( v15 == v42 )
          break;
        v16 = *(_QWORD *)(a2 + 280);
        v11 = *(_QWORD *)(a1 + 280);
        v15 += 8;
      }
    }
  }
  v4 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 304) = 0;
  *(__m128i *)(a1 + 312) = v4;
  if ( *(_DWORD *)(a2 + 316) )
  {
    sub_2244BF0(a1 + 304, *(unsigned int *)(a2 + 312));
    v23 = *(_QWORD *)(a2 + 304);
    v24 = *(_QWORD *)(a1 + 304);
    v25 = *(unsigned int *)(a1 + 312);
    v26 = 8 * v25 + 8;
    v41 = v23;
    v39 = v24;
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(a2 + 316);
    v27 = *(unsigned int *)(a2 + 320);
    *(_DWORD *)(a1 + 320) = v27;
    if ( (_DWORD)v25 )
    {
      v28 = 0;
      v43 = 8LL * (unsigned int)(v25 - 1);
      v29 = v23;
      while ( 1 )
      {
        v33 = *(_QWORD *)(v29 + v28);
        v35 = (__int64 *)(v24 + v28);
        if ( v33 == -8 || !v33 )
        {
          *v35 = v33;
        }
        else
        {
          v30 = *(_QWORD *)v33;
          v31 = sub_22300B0(*(_QWORD *)v33 + 17LL, 8, v27, v23, v21, v22);
          v21 = v31;
          if ( v30 )
          {
            v37 = v31;
            memcpy((void *)(v31 + 16), (const void *)(v33 + 16), v30);
            v21 = v37;
          }
          *(_BYTE *)(v21 + v30 + 16) = 0;
          v32 = *(_BYTE *)(v33 + 8);
          *(_QWORD *)v21 = v30;
          v23 = v39;
          *(_BYTE *)(v21 + 8) = v32;
          *v35 = v21;
          *(_DWORD *)(v39 + v26) = *(_DWORD *)(v41 + v26);
        }
        v26 += 4;
        if ( v43 == v28 )
          break;
        v29 = *(_QWORD *)(a2 + 304);
        v24 = *(_QWORD *)(a1 + 304);
        v28 += 8;
      }
    }
  }
  sub_C23620(a1 + 328, (__int64 *)(a2 + 328));
  *(_BYTE *)(a1 + 352) = *(_BYTE *)(a2 + 352);
  *(_BYTE *)(a1 + 353) = *(_BYTE *)(a2 + 353);
  *(_DWORD *)(a1 + 356) = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(a1 + 360) = *(_DWORD *)(a2 + 360);
  *(_QWORD *)(a1 + 368) = a1 + 384;
  sub_12FAA20((_QWORD *)(a1 + 368), *(_BYTE **)(a2 + 368), *(_QWORD *)(a2 + 368) + *(_QWORD *)(a2 + 376));
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 408));
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a2 + 400);
  *(__m128i *)(a1 + 408) = v5;
  *(_QWORD *)(a1 + 424) = a1 + 440;
  sub_12FAA20((_QWORD *)(a1 + 424), *(_BYTE **)(a2 + 424), *(_QWORD *)(a2 + 424) + *(_QWORD *)(a2 + 432));
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 456));
  *(_QWORD *)(a1 + 472) = a1 + 488;
  *(__m128i *)(a1 + 456) = v6;
  sub_12FAA20((_QWORD *)(a1 + 472), *(_BYTE **)(a2 + 472), *(_QWORD *)(a2 + 472) + *(_QWORD *)(a2 + 480));
  *(_QWORD *)(a1 + 504) = a1 + 520;
  return sub_12FAA20((_QWORD *)(a1 + 504), *(_BYTE **)(a2 + 504), *(_QWORD *)(a2 + 504) + *(_QWORD *)(a2 + 512));
}
