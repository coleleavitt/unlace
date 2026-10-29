__int64 __fastcall sub_B7B50(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 )
    return 0;
  if ( *(_QWORD *)(a3 + 24) && **(_BYTE **)(a3 + 16) )
  {
    qbasename();
    qstrncpy();
    return a1;
  }
  else
  {
    ++dword_2521EC;
    qsnprintf();
    return a1;
  }
}

