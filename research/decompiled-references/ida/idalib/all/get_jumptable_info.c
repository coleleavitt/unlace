__int64 __fastcall get_jumptable_info(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  _BYTE *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v3 = ea2node(a2);
  result = netnode_supval(v3, 4, v11, 20, 83);
  if ( result <= 1 )
    return -1;
  if ( a1 )
  {
    v10[0] = v11;
    v10[1] = &v11[result];
    v6 = &v11[result];
    if ( (unsigned __int8)is_cvt64(v3, 4, v5) )
    {
      v7 = (unsigned int)unpack_dd(v10);
      if ( v7 == 0xFFFFFFFFLL )
        v7 = -1;
    }
    else
    {
      v7 = unpack_dq(v10);
    }
    *a1 = node2ea(v7);
    if ( (unsigned __int8)is_cvt64(v7, v6, v8) )
    {
      v9 = (unsigned int)unpack_dd(v10);
      if ( (unsigned int)v9 == 0xFFFFFFFFLL )
        v9 = -1;
    }
    else
    {
      v9 = unpack_dq(v10);
    }
    a1[1] = v9;
    return 16;
  }
  return result;
}
