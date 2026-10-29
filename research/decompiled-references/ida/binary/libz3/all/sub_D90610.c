__int64 *__fastcall sub_D90610(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v10; // rbp
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  v12[0] = 0;
  a1[1] = v4;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( (unsigned __int8)sub_1673C40(a2 + 80, a3, v12) )
  {
    sub_182D020(qword_1C7F2C0, v12);
    v5 = sub_15E1AF0(*(_QWORD *)(a2 + 16));
    v6 = v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v7 = *a1;
    if ( *a1 )
    {
      v8 = a1[1];
      if ( (*(_DWORD *)(v7 + 8))-- == 1 )
        sub_15D7BC0(v8, v7);
    }
    *a1 = v6;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v10, v13);
  return a1;
}

