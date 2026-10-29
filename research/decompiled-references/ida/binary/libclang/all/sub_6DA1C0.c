__int64 __fastcall sub_6DA1C0(_QWORD *a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v6; // rbx
  char v7; // al
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax

  sub_6D9CE0(a1, a2, a3, a4);
  v6 = *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 41 )
  {
    v8 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD **)v8;
    if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 41 )
    {
LABEL_3:
      *a2 = *(_QWORD *)(v6 + 32);
      *a3 = v9[4];
      return 1;
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
  {
    v6 = sub_B0D320(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL));
    v11 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD **)v11;
    if ( *(_BYTE *)(*(_QWORD *)v11 + 16LL) == 41 )
      goto LABEL_8;
  }
  else
  {
    v15 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD **)v15;
    if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 41 )
    {
      if ( v7 == 32 )
        goto LABEL_23;
      goto LABEL_25;
    }
    v6 = 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
    goto LABEL_10;
  v9 = (_QWORD *)sub_B0D320(v9);
LABEL_8:
  if ( v6 && v9 )
    goto LABEL_3;
LABEL_10:
  v6 = *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 32 )
  {
LABEL_25:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 32 )
    {
      v6 = sub_B0D320(v6);
      v16 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = *(_QWORD **)v16;
      if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) == 32 )
        goto LABEL_27;
    }
    else
    {
      v18 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = *(_QWORD **)v18;
      if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) == 32 )
        goto LABEL_13;
      v6 = 0;
    }
LABEL_23:
    if ( *(_BYTE *)(*(_QWORD *)(v9[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 32 )
      goto LABEL_13;
    v9 = (_QWORD *)sub_B0D320(v9);
LABEL_27:
    if ( !v6 || !v9 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v12 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD **)v12;
  if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) != 32 )
    goto LABEL_23;
LABEL_12:
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v9[5] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    goto LABEL_3;
LABEL_13:
  if ( (*(_BYTE *)(a1[270] + 2LL) & 4) == 0 )
    return 0;
  v13 = *a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v13;
  if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) == 33 )
  {
    v14 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD **)v14;
    if ( *(_BYTE *)(*(_QWORD *)v14 + 16LL) == 33 )
      goto LABEL_3;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
  {
    v19 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD **)v19;
    if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) == 33 )
      return 0;
    v6 = 0;
    goto LABEL_16;
  }
  v6 = sub_B0D320(v6);
  v17 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD **)v17;
  if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) != 33 )
  {
LABEL_16:
    if ( *(_BYTE *)(*(_QWORD *)(v9[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      return 0;
    v9 = (_QWORD *)sub_B0D320(v9);
  }
  if ( v6 && v9 )
    goto LABEL_3;
  return 0;
}

