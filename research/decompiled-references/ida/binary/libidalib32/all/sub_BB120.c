__int64 sub_BB120()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax

  if ( !(unsigned __int8)getinf_flag() && byte_251038 )
    TProgram::switch_screen(nullptr, 16);
  if ( qword_251040 )
    (*(void (__fastcall **)(TView *, __int64))(*(_QWORD *)qword_251040 + 184LL))(qword_251040, 16);
  if ( qword_251028 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_251028 + 8LL))(qword_251028, 16);
  qword_251028 = 0;
  v0 = (__int64 *)&unk_2531E0;
  do
  {
    v1 = *v0;
    if ( *v0 && *(_BYTE *)(v1 + 188) )
    {
      v2 = *(_QWORD *)v1;
      *(_BYTE *)(v1 + 188) = 0;
      (*(void (__fastcall **)(__int64, __int64))(v2 + 56))(v1, v1 + 172);
    }
    ++v0;
  }
  while ( v0 != &qword_2532B0 );
  if ( unk_2531E0 )
    TView::select(unk_2531E0);
  byte_251038 = 1;
  return sub_19B690(10, 0, 0);
}

