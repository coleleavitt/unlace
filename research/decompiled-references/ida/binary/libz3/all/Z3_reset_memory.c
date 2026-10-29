char Z3_reset_memory()
{
  char v0; // al
  char result; // al

  v0 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v0 )
  {
    sub_29C3C0();
    sub_186AFC0(0);
    sub_186AE80(0);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_186AFC0(0);
    return sub_186AE80(0);
  }
  return result;
}

