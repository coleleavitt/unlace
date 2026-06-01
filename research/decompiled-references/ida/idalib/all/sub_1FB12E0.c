bool __fastcall sub_1FB12E0(__int64 a1)
{
  __int64 v1; // r12
  int v2; // eax
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  bool result; // al
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rsi
  unsigned __int64 *v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 **v22; // rax

  v1 = sub_B8C330(a1);
  v2 = sub_A7BFC0(v1, (_BYTE *)a1);
  v7 = *(unsigned __int8 *)(a1 + 29);
  v8 = v2;
  if ( (*(_BYTE *)(*(_QWORD *)(v1 + 2320) + 104LL) & 1) == 0 )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_3;
    v13 = sub_B8C3D0(a1, v7, v3, (__int64)v4, v5, v6);
    v3 = *v13;
    v4 = (__int64 *)(*v13 + 8LL * *((unsigned int *)v13 + 2));
    if ( *v13 >= (unsigned __int64)v4 )
    {
      LOBYTE(v7) = *(_BYTE *)(a1 + 29);
      if ( (__int64 *)v3 == v4 )
        goto LABEL_3;
      if ( *(_WORD *)(*v4 + 36) != 195 )
      {
        v22 = (__int64 **)(v4 + 1);
        while ( (__int64 **)v3 != v22 )
        {
          v4 = *v22++;
          if ( *((_WORD *)v4 + 18) == 195 )
            goto LABEL_16;
        }
        goto LABEL_3;
      }
    }
    else
    {
      v14 = (__int64 *)*v13;
      while ( 1 )
      {
        v3 = *v14;
        if ( *(_WORD *)(*v14 + 36) == 195 )
          break;
        if ( v4 == ++v14 )
          goto LABEL_19;
      }
      LOBYTE(v7) = *(_BYTE *)(a1 + 29);
      if ( v4 == v14 )
        goto LABEL_3;
    }
LABEL_16:
    if ( (*(_BYTE *)(*(_QWORD *)(v1 + 2320) + 21LL) & 0x40) != 0 )
      goto LABEL_17;
LABEL_3:
    v9 = *(_QWORD *)(a1 + 8) & 7LL;
    if ( (v7 & 0x80u) == 0LL )
      goto LABEL_4;
    goto LABEL_20;
  }
LABEL_17:
  v15 = v7 & 1;
  if ( !(_DWORD)v15 )
    goto LABEL_18;
  v16 = sub_B8C3D0(a1, v15, v3, (__int64)v4, v5, v6);
  v17 = (__int64 *)*v16;
  v18 = *v16 + 8LL * *((unsigned int *)v16 + 2);
  if ( *v16 < v18 )
  {
    v19 = *v16;
    while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 53 )
    {
      v19 += 8LL;
      if ( v18 == v19 )
        goto LABEL_18;
    }
    if ( v18 == v19 )
      goto LABEL_18;
LABEL_19:
    v9 = *(_QWORD *)(a1 + 8) & 7LL;
    if ( *(char *)(a1 + 29) >= 0 )
    {
LABEL_4:
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 - 8);
LABEL_6:
        if ( v10 )
        {
          v11 = *(_DWORD *)(sub_FEEE40(v10) + 36);
          if ( v11 == 2 || (unsigned int)(v11 - 4) <= 1 )
            return v8 > 2;
        }
        return 0;
      }
      return 0;
    }
LABEL_20:
    if ( v9 )
    {
      v10 = sub_B8C660(a1);
      goto LABEL_6;
    }
    return 0;
  }
  if ( v17 == (__int64 *)v18 )
    goto LABEL_18;
  if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 53 )
    goto LABEL_19;
  v20 = (__int64 *)(v18 + 8);
  while ( v17 != v20 )
  {
    v21 = *v20++;
    if ( *(_WORD *)(v21 + 36) == 53 )
      goto LABEL_19;
  }
LABEL_18:
  result = 1;
  if ( (unsigned int)v8 <= 1 )
    goto LABEL_19;
  return result;
}
