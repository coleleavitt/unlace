__int64 __fastcall sub_DB8B50(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  unsigned int v3; // ebx
  bool v4; // bl
  _QWORD vars0[3]; // [rsp+0h] [rbp+0h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]
  int vars38; // [rsp+38h] [rbp+38h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 64);
  sub_E23260(vars0);
  vars30 = *(_QWORD *)(v2 + 48);
  vars38 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  if ( !vars30 || (*(_BYTE *)(vars30 + 28) & 0x7Fu) - 35 > 3 || (v3 = 0, !(unsigned __int8)sub_B79700(vars30)) )
  {
    if ( !vars18 || vars18 == 2 )
    {
      v4 = 1;
      if ( vars20 )
      {
LABEL_8:
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v4;
        v3 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      v4 = 1;
      if ( vars18 == 3 || vars0[0] | vars28 )
        goto LABEL_8;
    }
    v4 = vars30 != 0;
    goto LABEL_8;
  }
LABEL_9:
  sub_E232A0(vars0);
  return v3;
}
