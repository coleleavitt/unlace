__int64 __fastcall sub_CA17D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  char v4; // al
  __int64 result; // rax
  __int16 v6; // ax
  __int64 v7; // rdi
  char v8; // r13
  char v9; // bp
  __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v10[0] = *(_QWORD *)a1[1] | 4LL;
  v4 = sub_B4FBC0(a2);
  if ( !(unsigned __int8)sub_C826C0(v3, v4, v10) )
    return 0;
  v6 = sub_CA16E0(*a1, a2, 1u);
  v7 = *a1;
  v8 = v6;
  v9 = HIBYTE(v6);
  v10[0] = *(_QWORD *)a1[1] | 4LL;
  result = sub_C7EBE0(v7, v10);
  if ( !(_BYTE)result )
    return 0;
  if ( v9 )
  {
    if ( v8 )
      return sub_CA1880(*a1, *(_QWORD *)a1[2], *(_QWORD *)a1[1]);
    return 0;
  }
  return result;
}

