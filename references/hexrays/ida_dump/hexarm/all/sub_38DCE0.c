__int64 __fastcall sub_38DCE0(__int64 a1, char a2)
{
  __int64 v2; // rax
  int v4; // esi
  int v5; // ecx
  _QWORD *v6; // rax
  unsigned int v7; // edx
  int v8; // edx

  if ( *(_DWORD *)a1 == 1 && (v2 = *(_QWORD *)(a1 + 8), *(int *)(v2 + 8) > 69) )
  {
    v4 = a2 & 2;
    v5 = a2 & 1;
    while ( 1 )
    {
      if ( v5 )
      {
        v7 = *(_DWORD *)(v2 + 12);
        if ( v7 != -1 )
          break;
      }
      v8 = *(_DWORD *)(v2 + 8);
      if ( v4 && v8 == 81 )
        return **(unsigned int **)(v2 + 24);
      if ( v8 != 71 )
        return (unsigned int)-1;
      v6 = *(_QWORD **)(v2 + 24);
      if ( !v6[2] )
        return (unsigned int)-1;
      v2 = *v6 + 16LL;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v7;
}
