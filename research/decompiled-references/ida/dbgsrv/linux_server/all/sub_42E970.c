/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E970
// Address: 0x000000000042E970

//----- (000000000042E970) ----------------------------------------------------
__int64 __fastcall sub_42E970(_QWORD *a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // rbp
  __int64 v3; // rax
  size_t v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rax
  void *v7; // rsi
  void *v9; // rax
  const void *v10; // rsi
  void *v11; // rax

  v1 = (_DWORD *)operator new(0x20u);
  v1[6] = 0;
  v2 = v1;
  *v1 = 1;
  v3 = operator new(0x18u);
  v4 = a1[6];
  *(_QWORD *)v3 = 0;
  v5 = (_QWORD *)v3;
  *(_OWORD *)(v3 + 8) = 0;
  if ( v4 )
  {
    v9 = sub_4814F0(v4);
    *v5 = v9;
    v10 = (const void *)a1[5];
    v5[2] = v4;
    memcpy(v9, v10, v4);
    v5[1] = v4;
  }
  v6 = a1[44];
  *((_QWORD *)v2 + 2) = v5;
  v7 = (void *)a1[43];
  if ( a1[45] < (unsigned __int64)(v6 + 1) )
  {
    v11 = sub_481540((__int64)(a1 + 43), v7, v6 + 1, 8u);
    a1[43] = v11;
    v7 = v11;
    v6 = a1[44];
  }
  *((_QWORD *)v7 + v6) = v2;
  ++a1[44];
  return 0;
}
