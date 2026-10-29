size_t __fastcall CoinPlainFileInput::read(FILE **this, void *a2, int a3)
{
  return fread(a2, 1u, a3, *(this + 3));
}

