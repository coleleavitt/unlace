__int64 sub_1A03C0()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  void (__fastcall ***v2)(_QWORD); // rdi
  TDialog *v3; // rbx
  void (*v4)(void); // rax

  v0 = (unsigned int)(xmmword_257018 - 1);
  v1 = 8 * v0;
  if ( (int)v0 >= 0 )
  {
    do
    {
      LODWORD(v0) = v0 - 1;
      v2 = *(void (__fastcall ****)(_QWORD))(qword_257010 + v1);
      v1 -= 8;
      (**v2)(v2);
    }
    while ( (_DWORD)v0 != -1 );
  }
  if ( !TProgram::application )
    return 0;
  v3 = *(TDialog **)(TProgram::application + 240LL);
  if ( !v3 )
    return 0;
  v4 = *(void (**)(void))(*(_QWORD *)TProgram::application + 112LL);
  if ( (char *)v4 != (char *)sub_B7470 )
    v4();
  if ( !(unsigned int)TDialog::valid(v3, 1u) || !TSystemError::ctrlBreakHit )
    return 0;
  sub_1A0340();
  return 1;
}

