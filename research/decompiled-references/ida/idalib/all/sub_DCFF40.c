__int64 __fastcall sub_DCFF40(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbp
  unsigned int v13; // eax
  _BYTE v14[48]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  unsigned int v18; // [rsp+58h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v14);
  sub_E21790(v4, 48);
  v5 = sub_DCC160(a1, a2, (__int64)v14, 0);
  if ( !(_BYTE)v5 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a1 + 176);
  sub_CFE430((__int64)v15, (__int64)v14, a3);
  if ( v16 )
  {
    v9 = v15[0];
    v10 = v17;
LABEL_5:
    v11 = v10 + v9 + 40;
    goto LABEL_6;
  }
  v8 = sub_CFDF60((__int64)v15);
  v9 = v15[0];
  v10 = v17;
  if ( !*(_BYTE *)(v8 + 60) )
    goto LABEL_5;
  v11 = v17 + v18 + 72;
  if ( v18 != v15[0] )
    goto LABEL_5;
LABEL_6:
  v12 = sub_E216C0(v7, 24);
  v13 = *(_DWORD *)(v11 + 8);
  *(_DWORD *)(v12 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2205510(v12);
  else
    *(_QWORD *)v12 = *(_QWORD *)v11;
  *(_BYTE *)(v12 + 12) = *(_BYTE *)(v11 + 12);
  *(_DWORD *)(v12 + 16) = *(_DWORD *)(v11 + 16);
  sub_E232A0(v15);
LABEL_2:
  sub_E232A0(v14);
  return v5;
}
