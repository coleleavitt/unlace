void __fastcall __spoils<> sub_B29640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  *(_QWORD *)(a2 + 16) = a3;
  *(_QWORD *)(a2 + 24) = a4;
  if ( a4 )
  {
    v4 = *(_DWORD *)(a3 + 24 * a4 - 20);
    if ( v4 )
      *(_DWORD *)(a2 + 8) = v4;
  }
}

