void __fastcall sub_7D3300(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  signed __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE *v10; // rdi
  char *v11; // rcx
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // al
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rdi
  _QWORD *v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h]
  _BYTE v27[104]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return;
  v4 = a2;
  ptr = v27;
  v26 = 0x800000000LL;
  if ( !a2 )
    return;
LABEL_3:
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
LABEL_20:
    v17 = ptr;
    *(_QWORD *)(a1 + 80) = v5;
    if ( v17 != v27 )
      free(v17);
    return;
  }
  while ( 1 )
  {
    v6 = (unsigned int)v26;
    v7 = (unsigned int)v26 + 1LL;
    if ( HIDWORD(v26) < v7 )
    {
      sub_25D6060(&ptr, v27, v7, 8);
      v6 = (unsigned int)v26;
    }
    *((_QWORD *)ptr + v6) = v4;
    v8 = *(_QWORD *)(v4 + 64);
    v9 = (unsigned int)(v26 + 1);
    LODWORD(v26) = v26 + 1;
    if ( (v8 & 1) != 0 )
      break;
    v14 = v8 >> 1;
    if ( (v8 & 2) != 0 )
      break;
    if ( (v8 & 1) != 0 )
    {
      v15 = v8 & 0xFE;
    }
    else
    {
      if ( (v8 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
        break;
      v18 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v14 & 1) == 0 )
      {
        v4 = (unsigned __int64)v18;
        goto LABEL_3;
      }
      v19 = v18[2275];
      if ( v19 )
      {
        v20 = v18[274];
        v18[284] += 24LL;
        v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v18[275] >= v21 + 24 && v20 )
          v18[274] = v21 + 24;
        else
          v21 = sub_7CF9B0((__int64)(v18 + 274), 24, 3);
        *(_QWORD *)v21 = v19;
        *(_DWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = v4;
        *(_QWORD *)(v4 + 64) = v21 | 5;
        v16 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_29;
      }
      v8 = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v4 + 64) = v8;
      v15 = v4 & 0xFA;
      if ( (v4 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        break;
    }
    v16 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15 & 4) == 0 )
    {
      v4 = v16;
      goto LABEL_18;
    }
LABEL_29:
    if ( !v16 )
    {
LABEL_30:
      v9 = (unsigned int)v26;
      break;
    }
    v22 = *(_QWORD *)v16;
    v23 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
    if ( *(_DWORD *)(v16 + 8) != v23 )
    {
      *(_DWORD *)(v16 + 8) = v23;
      v24 = v16;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 144LL))(v22, v4);
      v16 = v24;
    }
    v4 = *(_QWORD *)(v16 + 16);
LABEL_18:
    if ( !v4 )
      goto LABEL_30;
    v5 = *(_QWORD *)(v4 + 80);
    if ( v5 )
      goto LABEL_20;
  }
  v10 = ptr;
  v11 = (char *)ptr + 8 * v9;
  if ( v11 != ptr )
  {
    v12 = (char *)ptr;
    do
    {
      v13 = *(_QWORD *)v12;
      v12 += 8;
      *(_QWORD *)(v13 + 80) = v2;
    }
    while ( v12 != v11 );
  }
  if ( v10 != v27 )
    free(v10);
}

