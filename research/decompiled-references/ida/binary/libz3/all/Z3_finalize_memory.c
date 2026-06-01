char Z3_finalize_memory()
{
  char v0; // al
  char result; // al

  v0 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v0 )
    return sub_186AFC0(1);
  sub_29C3E0();
  sub_186AFC0(1);
  result = byte_1C7EBA0;
  byte_1C7EBA0 = 1;
  return result;
}

