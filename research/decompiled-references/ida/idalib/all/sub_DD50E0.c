__int64 __fastcall sub_DD50E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v6; // r12
  __int64 v7; // r13
  _DWORD *v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v9);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v9, 4);
  if ( !(_BYTE)v3 )
    goto LABEL_2;
  v4 = v3;
  if ( (unsigned __int8)sub_E21C70(a1) )
  {
    v6 = v9[0];
    v7 = v11;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( v10 )
  {
    v6 = v9[0];
    v7 = v11;
    goto LABEL_10;
  }
  if ( !sub_DB0AB0((__int64)v9) )
  {
    v6 = v9[0];
    v7 = v11;
LABEL_8:
    if ( *(_BYTE *)(sub_CFDF60((__int64)v9) + 60) && v12 == v6 )
    {
      v8 = (_DWORD *)(v7 + v6 + 72);
      goto LABEL_11;
    }
LABEL_10:
    v8 = (_DWORD *)(v7 + v6 + 40);
LABEL_11:
    --*v8;
    goto LABEL_3;
  }
LABEL_2:
  v4 = 0;
LABEL_3:
  sub_E232A0(v9);
  return v4;
}
