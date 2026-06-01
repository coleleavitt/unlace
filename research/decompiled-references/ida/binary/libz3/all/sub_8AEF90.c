char __fastcall sub_8AEF90(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 1592) + 232LL * a2;
  if ( *(char *)(v2 + 3) < 0 )
    return sub_8AEDF0(a1 + 736, v2 + 136, v2 + 8);
  else
    return 0;
}

