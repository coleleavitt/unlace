char *__fastcall CoinPlainFileInput::gets(FILE **this, char *a2, int a3)
{
  return fgets(a2, a3, *(this + 3));
}

