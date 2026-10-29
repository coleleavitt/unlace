__int64 __fastcall sub_D1E770(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v8; // rbp
  void *v9; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-90h]
  char v11; // [rsp+Ch] [rbp-8Ch]
  int v12; // [rsp+10h] [rbp-88h]
  void *v13; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-70h]
  char v15; // [rsp+2Ch] [rbp-6Ch]
  int v16; // [rsp+30h] [rbp-68h]
  _BYTE v17[24]; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-30h]

  sub_D0AF80((__int64)&v9, *(_QWORD *)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v17);
  sub_E21790(v2, 48);
  v3 = sub_DCBF60(a1, a2, v17);
  if ( !(_BYTE)v3 )
    goto LABEL_13;
  if ( !v18 && v19 && v20 )
  {
    sub_E24D00(v17);
    sub_E23CF0(v17);
  }
  v4 = sub_CFE5B0((__int64)v17);
  if ( v4 )
  {
    sub_B78170(v4);
    v14 = v10;
    if ( v10 > 0x40 )
      sub_2205510(&v13);
    else
      v13 = v9;
    v15 = v11;
    v16 = v12;
    v5 = sub_D0F1C0((__int64)v17);
    v6 = v5;
    if ( *(_DWORD *)(v5 + 8) > 0x40u && *(_QWORD *)v5 )
      operator delete[](*(void **)v5);
    *(_QWORD *)v6 = v13;
    *(_DWORD *)(v6 + 8) = v14;
    *(_BYTE *)(v6 + 12) = v15;
    *(_DWORD *)(v6 + 16) = v16;
LABEL_13:
    sub_E232A0(v17);
    if ( v10 <= 0x40 )
      return v3;
    goto LABEL_14;
  }
  v8 = sub_D0F1C0((__int64)v17);
  sub_C20980(v8, (__int64 *)&v9);
  *(_DWORD *)(v8 + 16) = v12;
  sub_E232A0(v17);
  if ( v10 <= 0x40 )
    return v3;
LABEL_14:
  if ( v9 )
    operator delete[](v9);
  return v3;
}
