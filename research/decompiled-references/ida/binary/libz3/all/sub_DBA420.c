__int64 __fastcall sub_DBA420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v12; // rax

  if ( a2 != a3 )
  {
    if ( *(_DWORD *)(a3 + 32) != *(_DWORD *)(a2 + 32) )
      return 0;
    v4 = *(_QWORD *)(a2 + 24);
    if ( !v4 )
      return 0;
    if ( *(_DWORD *)v4 == -1 )
      return 0;
    v5 = *(_QWORD *)(a3 + 24);
    if ( !v5 || *(_DWORD *)v5 != *(_DWORD *)v4 || *(_DWORD *)(v5 + 4) != *(_DWORD *)(v4 + 4) )
      return 0;
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v4 + 8);
    if ( v6 )
    {
      v8 = *(_DWORD *)(v6 - 4);
      if ( !v7 )
      {
        v9 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      if ( !v7 )
        return 1;
      v8 = 0;
    }
    v9 = *(_DWORD *)(v7 - 4);
LABEL_11:
    v10 = 0;
    if ( v9 != v8 )
      return 0;
    while ( v6 && v10 < *(_DWORD *)(v6 - 4) )
    {
      if ( !(unsigned __int8)sub_15D1150(16LL * v10 + v6, 16LL * v10 + *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL)) )
        return 0;
      v12 = *(_QWORD *)(a3 + 24);
      if ( !v12 )
        break;
      v6 = *(_QWORD *)(v12 + 8);
      ++v10;
    }
    return 1;
  }
  return 1;
}

