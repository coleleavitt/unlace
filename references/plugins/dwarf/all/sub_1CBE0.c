__int64 __fastcall sub_1CBE0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v1 = sub_1C690(a1);
  v2 = netnode_altval(v1, 1, 65);
  if ( !v2 )
  {
    v8 = -1;
    netnode_check(&v8, 0, 0, 1);
    v2 = v8;
    v9[0] = v8;
    netnode_supset(v1, 1, v9, 8, 65);
    if ( (debug & 0x400000) != 0 )
      sub_88B80((unsigned int)"idati mappings node set to: %a\n", v2, v4, v5, v6, v7);
  }
  return v2;
}
