void __fastcall sub_2220640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, int); // rax
  __int64 v11; // rdx
  __m128i *v12; // rsi
  __int64 v13; // rsi
  __m128i *v14; // rax
  __m128i si128; // xmm0
  void *v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  char v18[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 56) )
  {
    sub_227BF10(a2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(unsigned int *)(a1 + 40);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v8 + 32LL);
    if ( v10 == sub_2220120 )
    {
      switch ( (_DWORD)v9 )
      {
        case 2:
          v14 = (__m128i *)operator new(0x17u);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23ABAF0);
          v11 = 22;
          *(_QWORD *)v18 = 22;
          v12 = v14;
          strcpy(v14[1].m128i_i8, "urred.");
          *v14 = si128;
          v16 = v14;
          v17 = 22;
          break;
        case 3:
          *(_QWORD *)v18 = 123;
          v12 = (__m128i *)operator new(0x7Cu);
          v16 = v12;
          *v12 = _mm_load_si128((const __m128i *)&xmmword_23ABA80);
          v17 = 123;
          v12[1] = _mm_load_si128((const __m128i *)&xmmword_23ABA90);
          v12[2] = _mm_load_si128((const __m128i *)&xmmword_23ABAA0);
          v12[3] = _mm_load_si128((const __m128i *)&xmmword_23ABAB0);
          v12[4] = _mm_load_si128((const __m128i *)&xmmword_23ABAC0);
          v12[5] = _mm_load_si128((const __m128i *)&xmmword_23ABAD0);
          v12[6] = _mm_load_si128((const __m128i *)&xmmword_23ABAE0);
          v11 = 123;
          strcpy(v12[7].m128i_i8, "file a bug.");
          break;
        case 1:
          v11 = 15;
          v12 = (__m128i *)v18;
          strcpy(v18, "Multiple errors");
          v16 = v18;
          v17 = 15;
          break;
        default:
          sub_22208E0(a1, v8, v9, (unsigned int)sub_2220120, a5, a6, a7);
          return;
      }
    }
    else
    {
      v10((__int64)&v16, v8, v9);
      v11 = v17;
      v12 = (__m128i *)v16;
    }
    sub_227BF10(a2, v12, v11);
    if ( v16 != v18 )
      operator delete(v16);
    v13 = *(_QWORD *)(a1 + 16);
    if ( v13 )
    {
      v18[0] = 0;
      v16 = v18;
      v17 = 0;
      sub_995C30((__int64)&v16, v13 + 1);
      if ( v17 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      sub_9EE560(&v16, " ", 1u);
      sub_9EE560(&v16, *(_BYTE **)(a1 + 8), *(_QWORD *)(a1 + 16));
      sub_227BF10(a2, v16, v17);
      if ( v16 != v18 )
        operator delete(v16);
    }
  }
}
