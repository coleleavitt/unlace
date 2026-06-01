__int64 __fastcall sub_14B0D0(int a1)
{
  TView *v2; // rdi
  int v4; // edx
  __int64 v5; // rbp
  int v6; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+4h] [rbp-34h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = qword_254128;
  if ( !qword_254128 )
  {
    v7 = (unsigned __int64)TView::getExtent((TView *)(TProgram::application + 8LL)) >> 32;
    v6 = v4 - 23;
    v8 = v4 - 22;
    v9 = v7 + 1;
    v5 = operator new(0x50u);
    TView::TView(v5, &v6);
    *(_BYTE *)(v5 + 48) = 5;
    *(_QWORD *)v5 = &off_239EB8;
    *(_DWORD *)(v5 + 72) = 1;
    TWindow::setState();
    qword_254128 = (TView *)v5;
    TGroup::insert((TGroup *)(TProgram::application + 8LL), (TView *)v5);
    v2 = qword_254128;
  }
  if ( a1 == *((_DWORD *)v2 + 18) )
    return v10 - __readfsqword(0x28u);
  *((_DWORD *)v2 + 18) = a1;
  return TView::drawView(v2);
}

