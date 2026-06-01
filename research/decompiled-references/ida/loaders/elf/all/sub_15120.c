unsigned __int64 __fastcall sub_15120(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // edx
  int v12; // r9d
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v3 = *(_WORD *)(a2 + 54) == 0;
  v4 = *(_QWORD *)(a2 + 80);
  v14 = __readfsqword(0x28u);
  if ( v3 && v4 )
    sub_40E60(a1, *(_QWORD *)(a2 + 56), v4, ".", "");
  netnode_check(&v13, "$ got", 0, 0);
  if ( (unsigned __int8)netnode_exist(&v13) )
  {
    v7 = netnode_altval(v13, 0, 65);
    v8 = node2ea(v7 - 1);
    if ( v8 != -1 )
    {
      v9 = *(_DWORD *)(a1 + 396);
      if ( a3 >= v9 )
      {
        v10 = a3 + *(_DWORD *)(a1 + 392) - v9;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 508LL) == 2 )
        {
          v11 = 8 * v10;
          v12 = 12;
        }
        else
        {
          v11 = 4 * v10;
          v12 = 4;
        }
        sub_42050(a1, v11 + v8, v4, v4, 0, v12, 0, 8, 0);
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}

