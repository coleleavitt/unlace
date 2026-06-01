__int64 __fastcall CoinBuild::currentItem(CoinBuild *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  else
    return 0xFFFFFFFFLL;
}

