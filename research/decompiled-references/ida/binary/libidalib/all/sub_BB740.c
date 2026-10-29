__int64 sub_BB740()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax

  if ( !(unsigned __int8)getinf_flag() && byte_252118 )
    TProgram::switch_screen(nullptr, 16);
  if ( qword_252120 )
    (*(void (__fastcall **)(TView *, __int64))(*(_QWORD *)qword_252120 + 184LL))(qword_252120, 16);
  if ( qword_252108 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252108 + 8LL))(qword_252108, 16);
  qword_252108 = 0;
  v0 = (__int64 *)&unk_2543A0;
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
  while ( v0 != &qword_254470 );
  if ( unk_2543A0 )
    TView::select(unk_2543A0);
  byte_252118 = 1;
  return sub_19C290(10, 0, 0);
}

