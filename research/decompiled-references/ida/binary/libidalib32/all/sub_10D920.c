__int64 sub_10D920()
{
  __int64 result; // rax

  result = (unsigned int)dword_251CA0;
  if ( dword_251CA0 > 0 )
    result = (unsigned int)--dword_251CA0;
  if ( byte_251C9C )
  {
    result = (unsigned int)dword_251CA0;
    if ( !dword_251CA0 )
    {
      mark_builtin_widgets();
      result = message(TProgram::deskTop, 0x200u, 0x1388u, nullptr);
      byte_251C9C = 0;
    }
  }
  return result;
}

