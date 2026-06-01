bool __fastcall sub_280E10(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm3
  bool v17; // zf
  const char *v18; // rax
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v7 = qalloc_or_throw(184);
  v9 = itext(121, a2, v8);
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)v7 = &stru_86F6A0;
  v10 = (_QWORD *)(v7 + 80);
  *(_QWORD *)(v7 + 8) = 0x2008000000004LL;
  *(_DWORD *)(v7 + 48) = 3;
  *(_QWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 72) = -1;
  *(_QWORD *)(v7 + 40) = v9;
  *(_QWORD *)(v7 + 64) = &off_860910;
  *(_OWORD *)(v7 + 16) = -1;
  do
  {
    *v10 = 0;
    v10 += 3;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( v10 != (_QWORD *)(v7 + 176) );
  *(_DWORD *)(v7 + 176) = 0;
  v11 = *(unsigned int *)(v7 + 12);
  if ( ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v7 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, 0x2008000000004LL, v11, ((*(_DWORD *)(v7 + 12) >> 19) & 0x3Fu) - 1, 0.0);
      BUG();
    }
    v11 = (unsigned int)v11 & 0xFE07FFFF;
    *(_BYTE *)(v7 + 11) = ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v7 + 12) = v11;
  }
  *(_QWORD *)v7 = exp_chooser_t___vtable;
  v12 = *(_DWORD *)(get_eah(121, 0x2008000000004LL, v11) + 24);
  v14 = _mm_cvtsi32_si128(a2);
  v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5));
  v16 = _mm_cvtsi32_si128(a3);
  v17 = v12 == 4;
  *(_DWORD *)(v7 + 180) = v12;
  v18 = " ";
  if ( v17 )
    v18 = (const char *)&unk_5E5318;
  *(_DWORD *)(v7 + 72) = 135;
  *(_QWORD *)(v7 + 56) = v18;
  *(_QWORD *)v7 = wexp_chooser_t___vtable;
  *(__m128i *)(v7 + 16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v14, v16), v15);
  v21[0] = a1;
  return sub_4AED50(v7, v21, &unk_5E5318, v13) == 0;
}
