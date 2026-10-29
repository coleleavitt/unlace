__int64 sub_10DC00()
{
  __int64 result; // rax

  result = (unsigned int)dword_252E40;
  if ( dword_252E40 > 0 )
    result = (unsigned int)--dword_252E40;
  if ( byte_252E3C )
  {
    result = (unsigned int)dword_252E40;
    if ( !dword_252E40 )
    {
      mark_builtin_widgets();
      result = message(TProgram::deskTop, 0x200u, 0x1388u, nullptr);
      byte_252E3C = 0;
    }
  }
  return result;
}

