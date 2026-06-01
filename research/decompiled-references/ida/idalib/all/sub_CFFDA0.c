__int64 __fastcall sub_CFFDA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  char v4; // bp

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = *(_BYTE *)sub_E21760(v3, 8);
    sub_E21790(v3, 8);
    *(_BYTE *)sub_E216C0(v3, 8) = v4;
  }
  return 1;
}
