unsigned __int64 __fastcall sub_1A3180(TGroup *this, __int64 *a2)
{
  unsigned int v2; // eax
  bool v3; // cc
  __m128i si128; // xmm0
  int v5; // r12d
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  TView *v8; // r14
  int v9; // ecx
  int v10; // r12d
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  TView *v15; // r15
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  TView *v20; // r12
  __int64 v21; // rdx
  TView *v22; // r12
  TView *v23; // r12
  TView *v24; // r12
  __int32 v26; // [rsp+0h] [rbp-98h]
  TView *v27; // [rsp+0h] [rbp-98h]
  TView *v28; // [rsp+0h] [rbp-98h]
  int v29; // [rsp+8h] [rbp-90h]
  TView *v30; // [rsp+8h] [rbp-90h]
  __m128i v31; // [rsp+10h] [rbp-88h] BYREF
  __m128i v32; // [rsp+20h] [rbp-78h] BYREF
  __m128i v33; // [rsp+30h] [rbp-68h] BYREF
  __m128i v34; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 176, TWindow::initFrame);
  v2 = 52;
  if ( (unsigned __int64)a2[9] > 0x400 )
    v2 = 80;
  v34.m128i_i64[1] = v2 | 0x1000000000LL;
  v34.m128i_i64[0] = 0;
  TDialog::TDialog(this, &off_2366F0, &v34, "Notepad");
  v3 = (unsigned __int64)a2[9] <= 0x400;
  *((_QWORD *)this + 21) = 0;
  *(_QWORD *)this = &off_2404D0;
  if ( v3 )
  {
    v29 = 37;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D3E00);
    v5 = 12;
    v6 = _mm_load_si128((const __m128i *)&xmmword_1D3E10);
    v7 = _mm_load_si128((const __m128i *)&xmmword_1D3E20);
  }
  else
  {
    v29 = 77;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D3E30);
    v5 = 9;
    v6 = _mm_load_si128((const __m128i *)&xmmword_1D3E40);
    v7 = _mm_load_si128((const __m128i *)&xmmword_1D3E50);
  }
  v31 = v7;
  v32 = v6;
  v33 = si128;
  v8 = (TView *)operator new(0x58u);
  v9 = v5 + 3;
  v10 = v5 + 2;
  v34.m128i_i32[0] = 1;
  v11 = v29 + 1;
  v34.m128i_i32[1] = v10;
  v34.m128i_i32[2] = v29 + 1;
  v26 = v9;
  v34.m128i_i32[3] = v9;
  TIndicator::TIndicator(v8, &v34);
  v12 = operator new(0x70u);
  v34.m128i_i32[1] = v10;
  v34.m128i_i32[0] = 15;
  v34.m128i_i32[2] = v29 + 1;
  v34.m128i_i32[3] = v26;
  v27 = (TView *)v12;
  TScrollBar::TScrollBar(v12, &v34);
  v13 = operator new(0x70u);
  v34.m128i_i32[0] = v29 + 1;
  v34.m128i_i32[1] = 2;
  v34.m128i_i32[3] = v10;
  v34.m128i_i32[2] = v29 + 2;
  v30 = (TView *)v13;
  TScrollBar::TScrollBar(v13, &v34);
  v14 = operator new(0xF8u);
  v34.m128i_i64[1] = __PAIR64__(v10, v11);
  v15 = v27;
  v16 = *((_WORD *)a2 + 36);
  v17 = (__int64)v27;
  v28 = (TView *)v14;
  v34.m128i_i64[0] = 0x200000001LL;
  sub_18E5A0(v14, (__int64)&v34, v17, (__int64)v30, (__int64)v8, v16);
  *((_QWORD *)this + 21) = v28;
  TGroup::insert(this, v8);
  TGroup::insert(this, v30);
  TGroup::insert(this, v15);
  TGroup::insert(this, *((TView **)this + 21));
  v18 = operator new(0x60u);
  v19 = *((_QWORD *)this + 21);
  v20 = (TView *)v18;
  v21 = *a2;
  v34 = _mm_load_si128((const __m128i *)&xmmword_1D3E60);
  TLabel::TLabel(v18, &v34, v21, v19);
  TGroup::insert(this, v20);
  v22 = (TView *)operator new(0x58u);
  TButton::TButton(v22, &v31, "~O~K", 10, 1);
  TGroup::insert(this, v22);
  v23 = (TView *)operator new(0x58u);
  TButton::TButton(v23, &v32, "~C~ancel", 11, 0);
  TGroup::insert(this, v23);
  if ( (unsigned __int64)a2[11] > 1 )
  {
    v24 = (TView *)operator new(0x58u);
    TButton::TButton(v24, &v33, "~H~elp", 9, 0);
    TGroup::insert(this, v24);
  }
  *((_WORD *)this + 12) |= 0x304u;
  TGroup::selectNext(this, 0);
  if ( (unsigned __int64)a2[7] > 1 )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 104LL))(*((_QWORD *)this + 21), a2[6]);
  if ( *((_BYTE *)a2 + 110) )
    TEditor::setSelect(*((_QWORD *)this + 21), 0, *(_QWORD *)(*((_QWORD *)this + 21) + 112LL), 0);
  return v35 - __readfsqword(0x28u);
}

