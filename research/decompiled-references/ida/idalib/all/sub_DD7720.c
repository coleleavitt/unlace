__int64 __fastcall sub_DD7720(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned int v9; // eax
  _QWORD v10[3]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned int v13; // [rsp+28h] [rbp-30h]

  sub_E1EE80(v10);
  v2 = sub_DCC160(a1, a2, (__int64)v10, 0);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 176);
    v5 = v10[0];
    v6 = v12;
    if ( !v11 && *(_BYTE *)(sub_CFDF60((__int64)v10) + 60) && v13 == v5 )
      v7 = v6 + v13 + 72;
    else
      v7 = v6 + v5 + 40;
    v8 = sub_E216C0(v4, 24);
    v9 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v8 + 8) = v9;
    if ( v9 > 0x40 )
      sub_2205510(v8);
    else
      *(_QWORD *)v8 = *(_QWORD *)v7;
    *(_BYTE *)(v8 + 12) = *(_BYTE *)(v7 + 12);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(v7 + 16);
  }
  sub_E232A0(v10);
  return v2;
}
