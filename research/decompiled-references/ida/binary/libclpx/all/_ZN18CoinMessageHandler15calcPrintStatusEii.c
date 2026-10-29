void __fastcall __spoils<> CoinMessageHandler::calcPrintStatus(CoinMessageHandler *this, int a2, int a3)
{
  bool v3; // zf
  int v4; // eax

  v3 = *((_DWORD *)this + 27) == -1000;
  *((_DWORD *)this + 392) = 0;
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 26);
    if ( a2 > 7 )
    {
      if ( v4 < 0 || (v4 & a2) == 0 )
        goto LABEL_3;
    }
    else if ( a2 > v4 )
    {
      goto LABEL_3;
    }
  }
  else if ( *((_DWORD *)this + a3 + 27) < a2 )
  {
LABEL_3:
    *((_DWORD *)this + 392) = 3;
  }
}

