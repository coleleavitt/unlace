__int64 __fastcall sub_A6A810(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // ebx
  int v4; // r12d
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 *v9; // rbp
  __int64 *i; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  char v13; // cl
  unsigned int v14; // eax

  v3 = 0;
  *(_BYTE *)(a1 + 1536) = 0;
  v4 = *(_DWORD *)(a1 + 1128);
  do
  {
    if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
      return 2;
    v5 = *(_DWORD *)(a1 + 1128);
    if ( !v5 )
    {
      v6 = sub_A5E250(a1, *(double *)a3.m128_u64);
      goto LABEL_6;
    }
    if ( v5 != 1 )
    {
      v6 = sub_A6A410(a1, a2, a3);
LABEL_6:
      a2 = 3 * ((*(_DWORD *)(a1 + 1128) + 1) / 3u);
      v7 = (*(_DWORD *)(a1 + 1128) + 1) % 3u;
      *(_DWORD *)(a1 + 1128) = v7;
      v8 = v7;
      if ( v6 == 1 )
        return 1;
      if ( v6 == 2 )
        v3 = 2;
      continue;
    }
    v13 = sub_A572A0(a1);
    a2 = 3 * ((*(_DWORD *)(a1 + 1128) + 1) / 3u);
    v14 = (*(_DWORD *)(a1 + 1128) + 1) % 3u;
    *(_DWORD *)(a1 + 1128) = v14;
    v8 = v14;
    if ( v13 )
      return 1;
  }
  while ( v4 != v8 );
  if ( v3 )
    return 2;
  v9 = *(__int64 **)(a1 + 624);
  if ( v9 )
  {
    for ( i = &v9[*((unsigned int *)v9 - 1)]; i != v9; ++v9 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *v9;
      if ( !(unsigned int)sub_8E7030(v11)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 7488) + 56LL))(
             *(_QWORD *)(v11 + 7488),
             v12) )
      {
        v3 = 2;
      }
    }
  }
  return v3;
}

