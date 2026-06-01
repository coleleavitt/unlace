char __fastcall sub_E5E5B0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  int v3; // eax
  char result; // al

  if ( *(_WORD *)(a2 + 4) )
    return 1;
  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v2 || *v2 )
    return 1;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_5;
  result = sub_15D2CB0(a1, *(_QWORD *)(a2 + 32));
  if ( result )
    return 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v2 )
    {
      if ( !*v2 )
      {
LABEL_5:
        v3 = v2[1];
        if ( v3 != 2 )
          return v3 == 3;
        return 1;
      }
    }
  }
  return result;
}

