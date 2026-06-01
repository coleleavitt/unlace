bool __fastcall sub_F3D9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 i; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 48 )
    return 0;
  v7 = sub_F3D150(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v7 + 29) & 1) == 0 )
    return 0;
  v13 = sub_B68690((__int64)v7, a2, v8, v9, v10, v11);
  v14 = *v13;
  v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
  if ( *v13 < v15 )
  {
    v16 = *v13;
    while ( 1 )
    {
      v14 = v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 425 )
        break;
      v16 += 8LL;
      if ( v15 == v16 )
        return 0;
    }
    return v14 != v15;
  }
  if ( v14 != v15 )
  {
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 425 )
      return v14 != v15;
    for ( i = v15 + 8; ; i += 8LL )
    {
      v15 = i;
      if ( v14 == i )
        break;
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 425 )
        return v14 != v15;
    }
  }
  return 0;
}

