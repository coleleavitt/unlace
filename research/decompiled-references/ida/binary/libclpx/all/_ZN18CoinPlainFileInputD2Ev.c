// Alternative name is '_ZN18CoinPlainFileInputD1Ev'
void __fastcall CoinPlainFileInput::~CoinPlainFileInput(CoinPlainFileInput *this)
{
  FILE *v2; // rdi

  *(_QWORD *)this = off_4D1650;
  v2 = *((FILE **)this + 3);
  if ( v2 )
    fclose(v2);
  CoinFileInput::~CoinFileInput(this);
}

