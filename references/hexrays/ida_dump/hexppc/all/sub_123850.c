__int64 __fastcall sub_123850(unsigned __int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a1 + 4);
  if ( a3 && v3 > a3 )
    return sub_1234D0(a1, a2, v3 - a3);
  else
    return 0;
}
