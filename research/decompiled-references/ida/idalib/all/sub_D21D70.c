__int64 __fastcall sub_D21D70(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int8 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+Fh] [rbp-D9h] BYREF
  unsigned int v16[6]; // [rsp+10h] [rbp-D8h] BYREF
  int v17; // [rsp+28h] [rbp-C0h]
  __int64 v18; // [rsp+30h] [rbp-B8h]
  __int64 v19; // [rsp+38h] [rbp-B0h]
  _QWORD v20[6]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v21[6]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int8 v22; // [rsp+A0h] [rbp-48h]

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = *(_QWORD *)(a1 + 560);
    v5 = *(_QWORD *)(a1 + 1232);
    v6 = a1 + 384;
    *(_QWORD *)(a1 + 1240) = *a2;
    v7 = *(_BYTE *)sub_E21760(v4, 8);
    sub_E21790(v4, 8);
    v8 = *(_QWORD *)(a1 + 560);
    v15 = v7;
    sub_E21760(v8, 48);
    sub_E23260(v16);
    sub_E21790(v8, 48);
    if ( !v17 || v17 == 2 )
    {
      if ( !v18 )
        goto LABEL_13;
    }
    else if ( v17 != 3 && !(*(_QWORD *)v16 | v19) )
    {
      goto LABEL_13;
    }
    if ( !v15 )
    {
LABEL_8:
      v9 = sub_CFDF60((__int64)v16);
      v10 = *(_QWORD *)(a1 + 560);
      v2 = *(unsigned __int8 *)(v9 + 60);
      if ( (_BYTE)v2 && !sub_CFE630(v16) )
      {
        sub_CFE430((__int64)v20, (__int64)v16, 0);
        sub_CFE7A0((__int64)v21, v20);
        v14 = sub_E216C0(v10, 48);
        sub_E23260(v14);
        sub_E232A0(v21);
        sub_E232A0(v20);
      }
      else
      {
        v2 = 1;
        v11 = sub_E216C0(v10, 48);
        sub_E231E0(v11, v16);
      }
      goto LABEL_11;
    }
    v2 = sub_DC8350(v6, v5, v16);
    if ( !(_BYTE)v2 )
    {
LABEL_11:
      sub_E232A0(v16);
      return v2;
    }
LABEL_13:
    if ( v15 )
    {
      sub_D21750((__int64)v21, v6, v5, &v15, (__int64)v16, 0);
      v2 = v22;
      if ( v22 )
      {
        v12 = *(_QWORD *)(a1 + 560);
        sub_CFE7A0((__int64)v20, v21);
        v13 = sub_E216C0(v12, 48);
        sub_E23260(v13);
        sub_E232A0(v20);
        if ( v22 )
          sub_E232A0(v21);
      }
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  return v2;
}
