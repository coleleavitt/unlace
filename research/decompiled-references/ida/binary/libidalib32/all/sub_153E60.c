__int64 sub_153E60()
{
  TView *v0; // rdi
  TView *v1; // rdi

  v0 = (TView *)TProgram::application;
  if ( TProgram::application )
    v0 = (TView *)(TProgram::application + 8LL);
  message(v0, 0x200u, 0x31u, nullptr);
  v1 = (TView *)TProgram::application;
  if ( TProgram::application )
    v1 = (TView *)(TProgram::application + 8LL);
  return message(v1, 0x200u, 0x32u, nullptr);
}

