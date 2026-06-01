unsigned __int64 __fastcall sub_503270(char a1)
{
  __int64 v1; // rbp
  unsigned int i; // r12d
  __int64 v3; // rdx
  unsigned int j; // r12d
  __int64 v5; // rax
  unsigned int k; // r12d
  __int64 v7; // rax
  _BYTE v9[4]; // [rsp+Ch] [rbp-43Ch] BYREF
  _BYTE v10[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+418h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v1 = qword_2CA1698;
  netnode_check(v9, "$ srareas", 0, 0);
  if ( (unsigned __int8)netnode_exist(v9)
    && *(_DWORD *)(v1 + 828) == 32
    && (a1 || (unsigned int)sub_79B7E0(v9, v1, 103) != -1 || (unsigned int)sub_79B7E0(v9, v1, 105) != -1) )
  {
    for ( i = 97; i != 103; ++i )
    {
      v3 = i;
      sub_79BF70(v9, v1, v3);
    }
    for ( j = sub_79B7E0(v9, v1, 103); j != -1; j = sub_79B840(v9, v1, j, 103) )
    {
      v5 = sub_79B5C0(v9, v1, j, v10, 1024, 103);
      if ( v5 > 0 )
      {
        sub_79B440(v9, v1, j, v10, v5, 97);
        sub_79B4D0(v9, v1, j, 103);
      }
    }
    for ( k = sub_79B7E0(v9, v1, 105); k != -1; k = sub_79B840(v9, v1, k, 105) )
    {
      v7 = sub_79B5C0(v9, v1, k, v10, 1024, 105);
      if ( v7 > 0 )
      {
        sub_79B440(v9, v1, k, v10, v7, 99);
        sub_79B4D0(v9, v1, k, 105);
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

