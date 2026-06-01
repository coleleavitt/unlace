// Alternative name is '_ZN19CoinPlainFileOutputD2Ev'
void __fastcall CoinPlainFileOutput::~CoinPlainFileOutput(CoinPlainFileOutput *this)
{
  struct _IO_FILE *v2; // rdi

  *(_QWORD *)this = off_4D16B0;
  v2 = *((struct _IO_FILE **)this + 3);
  if ( v2 && v2 != stdout )
    fclose(v2);
  CoinFileOutput::~CoinFileOutput(this);
}

