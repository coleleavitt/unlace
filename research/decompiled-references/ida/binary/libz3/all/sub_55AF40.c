void __fastcall sub_55AF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v14[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15[9]; // [rsp+20h] [rbp-48h] BYREF

  sub_55A4F0(v14, a1, a2, a5);
  sub_55A4F0(v15, a3, a2, a6);
  sub_559460(a1, v15, a4);
  sub_558AF0(a1, v14, a4);
  v7 = v14[0];
  v8 = v14[1];
  sub_5598F0(a1, a2);
  v9 = v15[0];
  if ( v15[0] )
  {
    v10 = v15[1];
    v11 = (*(_DWORD *)(v15[0] + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
  if ( v7 )
  {
    v11 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v8, v7);
  }
}

