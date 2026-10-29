__int64 __fastcall sub_7E6C80(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 0x7FFFFFFF;
  v3 = *a2;
  v4 = 0x7FFFFFFF;
  if ( (unsigned int)v3 < *(_DWORD *)(v2 - 4) )
  {
    v5 = *(unsigned int *)(v2 + 4 * v3);
    if ( (_DWORD)v5 != -1 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 )
      {
        if ( (unsigned int)v5 < *(_DWORD *)(v6 - 4) )
          return *(unsigned int *)(v6 + 16 * v5 + 8);
      }
    }
  }
  return v4;
}

