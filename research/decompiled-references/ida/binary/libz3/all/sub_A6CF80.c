__int64 __fastcall sub_A6CF80(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // rbx
  unsigned int *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 result; // rax

  v2 = *a2;
  if ( !*a2 )
    return 1;
  v3 = &v2[*(v2 - 1)];
  if ( v3 == v2 )
    return 1;
  while ( 1 )
  {
    v4 = *v2;
    if ( (_DWORD)v4 != -1 )
    {
      v5 = *(_QWORD *)(a1 + 656) + 4 * v4;
      if ( ((*(_BYTE *)(v5 + 3) >> 4) & 3) == 1 )
      {
        v6 = *(_DWORD *)v5;
        ++*(_DWORD *)(a1 + 376);
        result = sub_A6C7F0(a1, (__int64 *)(*(_QWORD *)(a1 + 632) + 24LL * (v6 & 0xFFFFFFF)));
        if ( !(_BYTE)result )
          break;
      }
    }
    if ( v3 == ++v2 )
      return 1;
  }
  return result;
}

