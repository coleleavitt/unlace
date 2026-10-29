_BOOL8 __fastcall CoinLpIO::first_is_number(CoinLpIO *this, const char *a2)
{
  char reject[19]; // [rsp+5h] [rbp-13h] BYREF

  strcpy(reject, "1234567890");
  return strcspn(a2, reject) == 0;
}

