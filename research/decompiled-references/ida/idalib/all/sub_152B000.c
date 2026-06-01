void __fastcall sub_152B000(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rdi
  unsigned int v9; // r13d
  __int64 *v10; // rax
  __int64 v11; // rdx
  bool v12; // al
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  char v16; // [rsp+Bh] [rbp-8Dh]
  unsigned int v17; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v18[17]; // [rsp+10h] [rbp-88h] BYREF

  v5 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v5 | 0x20;
  sub_14634E0((__int64 *)a2, (int *)a4);
  *(_BYTE *)(a2 + 544) = (32 * ((v5 & 0x20) != 0)) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( *(_WORD *)(a4 + 16) != 5 )
  {
    sub_FC70B0((__int64)v18, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 2189);
    sub_1520A40(v18, (__int64)"OPENCL");
    sub_AEA040((__int64)v18);
    return;
  }
  v6 = *(_QWORD *)(a4 + 8);
  v7 = *(_DWORD *)a4;
  sub_14634E0((__int64 *)a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 62 )
  {
    sub_FC70B0((__int64)v18, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 2186);
    sub_AE9DF0(v18, v6, 5u);
    sub_AEA040((__int64)v18);
    return;
  }
  sub_14634E0((__int64 *)a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 5 )
  {
    sub_FC70B0((__int64)v18, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 2194);
    sub_1520C80(v18, 0);
    sub_AEA040((__int64)v18);
    return;
  }
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(_DWORD *)a4;
  v10 = *(__int64 **)(v8 + 16);
  v11 = *v10;
  if ( (unsigned int)*v10 == 6 )
  {
    if ( *((_DWORD *)v10 + 4) != 1650552421 || *((_WORD *)v10 + 10) != 25964 )
      goto LABEL_16;
    v17 = 1;
    v16 = 1;
  }
  else
  {
    if ( (_DWORD)v11 != 7 )
    {
      if ( (_DWORD)v11 == 5 && *((_DWORD *)v10 + 4) == 1768383842 && *((_BYTE *)v10 + 20) == 110 )
      {
        v17 = 2;
        v16 = 2;
        goto LABEL_12;
      }
LABEL_16:
      v17 = 3;
      v16 = 3;
      if ( !sub_1528280(v8, (__int64)"end") )
      {
        sub_FC70B0((__int64)v18, *(_QWORD *)(a2 + 48), v9, 2194);
        v12 = sub_1528280(v6, (__int64)"all");
        sub_1520C80(v18, v12);
        sub_AEA040((__int64)v18);
        return;
      }
      goto LABEL_12;
    }
    if ( *((_DWORD *)v10 + 4) != 1634953572 || *((_WORD *)v10 + 10) != 27746 || *((_BYTE *)v10 + 22) != 101 )
      goto LABEL_16;
    v17 = 0;
    v16 = 0;
  }
LABEL_12:
  sub_14634E0((__int64 *)a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) == 2 )
  {
    v13 = sub_15290A0((__int64 *)(a2 + 128), 16, 3u);
    *(_QWORD *)v13 = v6;
    *(_BYTE *)(v13 + 8) = v16;
    v14 = sub_15290A0((__int64 *)(a2 + 128), 24, 3u);
    *(_DWORD *)v14 = v7;
    *(_DWORD *)(v14 + 16) = 446;
    *(_QWORD *)(v14 + 8) = v13;
    *(_DWORD *)(v14 + 4) = v9;
    sub_14368B0(a2, (char *)v14, 1, 1u, 0, 0);
    v15 = *(_QWORD *)(a2 + 1192);
    if ( v15 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 184LL))(v15, v7, v6, v9, v17);
  }
  else
  {
    sub_FC70B0((__int64)v18, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 2202);
    sub_1520A40(v18, (__int64)"OPENCL EXTENSION");
    sub_AEA040((__int64)v18);
  }
}
