__int64 __fastcall sub_DA5370(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 **v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+14h] [rbp-34h] BYREF
  char v11; // [rsp+1Ch] [rbp-2Ch]

  if ( !(unsigned __int8)sub_CDA990(a3) )
    return 1;
  v9 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v6 = (unsigned __int8 **)sub_E0FE60(a1, &v9, 2466, 0);
  v7 = (__int64 *)v6;
  if ( v6 )
  {
    sub_AC60B0(v6, a4, 2u);
    v8 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
    v11 = 1;
    v10 = v8;
    sub_AC88D0(v7, &v10);
  }
  else
  {
    sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
  }
  return 0;
}

