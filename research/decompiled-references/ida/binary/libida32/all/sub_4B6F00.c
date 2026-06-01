__int64 __fastcall sub_4B6F00(__int64 a1, void *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r12
  __int64 v6; // rdi
  char v7; // bp
  char aflags; // al
  _QWORD *v9; // rax
  _BYTE *v10; // rdx
  unsigned __int64 v11; // r15
  int v12; // eax
  void *v13; // r14
  int v14; // r13d
  void (__fastcall *v15)(__int64, void *, _QWORD); // r15
  unsigned __int8 v16; // al
  __int64 v17; // rax
  void (__fastcall *v18)(__int64, __int64, _QWORD); // r12
  __int64 v19; // rax
  _BYTE *v20; // rdx
  int v21; // eax

  v2 = 0;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 )
    return v2;
  v4 = *(_QWORD *)(a1 + 432);
  v6 = *(unsigned int *)(a1 + 16);
  v7 = (char)a2;
  aflags = get_aflags(v6);
  if ( (aflags & 8) != 0 )
  {
    v9 = *(_QWORD **)(a1 + 480);
    v10 = (_BYTE *)v9[27];
    if ( v10 )
      goto LABEL_5;
    v20 = (_BYTE *)v9[26];
    if ( v20 )
    {
      if ( *v20 )
      {
        a2 = &unk_22B1C03;
        v6 = a1;
        sub_359A50(a1, (__int64)&unk_22B1C03, v20, v4, v9[6]);
      }
    }
    else
    {
      a2 = &unk_22B1BF4;
      v6 = a1;
      sub_359A50(a1, (__int64)&unk_22B1BF4, v9[6], v4);
    }
    if ( *(_QWORD *)(a1 + 32) <= 1u )
    {
      v21 = *(_DWORD *)(a1 + 144);
      v13 = *(void **)(a1 + 24);
      v2 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 144) = v21 & 0xFFFFE76F;
      v14 = v21 & 0x1890;
      if ( !v7 )
        goto LABEL_10;
      v2 = sub_55F0A0(a1);
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  if ( (aflags & 4) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 480);
    v10 = *(_BYTE **)(v17 + 208);
    if ( v10 )
    {
LABEL_5:
      if ( *v10 )
        sub_359A50(a1, (__int64)&unk_22B1C19, v10, v4);
      goto LABEL_7;
    }
    a2 = &unk_22B1C23;
    v6 = a1;
    sub_359A50(a1, (__int64)&unk_22B1C23, *(_QWORD *)(v17 + 48), v4);
LABEL_19:
    v18 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
    v19 = closing_comment(v6, a2);
    v18(a1, v19, 0);
    v11 = *(_QWORD *)(a1 + 32);
    goto LABEL_8;
  }
LABEL_7:
  v11 = *(_QWORD *)(a1 + 32);
LABEL_8:
  v12 = *(_DWORD *)(a1 + 144);
  v13 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 144) = v12 & 0xFFFFE76F;
  v14 = v12 & 0x1890;
  if ( v7 )
  {
    v2 = sub_55F0A0(a1);
    if ( v11 <= 1 )
      goto LABEL_11;
  }
  else
  {
    v2 = 0;
    if ( v11 <= 1 )
    {
LABEL_10:
      v2 += sub_55F0A0(a1);
      goto LABEL_11;
    }
  }
  *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 2648LL) = 0;
  v15 = *(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 136LL);
  v16 = getinf(40);
  v15(a1, v13, v16);
  ++v2;
  if ( !v7 )
    goto LABEL_10;
LABEL_11:
  *(_DWORD *)(a1 + 144) |= v14;
  if ( v13 )
    qfree(v13);
  return v2;
}

