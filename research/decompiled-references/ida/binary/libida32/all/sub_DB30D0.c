__int64 __fastcall sub_DB30D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // ebp
  char v7; // dl
  void *v8; // r12
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  void *v18; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-50h]
  char v20; // [rsp+1Ch] [rbp-4Ch]
  int v21; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  v7 = *(_BYTE *)(v5 + 12);
  *(_DWORD *)(v5 + 8) = 0;
  v8 = *(void **)v5;
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v20 = v7;
  v21 = v5;
  v19 = v6;
  v18 = v8;
  sub_DFDA50(v4, 24);
  v17 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v9 = (unsigned __int8 **)sub_E0FFE0(a1, &v17, 2417, 0);
  if ( v9 )
  {
    v10 = v9;
    sub_AC60B0(v9, 2, 2u);
    v11 = sub_E0E500(a1);
    sub_AC60B0(v10, (*(_BYTE *)(v11 + 1) & 8) != 0, 3u);
    v12 = *(_QWORD *)(a1 + 176);
    if ( v6 > 0x40 )
      goto LABEL_3;
LABEL_7:
    v16 = sub_DFD980(v12, 48);
    *(_QWORD *)v16 = 0;
    *(_OWORD *)(v16 + 8) = 0;
    *(_DWORD *)(v16 + 24) = 1;
    *(_QWORD *)(v16 + 40) = v8 != nullptr;
    *(_QWORD *)(v16 + 32) = a3;
    return 1;
  }
  sub_E0E500(a1);
  v12 = *(_QWORD *)(a1 + 176);
  if ( v6 <= 0x40 )
    goto LABEL_7;
LABEL_3:
  v13 = sub_21E2A40(&v18);
  v14 = sub_DFD980(v12, 48);
  *(_QWORD *)v14 = 0;
  *(_OWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 24) = 1;
  *(_QWORD *)(v14 + 40) = v13 != v6;
  *(_QWORD *)(v14 + 32) = a3;
  if ( v8 )
    operator delete[](v8);
  return 1;
}

