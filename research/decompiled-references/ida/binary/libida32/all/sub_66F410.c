unsigned __int64 __fastcall sub_66F410(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  __int64 v6; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  int v12; // r14d
  unsigned int i; // ebx
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 1608);
  v18 = __readfsqword(0x28u);
  sub_419DD0(a2, (int *)(v6 + 104), a3, a4);
  v8 = *(_QWORD *)(v6 + 48);
  if ( (_DWORD)v8 )
  {
    v9 = 0;
    v10 = 8LL * (unsigned int)v8;
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + v9);
      if ( *(_DWORD *)(v11 + 32) != -1 )
        sub_419DD0(a2, (int *)(v11 + 32), a3, a4);
      v9 += 8;
    }
    while ( v10 != v9 );
  }
  v12 = netnode_altval(*(unsigned int *)(v6 + 104), 0xFFFFFFFFLL, 65);
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      v16 = netnode_altval(*(unsigned int *)(v6 + 104), i, 65);
      sub_419DD0(a2, &v16, a3, a4);
      v14 = i;
      v17 = v16;
      sub_79B440(v6 + 104, a2, v14, &v17, 4, 65);
    }
  }
  return v18 - __readfsqword(0x28u);
}

