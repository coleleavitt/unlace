void __fastcall CoinMessages::setDetailMessage(CoinMessages *this, char a2, int a3)
{
  _DWORD **v3; // rax
  _DWORD *v4; // rcx
  _DWORD **v5; // rax
  _DWORD **v6; // rdi

  if ( *(int *)this > 1 )
  {
    v3 = *((_DWORD ***)this + 3);
    v4 = *v3;
    if ( a3 == **v3 )
    {
LABEL_7:
      *((_BYTE *)v4 + 4) = a2;
    }
    else
    {
      v5 = v3 + 1;
      v6 = &v5[*(_DWORD *)this - 2];
      while ( v6 != v5 )
      {
        v4 = *v5++;
        if ( a3 == *v4 )
          goto LABEL_7;
      }
    }
  }
}

