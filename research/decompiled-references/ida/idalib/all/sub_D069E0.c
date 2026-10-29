__int64 __fastcall sub_D069E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  char v4; // bp

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = *(_BYTE *)sub_E21760(v3, 8);
    sub_E21790(v3, 8);
    *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v4 ^ 1;
  }
  return 1;
}
