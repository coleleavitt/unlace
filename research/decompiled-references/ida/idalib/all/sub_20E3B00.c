__int64 __fastcall sub_20E3B00(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // edx

  if ( a1 == 1 )
  {
    LOBYTE(a3) = (_DWORD)a2 == 2;
    return (unsigned int)a3;
  }
  else
  {
    v6 = __popcountdi2(a2 & 0xE, a2, a3, a4, a5, a6);
    v7 = 0;
    if ( v6 <= 1 )
      LOBYTE(v7) = (a2 & 0xFFFFFFF1) == 0;
    return v7;
  }
}
