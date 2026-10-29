__int64 __fastcall sub_65FC50(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = ea2node(a1);
  v2 = netnode_supval(v1, 14, &v4, 4, 65);
  result = 0xFFFFFFFFLL;
  if ( v2 > 0 )
    return (unsigned int)(v4 - 1);
  return result;
}

