void __fastcall CoinMpsIO::releaseColumnInformation(void **this)
{
  free(*(this + 14));
  free(*(this + 15));
  free(*(this + 16));
  *(this + 14) = nullptr;
  *(this + 15) = nullptr;
  *(this + 16) = nullptr;
}

