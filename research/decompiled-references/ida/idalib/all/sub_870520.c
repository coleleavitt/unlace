__int64 __fastcall sub_870520(__int64 a1, int a2)
{
  unsigned int *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v6; // ecx
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  int v9; // r13d
  __int64 v10; // rcx

  v2 = *(unsigned int **)a1;
  if ( a2 != 2 )
  {
    sub_86B8E0(*(unsigned int **)a1, 32, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8);
    v6 = *(_DWORD *)(a1 + 76);
    if ( a2 <= 7 )
    {
      v9 = 16;
      while ( 1 )
      {
        v10 = v9 + v6;
        v9 += 8;
        sub_86B8E0(v2, 32, 142, v10, 1, 0);
        if ( 8 * a2 == v9 )
          break;
        v6 = *(_DWORD *)(a1 + 76);
      }
    }
    else
    {
      sub_86C730(v2, 4, v6 + 16LL);
      sub_86B8E0(v2, 32, 12, 0, 127, a2 - 2);
      v7 = sub_868BC0((__int64)v2);
      sub_86B8E0(v2, 32, 132, 0, 1, 0);
      sub_86D900(v2, 0x40u, 4, 0, 4, 0, 0x7Fu, 8);
      if ( !*v2 )
      {
        v2[36] = 0;
        sub_86CA20(v2, 0x2D2B2928u, 12, 0, 12, 0, 127, 1);
      }
      v8 = sub_868C70((__int64)v2, 1);
      if ( v7 && v8 )
      {
        v8[2] &= ~1uLL;
        v8[3] = v7;
      }
    }
  }
  sub_86B8E0(v2, 32, 12, 0, 137, 0);
  v3 = *(int *)(a1 + 104);
  if ( (_DWORD)v3 )
    sub_86B8E0(v2, 32, 142, v3, 127, 0);
  v4 = *(int *)(a1 + 108);
  if ( (_DWORD)v4 )
    sub_86B8E0(v2, 32, 142, v4, 127, 0);
  sub_86B8E0(v2, 32, 1, 0, 142, *(int *)(a1 + 80));
  return sub_86B8E0(v2, 32, 12, 0, 140, 8);
}
