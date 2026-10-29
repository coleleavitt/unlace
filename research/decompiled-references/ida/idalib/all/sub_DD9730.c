__int64 __fastcall sub_DD9730(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE *v10; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v11);
  sub_E21790(v4, 48);
  v5 = sub_DCA140(a1, a2, (__int64)v11);
  if ( (_BYTE)v5 )
  {
    sub_E23CF0(v11);
    sub_E24D00(v11);
    if ( v12 )
    {
      v8 = v11[0];
      v9 = v13;
    }
    else
    {
      v7 = sub_CFDF60((__int64)v11);
      v8 = v11[0];
      v9 = v13;
      if ( *(_BYTE *)(v7 + 60) && v11[0] == v14 )
      {
        v10 = (_BYTE *)(v13 + v11[0] + 72);
        goto LABEL_6;
      }
    }
    v10 = (_BYTE *)(v9 + v8 + 40);
LABEL_6:
    *v10 = v3;
  }
  sub_E232A0(v11);
  return v5;
}
