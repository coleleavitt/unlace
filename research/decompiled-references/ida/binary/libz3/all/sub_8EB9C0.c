__int64 __fastcall sub_8EB9C0(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rbx
  __int64 i; // r13
  unsigned int v6; // edx
  unsigned int v7; // r12d
  __int64 v8; // rdx
  bool v9; // cf

  v1 = *(unsigned __int8 *)(a1 + 10372);
  if ( !(_BYTE)v1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8560);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 - 4);
  if ( !v3 )
    return 0;
  v4 = (unsigned int)(v3 - 1);
  for ( i = 8 * v4; ; i -= 8 )
  {
    v6 = *(_DWORD *)(a1 + 184);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL) <= v6 )
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
    v7 = v6;
    if ( v6
      && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
            *(_QWORD *)(a1 + 7488),
            *(_QWORD *)(*(_QWORD *)(a1 + 8840) + i)) )
    {
      v9 = (_DWORD)v4 == 0;
      LODWORD(v4) = v4 - 1;
      if ( v9 )
        return 0;
      continue;
    }
    v8 = *(_QWORD *)(a1 + 8848);
    if ( !*(_BYTE *)(v8 + (unsigned int)(2 * v4)) )
      return v1;
    v9 = (_DWORD)v4 == 0;
    LODWORD(v4) = v4 - 1;
    if ( v9 )
      return 0;
    if ( !v7 )
      break;
  }
  while ( *(_BYTE *)(v8 + (unsigned int)(2 * v4)) )
  {
    v9 = (_DWORD)v4 == 0;
    LODWORD(v4) = v4 - 1;
    if ( v9 )
      return 0;
  }
  return v1;
}

