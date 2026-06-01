void __fastcall CoinMessages::setDetailMessages(CoinMessages *this, char a2, int a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r10

  v4 = *(_DWORD *)this;
  if ( *(int *)this > 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 3) + v5);
        if ( a3 > *(_DWORD *)v7 || a4 <= *(_DWORD *)v7 )
          break;
        *(_BYTE *)(v7 + 4) = a2;
        v4 = *(_DWORD *)this;
        ++v6;
        v5 += 8;
        if ( *(_DWORD *)this - 1 <= v6 )
          return;
      }
      ++v6;
      v5 += 8;
    }
    while ( v4 - 1 > v6 );
  }
}

