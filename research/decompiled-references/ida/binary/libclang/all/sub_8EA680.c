__int64 __fastcall sub_8EA680(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  char v4; // r13
  __int64 v5; // r12

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = *(_BYTE *)sub_A1A5A0(v3, 8);
    sub_A1A5E0(v3, 8);
    v5 = *(_QWORD *)(a1 + 568);
    LOBYTE(v3) = *(_BYTE *)sub_A1A5A0(v5, 8);
    sub_A1A5E0(v5, 8);
    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v4 + v3;
  }
  return 1;
}

