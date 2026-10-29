char __fastcall Z3_global_param_set(void *a1, int a2)
{
  char v2; // r13
  char result; // al

  sub_186AE80(0xFFFFFFFFLL);
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_294A20(a1);
    sub_17FBCD0(a1, a2);
    sub_1808490();
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_17FBCD0(a1, a2);
    return sub_1808490();
  }
  return result;
}

