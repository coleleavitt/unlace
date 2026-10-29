__int64 __fastcall sub_1EAB380(__int64 a1, unsigned __int64 a2)
{
  if ( a2 <= 0x13 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * (unsigned int)(HIDWORD(a2) - 1));
}
