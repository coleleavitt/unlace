_QWORD *__fastcall sub_FDD3C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  void *v7; // rdi
  _BYTE *v8; // rdi
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  _BYTE vars10[72]; // [rsp+10h] [rbp+10h] BYREF

  vars10[0] = 0;
  vars8 = 0;
  vars0 = vars10;
  v5 = (_QWORD *)operator new(0x30u);
  *v5 = 0;
  v6 = v5;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  if ( !(unsigned __int8)sub_221B6D0(v5, a2, a3, &vars0) )
  {
    v7 = (void *)v6[3];
    if ( v7 )
      operator delete(v7);
    sub_2218440(v6, a2);
    operator delete(v6, 0x30u);
    sub_21FDF00(vars0, vars8, 1);
  }
  sub_FDC600((__int32 **)v6);
  v8 = vars0;
  *a1 = v6;
  if ( v8 != vars10 )
    operator delete(v8);
  return a1;
}

