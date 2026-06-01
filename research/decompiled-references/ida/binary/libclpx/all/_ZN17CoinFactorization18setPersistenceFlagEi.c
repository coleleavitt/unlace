__int64 __fastcall CoinFactorization::setPersistenceFlag(CoinFactorization *this, int a2)
{
  CoinArrayWithLength *v3; // rdi
  int v4; // eax
  int v5; // edx

  v3 = (CoinFactorization *)((char *)this + 872);
  v4 = *((_DWORD *)v3 - 208);
  *((_DWORD *)this + 289) = a2;
  CoinArrayWithLength::setPersistence(v3, a2, v4 + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 896), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 80), a2, *((_DWORD *)this + 13) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 104), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 152), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 128), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 400), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 184), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 208), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 232), a2, *((_DWORD *)this + 13) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 256), a2, *((_DWORD *)this + 13) + 1);
  v5 = *((_DWORD *)this + 10) + 1;
  if ( v5 < *((_DWORD *)this + 125) + 2 )
    v5 = *((_DWORD *)this + 125) + 2;
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 280), a2, v5);
  CoinArrayWithLength::setPersistence(
    (CoinFactorization *)((char *)this + 304),
    a2,
    *((_DWORD *)this + 8) + *((_DWORD *)this + 11));
  CoinArrayWithLength::setPersistence(
    (CoinFactorization *)((char *)this + 328),
    a2,
    *((_DWORD *)this + 8) + *((_DWORD *)this + 11));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 352), a2, *((_DWORD *)this + 13) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 376), a2, *((_DWORD *)this + 13) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 424), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 472), a2, *((_DWORD *)this + 8));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 448), a2, *((_DWORD *)this + 11));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 504), a2, *((_DWORD *)this + 148));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 528), a2, *((_DWORD *)this + 8) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 552), a2, *((_DWORD *)this + 10) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 600), a2, *((_DWORD *)this + 148));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 624), a2, *((_DWORD *)this + 148));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 648), a2, *((_DWORD *)this + 13) + 1);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 672), a2, *((_DWORD *)this + 148));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 712), a2, *((_DWORD *)this + 177));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 736), a2, *((_DWORD *)this + 177));
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 760), a2, *((_DWORD *)this + 8) + 1);
  CoinArrayWithLength::setPersistence(
    (CoinFactorization *)((char *)this + 816),
    a2,
    *((_DWORD *)this + 16) + *((_DWORD *)this + 13) + 2);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 1056), a2, 0);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 1080), a2, 0);
  CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 1104), a2, 0);
  return CoinArrayWithLength::setPersistence((CoinFactorization *)((char *)this + 1128), a2, 0);
}

