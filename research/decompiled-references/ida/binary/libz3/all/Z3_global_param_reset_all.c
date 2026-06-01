char Z3_global_param_reset_all()
{
  char v0; // al
  char result; // al

  sub_186AE80(0xFFFFFFFFLL);
  v0 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v0 )
  {
    sub_294A50();
    sub_17F9320();
    sub_1808490();
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_17F9320();
    return sub_1808490();
  }
  return result;
}

