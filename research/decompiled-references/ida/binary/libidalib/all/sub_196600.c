unsigned __int64 __fastcall sub_196600(TView *this, __int64 *a2)
{
  __m128i v4; // xmm0
  __int64 Extent; // rax
  unsigned int v6; // edx
  unsigned int v7; // rdx^4
  __m128i v8; // xmm2
  unsigned int v9; // esi
  __m128i v10; // xmm4
  __m128i v11; // xmm3
  __m128i v12; // xmm5
  unsigned int v13; // ecx
  __m128i v14; // xmm0
  __m128i v15; // xmm7
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rax
  TView *v20; // rax
  __int64 v21; // rsi
  const char **v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v29; // rax
  const char *v30; // r10
  size_t v31; // r9
  void *v32; // rdx
  __int64 v33; // rax
  const char *src; // [rsp+0h] [rbp-98h]
  _BYTE *srcb; // [rsp+0h] [rbp-98h]
  void *srca; // [rsp+0h] [rbp-98h]
  const char *v37; // [rsp+10h] [rbp-88h]
  size_t v38; // [rsp+18h] [rbp-80h]
  __m128i v39; // [rsp+20h] [rbp-78h] BYREF
  __m128i v40; // [rsp+30h] [rbp-68h] BYREF
  __m128i v41; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  TGroup::TGroup(this, a2 + 12);
  sub_177480((_QWORD *)this + 16, (__int64)this);
  *((_QWORD *)this + 19) = &off_235BB0;
  sub_183FC0((__int64)this + 160, (__int64)this);
  v4 = _mm_loadl_epi64((const __m128i *)off_235F80);
  *((_QWORD *)this + 260) = 0;
  *(_QWORD *)this = &off_23D308;
  *((_QWORD *)this + 266) = 0;
  *((_QWORD *)this + 290) = (char *)this + 2304;
  *((_QWORD *)this + 291) = (char *)this + 2304;
  *((_QWORD *)this + 299) = (char *)this + 2376;
  *((_QWORD *)this + 300) = (char *)this + 2376;
  *(__m128i *)((char *)this + 152) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)off_23D510);
  *((_QWORD *)this + 269) = 0;
  *((_QWORD *)this + 273) = 0;
  *((_QWORD *)this + 276) = 0;
  *((_QWORD *)this + 279) = 0;
  *((_QWORD *)this + 285) = 0;
  *((_QWORD *)this + 286) = 0;
  *((_DWORD *)this + 576) = 0;
  *((_QWORD *)this + 289) = 0;
  *((_QWORD *)this + 292) = 0;
  *((_QWORD *)this + 293) = 0;
  *((_DWORD *)this + 594) = 0;
  *((_QWORD *)this + 298) = 0;
  *((_QWORD *)this + 301) = 0;
  *((_DWORD *)this + 606) = 0;
  *((_QWORD *)this + 304) = 0;
  *(_OWORD *)((char *)this + 2088) = 0;
  *(_OWORD *)((char *)this + 2136) = 0;
  *((_OWORD *)this + 135) = 0;
  *((_OWORD *)this + 137) = 0;
  *(_OWORD *)((char *)this + 2216) = 0;
  *(_OWORD *)((char *)this + 2248) = 0;
  *(_OWORD *)((char *)this + 2264) = 0;
  *((_OWORD *)this + 147) = 0;
  *((_QWORD *)this + 305) = (char *)this + 2424;
  *((_QWORD *)this + 306) = (char *)this + 2424;
  *((_QWORD *)this + 332) = (char *)this + 2648;
  *((_QWORD *)this + 331) = (char *)this + 2648;
  *((_QWORD *)this + 330) = &off_235E30;
  *((_QWORD *)this + 335) = (char *)this + 2672;
  *((_QWORD *)this + 334) = (char *)this + 2672;
  *((_QWORD *)this + 333) = &off_235EB0;
  *((_QWORD *)this + 338) = (char *)this + 2696;
  *((_QWORD *)this + 337) = (char *)this + 2696;
  *((_QWORD *)this + 336) = &off_22F2F8;
  *((_QWORD *)this + 307) = 0;
  *((_QWORD *)this + 308) = 0;
  *((_QWORD *)this + 311) = 0;
  *((_QWORD *)this + 322) = 0;
  *((_QWORD *)this + 341) = (char *)this + 2720;
  *((_QWORD *)this + 340) = (char *)this + 2720;
  *((_QWORD *)this + 339) = &off_235F30;
  *(_OWORD *)((char *)this + 2472) = 0;
  *((_OWORD *)this + 156) = 0;
  *(_OWORD *)((char *)this + 2520) = 0;
  *(_OWORD *)((char *)this + 2584) = 0;
  *((_OWORD *)this + 163) = 0;
  *((_OWORD *)this + 164) = 0;
  sub_195880((__int64)this, a2);
  sub_17FB00((__int64)this + 160, *(_DWORD *)(*((_QWORD *)this + 315) + 48LL));
  *((_BYTE *)this + 48) = 12;
  *((_DWORD *)this + 628) = 0;
  Extent = TView::getExtent(this);
  v8 = _mm_cvtsi32_si128(Extent);
  v9 = v6 - 1;
  v10 = _mm_cvtsi32_si128(v7 - 1);
  if ( (*((_BYTE *)this + 2104) & 2) != 0 )
  {
    v11 = _mm_cvtsi32_si128(v9);
    v12 = _mm_cvtsi32_si128(v7);
    v13 = 5 * ((int)(v6 - Extent) >= 20) + 5;
    v14 = _mm_cvtsi32_si128(v13 + (unsigned int)Extent);
  }
  else
  {
    v12 = v10;
    v13 = 14;
    v8 = _mm_cvtsi32_si128((int)Extent + 1);
    v11 = _mm_cvtsi32_si128(v6 - 2);
    v14 = _mm_cvtsi32_si128(0xEu);
  }
  v15 = _mm_cvtsi32_si128(v7);
  v39 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v10), _mm_unpacklo_epi32(v11, v15));
  v41 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v8, v10), _mm_unpacklo_epi32(v14, v15));
  v40 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(HIDWORD(Extent) + 1)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), v12));
  v16 = operator new(0x70u);
  TScrollBar::TScrollBar(v16, &v39);
  *(_WORD *)(v16 + 24) |= 0x20u;
  *((_QWORD *)this + 326) = v16;
  v17 = operator new(0x70u);
  TScrollBar::TScrollBar(v17, &v40);
  *((_QWORD *)this + 327) = v17;
  v18 = operator new(0x50u);
  TView::TView(v18, &v41);
  *(_QWORD *)(v18 + 72) = 0;
  *(_BYTE *)(v18 + 48) = 10;
  *((_QWORD *)this + 329) = v18;
  *(_QWORD *)v18 = &off_23C898;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v20 = (TView *)(*(__int64 (__fastcall **)(__int64, TView *, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, this, a2);
  *((_QWORD *)this + 325) = v20;
  v21 = (__int64)v20;
  TGroup::insert(this, v20);
  v22 = (const char **)off_235F60;
  v23 = *((_QWORD *)this + 315) + 80LL;
  do
  {
    if ( *(_QWORD *)(v23 + 8) <= 1u )
    {
      if ( *v22 && (src = *v22, v29 = strlen(*v22), v30 = src, (v31 = v29) != 0) )
      {
        v32 = (void *)(v29 + 1);
        if ( *(_QWORD *)(v23 + 16) < v29 + 1 )
        {
          srca = (void *)(v29 + 1);
          v38 = v29;
          v37 = v30;
          v33 = qvector_reserve();
          v31 = v38;
          v30 = v37;
          *(_QWORD *)v23 = v33;
          v32 = srca;
        }
        *(_QWORD *)(v23 + 8) = v32;
        v21 = (__int64)v30;
        srcb = (_BYTE *)v31;
        memmove(*(void **)v23, v30, v31);
        srcb[*(_QWORD *)v23] = 0;
      }
      else
      {
        *(_QWORD *)(v23 + 8) = 0;
      }
    }
    ++v22;
    v23 += 24;
  }
  while ( off_235F80 != (__int64 (__fastcall ***)())v22 );
  sub_193E70((__int64)this);
  sub_193200(this, v21, v24, v25, v26, v27);
  return v42 - __readfsqword(0x28u);
}

