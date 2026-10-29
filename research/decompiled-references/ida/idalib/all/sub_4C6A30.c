__int64 __fastcall sub_4C6A30(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v1 = a1[1];
  if ( v1 == -1 )
  {
    v4[0] = *a1;
    if ( !(unsigned __int8)netnode_exist(v4) )
      return v1;
    v1 = netnode_altval(v4[0], 1, 65);
    v2 = netnode_altval(v4[0], 2, 65);
  }
  else
  {
    v2 = a1[2];
  }
  return v2 + (v1 << 7);
}
