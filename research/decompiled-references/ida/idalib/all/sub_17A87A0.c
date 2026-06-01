__int64 __fastcall sub_17A87A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v6 = (__int64 **)sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v7 = *v6;
  v8 = (unsigned __int64)&(*v6)[*((unsigned int *)v6 + 2)];
  if ( (unsigned __int64)v7 < v8 )
  {
    v12 = v7;
    while ( *(_WORD *)(*v12 + 36) != 340 )
    {
      if ( (__int64 *)v8 == ++v12 )
        return 0;
    }
    if ( (__int64 *)v8 != v12 )
      goto LABEL_14;
    return 0;
  }
  if ( v7 == (__int64 *)v8 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 340 )
  {
    v9 = (__int64 *)(v8 + 8);
    while ( v7 != v9 )
    {
      v10 = *v9++;
      if ( *(_WORD *)(v10 + 36) == 340 )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  result = *v7;
  if ( *(_WORD *)(*v7 + 36) != 340 )
  {
    v13 = v7 + 1;
    do
      result = *v13++;
    while ( *(_WORD *)(result + 36) != 340 );
  }
  return result;
}
