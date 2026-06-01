__int64 __fastcall sub_DF70C0(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  char v3; // al
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  int v7; // ecx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v2 = *a1;
  if ( !v2 )
    return v2;
  v3 = v2;
  v2 &= 0xFFFFFFFFFFFFFFF8LL;
  if ( (v3 & 7) == 0 )
    return v2;
  v4 = *(_QWORD **)v2;
  v5 = 8LL * *(unsigned int *)(v2 + 8);
  v6 = (_QWORD *)(*(_QWORD *)v2 + v5);
  if ( *(_DWORD *)(v2 + 12) > 1u )
  {
    if ( v5 )
    {
      do
      {
        if ( *v4 > 1u )
          break;
        ++v4;
      }
      while ( v4 != v6 );
    }
    else
    {
      v4 = *(_QWORD **)v2;
    }
    v7 = 0;
    if ( a2 )
    {
      do
      {
        do
          ++v4;
        while ( v4 != v6 && *v4 <= 1u );
        ++v7;
      }
      while ( a2 != v7 );
    }
    return *v4;
  }
  v9 = *(_QWORD **)v2;
  if ( v4 == v6 )
    return *v4;
  while ( 1 )
  {
    v2 = *v9;
    v10 = v9;
    if ( *v9 > 1u )
      break;
    if ( v6 == ++v9 )
      return v10[1];
  }
  return v2;
}

