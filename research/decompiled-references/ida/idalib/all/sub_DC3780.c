__int64 __fastcall sub_DC3780(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]

  sub_E23170(v10, *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * a3));
  v3 = *a2;
  v4 = *(_QWORD *)sub_E21760(*a2, 8);
  sub_E21790(v3, 8);
  if ( v11 )
  {
    v6 = v10[0];
    v7 = v12;
  }
  else
  {
    v5 = sub_CFDF60((__int64)v10);
    v6 = v10[0];
    v7 = v12;
    if ( *(_BYTE *)(v5 + 60) && v10[0] == v13 )
    {
      v8 = (_QWORD *)(v12 + v10[0] + 72);
      goto LABEL_4;
    }
  }
  v8 = (_QWORD *)(v7 + v6 + 40);
LABEL_4:
  *v8 = v4;
  sub_E24D00(v10);
  sub_E232A0(v10);
  return 1;
}
