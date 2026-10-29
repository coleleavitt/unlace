__int64 __fastcall sub_1114870(__int64 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-90h]
  __int64 v16; // [rsp+20h] [rbp-78h]
  _BYTE v17[48]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 v18; // [rsp+60h] [rbp-38h]

  v14 = a2;
  v15 = a3;
  v7 = sub_2222D70(&v14, "+", 1, 0);
  if ( v7 == -1 )
  {
    v10 = v14;
    v7 = v15;
    v9 = 0;
    v16 = 0;
  }
  else
  {
    v8 = v7 + 1;
    if ( v7 + 1 > v15 )
    {
      v8 = v15;
      v9 = 0;
    }
    else
    {
      v9 = v15 - v8;
    }
    v10 = v14;
    if ( v7 > v15 )
      v7 = v15;
    v16 = v14 + v8;
  }
  *a4 = v10;
  a4[1] = v7;
  if ( v7 == 6 && *(_DWORD *)v10 == 1769234798 && *(_WORD *)(v10 + 4) == 25974 )
  {
    *a4 = sub_227F670();
    a4[1] = v13;
  }
  sub_2274FB0(v17);
  v11 = v18;
  if ( v18 && (sub_2275630(a5, v17), v9) )
    return (unsigned int)sub_11145A0(a1, v16, v9, a5);
  else
    return v11;
}

