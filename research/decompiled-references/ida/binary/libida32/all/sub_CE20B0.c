__int64 __fastcall sub_CE20B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rax
  _BYTE v11[48]; // [rsp-30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+0h] [rbp-38h]
  int v13; // [rsp+8h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = sub_DFDA20(v3, 64);
    sub_DFF520(v11);
    v12 = *(_QWORD *)(v4 + 48);
    v13 = *(_DWORD *)(v4 + 56);
    sub_DFDA50(v3, 64);
    v9 = sub_CC5910(*(_QWORD *)(a1 + 568), v12, v5, v6, v7, v8);
    v10 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
    *(_QWORD *)(v10 + 32) = v9;
    *(_QWORD *)v10 = 0;
    *(_DWORD *)(v10 + 24) = 2;
    *(_OWORD *)(v10 + 8) = 0;
    sub_DFF560(v11);
  }
  return 1;
}

