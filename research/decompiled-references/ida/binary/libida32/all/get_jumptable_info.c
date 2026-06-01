__int64 __fastcall get_jumptable_info(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  unsigned int v4; // eax
  _QWORD v5[3]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v6[10]; // [rsp+1Eh] [rbp-2Ah] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v2 = ea2node(a2);
  result = netnode_supval(v2, 4, v6, 10, 83);
  if ( result <= 1 )
    return -1;
  if ( a1 )
  {
    v5[0] = v6;
    v5[1] = &v6[result];
    v4 = unpack_dd(v5);
    *a1 = node2ea(v4);
    a1[1] = unpack_dd(v5);
    return 8;
  }
  return result;
}

