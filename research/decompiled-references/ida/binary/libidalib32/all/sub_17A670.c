__int64 __fastcall sub_17A670(TListViewer *this, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // rax
  __int64 result; // rax

  TListViewer::TListViewer(this, a2, a3, *(_QWORD *)(a4 + 2608), *(_QWORD *)(a4 + 2616));
  *((_QWORD *)this + 14) = a4;
  *(_QWORD *)this = &off_23B7A8;
  TWindow::setState();
  v6 = *((_QWORD *)this + 14);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 2520) + 12LL) & 4) != 0 )
    *((_DWORD *)this + 27) = 0;
  *((_BYTE *)this + 48) = 12;
  *((_DWORD *)this + 10) = 1;
  v7 = sub_193920(v6, 2);
  TListViewer::setRange(this, v7);
  v8 = *((_QWORD *)this + 14);
  *((_DWORD *)this + 24) = -1;
  result = *(_QWORD *)(v8 + 2632);
  if ( result )
  {
    *(_DWORD *)(result + 72) = -1;
    *(_DWORD *)(result + 76) = v7;
  }
  return result;
}

