char __fastcall sub_6C0D30(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  int v4; // edx
  _DWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  _BYTE v10[24]; // [rsp+2h] [rbp-18h] BYREF

  result = *(_BYTE *)(a1 + 872);
  if ( !result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v3 )
      return 1;
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 <= 8 )
      return v4 <= 1 && v4 != 0;
    if ( v4 != 9 )
      return 1;
    sub_16669D0(v10, *(_QWORD *)(a1 + 8));
    if ( *(_WORD *)(a2 + 4) )
      return 1;
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v5 )
      return 1;
    result = 0;
    if ( *v5 != 5 || v5[1] != 9 || *(_DWORD *)(a2 + 24) != 2 )
      return 1;
    v6 = *(_QWORD *)(a2 + 32);
    v7 = *(_QWORD *)(a2 + 40);
    if ( *(_WORD *)(v6 + 4) || (v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) == nullptr || *v8 != 5 || v8[1] )
    {
      result = 1;
      if ( !*(_WORD *)(v7 + 4) )
      {
        v9 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
        if ( v9 )
        {
          if ( *v9 == 5 )
            return v9[1] != 0;
        }
      }
    }
  }
  return result;
}

