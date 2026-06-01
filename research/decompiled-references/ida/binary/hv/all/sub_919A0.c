__int64 __fastcall sub_919A0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = a3;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  while ( v3 )
  {
    v4 = sub_A0E50(a1 + 24, 0);
    if ( v4 < 0 )
    {
      sub_91710(a1, -v4);
      return 0;
    }
    if ( !*(_DWORD *)(a1 + 56) && !(unsigned __int8)sub_91660(a1) )
      return 0;
    v3 = *(_DWORD *)(a1 + 32);
  }
  return 1;
}

