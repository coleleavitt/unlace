// Alternative name is '_ZN12CoinMessagesC2Ei'
void __fastcall CoinMessages::CoinMessages(CoinMessages *this, int a2)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rcx
  int v5; // edx

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 7040597;
  *((_QWORD *)this + 2) = 0xFFFFFFFF00000001LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v2 = operator new[](8LL * a2);
    v3 = *(_DWORD *)this;
    v4 = 0;
    v5 = 0;
    *((_QWORD *)this + 3) = v2;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        *(_QWORD *)(v2 + v4) = 0;
        ++v5;
        v4 += 8;
        if ( *(_DWORD *)this <= v5 )
          break;
        v2 = *((_QWORD *)this + 3);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 3) = 0;
  }
}

