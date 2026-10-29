unsigned __int64 __fastcall sub_164CD0(TView *this, __int64 a2, TView ***a3)
{
  int v4; // eax
  int v5; // edx
  TView *v6; // rbx
  __int64 v7; // rax
  _DWORD v9[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 192, TWindow::initFrame);
  sub_1546B0(this, &off_2355D0, a2, a3);
  *((_BYTE *)this + 188) = 0;
  *(_QWORD *)this = &off_23B3B0;
  v4 = *((_DWORD *)this + 4);
  v9[1] = 0;
  v5 = v4 - 41;
  v9[3] = 1;
  if ( v4 - 41 < 0 )
    v5 = 0;
  v9[2] = v4 - 6;
  v9[0] = v5;
  v6 = (TView *)operator new(0x90u);
  TView::TView(v6, v9);
  *((_BYTE *)v6 + 48) = 5;
  *((_BYTE *)v6 + 72) = 0;
  *((_BYTE *)v6 + 108) = 0;
  *(_QWORD *)v6 = &off_2370C0;
  TWindow::setState();
  TGroup::insert(this, v6);
  v7 = sub_152250((__int64)this);
  if ( v7 )
    *(_QWORD *)(v7 + 1208) = v6;
  return v10 - __readfsqword(0x28u);
}

