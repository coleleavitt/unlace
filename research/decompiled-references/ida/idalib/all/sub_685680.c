__int64 __fastcall sub_685680(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v9; // rax
  _QWORD v10[69]; // [rsp+0h] [rbp-228h] BYREF

  v10[65] = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v3 = a3[1];
    if ( !v3 )
    {
      v9 = ea2node(a2);
      netnode_supdel(v9, 17, 83);
      *(_DWORD *)(a1 + 1616) = -1;
      return 1;
    }
    if ( v3 <= 0x3F )
    {
      v10[0] = a3[1];
      v4 = *a3;
      for ( i = 0; i != v3; v10[i] = *(_QWORD *)(v4 + 8 * i - 8) )
        ++i;
      v6 = ea2node(a2);
      netnode_supset(v6, 17, v10, 8 * (int)i + 8, 83, v7);
      *(_DWORD *)(a1 + 1616) = 1;
      return 1;
    }
  }
  return 0;
}
