__int64 __fastcall sub_17A070(TListViewer *a1, int a2)
{
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD, TListViewer *); // rax

  TListViewer::selectItem(a1, a2);
  v3 = *((_QWORD *)a1 + 14);
  v4 = *(void (__fastcall ****)(_QWORD, TListViewer *))(v3 + 64);
  if ( v4 )
  {
    (**v4)(*(_QWORD *)(v3 + 64), a1);
    v3 = *((_QWORD *)a1 + 14);
  }
  return sub_194780(v3, 0);
}

