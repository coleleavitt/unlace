__int64 __fastcall sub_DCD390(__int64 a1, _QWORD a2, int a3, unsigned __int8 a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // r12
  __int64 v11; // rax
  __int64 v12; // [rsp+4h] [rbp-34h] BYREF
  char v13; // [rsp+Ch] [rbp-2Ch]

  v4 = a3 ^ 1;
  v5 = v4;
  LOBYTE(v5) = a4 | v4;
  if ( a4 | (unsigned __int8)v4 )
    return v5;
  v7 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v8 = *(_QWORD *)(v7 + 8);
  v9 = (unsigned __int8 **)sub_E33C10(a1, v7, 2385, 0);
  v10 = v9;
  if ( v9 )
  {
    sub_AE9DF0(v9, v8, 8u);
    v11 = sub_E32240(a1);
    sub_AE9DF0(v10, (*(_BYTE *)(v11 + 46) & 0x40) != 0, 3u);
    v13 = 1;
    v12 = sub_EEC8C0(v7);
    sub_AEC610((__int64 *)v10, &v12);
  }
  else
  {
    sub_E32240(a1);
  }
  return v5;
}
