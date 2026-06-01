__int64 __fastcall sub_DA4EC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // al
  unsigned int v6; // edx
  __int64 v8; // rax
  unsigned __int8 **v9; // rax
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int64 v13; // [rsp+14h] [rbp-34h] BYREF
  char v14; // [rsp+1Ch] [rbp-2Ch]

  v5 = sub_CDA990(a3);
  v6 = 1;
  if ( !v5 )
    return v6;
  v8 = sub_E0E500(a1);
  v6 = 0;
  if ( (*(_BYTE *)(v8 + 1) & 8) == 0 )
    return v6;
  v12 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v9 = (unsigned __int8 **)sub_E0FE60(a1, &v12, 2370, 0);
  v10 = (__int64 *)v9;
  if ( v9 )
  {
    sub_AC60B0(v9, a4, 2u);
    v11 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
    v14 = 1;
    v13 = v11;
    sub_AC88D0(v10, &v13);
  }
  else
  {
    sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
  }
  return 0;
}

