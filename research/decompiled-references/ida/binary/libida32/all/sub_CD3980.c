__int64 __fastcall sub_CD3980(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int16 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  void *v6; // rdx
  __int64 v7; // rbx
  void *v9; // [rsp+0h] [rbp-38h]
  unsigned int v10; // [rsp+8h] [rbp-30h]
  char v11; // [rsp+Ch] [rbp-2Ch]
  int v12; // [rsp+10h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = sub_DFDA20(v4, 24);
  v10 = *(_DWORD *)(v5 + 8);
  v6 = *(void **)v5;
  *(_DWORD *)(v5 + 8) = 0;
  v9 = v6;
  v11 = *(_BYTE *)(v5 + 12);
  v12 = *(_DWORD *)(v5 + 16);
  sub_DFDA50(v4, 24);
  *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v3;
  v7 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_21E17D0(v7);
  else
    *(_QWORD *)v7 = v9;
  *(_BYTE *)(v7 + 12) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return 1;
}

