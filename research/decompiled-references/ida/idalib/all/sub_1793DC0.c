void __fastcall sub_1793DC0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al
  unsigned __int64 v8; // rdi
  int v9; // eax
  _BYTE *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 *v16; // rax
  unsigned __int64 *v17; // rax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 *i; // rax
  __int64 v30; // rcx
  __int64 *j; // rax
  __int64 v32; // rcx

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 89) & 4) == 0 )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_3:
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( ((v7 + 85) & 0x7D) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      {
        v9 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(v8 + 8)) + 8) & 0x7F;
        if ( !v9 )
          goto LABEL_10;
      }
      else
      {
        v9 = *(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F;
        if ( !v9 )
          goto LABEL_10;
      }
      if ( v9 == 24 )
        goto LABEL_10;
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
        return;
      v10 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
      {
        if ( ((v10[8] + 70) & 0x7Fu) <= 3 )
          goto LABEL_10;
LABEL_36:
        if ( ((v10[8] + 70) & 0x7Fu) > 3 )
          return;
        goto LABEL_10;
      }
      if ( ((*(_BYTE *)(*(_QWORD *)v10 + 8LL) + 70) & 0x7Fu) <= 3 )
      {
LABEL_10:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        {
          v21 = (_DWORD *)sub_B73640(a2);
          if ( !v21 || (*v21 & 0x20000) == 0 )
          {
            if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && *(char *)(a2 + 97) < 0
              || (v28 = *(_QWORD *)(a2 + 48), (v28 & 1) != 0)
              || (byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
            {
              if ( (unsigned __int8)sub_1793C50(a1, a2, 0) )
              {
                v22 = sub_168B6C0((__int64)a1);
                v23 = sub_B32200(v22, 0, 0);
                sub_B8CC60(a2, v23, v24, v25, v26, v27);
              }
            }
          }
        }
        return;
      }
    }
    else
    {
      if ( v7 == 43 )
        return;
      v10 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
        goto LABEL_36;
    }
    v10 = *(_BYTE **)v10;
    goto LABEL_36;
  }
  v11 = sub_B8C3D0(a2, a2, v3, v4, v5, v6);
  v14 = *v11;
  v15 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( *v11 >= v15 )
  {
    if ( v14 != v15 )
    {
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 159 )
        return;
      for ( i = (__int64 *)(v15 + 8); ; ++i )
      {
        v15 = (unsigned __int64)i;
        if ( (__int64 *)v14 == i )
          break;
        v30 = *i;
        if ( *(_WORD *)(v30 + 36) == 159 )
          return;
      }
    }
  }
  else
  {
    v16 = (__int64 *)*v11;
    while ( 1 )
    {
      v14 = *v16;
      if ( *(_WORD *)(*v16 + 36) == 159 )
        break;
      if ( (__int64 *)v15 == ++v16 )
        goto LABEL_16;
    }
    if ( (__int64 *)v15 != v16 )
      return;
  }
LABEL_16:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_3;
  v17 = sub_B8C3D0(a2, a2, v14, v15, v12, v13);
  v18 = (__int64 *)*v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v19 )
  {
    if ( v18 != (__int64 *)v19 )
    {
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 168 )
        return;
      for ( j = (__int64 *)(v19 + 8); v18 != j; ++j )
      {
        v32 = *j;
        if ( *(_WORD *)(v32 + 36) == 168 )
          return;
      }
    }
    goto LABEL_3;
  }
  v20 = *v17;
  while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 168 )
  {
    v20 += 8LL;
    if ( v19 == v20 )
      goto LABEL_3;
  }
  if ( v19 == v20 )
    goto LABEL_3;
}
