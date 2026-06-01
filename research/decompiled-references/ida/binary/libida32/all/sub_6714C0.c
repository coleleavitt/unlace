unsigned __int64 __fastcall sub_6714C0(__int64 *a1)
{
  int *v1; // rbp
  __int64 v2; // rax
  int *v3; // r12
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v13; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v1 = (int *)a1[14];
  v2 = a1[15];
  v14 = __readfsqword(0x28u);
  v3 = &v1[v2];
  if ( v1 != v3 )
  {
    do
    {
      v4 = *v1++;
      v13 = v4;
      sub_79BCF0((int)&v13);
    }
    while ( v3 != v1 );
    v3 = (int *)a1[14];
  }
  if ( v3 )
  {
    a1[15] = 0;
    qfree(v3);
    a1[14] = 0;
    a1[16] = 0;
  }
  netnode_check(&v13, "$ string windows", 0, 0);
  sub_79BCF0((int)&v13);
  v5 = 0;
  sub_79BC40(a1 + 13, *a1, "$ string windows", 0);
  v6 = a1[6];
  v7 = *a1;
  v13 = v6;
  v8 = (unsigned int)v6;
  sub_79B440(a1 + 13, v7, 0xFFFFFFFFLL, &v13, 4, 65);
  if ( (_DWORD)v6 )
  {
    do
    {
      v9 = *(_QWORD *)(a1[5] + 8 * v5);
      sub_6713B0(v9, *a1);
      v10 = *a1;
      v11 = (unsigned int)v5++;
      v13 = *(_DWORD *)(v9 + 32);
      sub_79B440(a1 + 13, v10, v11, &v13, 4, 65);
    }
    while ( v5 != v8 );
  }
  *((_BYTE *)a1 + 136) = 0;
  return v14 - __readfsqword(0x28u);
}

