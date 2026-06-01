__int64 __fastcall sub_157EE50(__int64 a1, _WORD *a2)
{
  __int64 *v2; // rax
  unsigned __int64 v3; // rdx
  __int64 *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx

  if ( !a2 || (*a2 & 0x1FF) != 0x82 )
    return 1;
  v2 = (__int64 *)(a2 + 8);
  v3 = (unsigned __int64)&a2[4 * (*(_DWORD *)a2 >> 9) + 8];
  if ( (unsigned __int64)(a2 + 8) >= v3 )
  {
    if ( a2 + 8 != (_WORD *)v3 )
    {
      if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 46 )
      {
        v4 = (__int64 *)(v3 + 8);
        while ( v2 != v4 )
        {
          v5 = *v4++;
          if ( *(_WORD *)(v5 + 36) == 46 )
            goto LABEL_14;
        }
        return 1;
      }
      goto LABEL_14;
    }
    return 1;
  }
  while ( *(_WORD *)(*v2 + 36) != 46 )
  {
    if ( (__int64 *)v3 == ++v2 )
      return 1;
  }
  if ( (__int64 *)v3 == v2 )
    return 1;
LABEL_14:
  if ( !*(_BYTE *)(a1 + 36) )
    goto LABEL_21;
  v7 = *(_QWORD **)(a1 + 16);
  v8 = *(unsigned int *)(a1 + 28);
  v9 = &v7[v8];
  if ( v7 != v9 )
  {
    v10 = *(_QWORD **)(a1 + 16);
    if ( a2 == (_WORD *)*v7 )
      goto LABEL_30;
    do
    {
      if ( v9 == ++v10 )
        break;
    }
    while ( a2 != (_WORD *)*v10 );
  }
  if ( (unsigned int)v8 < *(_DWORD *)(a1 + 24) )
  {
    *(_DWORD *)(a1 + 28) = v8 + 1;
    *v9 = a2;
    v7 = *(_QWORD **)(a1 + 16);
    v10 = &v7[v8];
  }
  else
  {
LABEL_21:
    v10 = (_QWORD *)sub_2236760(a1 + 16, a2);
    v7 = *(_QWORD **)(a1 + 16);
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v11 = &v7[*(unsigned int *)(a1 + 24)];
      goto LABEL_23;
    }
  }
LABEL_30:
  v11 = &v7[*(unsigned int *)(a1 + 28)];
LABEL_23:
  if ( v11 != v10 && *v10 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v12 = v10 + 1;
    do
    {
      v13 = v12;
      if ( v11 == v12 )
        break;
      ++v12;
    }
    while ( *v13 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return 1;
}
