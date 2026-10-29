__int64 __fastcall get_xrefpos(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  unsigned int v4; // eax
  int v5; // eax
  char *v6; // rdx
  char v7; // al
  char *v8; // [rsp+0h] [rbp-38h] BYREF
  char *v9; // [rsp+8h] [rbp-30h]
  _BYTE v10[6]; // [rsp+12h] [rbp-26h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = ea2node(a2);
  result = netnode_supval(v2, 27, v10, 6, 83);
  if ( result <= 1 )
    return -1;
  if ( a1 )
  {
    v8 = v10;
    v9 = &v10[result];
    v4 = unpack_dd(&v8);
    v5 = node2ea(v4);
    v6 = v8;
    *(_DWORD *)a1 = v5;
    v7 = 0;
    if ( v6 < v9 )
      v7 = *v6;
    *(_BYTE *)(a1 + 4) = v7;
    return 8;
  }
  return result;
}

