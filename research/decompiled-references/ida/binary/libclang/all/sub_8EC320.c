__int64 __fastcall sub_8EC320(__int64 a1, __int16 a2, _QWORD *a3)
{
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a3;
    *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = a2;
  }
  return 1;
}

