__int64 __fastcall sub_CFFE90(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  int v9; // eax
  __int64 v10; // r14
  int v11; // r13d
  unsigned int v12; // ebx
  _BYTE v13[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CCC510 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  if ( v7 )
    return 0;
  v9 = sub_CFFE60(a1[22]);
  v10 = a1[50];
  v11 = v9;
  if ( !(unsigned __int8)sub_DA69E0(a1, a2, v10 + 40) )
    return 0;
  sub_DFF4E0(
    v13,
    *(_QWORD *)(v10 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v10 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v10 + 40)));
  v12 = sub_DA8220(a1, a2, v13);
  if ( (_BYTE)v12 )
    *(_DWORD *)sub_CE9490((__int64)v13) = v11;
  sub_DFF560(v13);
  return v12;
}

