__int64 __fastcall sub_199410(TView *a1)
{
  __int64 v2; // rdi
  TListViewer *v3; // rbp
  int v4; // eax

  v2 = *((_QWORD *)a1 + 22);
  v3 = *(TListViewer **)(v2 + 2600);
  v4 = sub_194540(v2);
  TListViewer::setRange(v3, v4);
  return TGroup::insert(TProgram::deskTop, a1);
}

