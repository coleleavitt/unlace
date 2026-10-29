__int64 __fastcall sub_D48400(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v18[6]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v19[6]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 v20; // [rsp+70h] [rbp-48h]

  v3 = sub_D25090(*(_QWORD *)(a1 + 176));
  v4 = *(_QWORD *)(a1 + 176);
  v17[0] = v3;
  v17[1] = v5;
  v6 = sub_E21760(v4, 48);
  v7 = *(_DWORD *)(v6 + 24);
  if ( !v7 || v7 == 2 )
  {
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_6;
  }
  else if ( v7 != 3 && !*(_QWORD *)(v6 + 40) && !*(_QWORD *)v6 )
  {
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_D2F5E0((__int64)v17) )
  {
    v8 = sub_DC8350(a1, a2, v6);
    if ( !(_BYTE)v8 )
      return v8;
    v8 = sub_D2F5E0((__int64)v17);
    if ( (_BYTE)v8 )
      goto LABEL_7;
    goto LABEL_15;
  }
LABEL_6:
  v8 = sub_D2F5E0((__int64)v17);
  if ( (_BYTE)v8 )
  {
LABEL_7:
    v9 = sub_CFDF60(v6);
    v10 = *(_QWORD *)(a1 + 176);
    v11 = *(unsigned __int8 *)(v9 + 60);
    if ( (_BYTE)v11 && !sub_CFE630((unsigned int *)v6) )
    {
      sub_CFE430((__int64)v18, v6, 0);
      sub_CFE7A0((__int64)v19, v18);
      v16 = sub_E216C0(v10, 48);
      sub_E23260(v16);
      sub_E232A0(v19);
      v8 = v11;
      sub_E232A0(v18);
    }
    else
    {
      v12 = sub_E216C0(v10, 48);
      sub_E231E0(v12, v6);
    }
    return v8;
  }
LABEL_15:
  sub_D47F70((__int64)v19, a1, a2, (__int64)v17, v6, 0);
  v8 = v20;
  if ( v20 )
  {
    v14 = *(_QWORD *)(a1 + 176);
    sub_CFE7A0((__int64)v18, v19);
    v15 = sub_E216C0(v14, 48);
    sub_E23260(v15);
    sub_E232A0(v18);
    if ( v20 )
      sub_E232A0(v19);
  }
  return v8;
}
