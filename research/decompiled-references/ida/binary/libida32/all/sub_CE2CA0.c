__int64 __fastcall sub_CE2CA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  char v4; // bp

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = *(_BYTE *)sub_DFDA20(v3, 8);
    sub_DFDA50(v3, 8);
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v4 ^ 1;
  }
  return 1;
}

