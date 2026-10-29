void __fastcall sub_21FF2C0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  int v7; // ebp
  __int64 *v8; // rdx
  _QWORD *v9; // rdx
  char v10; // si
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int8 v15; // r8
  __int64 *v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  __int64 *v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-30h] BYREF
  _BYTE v24[40]; // [rsp+8h] [rbp-28h] BYREF

  if ( a2 == (_DWORD *)&unk_26F7D80 )
  {
    sub_21FC390(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7D60 )
  {
    sub_21FC1D0(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7D40 )
  {
    sub_21FC010(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == dword_26F7D20 )
  {
    sub_21FBE00(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7B60 )
  {
    sub_21FBA40(a1, a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7D00 )
  {
    sub_21FBC20(a1, a3);
    return;
  }
  if ( a2 == dword_26F7B00 )
  {
    sub_21FF1C0((_BYTE *)a1, (_DWORD *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7CE0 )
  {
    sub_21FC550(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7CC0 )
  {
    sub_21FC710((__int64 *)a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7CA0 )
  {
    sub_21FC870(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7C80 )
  {
    sub_21FCA30(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7C60 )
  {
    sub_21FCBB0((__int64 *)a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7C40 )
  {
    sub_21FCD10((__int64 *)a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7C20 )
  {
    sub_21FCE70(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7C00 )
  {
    sub_21FD030(a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7BE0 )
  {
    sub_21FA9C0((unsigned int **)a1, (__int64 *)a3);
    return;
  }
  if ( a2 == (_DWORD *)&unk_26F7BC0 )
  {
    v11 = *(unsigned int *)(a3 + 8);
    if ( (unsigned int)v11 > 0x40 )
      a3 = *(_QWORD *)a3;
    v12 = *(_QWORD *)a3 & 3LL;
    v13 = *(_QWORD *)(a3 + 8LL * ((unsigned int)((unsigned __int64)(v11 + 63) >> 6) - 1));
    v23 = v12;
    sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7BC0);
    v14 = (v13 >> 2) & 7;
    *(_BYTE *)(a1 + 20) = (8 * ((v13 & 0x20) != 0)) | *(_BYTE *)(a1 + 20) & 0xF7;
    if ( sub_21F8AA0(&v23, (__int64)v24) != (_QWORD *)v24 || v14 )
    {
      v16 = (__int64 *)(a1 + 8);
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
      *(_DWORD *)(a1 + 16) = v14 - 3;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v16 = *(__int64 **)(a1 + 8);
      *v16 = v12;
      if ( v14 )
      {
        v22 = (_QWORD *)(a1 + 8);
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
          v22 = *(_QWORD **)(a1 + 8);
        *v22 |= 4uLL;
      }
      else
      {
        *(_DWORD *)(a1 + 16) = -2;
      }
      return;
    }
LABEL_70:
    v10 = v15 >> 3;
    goto LABEL_44;
  }
  v3 = *(unsigned int *)(a3 + 8);
  if ( a2 == (_DWORD *)&unk_26F7BA0 )
  {
    if ( (unsigned int)v3 > 0x40 )
      a3 = *(_QWORD *)a3;
    v17 = *(_QWORD *)a3 & 7LL;
    v18 = *(_QWORD *)(a3 + 8LL * ((unsigned int)((unsigned __int64)(v3 + 63) >> 6) - 1));
    v23 = v17;
    sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7BA0);
    v19 = (v18 >> 3) & 3;
    *(_BYTE *)(a1 + 20) = (8 * ((v18 & 0x20) != 0)) | *(_BYTE *)(a1 + 20) & 0xF7;
    if ( sub_21F8AA0(&v23, (__int64)v24) != (_QWORD *)v24 || v19 )
    {
      v20 = (__int64 *)(a1 + 8);
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
      *(_DWORD *)(a1 + 16) = v19 - 1;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v20 = *(__int64 **)(a1 + 8);
      *v20 = v17;
      if ( !v19 )
        goto LABEL_26;
      v21 = (_QWORD *)(a1 + 8);
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v21 = *(_QWORD **)(a1 + 8);
      *v21 |= 8uLL;
      return;
    }
    goto LABEL_70;
  }
  if ( (unsigned int)v3 > 0x40 )
    a3 = *(_QWORD *)a3;
  v4 = *(_QWORD *)a3 & 1LL;
  v5 = *(_QWORD *)(a3 + 8LL * ((unsigned int)((unsigned __int64)(v3 + 63) >> 6) - 1));
  v23 = v4;
  sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7B80);
  v6 = (v5 >> 1) & 3;
  v7 = *(_BYTE *)(a1 + 20) & 0xF7 | (8 * ((v5 >> 3) & 1));
  *(_BYTE *)(a1 + 20) = v7;
  if ( sub_21F8AA0(&v23, (__int64)v24) == (_QWORD *)v24 && !v6 )
  {
    v10 = (unsigned __int8)v7 >> 3;
LABEL_44:
    sub_21FB9A0((__int64 *)a1, v10 & 1);
    return;
  }
  v8 = (__int64 *)(a1 + 8);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
  *(_DWORD *)(a1 + 16) = v6 - 1;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
    v8 = *(__int64 **)(a1 + 8);
  *v8 = v4;
  if ( !v6 )
  {
LABEL_26:
    *(_DWORD *)(a1 + 16) = 0;
    return;
  }
  v9 = (_QWORD *)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
    v9 = *(_QWORD **)(a1 + 8);
  *v9 |= 2uLL;
}
