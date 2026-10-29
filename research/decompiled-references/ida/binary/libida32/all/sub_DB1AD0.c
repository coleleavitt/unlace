__int64 __fastcall sub_DB1AD0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbp
  _BYTE *v8; // rbp
  _QWORD v9[3]; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned int v12; // [rsp+28h] [rbp-30h]

  sub_E05460(v9, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_DA5E00(a1, a2, (__int64)v9, 0);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 176);
    v6 = v11;
    v7 = v9[0];
    if ( !v10 && *(_BYTE *)(sub_CDA220((__int64)v9) + 60) && v12 == v7 )
      v8 = (_BYTE *)(v6 + v12 + 72);
    else
      v8 = (_BYTE *)(v6 + v7 + 40);
    *(_BYTE *)sub_DFD980(v5, 8) = *v8;
  }
  sub_DFF560(v9);
  return v3;
}

