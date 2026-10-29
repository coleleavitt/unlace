void __fastcall sub_16658F0(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // ecx
  char v9; // r15
  char v10; // bp
  char v11; // r14
  char v12; // r9
  int v13; // ecx
  int v14; // esi
  char v15; // r10
  int v16; // edi
  bool v17; // si
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // r8
  char v21; // [rsp+Fh] [rbp-D9h]
  unsigned int v22; // [rsp+18h] [rbp-D0h]
  __int64 v23; // [rsp+20h] [rbp-C8h] BYREF
  int v24; // [rsp+28h] [rbp-C0h]

  v5 = *(unsigned int *)(a1 + 1256);
  v6 = *(_DWORD *)(a1 + 1256);
  if ( !a2 )
  {
    v13 = *(_DWORD *)(a1 + 1240);
    v14 = *(unsigned __int8 *)(a1 + 1238);
    v15 = *(_BYTE *)(a1 + 1233);
    v16 = *(_DWORD *)(a1 + 1236);
    if ( *(_BYTE *)(a1 + 1237) != v15 || *(_BYTE *)(a1 + 1234) != (_BYTE)v14 )
    {
      v17 = 1;
      if ( v6 )
        v17 = *(_DWORD *)(*(_QWORD *)(a1 + 1248) + 12 * v5 - 8) != v13;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(a1 + 1236) != *(_BYTE *)(a1 + 1232)
      || (v20 = *(_BYTE *)(a1 + 1239), v17 = 0, v20 != *(_BYTE *)(a1 + 1235)) )
    {
      v17 = 1;
      if ( v6 )
        v17 = *(_DWORD *)(*(_QWORD *)(a1 + 1248) + 12 * v5 - 8) != v13;
      if ( *(_BYTE *)(a1 + 1232) != *(_BYTE *)(a1 + 1236) )
        goto LABEL_14;
      v20 = *(_BYTE *)(a1 + 1239);
    }
    if ( v20 == *(_BYTE *)(a1 + 1235) )
      v13 = 0;
LABEL_14:
    HIDWORD(v23) = v13;
    v18 = *(unsigned int *)(a1 + 1260);
    LODWORD(v23) = v16;
    LOWORD(v24) = v17;
    if ( v5 + 1 > v18 )
    {
      sub_2237220(a1 + 1248, a1 + 1264, v5 + 1, 12);
      v5 = *(unsigned int *)(a1 + 1256);
    }
    v19 = *(_QWORD *)(a1 + 1248) + 12 * v5;
    *(_QWORD *)v19 = v23;
    *(_DWORD *)(v19 + 8) = v24;
    ++*(_DWORD *)(a1 + 1256);
    return;
  }
  v7 = *(_QWORD *)(a1 + 1248) + 12 * v5 - 12;
  v8 = *(_DWORD *)(v7 + 4);
  v9 = *(_BYTE *)v7;
  v10 = *(_BYTE *)(v7 + 1);
  v11 = *(_BYTE *)(v7 + 2);
  v12 = *(_BYTE *)(v7 + 3);
  LOBYTE(v7) = *(_BYTE *)(v7 + 9);
  v22 = v8;
  *(_DWORD *)(a1 + 1256) = v6 - 1;
  if ( (_BYTE)v7 )
  {
    v21 = v12;
    sub_168B9F0(&v23, a1 + 8, a3, 7264, 0);
    sub_15F7200(&v23);
    sub_168B9F0(&v23, a1 + 8, v22, 6271, 0);
    sub_15F7200(&v23);
    v12 = v21;
    if ( v10 != *(_BYTE *)(a1 + 1237) )
      goto LABEL_4;
  }
  else if ( v10 != *(_BYTE *)(a1 + 1237) )
  {
LABEL_4:
    sub_168B9F0(&v23, a1 + 8, a3, 7262, 0);
    sub_15F7200(&v23);
    sub_168B9F0(&v23, a1 + 8, *(unsigned int *)(a1 + 1240), 6271, 0);
    sub_15F7200(&v23);
    return;
  }
  if ( v11 != *(_BYTE *)(a1 + 1238) || v9 != *(_BYTE *)(a1 + 1236) || v12 != *(_BYTE *)(a1 + 1239) )
    goto LABEL_4;
}
