void __fastcall CoinMpsIO::releaseIntegerInformation(void **this)
{
  free(*(this + 18));
  *(this + 18) = nullptr;
}

