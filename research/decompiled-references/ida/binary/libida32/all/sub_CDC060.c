__int64 __fastcall sub_CDC060(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  char v4; // bp

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = *(_BYTE *)sub_DFDA20(v3, 8);
    sub_DFDA50(v3, 8);
    *(_BYTE *)sub_DFD980(v3, 8) = v4;
  }
  return 1;
}

