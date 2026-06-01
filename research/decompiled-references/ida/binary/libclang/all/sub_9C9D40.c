__int64 __fastcall sub_9C9D40(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int8 **v10; // rax
  unsigned __int8 **v11; // r12
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  char v14; // [rsp+8h] [rbp-30h]

  v4 = a3 ^ 1;
  v5 = v4;
  LOBYTE(v5) = a4 | v4;
  if ( a4 | (unsigned __int8)v4 )
    return v5;
  v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = v7;
  v10 = (unsigned __int8 **)sub_A2E130(a1, v7, 2183, 0);
  v11 = v10;
  if ( v10 )
  {
    sub_9B5660(v10, v8);
    v12 = sub_A2CB40(a1);
    sub_9B58B0(v11, (*(_BYTE *)(v12 + 46) & 0x40) != 0);
    v14 = 1;
    v13 = sub_AC7B80(v9);
    sub_839C90((__int64 *)v11, &v13);
  }
  else
  {
    sub_A2CB40(a1);
  }
  return v5;
}

