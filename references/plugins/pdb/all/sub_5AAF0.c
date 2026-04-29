__int64 __fastcall sub_5AAF0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  void (*v3)(void); // rax
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  int v9; // eax
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // [rsp+8h] [rbp-60h] BYREF
  _DWORD v17[2]; // [rsp+10h] [rbp-58h] BYREF
  __m128i v18; // [rsp+18h] [rbp-50h] BYREF
  int v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v21; // [rsp+48h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 608);
  v21 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v1 + 24LL))(&v16, v1, 2);
  if ( !v16 )
  {
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
      return 1;
    goto LABEL_21;
  }
  if ( !(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v16 + 24LL))(v16) )
  {
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
    {
LABEL_4:
      v2 = 1;
      goto LABEL_5;
    }
LABEL_21:
    sub_29350();
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, _DWORD *, __int64))(*(_QWORD *)v16 + 48LL))(v16, v17, 56) )
    goto LABEL_18;
  if ( v17[0] == 20040203 || v17[0] == 19990903 )
  {
    if ( v17[1] == 56 )
    {
      v8 = _mm_loadl_epi64(&v18);
      *(_DWORD *)(a1 + 528) = v20;
      v9 = v19;
      *(_QWORD *)(a1 + 624) = v8.m128i_i64[0];
      *(_DWORD *)(a1 + 532) = v9;
      if ( _mm_cvtsi128_si32(v8) >= (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229)) )
      {
        if ( (*(_DWORD *)debug & 0x400000) != 0 )
          sub_29350();
        v10 = *(__int64 **)(a1 + 600);
        v11 = *v10;
        if ( (unsigned __int64)v10[2] <= 0x1C )
        {
          v15 = qvector_reserve(v10, v11, 29, 1);
          *v10 = v15;
          v11 = v15;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_941B0);
        v10[1] = 29;
        *(__m128i *)v11 = si128;
        *(__m128i *)(v11 + 12) = _mm_load_si128((const __m128i *)&xmmword_941C0);
        v13 = *v10;
        v2 = 0;
        *(_BYTE *)(v13 + 28) = 0;
        goto LABEL_5;
      }
      if ( (unsigned __int8)sub_59180(a1, &v16, v18.m128i_i32[2], 1) )
      {
        if ( ((*(_DWORD *)(a1 + 532) - 2) & 0xFFFFFFFD) == 0 )
          sub_565C0(a1, &v18.m128i_i32[3]);
        goto LABEL_4;
      }
    }
    else
    {
      if ( (*(_DWORD *)debug & 0x400000) != 0 )
        sub_29350();
      v5 = *(__int64 **)(a1 + 600);
      v6 = *v5;
      if ( (unsigned __int64)v5[2] <= 0x1D )
      {
        v14 = qvector_reserve(v5, v6, 30, 1);
        *v5 = v14;
        v6 = v14;
      }
      v7 = _mm_load_si128((const __m128i *)&xmmword_941A0);
      v5[1] = 30;
      *(__m128i *)v6 = v7;
      *(__m128i *)(v6 + 13) = _mm_load_si128((const __m128i *)&xmmword_94130);
      *(_BYTE *)(*v5 + 29) = 0;
    }
LABEL_18:
    v2 = 0;
    goto LABEL_5;
  }
  sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Unsupported type info stream version %d", v17[0]);
  v2 = 0;
LABEL_5:
  if ( v16 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v16 + 8LL);
    if ( (char *)v3 == (char *)sub_54910 )
      operator delete(v16, 0x40u);
    else
      v3();
  }
  return v2;
}
