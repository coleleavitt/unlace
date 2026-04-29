__int64 __fastcall sub_32B220(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 *v3; // r8
  int v4; // eax
  int v5; // ecx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx

  v2 = *(unsigned __int64 **)a1;
  v3 = *(unsigned __int64 **)a2;
  v4 = *(_QWORD *)a1 == 0;
  v5 = *(_QWORD *)a2 == 0;
  if ( v4 != v5 )
    return (unsigned int)(v4 - v5);
  if ( v2 )
  {
    v7 = *v2;
    if ( v7 < *v3 )
      return 0xFFFFFFFFLL;
    result = 1;
    if ( *v3 < v7 )
      return result;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v8 < v9 )
    return 0xFFFFFFFFLL;
  result = 1;
  if ( v9 >= v8 )
  {
    if ( v8 )
    {
      v10 = *(_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)(a1 + 8);
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v11 + v12);
        v15 = *(_QWORD *)(v10 + v12);
        if ( v15 < v14 )
          break;
        if ( v14 != v15 )
          return 0xFFFFFFFFLL;
        v16 = *(_QWORD *)(v10 + v12 + 8);
        if ( *(_QWORD *)(v11 + v12 + 8) < v16 )
          return 0xFFFFFFFFLL;
        if ( *(_QWORD *)(v11 + v12 + 8) != v16 )
          break;
        ++v13;
        v12 += 16;
        if ( v8 == v13 )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
