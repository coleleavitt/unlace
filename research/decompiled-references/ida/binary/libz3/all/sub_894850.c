__int64 __fastcall sub_894850(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  _DWORD *v6; // rsi
  _DWORD *v7; // rdx
  __int64 v9; // rdi

  v9 = *(_QWORD *)(a1 + 104);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v5 )
    {
      if ( *v5 == 5 )
        JUMPOUT(0x892D60);
    }
  }
  if ( !*(_WORD *)(a3 + 4) )
  {
    v6 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v6 )
    {
      if ( *v6 == 5 )
        JUMPOUT(0x892D70);
    }
  }
  if ( *(_DWORD *)a3 >= *(_DWORD *)a2 )
    JUMPOUT(0x892D40);
  if ( a3 == a2 )
    JUMPOUT(0x892D50);
  if ( !*(_WORD *)(a3 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v7 )
    {
      if ( *v7 == 5 )
        JUMPOUT(0x892D88);
    }
  }
  return sub_15E1B70(v9);
}

