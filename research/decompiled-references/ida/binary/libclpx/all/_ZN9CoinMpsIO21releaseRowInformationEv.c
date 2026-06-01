void __fastcall CoinMpsIO::releaseRowInformation(void **this)
{
  free(*(this + 12));
  free(*(this + 13));
  *(this + 12) = nullptr;
  *(this + 13) = nullptr;
}

