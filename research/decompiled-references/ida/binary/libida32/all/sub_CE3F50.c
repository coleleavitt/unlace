__int64 __fastcall sub_CE3F50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    sub_DFDA20(v3, 8);
    sub_DFDA50(v3, 8);
  }
  return 1;
}

