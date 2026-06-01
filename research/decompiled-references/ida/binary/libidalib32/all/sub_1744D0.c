__int64 sub_1744D0()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = *((_QWORD *)TProgram::deskTop + 9);
  result = 0;
  if ( v0 )
  {
    result = message(*((TView **)TProgram::deskTop + 9), 0x100u, 0x13ECu, nullptr);
    if ( !result )
      return v0;
  }
  return result;
}

