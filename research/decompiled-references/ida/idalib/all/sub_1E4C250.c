__int64 __fastcall sub_1E4C250(__int64 a1, __int64 a2)
{
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0
    || *(_BYTE *)(a1 + 24) )
  {
    return sub_BC8430(a1, a2);
  }
  else
  {
    return 1;
  }
}
