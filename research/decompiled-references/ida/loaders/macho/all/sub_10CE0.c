__int64 __fastcall sub_10CE0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx

  if ( a3 < a4 && a4 - a3 > 7 )
  {
    v4 = a3 + 8;
    if ( v4 < a4 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = a4;
    }
  }
  return 0;
}

