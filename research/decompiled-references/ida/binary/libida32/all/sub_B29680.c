void __fastcall sub_B29680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rax

  *(_QWORD *)(a2 + 40) = a3;
  *(_QWORD *)(a2 + 48) = a4;
  *(_DWORD *)(a2 + 8) = a5;
  if ( a6 )
  {
    *(_BYTE *)(a2 + 13) |= 4u;
    return;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_BYTE **)(a2 + 16);
  if ( v6 == 2 )
  {
    if ( *v7 == 98 )
    {
      if ( v7[1] == 114 )
        return;
    }
    else if ( *v7 == 104 && v7[1] == 114 )
    {
      return;
    }
  }
  else if ( v6 == 3 )
  {
    if ( *v7 == 99 )
    {
      if ( *(_WORD *)(v7 + 1) == 27759 )
        return;
    }
    else if ( *v7 == 105 && *(_WORD *)(v7 + 1) == 26477 )
    {
      return;
    }
  }
  v8 = *(unsigned int *)(a1 + 96);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 100) )
  {
    sub_22134E0(a1 + 88, a1 + 104, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 96);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8) = a2;
  ++*(_DWORD *)(a1 + 96);
}

