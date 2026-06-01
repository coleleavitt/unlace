char sub_13E510()
{
  char result; // al

  result = byte_252E7C;
  if ( byte_252E7C )
    return 0;
  if ( TProgram::application )
  {
    if ( !errorexit )
      return qword_252E80 != nullptr;
  }
  return result;
}

