void __fastcall sub_B4E080(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 32) = a3;
  if ( v3 )
    *(_DWORD *)(a2 + 8) = v3;
  sub_B4D490(a1, a2);
}
