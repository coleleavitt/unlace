__int64 sub_153E30()
{
  TView *v0; // rdi

  v0 = (TView *)TProgram::application;
  if ( TProgram::application )
    v0 = (TView *)(TProgram::application + 8LL);
  return message(v0, 0x200u, 0x32u, nullptr);
}

