__int64 __fastcall sub_4F8420(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 1568LL);
  v2 = *(_QWORD *)(v1 + 24);
  if ( !v2 )
    return (unsigned int)(v2 + 1);
  v3 = *(_QWORD *)(v1 + 16);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 8 * v2 - 8) == v2 )
    return (unsigned int)(v2 + 1);
  while ( 1 )
  {
    v5 = *(unsigned int *)(v3 + 8 * v4);
    v6 = v4++;
    if ( v5 != v4 )
      break;
    if ( v4 == v2 )
    {
      if ( !under_debugger )
        interr(1070);
      BUG();
    }
  }
  return (unsigned int)(v6 + 1);
}

