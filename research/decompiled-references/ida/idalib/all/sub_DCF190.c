__int64 __fastcall sub_DCF190(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+0h] [rbp-58h] BYREF
  int v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned int v16; // [rsp+28h] [rbp-30h]

  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DCC160(a1, a2, v4, 0);
  if ( !(_BYTE)v5 )
    return v5;
  v7 = *(_QWORD *)(a1 + 176);
  sub_CFE430((__int64)v13, v4, a3);
  if ( v14 )
  {
    v9 = v13[0];
    v10 = v15;
  }
  else
  {
    v8 = sub_CFDF60((__int64)v13);
    v9 = v13[0];
    v10 = v15;
    if ( *(_BYTE *)(v8 + 60) )
    {
      v11 = v15 + v16 + 72;
      if ( v16 == v13[0] )
        goto LABEL_6;
    }
  }
  v11 = v10 + v9 + 40;
LABEL_6:
  v12 = sub_E216C0(v7, 48);
  sub_E231E0(v12, v11);
  sub_E232A0(v13);
  return v5;
}
