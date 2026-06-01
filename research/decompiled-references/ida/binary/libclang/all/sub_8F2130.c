__int64 __fastcall sub_8F2130(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  char v4; // bp

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = *(_BYTE *)sub_A1A5A0(v3, 8);
    sub_A1A5E0(v3, 8);
    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v4 ^ 1;
  }
  return 1;
}

