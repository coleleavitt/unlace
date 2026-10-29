__int64 __fastcall sub_B74F0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 )
    return 0;
  if ( *(_QWORD *)(a3 + 16) && **(_BYTE **)(a3 + 8) )
  {
    qbasename();
    qstrncpy();
    return a1;
  }
  else
  {
    ++dword_25110C;
    qsnprintf();
    return a1;
  }
}

