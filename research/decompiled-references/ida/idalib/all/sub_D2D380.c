__int64 __fastcall sub_D2D380(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v17[6]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v18[6]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v19; // [rsp+70h] [rbp-38h]

  v3 = sub_D24B00(*(_QWORD *)(a1 + 176));
  v4 = *(_QWORD *)(a1 + 176);
  v16 = v3;
  v5 = sub_E21760(v4, 48);
  v6 = *(_DWORD *)(v5 + 24);
  if ( !v6 || v6 == 2 )
  {
    if ( !*(_QWORD *)(v5 + 32) )
      goto LABEL_6;
  }
  else if ( v6 != 3 && !*(_QWORD *)(v5 + 40) && !*(_QWORD *)v5 )
  {
LABEL_6:
    if ( v16 )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( v16 )
  {
    v7 = sub_DC8350(a1, a2, v5);
    if ( (_BYTE)v7 )
    {
LABEL_7:
      sub_D2CF30((__int64)v18, a1, a2, (unsigned __int64 *)&v16, v5, 0);
      v7 = v19;
      if ( v19 )
      {
        v8 = *(_QWORD *)(a1 + 176);
        sub_CFE7A0((__int64)v17, v18);
        v9 = sub_E216C0(v8, 48);
        sub_E23260(v9);
        sub_E232A0(v17);
        if ( v19 )
          sub_E232A0(v18);
      }
    }
    return v7;
  }
LABEL_12:
  v10 = sub_CFDF60(v5);
  v11 = *(_QWORD *)(a1 + 176);
  v12 = *(unsigned __int8 *)(v10 + 60);
  if ( !(_BYTE)v12 || sub_CFE630((unsigned int *)v5) )
  {
    v7 = 1;
    v13 = sub_E216C0(v11, 48);
    sub_E231E0(v13, v5);
    return v7;
  }
  sub_CFE430((__int64)v17, v5, 0);
  sub_CFE7A0((__int64)v18, v17);
  v15 = sub_E216C0(v11, 48);
  sub_E23260(v15);
  sub_E232A0(v18);
  sub_E232A0(v17);
  return v12;
}
