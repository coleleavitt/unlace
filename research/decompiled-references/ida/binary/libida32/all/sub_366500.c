__int64 __fastcall sub_366500(__int64 a1)
{
  int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8);
  netnode_kill((int)&v2);
  return 0;
}

