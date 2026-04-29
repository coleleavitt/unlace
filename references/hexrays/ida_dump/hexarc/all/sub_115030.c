__int64 __fastcall sub_115030(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 == 2 )
  {
    **(_QWORD **)(a2 + 8) = *(_QWORD *)(a1 + 48);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)a2 == 4 )
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) = *(_QWORD *)(a1 + 48);
    return 0;
  }
}
