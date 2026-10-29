__int64 __fastcall get_array_parameters(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[15]; // [rsp+19h] [rbp-2Fh] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = ea2node(a2);
  result = netnode_supval(v2, 5, v5, 15, 83);
  if ( result <= 2 )
    return -1;
  if ( a1 )
  {
    v4[0] = v5;
    v4[1] = &v5[result];
    *a1 = unpack_dd(v4);
    a1[1] = unpack_dd(v4);
    a1[2] = unpack_dd(v4);
    return 12;
  }
  return result;
}

