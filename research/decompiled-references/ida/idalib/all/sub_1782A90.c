bool __fastcall sub_1782A90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v16; // rax

  v6 = sub_F63270(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( !v6 || (*((_BYTE *)v6 + 29) & 1) == 0 )
    return 0;
  v12 = sub_B8C3D0((__int64)v6, a2, v7, v8, v9, v10);
  v13 = *v12;
  v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( *v12 < v14 )
  {
    v16 = *v12;
    while ( 1 )
    {
      v13 = v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 188 )
        break;
      v16 += 8LL;
      if ( v14 == v16 )
        return 0;
    }
  }
  else
  {
    if ( v13 == v14 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 188 )
    {
      for ( i = v14 + 8; ; i += 8LL )
      {
        v14 = i;
        if ( v13 == i )
          break;
        if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 188 )
          return v13 != v14;
      }
      return 0;
    }
  }
  return v13 != v14;
}
