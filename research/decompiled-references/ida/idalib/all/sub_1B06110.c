__int64 __fastcall sub_1B06110(__int64 *a1, unsigned int a2, int a3, int a4)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v18[168]; // [rsp+10h] [rbp-A8h] BYREF

  v6 = a1[1];
  v7 = *(unsigned int *)(v6 + 344);
  if ( !(_DWORD)v7 )
    goto LABEL_3;
  v8 = *(_QWORD *)(v6 + 336) + 6776 * v7 - 6776;
  if ( *(_QWORD *)(v8 + 6768) != *(_QWORD *)(v6 + 328) )
    goto LABEL_3;
  v11 = *(unsigned int *)(v8 + 8);
  v12 = *(unsigned int *)(v6 + 27504);
  if ( (unsigned int)v11 <= (unsigned int)v12 )
    goto LABEL_3;
  v14 = v11 == v12;
  v13 = v11 - v12;
  if ( v14 || v13 == 1 )
    goto LABEL_3;
  v15 = *(_QWORD *)v8 + 1688 * (v13 - 2);
  if ( !v15 )
    goto LABEL_3;
  if ( *(_BYTE *)(v15 + 1104) )
  {
    v16 = 4576;
    goto LABEL_10;
  }
  if ( !*(_BYTE *)(v15 + 1072) )
  {
LABEL_3:
    v9 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EF5D80(v9, a2, a3, a4);
  }
  v16 = 4577;
LABEL_10:
  sub_168B9F0((__int64)v18, a1, a2, v16, 0);
  v17 = 0;
  sub_1587D10((__int64)v18, &v17);
  sub_15F7200(v18);
  return 1;
}
