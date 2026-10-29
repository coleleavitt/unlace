__int64 __fastcall sub_883600(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r12
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  void *v17; // r15
  void *v18; // r12
  __int64 result; // rax
  unsigned int v21; // [rsp+8h] [rbp-90h]
  __int64 v22; // [rsp+18h] [rbp-80h]
  _BYTE v23[16]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v26[72]; // [rsp+50h] [rbp-48h] BYREF

  v5 = *a1;
  v22 = *(_QWORD *)(*a1 + 72);
  sub_17F6290(v25, a3);
  v9 = *(_QWORD *)(v5 + 840);
  if ( !v9 )
  {
    sub_16669E0(v5 + 832);
    v9 = *(_QWORD *)(v5 + 840);
  }
  sub_166A700(v9, (unsigned int)v25, 1, v6, v7, v8);
  v10 = *a1;
  sub_17F6290(v23, a3 + 1);
  v14 = *(_QWORD *)(v10 + 840);
  if ( !v14 )
  {
    sub_16669E0(v10 + 832);
    v14 = *(_QWORD *)(v10 + 840);
  }
  sub_166A700(v14, (unsigned int)v23, 1, v11, v12, v13);
  sub_15E1B70(*(_QWORD *)(v10 + 832));
  v15 = sub_15E1B70(*(_QWORD *)(v5 + 832));
  v16 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  sub_182CBA0(v17, v24);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v18, v26);
  result = sub_7E58C0(*a1, v16);
  if ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 8))-- == 1 )
    {
      v21 = result;
      sub_15D7BC0(v22, v16);
      return v21;
    }
  }
  return result;
}

