__int64 __fastcall sub_D66130(_QWORD *a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v7; // r15
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  int v17; // [rsp+0h] [rbp-78h]
  int v19[2]; // [rsp+10h] [rbp-68h]
  int v20[2]; // [rsp+10h] [rbp-68h]
  int v21; // [rsp+18h] [rbp-60h] BYREF
  int v22; // [rsp+20h] [rbp-58h] BYREF
  char v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+30h] [rbp-48h]
  int v25; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+40h] [rbp-38h]
  void *v27; // [rsp+48h] [rbp-30h]

  *(_QWORD *)v19 = a1[62];
  sub_181A6B0(&v21);
  v7 = a1[1];
  v10 = sub_15DC610(v7, a2, a3, a4, v8, v9, v17, a4, v19[0], v21, v22, v23, v24, v25, v26, v27);
  v14 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_15C4FC0(a1[55], v10, (unsigned int)&v21, v11, v12, v13);
  sub_D65DE0(a1, *(_QWORD *)(a2 + 40), (__int64)&v21, a5);
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 8))-- == 1 )
      sub_15D7BC0(v7, v14);
  }
  return sub_182EF00(*(_QWORD *)(*(_QWORD *)v20 + 728LL), &v22);
}

