__int64 __fastcall sub_B7DF0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r14
  char v7; // bl
  __int64 v9; // rdx
  unsigned int *v10; // rbx
  unsigned int *i; // r14
  unsigned int v12; // edx
  __int64 v13; // rdi
  char v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-88h] BYREF
  __int64 v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  char v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 320);
  v5 = *(_DWORD *)(v4 + 64);
  if ( a2 )
  {
    v6 = *(_QWORD *)(v4 + 784);
    v18 = nullptr;
    v19 = 0;
    sub_64190((__int64 *)&v18, a2);
    v7 = sub_6FC30(v6, (__int64 *)&v18, 0, v5 - 1);
    qfree();
    if ( v7 )
      return 0;
    v4 = *(_QWORD *)(a1 + 320);
    v5 = *(_DWORD *)(v4 + 64);
  }
  if ( a2 >= v5 )
    sub_B7BA0();
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * a2);
  v10 = *(unsigned int **)(v9 + 368);
  for ( i = &v10[*(_QWORD *)(v9 + 376)]; i != v10; v4 = *(_QWORD *)(a1 + 320) )
  {
    v12 = *v10;
    v13 = *(_QWORD *)(v4 + 784);
    v18 = nullptr;
    v19 = 0;
    v14 = sub_6FC30(v13, (__int64 *)&v18, v12, a2);
    qfree();
    if ( v14 )
      return 0;
    ++v10;
  }
  v19 = 0;
  v18 = off_4DC0E0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = a3;
  v25 = a1 + 64;
  v15 = *(_QWORD *)(v4 + 1544);
  v16 = v15 + 80LL * *(_QWORD *)(v4 + 1552);
  if ( v15 == v16 )
    return 0;
  while ( !(unsigned int)sub_11E9B0(v15, &v18, 0, 0) )
  {
    v15 += 80;
    if ( v16 == v15 )
      return 0;
  }
  return 1;
}
