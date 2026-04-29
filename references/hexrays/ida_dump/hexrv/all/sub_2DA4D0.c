unsigned __int64 __fastcall sub_2DA4D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  int v6; // edx
  __m128i v7; // xmm0
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  int v12; // edx
  __int64 v13; // r12
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  int v16; // ecx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  int v19; // eax
  __int64 v22; // [rsp+10h] [rbp-1B8h]
  __m128i v23; // [rsp+38h] [rbp-190h] BYREF
  __int64 v24; // [rsp+48h] [rbp-180h]
  _BYTE v25[8]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v26; // [rsp+58h] [rbp-170h]
  _QWORD v27[2]; // [rsp+70h] [rbp-158h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-148h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-138h] BYREF
  int v30; // [rsp+A0h] [rbp-128h]
  int v31; // [rsp+A8h] [rbp-120h]
  char v32; // [rsp+B0h] [rbp-118h]
  __m128i v33; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-100h]
  _BYTE v35[8]; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v36; // [rsp+D8h] [rbp-F0h]
  _QWORD v37[2]; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD v38[2]; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD v39[2]; // [rsp+110h] [rbp-B8h] BYREF
  int v40; // [rsp+120h] [rbp-A8h]
  int v41; // [rsp+128h] [rbp-A0h]
  int v42; // [rsp+130h] [rbp-98h]
  __int64 v43; // [rsp+138h] [rbp-90h]
  __m128i v44[2]; // [rsp+140h] [rbp-88h] BYREF
  _BYTE v45[40]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+188h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 272 )
  {
    v3 = a1 + 544;
    do
    {
      if ( !*(_QWORD *)(a3 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v3 - 272, a1) >= 0 )
      {
        sub_2C95F0((__int64)v44, (const __m128i *)a3);
        sub_2C95F0((__int64)v45, v44);
        sub_2DA070(v3 - 272, (__int64)v45);
        sub_628D0((__int64)v45);
        sub_628D0((__int64)v44);
        v22 = v3;
      }
      else
      {
        v22 = v3;
        v4 = v3 - 240;
        v5 = *(_QWORD *)(v3 - 248);
        v23 = _mm_loadu_si128((const __m128i *)(v3 - 264));
        v24 = v5;
        v27[0] = 0xFFFFFFFF00000000LL;
        v28[0] = 0xFFFFFFFF00000000LL;
        v29[0] = 0xFFFFFFFF00000000LL;
        v27[1] = 0;
        v28[1] = 0;
        v29[1] = 0;
        v26 = 0;
        sub_120EE0((__int64)v25, v3 - 240);
        v6 = *(_DWORD *)(v3 - 160);
        v7 = _mm_loadu_si128((const __m128i *)(v3 - 136));
        v37[0] = 0xFFFFFFFF00000000LL;
        v30 = v6;
        v8 = *(_DWORD *)(v3 - 152);
        v38[0] = 0xFFFFFFFF00000000LL;
        v31 = v8;
        LOBYTE(v8) = *(_BYTE *)(v3 - 144);
        v39[0] = 0xFFFFFFFF00000000LL;
        v32 = v8;
        v9 = *(_QWORD *)(v3 - 120);
        v33 = v7;
        v34 = v9;
        v37[1] = 0;
        v38[1] = 0;
        v39[1] = 0;
        v36 = 0;
        sub_120EE0((__int64)v35, v3 - 112);
        v10 = v3 - 272 - a1;
        v40 = *(_DWORD *)(v3 - 32);
        v11 = 0xF0F0F0F0F0F0F0F1LL * (v10 >> 4);
        v41 = *(_DWORD *)(v3 - 24);
        v42 = *(_DWORD *)(v3 - 16);
        v43 = *(_QWORD *)(v3 - 8);
        if ( v10 > 0 )
        {
          do
          {
            v12 = *(_DWORD *)(v4 - 280);
            v13 = v4;
            v4 -= 272;
            v14 = _mm_loadu_si128((const __m128i *)(v4 - 24));
            *(_DWORD *)(v4 + 264) = v12;
            *(__m128i *)(v4 + 248) = v14;
            sub_120EE0(v13, v4);
            v15 = _mm_loadu_si128((const __m128i *)(v13 - 168));
            *(_DWORD *)(v13 + 80) = *(_DWORD *)(v13 - 192);
            v16 = *(_DWORD *)(v13 - 184);
            *(__m128i *)(v13 + 104) = v15;
            *(_DWORD *)(v13 + 88) = v16;
            *(_BYTE *)(v13 + 96) = *(_BYTE *)(v13 - 176);
            *(_DWORD *)(v13 + 120) = *(_DWORD *)(v13 - 152);
            sub_120EE0(v13 + 128, v13 - 144);
            *(_DWORD *)(v13 + 208) = *(_DWORD *)(v13 - 64);
            *(_DWORD *)(v13 + 216) = *(_DWORD *)(v13 - 56);
            *(_DWORD *)(v13 + 224) = *(_DWORD *)(v13 - 48);
            *(_QWORD *)(v13 + 232) = *(_QWORD *)(v13 - 40);
            --v11;
          }
          while ( v11 );
        }
        v17 = _mm_loadu_si128(&v23);
        *(_DWORD *)(a1 + 24) = v24;
        *(__m128i *)(a1 + 8) = v17;
        sub_120EE0(a1 + 32, (__int64)v25);
        v18 = _mm_loadu_si128(&v33);
        *(_DWORD *)(a1 + 112) = v30;
        v19 = v31;
        *(__m128i *)(a1 + 136) = v18;
        *(_DWORD *)(a1 + 120) = v19;
        *(_BYTE *)(a1 + 128) = v32;
        *(_DWORD *)(a1 + 152) = v34;
        sub_120EE0(a1 + 160, (__int64)v35);
        *(_DWORD *)(a1 + 240) = v40;
        *(_DWORD *)(a1 + 248) = v41;
        *(_DWORD *)(a1 + 256) = v42;
        *(_QWORD *)(a1 + 264) = v43;
        sub_1188E0((__int64)v39);
        sub_1188E0((__int64)v38);
        sub_1188E0((__int64)v37);
        sub_1188E0((__int64)v29);
        sub_1188E0((__int64)v28);
        sub_1188E0((__int64)v27);
      }
      v3 += 272;
    }
    while ( v22 != a2 );
  }
  return v46 - __readfsqword(0x28u);
}
