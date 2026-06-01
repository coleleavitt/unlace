unsigned __int64 __fastcall sub_51B170(char a1)
{
  __int64 v1; // rbp
  unsigned int i; // r12d
  __int64 v3; // rdx
  __int64 j; // r12
  __int64 v5; // rax
  __int64 k; // r12
  __int64 v7; // rax
  _BYTE v9[8]; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v10[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+418h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v1 = qword_2CCB598;
  netnode_check(v9, "$ srareas", 0, 0);
  if ( (unsigned __int8)netnode_exist(v9)
    && *(_DWORD *)(v1 + 996) == 32
    && (a1 || sub_7BEB80(v9, v1, 103) != -1 || sub_7BEB80(v9, v1, 105) != -1) )
  {
    for ( i = 97; i != 103; ++i )
    {
      v3 = i;
      sub_7BF370(v9, v1, v3);
    }
    for ( j = sub_7BEB80(v9, v1, 103); j != -1; j = sub_7BEBF0(v9, v1, j, 103) )
    {
      v5 = sub_7BE950(v9, v1, j, v10, 1024, 103);
      if ( v5 > 0 )
      {
        sub_7BE7C0(v9, v1, j, v10, v5, 97);
        sub_7BE850(v9, v1, j, 103);
      }
    }
    for ( k = sub_7BEB80(v9, v1, 105); k != -1; k = sub_7BEBF0(v9, v1, k, 105) )
    {
      v7 = sub_7BE950(v9, v1, k, v10, 1024, 105);
      if ( v7 > 0 )
      {
        sub_7BE7C0(v9, v1, k, v10, v7, 99);
        sub_7BE850(v9, v1, k, 105);
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}
