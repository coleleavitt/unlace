__int64 __fastcall sub_D087D0(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a2;
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = 0;
  }
  return 1;
}
