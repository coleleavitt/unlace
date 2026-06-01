__int64 __fastcall CoinMessageHandler::operator<<(__int64 a1, int a2)
{
  const char *v2; // rbp

  if ( a2 )
  {
    if ( a2 == 1 && *(_DWORD *)(a1 + 1568) != 3 )
    {
      v2 = *(const char **)(a1 + 1552);
      *(_WORD *)&v2[strlen(v2)] = 10;
      ++*(_QWORD *)(a1 + 1552);
    }
    return a1;
  }
  else
  {
    CoinMessageHandler::finish((CoinMessageHandler *)a1);
    return a1;
  }
}

