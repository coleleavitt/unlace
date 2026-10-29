__int64 __fastcall sub_8EC7B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  _QWORD v5[4]; // [rsp-18h] [rbp-58h] BYREF
  int v6; // [rsp+8h] [rbp-38h]
  int v7; // [rsp+18h] [rbp-28h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a2;
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v5, v4);
  sub_A1A5E0(v3, 56);
  if ( !v7 && v5[3] )
  {
    if ( v6 )
    {
      sub_A1DB00(v5);
      sub_A1C490(v5);
    }
  }
  sub_A1C0C0(v5);
  return 1;
}

