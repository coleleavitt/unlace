__int64 __fastcall sub_DD8980(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  char v5; // r13
  _QWORD *v6; // rbp
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rax
  _QWORD v13[3]; // [rsp+0h] [rbp-58h] BYREF
  int v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_BYTE *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = (_QWORD *)sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v7 = sub_DC8DB0(a1, a2, v6, 2);
  if ( !(_BYTE)v7 )
    return v7;
  sub_E23220(v13, v6[4], (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
  if ( v14 )
  {
    v10 = v13[0];
    v11 = v15;
  }
  else
  {
    v9 = sub_CFDF60((__int64)v13);
    v10 = v13[0];
    v11 = v15;
    if ( *(_BYTE *)(v9 + 60) && v13[0] == v16 )
    {
      v12 = (_BYTE *)(v15 + v13[0] + 72);
      goto LABEL_6;
    }
  }
  v12 = (_BYTE *)(v11 + v10 + 40);
LABEL_6:
  *v12 = v5;
  sub_E23CF0(v13);
  sub_E24D00(v13);
  sub_E232A0(v13);
  return v7;
}
