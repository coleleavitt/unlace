/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003D660
// Address: 0x000000014003D660

//----- (000000014003D660) ----------------------------------------------------
char __fastcall sub_14003D660(CHAR *a1, __int64 a2)
{
  CHAR *v4; // rbx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  char *v8; // r9
  _BYTE *v9; // rax
  void *Block; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h]
  _BYTE v14[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v15[580]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v16; // [rsp+298h] [rbp+198h]
  __int8 v17[260]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v18[12]; // [rsp+3B4h] [rbp+2B4h] BYREF

  if ( sub_14005EF30(a1) )
    return 1;
  v17[0] = 0;
  Block = nullptr;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v4 = sub_14005D9D0(a1);
    v5 = v12;
    if ( v12 + 1 <= v13 )
    {
      v6 = Block;
    }
    else
    {
      v6 = sub_14005ABE0((__int64)&Block, Block, v12 + 1, 8u);
      Block = v6;
      v5 = v12;
    }
    *((_QWORD *)v6 + v5) = v4;
    v7 = ++v12;
    if ( v4 == a1 )
      break;
    *(v4 - 1) = 0;
    if ( sub_14005EF90(a1) )
    {
      sub_1400621E0(v17, a1, 260);
      v7 = v12;
      break;
    }
  }
  if ( !v7 )
  {
LABEL_17:
    sub_1400621E0(a1, v17, a2);
    if ( Block )
    {
      v12 = 0;
      j_free(Block);
    }
    return 1;
  }
  while ( 1 )
  {
    v8 = *((char **)Block + v7 - 1);
    if ( v7 )
      v12 = v7 - 1;
    if ( v17[0] )
      sub_14005DE20(v17, 260, v17, v8, 0);
    else
      sub_1400621E0(v17, v8, 260);
    v16 = -1;
    if ( (unsigned int)sub_1400635C0(v17, (__int64)v14, v12 != 0 ? 0x10 : 0) )
      break;
    v9 = sub_14005D9D0(v17);
    sub_1400621E0(v9, v15, v18 - v9);
    sub_140063590((__int64)v14);
    v7 = v12;
    if ( !v12 )
      goto LABEL_17;
  }
  sub_140063590((__int64)v14);
  if ( Block )
  {
    v12 = 0;
    j_free(Block);
  }
  return 0;
}
