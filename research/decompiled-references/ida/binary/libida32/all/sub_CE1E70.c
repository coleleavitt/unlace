__int64 __fastcall sub_CE1E70(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE v7[48]; // [rsp-30h] [rbp-98h] BYREF
  _QWORD v8[7]; // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = sub_DFDA20(v3, 64);
    sub_DFF520(v8);
    v8[6] = *(_QWORD *)(v4 + 48);
    v9 = *(_DWORD *)(v4 + 56);
    sub_DFDA50(v3, 64);
    v5 = *(_QWORD *)(a1 + 560);
    sub_DFF4E0(v7, v8[4], (unsigned int)(LODWORD(v8[0]) - v9), (unsigned int)(LODWORD(v8[0]) - v9));
    v6 = sub_DFD980(v5, 48);
    sub_DFF520(v6);
    sub_DFF560(v7);
    sub_DFF560(v8);
  }
  return 1;
}

