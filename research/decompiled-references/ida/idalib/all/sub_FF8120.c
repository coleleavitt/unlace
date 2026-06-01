char __fastcall sub_FF8120(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 *v9; // r13
  __int64 v10; // rbx
  int v12; // ebx
  unsigned int v13; // eax
  int v14; // eax
  __int64 *v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_2244B30(a2, a3);
  v7 = sub_2244E60(a1, a2, a3, v6);
  if ( v7 == -1 )
    v8 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v8 = (__int64 *)(*(_QWORD *)a1 + 8LL * v7);
  sub_FF7E30(v15, v8, 1);
  v9 = v15[0];
  sub_FF7E30(v15, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  if ( v15[0] == v9 )
    return 0;
  v10 = *v9;
  if ( !*(_BYTE *)(*v9 + 24) || (unsigned int)sub_FEAA90(a4) < *(_DWORD *)(v10 + 12) )
    return 0;
  v12 = *(_DWORD *)(v10 + 20);
  v13 = sub_FEAA90(a4);
  if ( v13 == 120 )
  {
    v14 = 4;
    return (v14 & v12) != 0;
  }
  if ( v13 > 0x78 )
  {
    if ( v13 == 200 )
    {
      v14 = 8;
      return (v14 & v12) != 0;
    }
    if ( v13 == 300 )
    {
      v14 = 16;
      return (v14 & v12) != 0;
    }
  }
  else
  {
    if ( v13 == 100 )
    {
      v14 = 1;
      return (v14 & v12) != 0;
    }
    if ( v13 == 110 )
    {
      v14 = 2;
      return (v14 & v12) != 0;
    }
  }
  return sub_FF8240();
}
