__int64 __fastcall sub_56C4B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  void *v7; // rbp
  int v8; // ebp
  int v10; // r14d
  int v11; // r13d
  int v12; // eax
  int v14; // [rsp-8h] [rbp-38h]
  int v15[2]; // [rsp+0h] [rbp-30h]
  void *v16; // [rsp+10h] [rbp-20h]

  if ( a1 != *(_QWORD *)(a2 + 8) )
    return 0;
  v16 = v7;
  v8 = a3;
  if ( a1 != *(_QWORD *)(a3 + 8) )
    return 0;
  v10 = a5;
  v11 = a6;
  if ( sub_56AD10(a2 + 16, a3 + 16, a4, a5, a6) )
    return 0;
  v12 = sub_186B270(0x40u);
  sub_5739C0(v12, a2, v8, a4, v10, v11, v14, v12, v6, v16);
  return *(_QWORD *)v15;
}

