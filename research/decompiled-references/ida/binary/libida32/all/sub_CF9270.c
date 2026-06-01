__int64 __fastcall sub_CF9270(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  unsigned int v8; // ebp
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  _BYTE v13[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v14[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CCC510 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  v8 = 0;
  if ( !v7 )
  {
    v10 = a1[22];
    sub_DFDA20(v10, 48);
    sub_DFF520(v13);
    sub_DFDA50(v10, 48);
    v11 = a1[50];
    v8 = sub_DA69E0(a1, a2, v11 + 40);
    if ( (_BYTE)v8 )
    {
      sub_DFF4E0(
        v14,
        *(_QWORD *)(v11 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v11 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v11 + 40)));
      v8 = sub_DA8220(a1, a2, v14);
      if ( (_BYTE)v8 )
      {
        v12 = sub_CEACF0((__int64)v14);
        sub_DFF5C0(v12, v13);
      }
      sub_DFF560(v14);
    }
    sub_DFF560(v13);
  }
  return v8;
}

