__int64 __fastcall sub_49E060(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  if ( (int)a2 < 0 || (a2 = (int)a2, (unsigned __int64)(int)a2 >= a1[1]) )
  {
    sub_49AF90(a5, (__int64)a1, a2, a3, a4);
  }
  else if ( *(_BYTE *)(*a1 + (int)a2) )
  {
    return *(unsigned int *)(a1[3] + 4LL * (int)a2);
  }
  if ( under_debugger )
    BUG();
  interr(41065, a2, a3, a4, a5);
  return sub_49E0B0();
}
