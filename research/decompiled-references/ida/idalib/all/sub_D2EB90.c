__int64 __fastcall sub_D2EB90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-C0h]
  _QWORD v15[6]; // [rsp+20h] [rbp-A8h] BYREF
  void *v16; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-70h]
  unsigned __int8 v18; // [rsp+80h] [rbp-48h]

  sub_D0AF80((__int64)&v13, *(_QWORD *)(a1 + 176));
  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v3 = *(_DWORD *)(v2 + 24);
  if ( v3 && v3 != 2 )
  {
    if ( v3 != 3 && !*(_QWORD *)(v2 + 40) && !*(_QWORD *)v2 )
      goto LABEL_6;
LABEL_18:
    if ( !(unsigned __int8)sub_CFE940((__int64)&v13) )
    {
      v4 = sub_DC8350(a1, a2, v2);
      if ( !(_BYTE)v4 )
        goto LABEL_13;
    }
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v2 + 32) )
    goto LABEL_18;
LABEL_6:
  sub_CF8960((__int64)&v16, (__int64 *)&v13);
  v4 = v17;
  if ( v17 <= 0x40 )
  {
    LOBYTE(v4) = v16 == nullptr;
    if ( !v16 )
    {
LABEL_10:
      v5 = sub_CFDF60(v2);
      v6 = *(_QWORD *)(a1 + 176);
      v7 = *(unsigned __int8 *)(v5 + 60);
      if ( (_BYTE)v7 && !sub_CFE630((unsigned int *)v2) )
      {
        sub_CFE430((__int64)v15, v2, 0);
        sub_CFE7A0((__int64)&v16, v15);
        v12 = sub_E216C0(v6, 48);
        sub_E23260(v12);
        sub_E232A0(&v16);
        v4 = v7;
        sub_E232A0(v15);
      }
      else
      {
        v8 = sub_E216C0(v6, 48);
        sub_E231E0(v8, v2);
      }
      goto LABEL_13;
    }
  }
  else
  {
    LOBYTE(v4) = v4 == (unsigned int)sub_2206780(&v16);
    if ( v16 )
      operator delete[](v16);
    if ( (_BYTE)v4 )
      goto LABEL_10;
  }
  sub_D2E580((__int64)&v16, a1, a2, (__int64)&v13, v2, 0);
  v4 = v18;
  if ( v18 )
  {
    v10 = *(_QWORD *)(a1 + 176);
    sub_CFE7A0((__int64)v15, &v16);
    v11 = sub_E216C0(v10, 48);
    sub_E23260(v11);
    sub_E232A0(v15);
    if ( v18 )
      sub_E232A0(&v16);
  }
LABEL_13:
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v4;
}
