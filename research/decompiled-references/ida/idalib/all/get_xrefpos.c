__int64 __fastcall get_xrefpos(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  char *v8; // rdx
  char v9; // al
  char *v10; // [rsp+0h] [rbp-48h] BYREF
  char *v11; // [rsp+8h] [rbp-40h]
  _BYTE v12[11]; // [rsp+1Dh] [rbp-2Bh] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v3 = ea2node(a2);
  result = netnode_supval(v3, 27, v12, 11, 83);
  if ( result <= 1 )
    return -1;
  if ( a1 )
  {
    v10 = v12;
    v11 = &v12[result];
    if ( (unsigned __int8)is_cvt64(v3, 27, v5) )
    {
      v6 = (unsigned int)unpack_dd(&v10);
      if ( v6 == 0xFFFFFFFFLL )
        v6 = -1;
    }
    else
    {
      v6 = unpack_dq(&v10);
    }
    v7 = node2ea(v6);
    v8 = v10;
    *(_QWORD *)a1 = v7;
    v9 = 0;
    if ( v8 < v11 )
      v9 = *v8;
    *(_BYTE *)(a1 + 8) = v9;
    return 16;
  }
  return result;
}
