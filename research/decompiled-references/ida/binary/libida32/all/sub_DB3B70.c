__int64 __fastcall sub_DB3B70(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  _QWORD v9[3]; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned int v12; // [rsp+28h] [rbp-30h]

  sub_DFB140(v9);
  v2 = sub_DA8420(a1, a2, (__int64)v9, 0);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 176);
    v5 = v9[0];
    v6 = v11;
    if ( !v10 && *(_BYTE *)(sub_CDA220((__int64)v9) + 60) && v12 == v5 )
      v7 = v6 + v12 + 72;
    else
      v7 = v6 + v5 + 40;
    v8 = sub_DFD980(v4, 64);
    sub_DFF4A0(v8, v7);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(v7 + 48);
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v7 + 56);
  }
  sub_DFF560(v9);
  return v2;
}

