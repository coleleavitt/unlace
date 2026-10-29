__int64 __fastcall sub_DB21B0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // eax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+28h] [rbp-30h]

  sub_E05460(v11, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_DA5E00(a1, a2, (__int64)v11, 0);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 176);
    v6 = v11[0];
    v7 = v13;
    if ( !v12 && *(_BYTE *)(sub_CDA220((__int64)v11) + 60) && v14 == v6 )
      v8 = v7 + v14 + 72;
    else
      v8 = v7 + v6 + 40;
    v9 = sub_DFD980(v5, 24);
    v10 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v9 + 8) = v10;
    if ( v10 > 0x40 )
      sub_21E17D0(v9);
    else
      *(_QWORD *)v9 = *(_QWORD *)v8;
    *(_BYTE *)(v9 + 12) = *(_BYTE *)(v8 + 12);
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v8 + 16);
  }
  sub_DFF560(v11);
  return v3;
}

