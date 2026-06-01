__int64 __fastcall sub_D2EDE0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-F0h]
  unsigned int v13[6]; // [rsp+20h] [rbp-D8h] BYREF
  int v14; // [rsp+38h] [rbp-C0h]
  __int64 v15; // [rsp+40h] [rbp-B8h]
  __int64 v16; // [rsp+48h] [rbp-B0h]
  _QWORD v17[6]; // [rsp+50h] [rbp-A8h] BYREF
  void *v18; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+88h] [rbp-70h]
  unsigned __int8 v20; // [rsp+B0h] [rbp-48h]

  sub_D0AF80((__int64)&v11, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v13, *(_QWORD *)(a1 + 176));
  if ( v14 && v14 != 2 )
  {
    if ( v14 != 3 && !(*(_QWORD *)v13 | v16) )
      goto LABEL_5;
LABEL_17:
    if ( !(unsigned __int8)sub_CFE940((__int64)&v11) )
    {
      v2 = sub_DC8350(a1, a2, v13);
      if ( !(_BYTE)v2 )
        goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v15 )
    goto LABEL_17;
LABEL_5:
  sub_CF8960((__int64)&v18, (__int64 *)&v11);
  v2 = v19;
  if ( v19 <= 0x40 )
  {
    LOBYTE(v2) = v18 == nullptr;
    if ( !v18 )
    {
LABEL_9:
      v3 = sub_CFDF60((__int64)v13);
      v4 = *(_QWORD *)(a1 + 176);
      v5 = *(unsigned __int8 *)(v3 + 60);
      if ( (_BYTE)v5 && !sub_CFE630(v13) )
      {
        sub_CFE430((__int64)v17, (__int64)v13, 0);
        sub_CFE7A0((__int64)&v18, v17);
        v10 = sub_E216C0(v4, 48);
        sub_E23260(v10);
        sub_E232A0(&v18);
        v2 = v5;
        sub_E232A0(v17);
      }
      else
      {
        v6 = sub_E216C0(v4, 48);
        sub_E231E0(v6, v13);
      }
      goto LABEL_12;
    }
  }
  else
  {
    LOBYTE(v2) = v2 == (unsigned int)sub_2206780(&v18);
    if ( v18 )
      operator delete[](v18);
    if ( (_BYTE)v2 )
      goto LABEL_9;
  }
  sub_D2E580((__int64)&v18, a1, a2, (__int64)&v11, (__int64)v13, 0);
  v2 = v20;
  if ( v20 )
  {
    v8 = *(_QWORD *)(a1 + 176);
    sub_CFE7A0((__int64)v17, &v18);
    v9 = sub_E216C0(v8, 48);
    sub_E23260(v9);
    sub_E232A0(v17);
    if ( v20 )
      sub_E232A0(&v18);
  }
LABEL_12:
  sub_E232A0(v13);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v2;
}
