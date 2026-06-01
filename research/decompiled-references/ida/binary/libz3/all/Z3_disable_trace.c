char Z3_disable_trace()
{
  char result; // al

  result = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( result )
  {
    sub_29C3A0();
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

