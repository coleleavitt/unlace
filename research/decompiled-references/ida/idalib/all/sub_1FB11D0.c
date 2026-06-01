bool __fastcall sub_1FB11D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  int v11; // eax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v3 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( !v3 )
      return 0;
    v4 = sub_B8C660(a1);
  }
  else
  {
    if ( !v3 )
      return 0;
    v4 = *(_QWORD *)(a1 - 8);
  }
  if ( !v4 )
    return 0;
  v5 = sub_FEEE40(v4);
  v10 = sub_B8C330(a1);
  v11 = *(_DWORD *)(v5 + 36);
  if ( v11 != 2 && (unsigned int)(v11 - 4) > 1 )
  {
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      return 0;
    v13 = sub_B8C3D0(a1, a2, v6, v7, v8, v9);
    v14 = *v13;
    v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( *v13 >= v15 )
    {
      if ( v14 == v15 )
        return 0;
      while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 195 )
      {
        v15 += 8LL;
        if ( v14 == v15 )
          return 0;
      }
    }
    else
    {
      v16 = *v13;
      while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 195 )
      {
        v16 += 8LL;
        if ( v15 == v16 )
          return 0;
      }
      if ( v15 == v16 )
        return 0;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 2320) + 21LL) & 0x40) == 0 )
      return 0;
  }
  return (int)sub_A7C030(v10, (_BYTE *)a1) > 2;
}
