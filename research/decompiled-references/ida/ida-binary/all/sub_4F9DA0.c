__int64 __fastcall sub_4F9DA0(__int64 a1, int a2, char a3)
{
  __int64 v3; // r8
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 > 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 8 * v6);
      if ( !a3 )
      {
        if ( *(_BYTE *)(v7 + 116) )
          break;
      }
      if ( *(_DWORD *)(v7 + 24) == a2 )
        return v7;
LABEL_4:
      v6 = ++v5;
      if ( v5 >= v3 )
        return 0;
    }
    while ( v3 > ++v5 )
    {
      v7 = *(_QWORD *)(v4 + 8LL * v5);
      if ( !*(_BYTE *)(v7 + 116) )
      {
        if ( *(_DWORD *)(v7 + 24) != a2 )
          goto LABEL_4;
        return v7;
      }
    }
  }
  return 0;
}
