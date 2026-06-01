void __fastcall CoinBuild::setMutableCurrent(CoinBuild *this, int a2)
{
  _QWORD *v2; // rdx
  int v3; // ecx
  int v4; // esi
  int i; // eax

  if ( a2 >= 0 && *(_DWORD *)this > a2 )
  {
    v2 = *((_QWORD **)this + 3);
    v3 = *(_DWORD *)(*((_QWORD *)this + 2) + 8LL);
    if ( a2 >= v3 )
    {
      v4 = a2 - v3;
      v2 = *((_QWORD **)this + 2);
    }
    else
    {
      v4 = a2 - 1;
    }
    if ( v4 > 0 )
    {
      for ( i = 0; i != v4; ++i )
        v2 = (_QWORD *)*v2;
    }
    *((_QWORD *)this + 2) = v2;
  }
}

