const char *Z3_get_full_version()
{
  char v0; // al

  v0 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v0 )
  {
    sub_29C360();
    byte_1C7EBA0 = 1;
  }
  return "Z3 4.15.3.0";
}

