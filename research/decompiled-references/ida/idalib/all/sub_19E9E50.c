__int64 __fastcall sub_19E9E50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a2 + 8LL * (((*(_BYTE *)(a2 + 19) & 0x40) != 0) + ((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFFu)) + 32);
  if ( a1[6] == v2 || a1[7] == v2 )
    return 1;
  else
    return sub_BC97E0(a1, v2);
}
