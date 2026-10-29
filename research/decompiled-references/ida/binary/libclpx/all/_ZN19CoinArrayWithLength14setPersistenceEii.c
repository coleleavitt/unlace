__int64 __fastcall CoinArrayWithLength::setPersistence(CoinArrayWithLength *this, int a2, int a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 2) == -1 )
    {
      if ( a3 && *(_QWORD *)this )
      {
        *((_DWORD *)this + 2) = a3;
      }
      else
      {
        result = CoinArrayWithLength::conditionalDelete(this);
        *((_DWORD *)this + 2) = 0;
        *(_QWORD *)this = 0;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 2) = -1;
  }
  return result;
}

