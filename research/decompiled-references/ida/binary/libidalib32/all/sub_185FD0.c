__int64 __fastcall sub_185FD0(
        TGroup *this,
        unsigned int *a2,
        unsigned int a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        void *a8,
        __int64 a9,
        __int64 *a10)
{
  __m128i v12; // xmm0
  char v13; // cl
  int v14; // eax
  int v15; // edi
  __m128i v16; // xmm2
  _BOOL4 v17; // esi
  __m128i v18; // xmm3
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  int v21; // ecx
  TGroup *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // r12
  __int64 v28; // rbx
  TView *v29; // r12
  __int16 v30; // ax
  __int64 v32; // rax
  TView *v33; // [rsp+0h] [rbp-B0h]
  TView *v34; // [rsp+8h] [rbp-A8h]
  char v35; // [rsp+17h] [rbp-99h]
  _OWORD v37[2]; // [rsp+28h] [rbp-88h] BYREF
  __int64 v38; // [rsp+48h] [rbp-68h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-60h]
  unsigned int v40; // [rsp+54h] [rbp-5Ch]
  __m128i v41; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-40h]

  v12 = _mm_cvtsi32_si128(*a2);
  v13 = *a4;
  v14 = (int)a7;
  v15 = _mm_cvtsi128_si32(v12);
  v16 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a3));
  v17 = v13 != 0;
  v42 = __readfsqword(0x28u);
  v35 = v13;
  v38 = 0;
  v18 = _mm_cvtsi32_si128(v17 + a3);
  v19 = _mm_unpacklo_epi32(v12, v18);
  if ( (unsigned __int64)a7 > 0x3C )
    v14 = 60;
  v20 = _mm_cvtsi32_si128(v15 + v14);
  v21 = *((_DWORD *)this + 124);
  v39 = v14 - 1;
  v40 = v21 - 1 - v17;
  v37[0] = _mm_unpacklo_epi64(v16, _mm_unpacklo_epi32(v20, v18));
  v37[1] = _mm_unpacklo_epi64(v19, _mm_unpacklo_epi32(v20, _mm_cvtsi32_si128(v21 + a3)));
  v22 = (TGroup *)operator new(0x80u);
  TGroup::TGroup();
  v23 = a10[1];
  v24 = *a10;
  v41.m128i_i64[0] = (__int64)v22;
  if ( a10[2] < (unsigned __int64)(v23 + 1) )
  {
    v32 = qvector_reserve();
    *a10 = v32;
    v24 = v32;
    v23 = a10[1];
  }
  *(_QWORD *)(v24 + 8 * v23) = v22;
  v25 = v39;
  ++a10[1];
  v26 = 5 * ((int)(v25 - v38) >= 20) + 5;
  v34 = (TView *)operator new(0x70u);
  v41 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(HIDWORD(v38))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39 + 1), _mm_cvtsi32_si128(v40 + 1)));
  TScrollBar::TScrollBar(v34, &v41);
  v33 = (TView *)operator new(0x58u);
  v41 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v40)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v38 + v26), _mm_cvtsi32_si128(v40 + 1)));
  TIndicator::TIndicator(v33, &v41);
  v27 = operator new(0x70u);
  v41 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v38 + v26), _mm_cvtsi32_si128(v40)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(v40 + 1)));
  TScrollBar::TScrollBar(v27, &v41);
  *(_WORD *)(v27 + 24) |= 0x20u;
  *(_BYTE *)(v27 + 48) = 15;
  TGroup::insert(v22, v33);
  TGroup::insert(v22, v34);
  TGroup::insert(v22, (TView *)v27);
  v28 = operator new(0xF8u);
  sub_18D9C0(v28, &v38, v27, v34, v33, 32000);
  if ( v35 )
  {
    v29 = (TView *)operator new(0x60u);
    TLabel::TLabel(v29, v37, a4, v22);
    TGroup::insert(this, v29);
  }
  sub_18DB00(v28, a9 + 8);
  v30 = *(_WORD *)(a9 + 32);
  if ( (v30 & 1) != 0 )
    *(_DWORD *)(v28 + 228) = 1;
  if ( (v30 & 4) != 0 )
    *(_DWORD *)(v28 + 232) = 1;
  if ( (v30 & 8) != 0 )
    TEditor::setSelect(v28, 0, *(_QWORD *)(v28 + 112), 1);
  *(_WORD *)(v28 + 50) = (_WORD)a8;
  TGroup::insert(v22, (TView *)v28);
  TGroup::insert(this, v22);
  *a2 = v39 + 1;
  return v28;
}

