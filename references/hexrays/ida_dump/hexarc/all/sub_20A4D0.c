__int64 __fastcall sub_20A4D0(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 65
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104LL * *(int *)(a2 + 32) + 24) & 0x20020) == 0 )
  {
    return sub_209E60(0, a1, a2);
  }
  else
  {
    return 0;
  }
}
