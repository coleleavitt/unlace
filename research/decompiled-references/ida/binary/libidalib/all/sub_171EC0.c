unsigned __int64 __fastcall sub_171EC0(__int64 a1, const __m128i *a2)
{
  struct _Unwind_Exception *v2; // r14
  _QWORD *v3; // rax
  __m128i v4; // xmm0
  unsigned int v5; // edx
  __m128i v6; // xmm0
  bool v7; // cc
  __int64 v8; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbp
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &stru_236898;
  *(_QWORD *)(a1 + 8) = 0x20B8012000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v3 = (_QWORD *)(a1 + 80);
  v4 = _mm_loadl_epi64((const __m128i *)&off_2359A8);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_235980);
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v3 );
  *(_DWORD *)(a1 + 176) = 0;
  v5 = *(_DWORD *)(a1 + 12);
  if ( ((v5 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr();
        v15 = (_QWORD *)(a1 + 152);
        while ( 1 )
        {
          if ( *v15 )
          {
            v15[1] = 0;
            qfree();
          }
          v15 -= 3;
          if ( v15 == (_QWORD *)(a1 + 56) )
            _Unwind_Resume(v2);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v5 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v5 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = a1 + 256;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 72) = 55;
  *(_DWORD *)(a1 + 176) = 2;
  *(_QWORD *)(a1 + 200) = -1;
  v6 = _mm_loadu_si128(a2);
  *(_QWORD *)a1 = off_235898;
  *(_QWORD *)(a1 + 184) = &off_235960;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(__m128i *)(a1 + 216) = v6;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  sub_171D00((__int64 *)(a1 + 232));
  if ( *(_QWORD *)(a1 + 240) )
  {
    v7 = *(_QWORD *)(a1 + 96) <= 0x16u;
    v8 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 232);
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 96) <= 0x16u;
    v8 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 40) = s1;
    if ( !v7 )
      goto LABEL_8;
  }
  v13 = qvector_reserve();
  *(_QWORD *)(a1 + 80) = v13;
  v8 = v13;
LABEL_8:
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3C10);
  *(_QWORD *)(a1 + 88) = 23;
  *(__m128i *)v8 = si128;
  *(_QWORD *)(v8 + 14) = 0x2E2E2E65636E6572LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 80) + 22LL) = 0;
  v10 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 120) <= 0x19u )
  {
    v14 = qvector_reserve();
    *(_QWORD *)(a1 + 104) = v14;
    v10 = v14;
  }
  v11 = _mm_load_si128((const __m128i *)&xmmword_1D3C20);
  *(_QWORD *)(a1 + 112) = 26;
  *(__m128i *)v10 = v11;
  *(__m128i *)(v10 + 9) = _mm_load_si128((const __m128i *)&xmmword_1D3C30);
  *(_BYTE *)(*(_QWORD *)(a1 + 104) + 25LL) = 0;
  netnode_supset();
  return v16 - __readfsqword(0x28u);
}

