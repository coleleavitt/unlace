__int64 __fastcall sub_8E8110(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx

  if ( a2 == *(unsigned int **)(a1[13] + 864LL) )
    return 0xFFFFFFFFLL;
  v2 = a1[1104];
  if ( !*((_WORD *)a2 + 2)
    && (v3 = *(_QWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
    && (result = *(unsigned int *)v3, *v3 == 0x800000000LL)
    && a2[6] == 1 )
  {
    if ( v2 )
    {
      v6 = **((unsigned int **)a2 + 4);
      if ( (unsigned int)v6 < *(_DWORD *)(v2 - 4) )
      {
        v7 = *(_DWORD *)(v2 + 4 * v6);
        if ( v7 != 0x7FFFFFFF )
          return (unsigned int)-*(char *)(a1[1106] + (unsigned int)(2 * v7));
      }
    }
  }
  else
  {
    if ( !v2 )
      return 0;
    v5 = *a2;
    if ( (unsigned int)v5 >= *(_DWORD *)(v2 - 4) || *(_DWORD *)(v2 + 4 * v5) == 0x7FFFFFFF )
      return 0;
    else
      return sub_8E80A0(a1, a2);
  }
  return result;
}

