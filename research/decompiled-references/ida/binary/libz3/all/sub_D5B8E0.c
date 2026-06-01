__int64 __fastcall sub_D5B8E0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // r12d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // eax
  __int64 v10; // r15
  void *v11; // r14
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  void *v17; // [rsp+10h] [rbp-78h]
  __int64 v18; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]

  v4 = sub_15C5560(a1 + 432, a2);
  v9 = sub_15C5540((int)a1 + 432, a2, v5, v6, v7, v8);
  v19 = 0;
  v20 = *(_QWORD *)(a1 + 8);
  sub_D5B220(a1, v9, &v19);
  v10 = v19;
  v18 = v20;
  v21 = 1;
  v22 = 0;
  v23 = 1;
  v24 = 0;
  sub_182CBA0(qword_1C7F2C0, &v23);
  LODWORD(v23) = 1;
  BYTE4(v23) &= ~1u;
  sub_1674520(a1 + 232, &v21, (unsigned int)(v4 - 1));
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  sub_182CBA0(v17, &v23);
  v21 = 0;
  v22 = 0;
  v23 = 1;
  v24 = 0;
  sub_182CBA0(qword_1C7F2C0, &v23);
  BYTE4(v23) &= ~1u;
  LODWORD(v23) = 1;
  sub_1674520(a1 + 232, &v21, 1);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  sub_182CBA0(v11, &v23);
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
      return sub_15D7BC0(v18, v10);
  }
  return result;
}

