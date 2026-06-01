char __fastcall sub_1BC7650(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 i; // rax

  result = 1;
  v7 = a2[13] & 0x3FC01;
  if ( (_DWORD)v7 == 0x2000 )
    return result;
  v8 = *a2;
  if ( !*a2 || (*(_BYTE *)(v8 + 29) & 1) == 0 )
    return 0;
  v9 = sub_B8C3D0(v8, (__int64)a2, v7, a4, a5, a6);
  v12 = *v9;
  v13 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( *v9 >= v13 )
  {
    if ( v12 == v13 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 165 )
    {
      v13 += 8LL;
      if ( v12 == v13 )
        return 0;
    }
  }
  else
  {
    v14 = (__int64 *)*v9;
    while ( 1 )
    {
      v12 = *v14;
      if ( *(_WORD *)(*v14 + 36) == 165 )
        break;
      if ( (__int64 *)v13 == ++v14 )
        return 0;
    }
    if ( (__int64 *)v13 == v14 )
      return 0;
  }
  if ( (*(_BYTE *)(*a2 + 29) & 1) == 0 )
    return 0;
  v15 = sub_B8C3D0(*a2, (__int64)a2, v12, v13, v10, v11);
  v16 = *v15;
  v17 = *v15 + 8LL * *((unsigned int *)v15 + 2);
  if ( *v15 < v17 )
  {
    v18 = *v15;
    while ( 1 )
    {
      v16 = v18;
      if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 160 )
        break;
      v18 += 8LL;
      if ( v17 == v18 )
        return 0;
    }
    return v16 != v17;
  }
  if ( v16 == v17 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 160 )
    return v16 != v17;
  for ( i = v17 + 8; ; i += 8LL )
  {
    v17 = i;
    if ( v16 == i )
      break;
    if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 160 )
      return v16 != v17;
  }
  return 0;
}
