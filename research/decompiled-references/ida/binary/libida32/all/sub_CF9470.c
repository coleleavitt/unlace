__int64 __fastcall sub_CF9470(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // edx
  int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // rax
  _BYTE v16[104]; // [rsp+10h] [rbp-68h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CCC510 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  if ( v7 )
    return 0;
  v10 = sub_CE4EC0(a1[22]);
  v11 = a1[50];
  v13 = v12;
  v14 = v10;
  if ( !(unsigned __int8)sub_DA69E0(a1, a2, v11 + 40) )
  {
    return 0;
  }
  else
  {
    sub_DFF4E0(
      v16,
      *(_QWORD *)(v11 + 72),
      (unsigned int)(a3 + *(_DWORD *)(v11 + 40)),
      (unsigned int)(a3 + *(_DWORD *)(v11 + 40)));
    v8 = sub_DA8220(a1, a2, v16);
    if ( (_BYTE)v8 )
    {
      v15 = sub_CEA540((__int64)v16);
      *(_QWORD *)v15 = v14;
      *(_DWORD *)(v15 + 8) = v13;
    }
    sub_DFF560(v16);
  }
  return v8;
}

