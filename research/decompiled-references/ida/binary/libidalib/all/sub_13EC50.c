char sub_13EC50()
{
  char result; // al

  result = byte_25401C;
  if ( byte_25401C )
    return 0;
  if ( TProgram::application )
  {
    if ( !errorexit )
      return qword_254020 != nullptr;
  }
  return result;
}

