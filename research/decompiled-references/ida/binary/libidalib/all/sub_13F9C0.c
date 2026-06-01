__int64 sub_13F9C0()
{
  int v0; // edx
  __int64 result; // rax
  TView *v2; // rdi

  v0 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(TProgram::application + 8LL) + 72LL))(
         TProgram::application + 8LL,
         1);
  result = 0;
  if ( v0 )
  {
    v2 = (TView *)TProgram::application;
    if ( TProgram::application )
      v2 = (TView *)(TProgram::application + 8LL);
    message(v2, 0x100u, 1u, nullptr);
    unk_254269 = 1;
    return 1;
  }
  return result;
}

