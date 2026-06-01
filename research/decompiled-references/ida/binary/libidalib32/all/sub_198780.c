__int64 __fastcall sub_198780(TView *a1)
{
  __int64 v2; // rdi
  TListViewer *v3; // rbx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // ebp

  v2 = *((_QWORD *)a1 + 22);
  v3 = *(TListViewer **)(v2 + 2600);
  v4 = sub_193920(v2);
  TListViewer::setRange(v3, v4);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, 0);
  v7 = (unsigned __int16)TGroup::execView(TProgram::deskTop, a1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return v7;
}

