__int64 __fastcall sub_195980(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v4; // r10d
  int v5; // edx
  __int64 v6; // rax
  int *v7; // r8
  unsigned __int64 v8; // rdi
  int v9; // edi
  int v11; // edx

  if ( (*(_BYTE *)(a1 + 52) & 2) == 0 )
    return 0;
  v2 = *(_DWORD *)(a1 + 48);
  v4 = 0;
  if ( v2 != -1 )
  {
    if ( (unsigned __int64)v2 >= a2[1] )
      goto LABEL_14;
    v11 = *(_DWORD *)(*a2 + 4LL * v2);
    if ( v2 != v11 )
    {
      *(_DWORD *)(a1 + 48) = v11;
      v4 = 1;
    }
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = (int *)(*(_QWORD *)(a1 + 24) + 4 * v6);
      v8 = *v7;
      if ( v8 >= a2[1] )
        break;
      v9 = *(_DWORD *)(*a2 + 4 * v8);
      if ( *v7 != v9 )
      {
        *v7 = v9;
        v4 = 1;
      }
      v6 = ++v5;
      if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 32) )
        return v4;
    }
LABEL_14:
    if ( !under_debugger )
      sub_3835A0(51629);
    BUG();
  }
  return v4;
}
