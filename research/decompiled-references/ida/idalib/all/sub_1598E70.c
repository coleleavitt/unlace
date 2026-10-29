bool __fastcall sub_1598E70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  bool result; // al
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // dl
  unsigned __int64 *v23; // rax
  __int64 *v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // rax
  __int64 *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 *i; // rax
  __int64 v34; // rcx

  v6 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = sub_F63270(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( !v7 )
    goto LABEL_9;
  v12 = (__int64)v7;
  if ( (*((_BYTE *)v7 + 29) & 1) == 0 )
    goto LABEL_3;
  v23 = sub_B8C3D0((__int64)v7, a2, v8, v9, v10, v11);
  v24 = (__int64 *)*v23;
  v25 = *v23 + 8LL * *((unsigned int *)v23 + 2);
  if ( *v23 < v25 )
  {
    v28 = *v23;
    while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 328 )
    {
      v28 += 8LL;
      if ( v25 == v28 )
        goto LABEL_3;
    }
    if ( v25 == v28 )
      goto LABEL_3;
  }
  else
  {
    if ( v24 == (__int64 *)v25 )
    {
LABEL_3:
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 60 > 1 )
        goto LABEL_9;
      v13 = 0;
      goto LABEL_5;
    }
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 328 )
    {
      v26 = (__int64 *)(v25 + 8);
      while ( v24 != v26 )
      {
        v27 = *v26++;
        if ( *(_WORD *)(v27 + 36) == 328 )
          goto LABEL_23;
      }
      goto LABEL_3;
    }
  }
LABEL_23:
  v13 = 1;
  if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 60 > 1 )
    return 1;
LABEL_5:
  v16 = *(_QWORD *)(sub_BBF290(v12) + 48);
  if ( (*(_BYTE *)(v16 + 29) & 1) != 0 )
  {
    v29 = sub_B8C3D0(v16, a2, v14, v15, v17, v18);
    v30 = (__int64 *)*v29;
    v31 = *v29 + 8LL * *((unsigned int *)v29 + 2);
    if ( *v29 >= v31 )
    {
      if ( v30 != (__int64 *)v31 )
      {
        if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) == 328 )
          return 1;
        for ( i = (__int64 *)(v31 + 8); v30 != i; ++i )
        {
          v34 = *i;
          if ( *(_WORD *)(v34 + 36) == 328 )
            return 1;
        }
      }
    }
    else
    {
      v32 = *v29;
      while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 328 )
      {
        v32 += 8LL;
        if ( v31 == v32 )
          goto LABEL_6;
      }
      if ( v31 != v32 )
        return 1;
    }
  }
LABEL_6:
  if ( v13 )
    return 1;
LABEL_9:
  v20 = *(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v21 = *(_QWORD *)v20;
  v22 = *(_BYTE *)(*(_QWORD *)v20 + 16LL);
  if ( v22 == 42 )
    return 1;
  result = 0;
  if ( v22 == 13 )
    return ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 488;
  return result;
}
