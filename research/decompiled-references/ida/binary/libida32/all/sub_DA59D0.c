__int64 __fastcall sub_DA59D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  unsigned int v7; // r14d
  char v8; // al
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // ebp
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  unsigned __int8 **v21; // rax
  unsigned __int8 **v22; // rbx
  __int64 v24; // rax
  _BYTE v25[88]; // [rsp+0h] [rbp-58h] BYREF

  v6 = *(_DWORD *)(a3 + 24);
  if ( v6 == 1 )
  {
    v24 = *(_QWORD *)(a3 + 32);
    v9 = *(_DWORD *)(a3 + 40) + *(_QWORD *)a3;
    v7 = *(_DWORD *)(v24 + 24);
  }
  else
  {
    if ( (unsigned int)(v6 - 2) <= 1 )
      BUG();
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 32LL) + 24LL);
    v8 = sub_CDA990(a3);
    v9 = -1;
    if ( !v8 )
      v9 = *(_DWORD *)a3;
  }
  if ( a4 >= v9 || (v10 = v9 - a4, v11 = 1, v10 < v7) )
  {
    v12 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v16 = sub_F44710(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v15);
    v17 = *(_QWORD *)(a3 + 32);
    v18 = v16;
    sub_DFF430(v25, v17);
    v19 = sub_CDA510((__int64)v25, v17);
    sub_DFF560(v25);
    v20 = v12;
    v11 = 0;
    v21 = (unsigned __int8 **)sub_E0FF50(a1, v20, 2418, 0);
    v22 = v21;
    if ( v21 )
    {
      sub_AC60B0(v21, v19, 8u);
      sub_AC60B0(v22, v18, 8u);
    }
  }
  return v11;
}

