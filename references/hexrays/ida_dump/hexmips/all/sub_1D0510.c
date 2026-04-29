__int64 __fastcall sub_1D0510(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_BYTE *)a2 == 5 )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) += v2;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)a2 == 8 )
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + 12LL) += v2;
    return 0;
  }
}
