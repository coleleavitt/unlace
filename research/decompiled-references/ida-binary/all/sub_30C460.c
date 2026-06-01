__int64 __fastcall sub_30C460(__int64 a1, _DWORD *a2, __int64 a3, double a4)
{
  int v5; // eax
  unsigned int v7; // r14d
  int v8; // eax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *(_DWORD *)(a3 + 84);
  v9[1] = __readfsqword(0x28u);
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)netnode_inited(a4) )
    {
      netnode_check(v9, "$ hidden msg", 0, 0);
      v7 = netnode_exist(v9);
      if ( (_BYTE)v7 )
      {
        v8 = netnode_altval(v9[0], *(int *)(a3 + 80), 65);
        if ( v8 )
        {
          if ( v8 == 0x80000000 )
            v8 = 0;
          *a2 = v8;
          return v7;
        }
      }
    }
    return sub_478260(a1 + 16, a2, a3);
  }
  if ( v5 != 2 || !(unsigned __int8)getinf_flag(45, 16) )
    return sub_478260(a1 + 16, a2, a3);
  return 0;
}
