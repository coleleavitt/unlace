__int64 __fastcall sub_D00850(__int64 a1, char a2, _QWORD *a3)
{
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = a2;
  }
  return 1;
}
