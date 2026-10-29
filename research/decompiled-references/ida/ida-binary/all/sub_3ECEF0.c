__int64 __fastcall sub_3ECEF0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  double v7; // xmm0_8
  __int64 v8; // rdx
  int v9; // edi
  __m128i v10; // xmm0
  int v11; // edx
  __int64 v12; // rsi
  bool v13; // cc
  __int64 v14; // rsi
  __m128i si128; // xmm0
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _Unwind_Exception *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi

  v2 = a1 + 256;
  v3 = a1 + 80;
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x20B8012000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v5 = (_QWORD *)(a1 + 80);
  v6 = _mm_loadl_epi64((const __m128i *)&off_86A468);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)&off_86A440);
  v7 = 0.0;
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v5 );
  *(_DWORD *)(a1 + 176) = 0;
  v8 = *(unsigned int *)(a1 + 12);
  v9 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v21 = (struct _Unwind_Exception *)interr(3449, a2, v8, v2, 0.0);
        v22 = *(_QWORD *)(a1 + 256);
        if ( v22 )
        {
          *(_QWORD *)(a1 + 264) = 0;
          v7 = qfree(v22, a2->m128i_i8);
        }
        v23 = *(_QWORD *)(a1 + 232);
        if ( v23 )
        {
          *(_QWORD *)(a1 + 240) = 0;
          qfree(v23, a2->m128i_i8, v7);
        }
        *(_QWORD *)(a1 + 184) = &xref_chooser_t___vtable_at__184;
        *(_QWORD *)a1 = &unk_870060;
        sub_1AB100((_QWORD *)a1, a2->m128i_i8);
        _Unwind_Resume(v21);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = v9;
    *(_DWORD *)(a1 + 12) = v8 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = v2;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 72) = 55;
  *(_DWORD *)(a1 + 176) = 2;
  *(_QWORD *)(a1 + 200) = -1;
  v10 = _mm_loadu_si128(a2);
  *(_QWORD *)a1 = xref_editor_t___vtable;
  *(_QWORD *)(a1 + 184) = &xref_editor_t___vtable_at__184;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(__m128i *)(a1 + 216) = v10;
  v11 = *(_DWORD *)(a1 + 224);
  v12 = *(_QWORD *)(a1 + 216);
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  sub_3ECD30((__int64 *)(a1 + 232), v12, v11);
  if ( *(_QWORD *)(a1 + 240) )
  {
    v13 = *(_QWORD *)(a1 + 96) <= 0x16u;
    v14 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 232);
    if ( !v13 )
      goto LABEL_8;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 96) <= 0x16u;
    v14 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 40) = &s1;
    if ( !v13 )
      goto LABEL_8;
  }
  v19 = qvector_reserve(v3, v14, 23, 1);
  *(_QWORD *)(a1 + 80) = v19;
  v14 = v19;
LABEL_8:
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD800);
  *(_QWORD *)(a1 + 88) = 23;
  *(__m128i *)v14 = si128;
  *(_QWORD *)(v14 + 14) = 0x2E2E2E65636E6572LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 80) + 22LL) = 0;
  v16 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 120) <= 0x19u )
  {
    v20 = qvector_reserve(a1 + 104, v16, 26, 1);
    *(_QWORD *)(a1 + 104) = v20;
    v16 = v20;
  }
  v17 = _mm_load_si128((const __m128i *)&xmmword_5DD810);
  *(_QWORD *)(a1 + 112) = 26;
  *(__m128i *)v16 = v17;
  *(__m128i *)(v16 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DD820);
  result = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(result + 25) = 0;
  return result;
}
