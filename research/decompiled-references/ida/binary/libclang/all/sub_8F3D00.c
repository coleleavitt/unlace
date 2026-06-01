__int64 __fastcall sub_8F3D00(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    *(_QWORD *)(a1 + 800) = *a2;
    *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = 0;
  }
  return 1;
}

