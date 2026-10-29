__int64 __fastcall sub_559AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  char v7; // bp
  char tinfo_property; // al
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  const void *v13; // rbp
  void *v14; // rax
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int8 v18; // bp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax

  copy_tinfo_t(a1 + 88);
  v5 = a1 + 8;
  if ( v5 != a3 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 > 1 )
    {
      v13 = *(const void **)a3;
      v14 = *(void **)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < v6 )
      {
        v14 = (void *)qvector_reserve(v5, *(_QWORD *)(a1 + 8), v6, 1);
        *(_QWORD *)(a1 + 8) = v14;
      }
      *(_QWORD *)(a1 + 16) = v6;
      memmove(v14, v13, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  v7 = 61;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 88), 2);
  v9 = *(_QWORD *)(a1 + 88);
  *(_BYTE *)(a1 + 101) = tinfo_property;
  v10 = get_tinfo_property(v9, 298);
  v11 = *(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 96) = v10;
  if ( get_tinfo_property(v11, 288) )
    goto LABEL_5;
  v15 = get_tinfo_property(*(_QWORD *)(a1 + 88), 2);
  v16 = *(_QWORD *)(a1 + 88);
  v7 = v15 & 0xF;
  if ( (v15 & 0xF) != 0xC )
  {
    v17 = get_tinfo_property(v16, 5);
    *(_BYTE *)(a1 + 102) = v17 != 0;
    if ( v17 )
    {
      if ( (get_tinfo_property(*(_QWORD *)(a1 + 88), 290) & 0x3F) == 0xD )
      {
LABEL_18:
        v7 = 13;
        goto LABEL_5;
      }
      if ( (get_tinfo_property(*(_QWORD *)(a1 + 88), 290) & 0x3F) == 0x1D )
      {
LABEL_20:
        v7 = 29;
        goto LABEL_5;
      }
    }
    else
    {
      v18 = *(_BYTE *)(a1 + 101) & 0x3F;
      if ( v18 != 45 )
      {
        if ( v18 <= 0x2Du && (*(_BYTE *)(a1 + 101) & 0x2F) == 0xD )
        {
          v20 = get_tinfo_property(*(_QWORD *)(a1 + 88), 309);
          *(_QWORD *)a1 = v20;
          if ( v20 )
          {
            if ( v18 == 13 )
            {
              get_tinfo_pdata(a1 + 56, *(_QWORD *)(a1 + 88), 7);
              sub_5598C0((__int64 *)a1);
              goto LABEL_18;
            }
            goto LABEL_20;
          }
        }
        return 0;
      }
      v21 = (__int64 *)get_tinfo_property(*(_QWORD *)(a1 + 88), 310);
      *(_QWORD *)a1 = v21;
      if ( !v21 )
        return 0;
      v22 = *v21;
      v23 = *v21 + 56 * v21[1];
      if ( v23 != *v21 )
      {
        do
        {
          v24 = *(_QWORD *)(v22 + 8);
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 <= 0x20 && *(_QWORD *)(a1 + 80) < v25 )
              *(_QWORD *)(a1 + 80) = v25;
          }
          v22 += 56;
        }
        while ( v22 != v23 );
      }
    }
    v7 = 45;
    goto LABEL_5;
  }
  v19 = get_tinfo_property(v16, 311);
  *(_QWORD *)a1 = v19;
  if ( v19 )
  {
LABEL_5:
    *(_BYTE *)(a1 + 100) = v7;
    return 1;
  }
  return 0;
}
