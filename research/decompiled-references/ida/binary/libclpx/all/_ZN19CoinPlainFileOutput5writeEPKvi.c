size_t __fastcall CoinPlainFileOutput::write(FILE **this, const void *a2, int a3)
{
  return fwrite(a2, 1u, a3, *(this + 3));
}

