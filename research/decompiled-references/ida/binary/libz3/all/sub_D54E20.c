__int64 __fastcall sub_D54E20(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  void *v6; // r14
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  bool v11; // zf
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // [rsp+8h] [rbp-70h]
  __int64 v16; // [rsp+18h] [rbp-60h]
  _QWORD v17[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF

  v16 = *(_QWORD *)(a1 + 8);
  v17[0] = 0;
  v17[1] = 0;
  v6 = qword_1C7F2C0;
  v18[0] = 1;
  v18[1] = 0;
  if ( a3 > 0x7FFFFFFE )
    sub_182C550(qword_1C7F2C0, v17);
  else
    LODWORD(v17[0]) = a3;
  sub_182CBA0(v6, v18);
  BYTE4(v18[0]) &= ~1u;
  LODWORD(v18[0]) = 1;
  v7 = sub_1674520(a1 + 232, v17, 3);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v15, v18);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  if ( a3 > 4 )
  {
    sub_1872CE0("");
    sub_1873130(114, 3731);
  }
  result = sub_14DE480((int)a1 + 16, a2, v7, (_DWORD)a4, v8, v9);
  if ( (_DWORD)result != 5 )
  {
    if ( !v7 )
      return result;
    goto LABEL_8;
  }
  result = sub_14DC5D0(a1 + 16, a2, v7);
  v12 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v13 = *a4;
  if ( *a4 )
  {
    v14 = a4[1];
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v14, v13);
  }
  *a4 = v12;
  if ( v7 )
  {
LABEL_8:
    v11 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v16, v7);
  }
  return result;
}

