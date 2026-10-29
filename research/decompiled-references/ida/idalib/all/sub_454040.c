__int64 __fastcall sub_454040(_QWORD *a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*a1 + 940LL) & 1) == 0 )
    return 1;
  netnode_check(v11, "$ memory mappings", 0, 0);
  if ( v11[0] == -1 )
    return 1;
  v6 = a1[321];
  a1[322] = sub_453AA0;
  v2 = sub_508110(v6, a1 + 315, "$ memory mappings", "$ memory mappings", 24);
  if ( (_BYTE)v2 )
  {
    a1[322] = 0;
    sub_504B40(a1 + 315);
    return 1;
  }
  sub_506F50(a1 + 315);
  v7 = a2[1];
  v8 = *a2;
  if ( a2[2] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a2, v8, v7 + 1, 24);
    v7 = a2[1];
    *a2 = v10;
    v8 = v10;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++a2[1];
  sub_35A790((char **)v9);
  return v2;
}
