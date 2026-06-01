__int64 __fastcall CoinSearchTreeManager::reevaluateSearchStrategy(CoinSearchTreeManager *this)
{
  __int64 result; // rax

  result = (unsigned int)(*(int *)(*((_QWORD *)this + 1) + 32LL) >> 31);
  if ( *((_BYTE *)this + 21) )
  {
    if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 1) + 32LL) % 1000 - 251) <= 0xF9 )
      *((_BYTE *)this + 21) = 0;
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) % 1000 > 500 )
  {
    *((_BYTE *)this + 21) = 1;
  }
  return result;
}

