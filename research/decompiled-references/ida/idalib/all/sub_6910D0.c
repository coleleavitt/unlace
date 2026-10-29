unsigned __int64 __fastcall sub_6910D0(__int64 *a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v1 = (__int64 *)a1[15];
  v2 = a1[16];
  v13 = __readfsqword(0x28u);
  v3 = &v1[v2];
  if ( v1 != v3 )
  {
    do
    {
      v4 = *v1++;
      v12 = v4;
      sub_7BF0F0((int)&v12);
    }
    while ( v3 != v1 );
    v3 = (__int64 *)a1[15];
  }
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
    a1[15] = 0;
    a1[17] = 0;
  }
  netnode_check(&v12, "$ string windows", 0, 0);
  sub_7BF0F0((int)&v12);
  v5 = 0;
  sub_7BF040(a1 + 14, *a1, "$ string windows", 0);
  v7 = *a1;
  v12 = a1[7];
  v6 = v12;
  sub_7BE7C0(a1 + 14, v7, -1, &v12, 8, 65);
  if ( v6 )
  {
    do
    {
      v8 = *(_QWORD *)(a1[6] + 8 * v5);
      sub_690FD0(v8, *a1);
      v9 = *a1;
      v10 = v5++;
      v12 = *(_QWORD *)(v8 + 40);
      sub_7BE7C0(a1 + 14, v9, v10, &v12, 8, 65);
    }
    while ( v6 != v5 );
  }
  *((_BYTE *)a1 + 144) = 0;
  return v13 - __readfsqword(0x28u);
}
