__int64 __fastcall sub_8F2D00(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // r13
  __int64 v5; // rbp
  unsigned __int8 v6; // r12
  __int64 v7; // rdi
  bool v8; // bl

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a2;
  v4 = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(_BYTE *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = 1;
  if ( v6 >= v4 )
    v8 = v4 < v6;
  *(_BYTE *)sub_A1A4E0(v7, 8) = v8;
  return 1;
}

