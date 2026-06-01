__int64 __fastcall sub_4EC160(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int i; // r15d
  __int64 v4; // r14
  unsigned int v5; // ebx
  int v7; // eax
  _DWORD *v8; // rdx

  v2 = *a2;
  if ( *a2 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 - 4); ++i )
    {
      v4 = *(_QWORD *)(v2 + 8LL * i);
      v5 = sub_1673B10(a1 + 48, v4);
      if ( !(_BYTE)v5 )
      {
        v7 = sub_1625010(a1 + 72);
        v8 = *(_DWORD **)(v4 + 24);
        if ( !v8 || v7 != *v8 || v8[1] != 1 )
          return v5;
      }
      v2 = *a2;
      if ( !*a2 )
        return 1;
    }
  }
  return 1;
}

