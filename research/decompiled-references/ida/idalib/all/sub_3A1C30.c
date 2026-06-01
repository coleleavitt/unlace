__int64 __fastcall sub_3A1C30(__int64 *a1)
{
  char *v1; // rbp
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 j; // rbp
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 k; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v19; // [rsp+8h] [rbp-50h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = (char *)dword_23AD7A0;
  v20[1] = __readfsqword(0x28u);
  v2 = *a1;
  v19 = *(_QWORD *)(*a1 + 1536);
  v3 = v19 + 80;
  do
  {
    v4 = *(int *)v1;
    v1 += 4;
    v5 = sub_7BE710(v3, v2, v4, 65);
    v6 = *a1;
    v20[0] = v5;
    sub_7BE7C0(v3, v6, v4, v20, 8, 65);
    v2 = *a1;
  }
  while ( v1 != "$ bptsgrps" );
  sub_3A1A90(*a1);
  v7 = v19 + 88;
  for ( i = sub_7BEB80(v19 + 88, *a1, 65); i != -1; i = sub_7BEBF0(v7, *a1, i, 65) )
  {
    v9 = sub_7BE710(v7, *a1, i, 65);
    v10 = *a1;
    v20[0] = v9;
    sub_7BE7C0(v7, v10, i, v20, 8, 65);
  }
  for ( j = sub_7BEB80(v7, *a1, 80); j != -1; j = sub_7BEBF0(v7, *a1, j, 80) )
  {
    v12 = sub_7BE710(v7, *a1, j, 80);
    v13 = *a1;
    v20[0] = v12;
    sub_7BE7C0(v7, v13, j, v20, 8, 80);
  }
  v14 = v19 + 112;
  for ( k = sub_7BEB80(v19 + 112, *a1, 65); k != -1; k = sub_7BEBF0(v14, *a1, k, 65) )
  {
    v16 = sub_7BE710(v14, *a1, k, 65);
    v17 = *a1;
    v20[0] = v16;
    sub_7BE7C0(v14, v17, k, v20, 8, 65);
  }
  return 1;
}
