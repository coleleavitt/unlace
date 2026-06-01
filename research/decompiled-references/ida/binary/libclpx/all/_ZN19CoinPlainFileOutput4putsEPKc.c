_BOOL8 __fastcall CoinPlainFileOutput::puts(FILE **this, const char *a2)
{
  return fputs(a2, *(this + 3)) >= 0;
}

