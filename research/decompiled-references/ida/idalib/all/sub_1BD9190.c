__int64 __fastcall sub_1BD9190(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rsi
  const void *v7; // r13
  int *v8; // r15
  __int64 v9; // r14
  signed __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-60h]
  void *v13[2]; // [rsp+8h] [rbp-58h] BYREF
  _QWORD *v14; // [rsp+18h] [rbp-48h]

  if ( !**(_BYTE **)a1 )
    return 1;
  v4 = **(_QWORD **)(a1 + 8);
  *(_OWORD *)v13 = 0;
  v14 = nullptr;
  v5 = (_QWORD *)operator new(8u);
  v6 = *(_QWORD *)(a1 + 16);
  *v5 = v4;
  v14 = v5 + 1;
  v13[1] = v5 + 1;
  v13[0] = v5;
  sub_1BD8FC0((__int64)v13, v6);
  v7 = v13[0];
  v8 = *(int **)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = (char *)v13[1] - (char *)v13[0];
  v11 = sub_EEB7E0(**(_QWORD **)(a1 + 8), v6, 0.0);
  result = sub_18C4330(v9, v11, *v8, v7, v10 >> 3, a2);
  if ( v13[0] )
  {
    v12 = result;
    operator delete(v13[0]);
    return v12;
  }
  return result;
}
