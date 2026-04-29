_BOOL8 __fastcall sub_55A0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD v8[135]; // [rsp+0h] [rbp-438h] BYREF

  v8[129] = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_check(a1 + 1037, "$PLUGIN-MAKESIG", 0, 1) )
    return 0;
  v2 = netnode_supval(a1[1037], 0, a1, 4096, 83);
  if ( v2 <= 0 )
    return 0;
  *((_BYTE *)a1 + v2 - 1) = 0;
  v3 = netnode_supval(a1[1037], 1, v8, 1024, 83);
  v4 = v3;
  if ( v3 > 0 )
  {
    a1[1034] = 0;
    v5 = a1[1033];
    v6 = v3 + 1;
    if ( a1[1035] < (unsigned __int64)(v3 + 1) )
    {
      v7 = qvector_reserve(a1 + 1033, v5, v3 + 1, 1);
      a1[1033] = v7;
      v5 = v7;
    }
    a1[1034] = v6;
    *(_BYTE *)(v5 + v4) = 0;
    memmove((void *)a1[1033], v8, v4);
  }
  return netnode_supval(a1[1037], 2, a1 + 1024, 2, 83) >= 0
      && netnode_supval(a1[1037], 3, (char *)a1 + 8194, 2, 83) >= 0
      && netnode_supval(a1[1037], 4, a1 + 1036, 2, 83) >= 0;
}
