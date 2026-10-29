unsigned __int64 __fastcall sub_168AD0(TView *this, void *src, int *a3)
{
  int v5; // eax
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rax
  _QWORD *v9; // r15
  std::__detail::_List_node_base *v10; // rax
  size_t v11; // rax
  size_t v12; // r15
  _QWORD *v13; // rdi
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // r12
  const __m128i *v21; // rax
  __int64 v22; // rdx
  __m128i v23; // xmm0
  void *v25; // rdi
  size_t v26; // rdx
  __int64 v27; // rax
  size_t v28; // [rsp+10h] [rbp-B8h]
  __m128i v29; // [rsp+30h] [rbp-98h] BYREF
  __m128i v30; // [rsp+40h] [rbp-88h] BYREF
  __m128i v31; // [rsp+50h] [rbp-78h] BYREF
  __m128i v32; // [rsp+60h] [rbp-68h] BYREF
  __m128i v33; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  TView::TView(this, a3 + 35);
  *((_QWORD *)this + 9) = &off_234BB0;
  sub_176980((char *)this + 80, this);
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 13) = &off_22E4D8;
  *((_QWORD *)this + 17) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 120;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 19) = 0;
  sub_F1920((__int64)this + 160, (__int64)this);
  *((_QWORD *)this + 29) = 0;
  *(_QWORD *)this = &unk_239D30;
  *((_QWORD *)this + 9) = &off_23A000;
  *((_QWORD *)this + 13) = &unk_23A018;
  *((_QWORD *)this + 20) = &unk_23A048;
  *((_QWORD *)this + 30) = -1;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *(_OWORD *)((char *)this + 216) = 0;
  *((_QWORD *)this + 33) = get_module_data();
  *((_QWORD *)this + 34) = this;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_BYTE *)this + 296) = 1;
  *((_QWORD *)this + 38) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 80) = 112;
  *((_QWORD *)this + 53) = 0;
  *((_QWORD *)this + 54) = 0;
  *(_OWORD *)((char *)this + 328) = 0;
  *(_OWORD *)((char *)this + 344) = 0;
  *(_OWORD *)((char *)this + 360) = 0;
  *(_OWORD *)((char *)this + 376) = 0;
  *(_OWORD *)((char *)this + 392) = 0;
  *(_OWORD *)((char *)this + 408) = 0;
  sub_15C460((__int64)this + 440, (__int64)this);
  v5 = *a3;
  *((_QWORD *)this + 74) = 0;
  *((_DWORD *)this + 146) = v5;
  *((_DWORD *)this + 154) = 8;
  *((_QWORD *)this + 80) = (char *)this + 632;
  *((_QWORD *)this + 79) = (char *)this + 632;
  *((_QWORD *)this + 78) = &off_22E278;
  *((_QWORD *)this + 81) = 0;
  *((_BYTE *)this + 672) = 0;
  *((_QWORD *)this + 85) = 0;
  *((_BYTE *)this + 704) = 0;
  *((_QWORD *)this + 91) = (char *)this + 720;
  *((_QWORD *)this + 90) = (char *)this + 720;
  *((_QWORD *)this + 89) = &off_22E278;
  *(_OWORD *)((char *)this + 600) = 0;
  *((_OWORD *)this + 41) = 0;
  *((_OWORD *)this + 43) = 0;
  v6 = *((_QWORD *)a3 + 6);
  *((_QWORD *)this + 98) = 0;
  *((_DWORD *)this + 202) = 0;
  *((_QWORD *)this + 102) = 0;
  *(_OWORD *)((char *)this + 792) = 0;
  *(_OWORD *)((char *)this + 824) = 0;
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 2));
  *((_QWORD *)this + 94) = v6;
  v8 = *((_QWORD *)a3 + 3);
  *((_DWORD *)this + 147) = 0;
  *((_DWORD *)this + 190) = 0;
  *((_WORD *)this + 382) = 0;
  *((_WORD *)this + 420) = 0;
  *((_OWORD *)this + 48) = 0;
  *((__m128i *)this + 53) = v7;
  *((_QWORD *)this + 108) = v8;
  LODWORD(v8) = a3[24];
  *(_QWORD *)((char *)this + 908) = 0;
  *((_DWORD *)this + 226) = v8;
  *((_WORD *)this + 458) = 0x8000;
  LODWORD(v8) = a3[14];
  *((_DWORD *)this + 218) = 0;
  *((_DWORD *)this + 231) = v8;
  *((_QWORD *)this + 126) = (char *)this + 1000;
  *((_QWORD *)this + 125) = (char *)this + 1000;
  *((_QWORD *)this + 124) = &off_230AB8;
  *((_QWORD *)this + 129) = (char *)this + 1024;
  *((_QWORD *)this + 128) = (char *)this + 1024;
  *((_QWORD *)this + 132) = (char *)this + 1048;
  *((_QWORD *)this + 131) = (char *)this + 1048;
  *((_QWORD *)this + 130) = &off_230AF8;
  *((_QWORD *)this + 135) = (char *)this + 1072;
  *((_QWORD *)this + 134) = (char *)this + 1072;
  *((_QWORD *)this + 138) = (char *)this + 1096;
  *((_QWORD *)this + 137) = (char *)this + 1096;
  *((_QWORD *)this + 141) = (char *)this + 1120;
  *((_QWORD *)this + 112) = 0;
  *((_DWORD *)this + 230) = 5;
  *((_QWORD *)this + 116) = 0;
  *(_DWORD *)((char *)this + 953) = 0;
  *((_QWORD *)this + 122) = 0;
  *((_WORD *)this + 492) = 0;
  *((_QWORD *)this + 127) = &off_22E278;
  *((_QWORD *)this + 133) = &off_22E278;
  *((_QWORD *)this + 136) = &off_22E278;
  *((_OWORD *)this + 55) = 0;
  *(_OWORD *)((char *)this + 936) = 0;
  *((_OWORD *)this + 60) = 0;
  *((_QWORD *)this + 140) = (char *)this + 1120;
  *((_QWORD *)this + 144) = (char *)this + 1144;
  *((_QWORD *)this + 143) = (char *)this + 1144;
  *((_QWORD *)this + 142) = &off_230B38;
  *((_QWORD *)this + 139) = &off_22E278;
  v9 = (_QWORD *)operator new(0x20u);
  *v9 = off_2345F8;
  v9[2] = sub_157CB0;
  v9[1] = this;
  v9[3] = 0;
  v10 = (std::__detail::_List_node_base *)operator new(0x18u);
  *((_QWORD *)v10 + 2) = v9;
  std::__detail::_List_node_base::_M_hook(v10, (TView *)((char *)this + 632));
  v33.m128i_i64[0] = (__int64)this + 624;
  sub_99D80((_QWORD *)this + 14, (unsigned __int64 *)&v33);
  if ( src && (v11 = strlen((const char *)src), (v12 = v11) != 0) )
  {
    v25 = *((void **)this + 116);
    v26 = v11 + 1;
    if ( *((_QWORD *)this + 118) < v11 + 1 )
    {
      v28 = v11 + 1;
      v27 = qvector_reserve();
      *((_QWORD *)this + 116) = v27;
      v26 = v28;
      v25 = (void *)v27;
    }
    *((_QWORD *)this + 117) = v26;
    memmove(v25, src, v12);
    *(_BYTE *)(*((_QWORD *)this + 116) + v12) = 0;
  }
  else
  {
    *((_QWORD *)this + 117) = 0;
  }
  if ( !*((_BYTE *)a3 + 136) )
    qword_253300 = (__int64)this;
  v13 = *((_QWORD **)this + 106);
  if ( v13 )
  {
    v14 = *(void (__fastcall **)(__int64, __int64))(*v13 + 16LL);
    if ( v14 == sub_8E1A0 )
      v13[1] = this;
    else
      v14((__int64)v13, (__int64)this);
  }
  v15 = xmmword_253318;
  v16 = qword_253310;
  if ( *((_QWORD *)&xmmword_253318 + 1) < (unsigned __int64)(xmmword_253318 + 1) )
  {
    qword_253310 = qvector_reserve();
    v16 = qword_253310;
    v15 = xmmword_253318;
  }
  *(_QWORD *)(v16 + 8 * v15) = this;
  *(_QWORD *)&xmmword_253318 = xmmword_253318 + 1;
  v33.m128i_i64[0] = TView::getExtent(this);
  v33.m128i_i64[1] = v17;
  sub_153880((__int64)this, &v29, &v30, &v31, &v32, &v33);
  v18 = operator new(0x70u);
  TScrollBar::TScrollBar(v18, &v30);
  *(_WORD *)(v18 + 24) |= 0x20u;
  *((_QWORD *)this + 120) = v18;
  *(_BYTE *)(v18 + 48) = 15;
  v19 = operator new(0x70u);
  TScrollBar::TScrollBar(v19, &v31);
  *(_WORD *)(v19 + 24) |= 0x20u;
  *((_QWORD *)this + 121) = v19;
  if ( (*((_BYTE *)this + 584) & 1) != 0 )
  {
    v20 = *((_QWORD *)this + 122);
  }
  else
  {
    v20 = operator new(0x58u);
    sub_154940(v20, (__int64)&v32);
    *((_QWORD *)this + 122) = v20;
  }
  if ( v20 )
    *(_QWORD *)(v20 + 72) = this;
  *((_WORD *)this + 13) |= 0x200u;
  *((_WORD *)this + 12) = 1;
  *((_BYTE *)this + 48) = 12;
  *((_WORD *)this + 25) = 1193;
  TWindow::setState();
  TScrollBar::setParams(*((TScrollBar **)this + 120), 0, 0, 1023, 8, 1);
  v21 = *((const __m128i **)a3 + 4);
  if ( v21 )
  {
    v22 = *((_QWORD *)a3 + 5);
    *((__m128i *)this + 20) = _mm_loadu_si128(v21);
    *((__m128i *)this + 21) = _mm_loadu_si128(v21 + 1);
    *((__m128i *)this + 22) = _mm_loadu_si128(v21 + 2);
    *((__m128i *)this + 23) = _mm_loadu_si128(v21 + 3);
    *((__m128i *)this + 24) = _mm_loadu_si128(v21 + 4);
    *((__m128i *)this + 25) = _mm_loadu_si128(v21 + 5);
    v23 = _mm_loadu_si128(v21 + 6);
    *((_QWORD *)this + 54) = v22;
    *((__m128i *)this + 26) = v23;
  }
  sub_163FD0();
  return v34 - __readfsqword(0x28u);
}

