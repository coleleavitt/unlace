__int64 __fastcall sub_DBF980(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+28h] [rbp-30h]

  v3 = a3;
  v4 = *(_QWORD *)sub_E21760(a1, 8);
  sub_E21790(a1, 8);
  sub_E1EE80(v11);
  if ( v12 )
  {
    v7 = v11[0];
    v5 = v13;
LABEL_9:
    v8 = (_QWORD *)(v5 + v7 + 40);
    goto LABEL_10;
  }
  v5 = v13;
  v6 = *(_QWORD *)(v13 + 32);
  if ( *(_DWORD *)(v6 + 24) != v14 && v14 )
    v6 = *(_QWORD *)(v13 + v14 + 32);
  v7 = v11[0];
  if ( !*(_BYTE *)(v6 + 60) )
    goto LABEL_9;
  v8 = (_QWORD *)(v13 + v14 + 72);
  if ( v14 != v11[0] )
    goto LABEL_9;
LABEL_10:
  sub_E232A0(v11);
  v9 = *(_QWORD *)(a2 + 160);
  *v8 = v4;
  *(_BYTE *)(v9 + v3 + 4) |= 2u;
  return 1;
}
