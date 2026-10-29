unsigned __int64 __fastcall sub_5075D0(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  __int64 v5; // rbp
  __int64 v7; // r13
  unsigned int i; // ebp
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rbp
  __int64 j; // r12
  __int64 v14; // [rsp+8h] [rbp-50h]
  int v15; // [rsp+10h] [rbp-48h] BYREF
  int v16; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 1592);
  v17 = __readfsqword(0x28u);
  v7 = v5 + 8;
  v14 = v5;
  sub_419DD0(a2, (int *)(v5 + 8), a3, a4);
  if ( *(_DWORD *)(v5 + 8) != -1 )
  {
    for ( i = 0; ; ++i )
    {
      v10 = sub_79B3A0(v7, a2, i, 65);
      v15 = v10 - 1;
      if ( !v10 )
        break;
      sub_419CF0(a2, &v15, a3, a4);
      v9 = i;
      v16 = v15 + 1;
      sub_79B440(v7, a2, v9, &v16, 4, 65);
    }
    if ( *(_DWORD *)(v14 + 64) != 3 )
    {
      v11 = *(_QWORD *)(v14 + 16);
      for ( j = v11 + (*(_QWORD *)(v14 + 24) << 6); v11 != j; v11 += 64 )
        sub_419DD0(a2, (int *)(v11 + 56), a3, a4);
    }
  }
  return v17 - __readfsqword(0x28u);
}

