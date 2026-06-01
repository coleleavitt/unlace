__int64 __fastcall sub_D51670(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // r14
  __int64 result; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // [rsp+0h] [rbp-78h]
  int v18; // [rsp+8h] [rbp-70h]
  void *v19; // [rsp+10h] [rbp-68h]
  void *v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]

  v18 = sub_15C5560(a1 + 432, a2);
  v22 = 0;
  v23 = 0;
  v8 = sub_15C5540((int)a1 + 432, a2, v4, v5, v6, v7);
  v9 = *(_QWORD *)(a1 + 8);
  v24 = 1;
  v21 = v9;
  v17 = a1 + 232;
  v25 = 0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  BYTE4(v24) &= ~1u;
  LODWORD(v24) = 1;
  v10 = sub_1674520(a1 + 232, &v22, v8);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v19, &v24);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v22 = 0;
  v23 = 0;
  v24 = 1;
  v25 = 0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  LODWORD(v24) = 1;
  BYTE4(v24) &= ~1u;
  sub_1674520(v17, &v22, (unsigned int)(v18 - 1));
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v20, &v24);
  v22 = 1;
  v23 = 0;
  v24 = 1;
  v25 = 0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  BYTE4(v24) &= ~1u;
  LODWORD(v24) = 1;
  sub_1674520(v17, &v22, 1);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v11, &v24);
  result = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v13 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v14 = *a3;
  if ( *a3 )
  {
    v15 = a3[1];
    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v15, v14);
  }
  *a3 = v13;
  if ( v10 )
  {
    v16 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v21, v10);
  }
  return result;
}

