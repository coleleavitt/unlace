__int64 __fastcall sub_D088C0(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a2;
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = 0;
  }
  return 1;
}
