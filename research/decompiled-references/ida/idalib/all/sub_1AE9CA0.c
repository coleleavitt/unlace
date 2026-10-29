bool __fastcall sub_1AE9CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rcx

  if ( !a1 || (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 1;
  v7 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v8 = (__int64 *)*v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 < v9 )
  {
    v12 = *v7;
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 295 )
    {
      v12 += 8LL;
      if ( v9 == v12 )
        return 1;
    }
    if ( v9 == v12 )
      return 1;
  }
  else
  {
    if ( v8 == (__int64 *)v9 )
      return 1;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 295 )
    {
      v10 = (__int64 *)(v9 + 8);
      while ( v8 != v10 )
      {
        v11 = *v10++;
        if ( *(_WORD *)(v11 + 36) == 295 )
          goto LABEL_16;
      }
      return 1;
    }
  }
LABEL_16:
  v13 = sub_B81B70(a1);
  if ( !v13 )
    goto LABEL_21;
  if ( v13 <= 3u )
    return 0;
  if ( v13 > 6u )
  {
LABEL_21:
    *(_QWORD *)&dword_0 = v14;
    BUG();
  }
  return (sub_B81B00(a1) & 0x18) != 0;
}
