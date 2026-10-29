unsigned __int64 __fastcall sub_144400(unsigned int *a1, TMenu *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  TView *v5; // rbp
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r14
  int v9; // edx
  int v10; // rdx^4
  int v11; // ecx
  int v12; // eax
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  _WORD v15[12]; // [rsp+10h] [rbp-58h] BYREF
  char v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v2 = _mm_cvtsi32_si128(*a1);
  v3 = _mm_cvtsi32_si128(a1[1]);
  v17 = __readfsqword(0x28u);
  v4 = _mm_unpacklo_epi32(v2, v3);
  v14 = _mm_unpacklo_epi64(v4, v4);
  v5 = (TView *)operator new(0x60u);
  TMenuBox::TMenuBox(v5, &v14, a2, 0);
  *((_DWORD *)v5 + 8) += *((_DWORD *)v5 + 4);
  TView::getBounds(v5);
  v7 = v6;
  v8 = v6 >> 32;
  TView::getBounds((TView *)(TProgram::application + 8LL));
  v11 = *((_DWORD *)v5 + 8);
  if ( v9 < v7 )
  {
    v11 += v9 - v7;
    *((_DWORD *)v5 + 8) = v11;
  }
  v12 = *((_DWORD *)v5 + 9);
  if ( v10 < (int)v8 )
  {
    v12 += v10 - v8;
    *((_DWORD *)v5 + 9) = v12;
  }
  if ( v11 < 0 )
    *((_DWORD *)v5 + 8) = 0;
  if ( v12 < 0 )
    *((_DWORD *)v5 + 9) = 0;
  do
  {
    do
      TEventQueue::getMouseEvent(v15);
    while ( (v15[0] & 0xF) == 0 );
  }
  while ( v16 );
  if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v5) )
  {
    v15[0] = 256;
    v15[4] = TGroup::execView((TGroup *)(TProgram::application + 8LL), v5);
    (*(void (__fastcall **)(_QWORD, _WORD *))(*(_QWORD *)TProgram::application + 80LL))(TProgram::application, v15);
    if ( v5 )
    {
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v5 + 16LL))(v5);
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( a2 )
  {
    TMenu::~TMenu(a2);
    operator delete(a2, 0x10u);
  }
  return v17 - __readfsqword(0x28u);
}

