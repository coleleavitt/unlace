__int64 __fastcall sub_6667E0(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 i; // rbx
  unsigned int v6; // eax
  unsigned int v8; // eax
  _DWORD v9[66]; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v10; // [rsp+108h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v3 = a3[1];
    if ( !v3 )
    {
      v8 = ea2node(a2);
      netnode_supdel(v8, 17, 83);
      *(_DWORD *)(a1 + 1548) = -1;
      return 1;
    }
    if ( v3 <= 0x3F )
    {
      v9[0] = a3[1];
      v4 = *a3;
      for ( i = 0; i != v3; v9[i] = *(_DWORD *)(v4 + 4 * i - 4) )
        ++i;
      v6 = ea2node(a2);
      netnode_supset(v6, 17, v9, 4 * (int)i + 4, 83);
      *(_DWORD *)(a1 + 1548) = 1;
      return 1;
    }
  }
  return 0;
}

