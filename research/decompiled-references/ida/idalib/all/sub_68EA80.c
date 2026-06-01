unsigned __int64 __fastcall sub_68EA80(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v6; // r15
  __int64 v8; // r14
  __int64 i; // rbx
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 j; // rbx
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v6 = *(_QWORD **)(a2 + 1800);
  v17 = __readfsqword(0x28u);
  sub_42DA00(a2, v6 + 14, a3, a4);
  v8 = v6[7];
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v10 = *(_QWORD *)(v6[6] + 8 * i);
      if ( *(_QWORD *)(v10 + 40) != -1 )
        sub_42DA00(a2, (__int64 *)(v10 + 40), a3, a4);
    }
  }
  v11 = netnode_altval(v6[14], -1, 65);
  if ( v11 )
  {
    for ( j = 0; j != v11; ++j )
    {
      v15 = netnode_altval(v6[14], j, 65);
      sub_42DA00(a2, &v15, a3, a4);
      v13 = j;
      v16 = v15;
      sub_7BE7C0(v6 + 14, a2, v13, &v16, 8, 65);
    }
  }
  return v17 - __readfsqword(0x28u);
}
