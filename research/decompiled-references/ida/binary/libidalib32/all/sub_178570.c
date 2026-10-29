unsigned __int64 __fastcall sub_178570(TFileDialog *this)
{
  const char *v1; // rcx
  TInputLine *v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  THistory *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdi
  TView *v11; // rbp
  unsigned int v12; // eax
  const void *v14; // r15
  void *v15; // rax
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  _BYTE src[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v1 = (char *)this + 184;
  v18 = __readfsqword(0x28u);
  *((_WORD *)this + 12) |= 0x300u;
  if ( *((_BYTE *)this + 4384) )
  {
    if ( *((_QWORD *)this + 543) )
      v1 = *((const char **)this + 542);
    else
      v1 = s1;
  }
  TFileDialog::createInput(this, 2, 2, v1);
  v3 = (TInputLine *)operator new(0x80u);
  *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_1D2D40);
  TInputLine::TInputLine(v3, src, 4096);
  *((_QWORD *)this + 549) = v3;
  TInputLine::setReadOnly(v3, 1);
  memset(src, 0, sizeof(src));
  sub_177BE0((__int64)this + 4312, 0, (__int64 *)src);
  v4 = *((_QWORD *)this + 549);
  if ( (_BYTE *)(v4 + 72) != src )
  {
    v5 = *(_QWORD *)&src[8];
    if ( *(_QWORD *)&src[8] > 1u )
    {
      v14 = *(const void **)src;
      v15 = *(void **)(v4 + 72);
      if ( *(_QWORD *)(v4 + 88) < *(_QWORD *)&src[8] )
      {
        v15 = (void *)qvector_reserve();
        *(_QWORD *)(v4 + 72) = v15;
      }
      *(_QWORD *)(v4 + 80) = v5;
      memmove(v15, v14, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(v4 + 72) + v5 - 1) = 0;
      v4 = *((_QWORD *)this + 549);
    }
    else
    {
      *(_QWORD *)(v4 + 80) = 0;
      v4 = *((_QWORD *)this + 549);
    }
  }
  TGroup::insert(this, (TView *)v4);
  sub_178380((_QWORD *)this + 539, (__int64 *)this + 550);
  v6 = operator new(0x70u);
  v7 = *((_QWORD *)this + 549);
  v8 = (THistory *)v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2D50);
  ((void (__fastcall *)(__int64, __m128i *, __int64, _QWORD, char *))THistory::THistory)(
    v6,
    &si128,
    v7,
    0,
    (char *)this + 4400);
  *((_QWORD *)this + 553) = v8;
  THistory::setCurrentIndex(v8, 0);
  v9 = (_QWORD *)operator new(0x10u);
  v10 = *((_QWORD *)this + 549);
  *v9 = off_234B18;
  v9[1] = this;
  *((_QWORD *)this + 554) = v9;
  TView::set_onchange(v10);
  TGroup::insert(this, *((TView **)this + 553));
  TFileDialog::createFileList(this, 2, 7, 10);
  TFileDialog::createButtons(this, 35, 3);
  v11 = (TView *)operator new(0x2058u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2D60);
  TFileInfoPane::TFileInfoPane(v11, &si128);
  TGroup::insert(this, v11);
  TGroup::selectNext(this, 0);
  v12 = THistory::currentIndex(*((THistory **)this + 553));
  sub_177CD0((_QWORD *)this + 539, v12, (__int64 *)this + 555);
  (*(void (__fastcall **)(TFileDialog *))(*(_QWORD *)this + 208LL))(this);
  if ( (*((_BYTE *)this + 4289) & 1) == 0 )
    (*(void (__fastcall **)(TFileDialog *))(*(_QWORD *)this + 208LL))(this);
  if ( *(_QWORD *)src )
  {
    *(_QWORD *)&src[8] = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}

