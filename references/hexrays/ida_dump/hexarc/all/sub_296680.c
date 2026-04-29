__int64 __fastcall sub_296680(__int64 **a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // r8d
  bool v12; // al

  v8 = *(_QWORD *)(a2 + 1504);
  LOBYTE(v9) = sub_293C90(v8, a4, 0, a3);
  v10 = v9;
  if ( !(_BYTE)v9 && !a5 )
  {
    v12 = sub_293C90(v8, a4, -1, a3);
    v10 = 0;
    if ( v12 )
      LOBYTE(v10) = (int)sub_294940(a1, a2, a4, 0) > 0;
  }
  return v10;
}
