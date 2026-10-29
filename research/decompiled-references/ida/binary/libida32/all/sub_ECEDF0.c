unsigned __int64 __fastcall sub_ECEDF0(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    return (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCLL) + 40;
  else
    return sub_B4FAB0(**(_QWORD **)a1);
}

