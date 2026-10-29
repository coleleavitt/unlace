void __fastcall CoinModelHash2::deleteHash(CoinModelHash2 *this, int a2, int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // rax
  __int64 v6; // rax

  if ( *((_DWORD *)this + 2) > a2 )
  {
    v4 = CoinModelHash2::hashValue(this, a3, a4);
    if ( v4 >= 0 )
    {
      v5 = (_DWORD *)(*(_QWORD *)this + 8LL * v4);
      if ( a2 == *v5 )
      {
LABEL_8:
        *v5 = -1;
      }
      else
      {
        while ( 1 )
        {
          v6 = (int)v5[1];
          if ( (int)v6 < 0 )
            break;
          v5 = (_DWORD *)(*(_QWORD *)this + 8 * v6);
          if ( a2 == *v5 )
            goto LABEL_8;
        }
      }
    }
  }
}

