unsigned __int64 __fastcall sub_2EC1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r14
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  int v22; // edx
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // [rsp+0h] [rbp-198h]
  __int64 (__fastcall **v29)(); // [rsp+20h] [rbp-178h] BYREF
  __m128i v30; // [rsp+28h] [rbp-170h] BYREF
  __int64 v31; // [rsp+38h] [rbp-160h]
  _BYTE v32[8]; // [rsp+40h] [rbp-158h] BYREF
  __int128 v33; // [rsp+48h] [rbp-150h]
  _QWORD v34[2]; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-128h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-118h] BYREF
  int v37; // [rsp+90h] [rbp-108h]
  int v38; // [rsp+98h] [rbp-100h]
  char v39; // [rsp+A0h] [rbp-F8h]
  __m128i v40; // [rsp+A8h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-E0h]
  _BYTE v42[8]; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-D0h]
  _QWORD v44[2]; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD v45[2]; // [rsp+F0h] [rbp-A8h] BYREF
  _QWORD v46[2]; // [rsp+100h] [rbp-98h] BYREF
  int v47; // [rsp+110h] [rbp-88h]
  int v48; // [rsp+118h] [rbp-80h]
  int v49; // [rsp+120h] [rbp-78h]
  __int64 v50; // [rsp+128h] [rbp-70h]
  _BYTE v51[16]; // [rsp+130h] [rbp-68h] BYREF
  __int64 v52; // [rsp+140h] [rbp-58h]
  int (__fastcall *v53)(_BYTE *, __int64, __int64 (__fastcall ***)()); // [rsp+148h] [rbp-50h]
  unsigned __int64 v54; // [rsp+158h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v27 = (a3 - 1) / 2;
  if ( a2 >= v27 )
  {
    v8 = a2;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 544 * (i + 1);
      v10 = a1 + v9;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v9, a1 + v9 - 272) < 0 )
      {
        --v8;
        v10 = a1 + 272 * v8;
      }
      v11 = a1 + 272 * i;
      *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v10 + 8));
      *(_DWORD *)(v11 + 24) = *(_DWORD *)(v10 + 24);
      sub_11ECE0(v11 + 32, v10 + 32);
      *(_DWORD *)(v11 + 112) = *(_DWORD *)(v10 + 112);
      *(_DWORD *)(v11 + 120) = *(_DWORD *)(v10 + 120);
      *(_BYTE *)(v11 + 128) = *(_BYTE *)(v10 + 128);
      *(__m128i *)(v11 + 136) = _mm_loadu_si128((const __m128i *)(v10 + 136));
      *(_DWORD *)(v11 + 152) = *(_DWORD *)(v10 + 152);
      sub_11ECE0(v11 + 160, v10 + 160);
      *(_DWORD *)(v11 + 240) = *(_DWORD *)(v10 + 240);
      *(_DWORD *)(v11 + 248) = *(_DWORD *)(v10 + 248);
      *(_DWORD *)(v11 + 256) = *(_DWORD *)(v10 + 256);
      *(_QWORD *)(v11 + 264) = *(_QWORD *)(v10 + 264);
      if ( v8 >= v27 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v8 )
  {
    v24 = 2 * (v8 + 1);
    v25 = a1 + 544 * (v8 + 1) - 272;
    v26 = a1 + 272 * v8;
    *(__m128i *)(v26 + 8) = _mm_loadu_si128((const __m128i *)(v25 + 8));
    *(_DWORD *)(v26 + 24) = *(_DWORD *)(v25 + 24);
    sub_11ECE0(v26 + 32, v25 + 32);
    *(_DWORD *)(v26 + 112) = *(_DWORD *)(v25 + 112);
    *(_DWORD *)(v26 + 120) = *(_DWORD *)(v25 + 120);
    *(_BYTE *)(v26 + 128) = *(_BYTE *)(v25 + 128);
    *(__m128i *)(v26 + 136) = _mm_loadu_si128((const __m128i *)(v25 + 136));
    *(_DWORD *)(v26 + 152) = *(_DWORD *)(v25 + 152);
    sub_11ECE0(v26 + 160, v25 + 160);
    *(_DWORD *)(v26 + 240) = *(_DWORD *)(v25 + 240);
    *(_DWORD *)(v26 + 248) = *(_DWORD *)(v25 + 248);
    *(_DWORD *)(v26 + 256) = *(_DWORD *)(v25 + 256);
    *(_QWORD *)(v26 + 264) = *(_QWORD *)(v25 + 264);
    v8 = v24 - 1;
  }
  sub_2C6E70((__int64)v51, (const __m128i *)a5);
  v29 = off_4ADC60;
  v12 = *(_QWORD *)(a4 + 24);
  v30 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v31 = v12;
  v34[0] = 0xFFFFFFFF00000000LL;
  v35[0] = 0xFFFFFFFF00000000LL;
  v36[0] = 0xFFFFFFFF00000000LL;
  v34[1] = 0;
  v35[1] = 0;
  v36[1] = 0;
  v33 = 0;
  sub_11ECE0((__int64)v32, a4 + 32);
  v13 = *(_DWORD *)(a4 + 112);
  v14 = _mm_loadu_si128((const __m128i *)(a4 + 136));
  v44[1] = 0;
  v45[1] = 0;
  v37 = v13;
  v15 = *(_DWORD *)(a4 + 120);
  v40 = v14;
  v38 = v15;
  LOBYTE(v15) = *(_BYTE *)(a4 + 128);
  v46[1] = 0;
  v39 = v15;
  v16 = *(_QWORD *)(a4 + 152);
  v43 = 0;
  v41 = v16;
  v44[0] = 0xFFFFFFFF00000000LL;
  v45[0] = 0xFFFFFFFF00000000LL;
  v46[0] = 0xFFFFFFFF00000000LL;
  sub_11ECE0((__int64)v42, a4 + 160);
  v47 = *(_DWORD *)(a4 + 240);
  v48 = *(_DWORD *)(a4 + 248);
  v49 = *(_DWORD *)(a4 + 256);
  v29 = off_4AF4B0;
  v50 = *(_QWORD *)(a4 + 264);
  v17 = (v8 - 1) / 2;
  if ( v8 <= a2 )
  {
    v19 = a1 + 272 * v8;
  }
  else
  {
    while ( 1 )
    {
      v18 = a1 + 272 * v17;
      if ( !v52 )
        std::__throw_bad_function_call();
      v19 = a1 + 272 * v8;
      if ( v53(v51, a1 + 272 * v17, &v29) >= 0 )
        break;
      *(__m128i *)(v19 + 8) = _mm_loadu_si128((const __m128i *)(v18 + 8));
      *(_DWORD *)(v19 + 24) = *(_DWORD *)(v18 + 24);
      sub_11ECE0(v19 + 32, v18 + 32);
      *(_DWORD *)(v19 + 112) = *(_DWORD *)(v18 + 112);
      *(_DWORD *)(v19 + 120) = *(_DWORD *)(v18 + 120);
      *(_BYTE *)(v19 + 128) = *(_BYTE *)(v18 + 128);
      *(__m128i *)(v19 + 136) = _mm_loadu_si128((const __m128i *)(v18 + 136));
      *(_DWORD *)(v19 + 152) = *(_DWORD *)(v18 + 152);
      sub_11ECE0(v19 + 160, v18 + 160);
      *(_DWORD *)(v19 + 240) = *(_DWORD *)(v18 + 240);
      *(_DWORD *)(v19 + 248) = *(_DWORD *)(v18 + 248);
      *(_DWORD *)(v19 + 256) = *(_DWORD *)(v18 + 256);
      *(_QWORD *)(v19 + 264) = *(_QWORD *)(v18 + 264);
      v8 = v17;
      if ( a2 >= v17 )
      {
        v19 = a1 + 272 * v17;
        break;
      }
      v17 = (v17 - 1) / 2;
    }
  }
  v20 = _mm_loadu_si128(&v30);
  *(_DWORD *)(v19 + 24) = v31;
  *(__m128i *)(v19 + 8) = v20;
  sub_11ECE0(v19 + 32, (__int64)v32);
  v21 = _mm_loadu_si128(&v40);
  *(_DWORD *)(v19 + 112) = v37;
  v22 = v38;
  *(__m128i *)(v19 + 136) = v21;
  *(_DWORD *)(v19 + 120) = v22;
  *(_BYTE *)(v19 + 128) = v39;
  *(_DWORD *)(v19 + 152) = v41;
  sub_11ECE0(v19 + 160, (__int64)v42);
  v29 = off_4ADC60;
  *(_DWORD *)(v19 + 240) = v47;
  *(_DWORD *)(v19 + 248) = v48;
  *(_DWORD *)(v19 + 256) = v49;
  *(_QWORD *)(v19 + 264) = v50;
  sub_1166E0((__int64)v46);
  sub_1166E0((__int64)v45);
  sub_1166E0((__int64)v44);
  sub_1166E0((__int64)v36);
  sub_1166E0((__int64)v35);
  sub_1166E0((__int64)v34);
  sub_606D0((__int64)v51);
  return v54 - __readfsqword(0x28u);
}
