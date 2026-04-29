__int64 __fastcall sub_1D1DD0(__int64 a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h]

  v8 = *(_QWORD *)(a1 + 40);
  v9 = j__qalloc_or_throw(80);
  v12 = v9 + 32;
  v13 = v9 + 48;
  *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 72) = 0;
  sub_32B5A0(v9, v8);
  *(_DWORD *)v9 = a2;
  if ( a2 > 62 )
    *(_DWORD *)(v9 + 4) |= 0x10u;
  if ( a3 )
    sub_120CC0(v12, a3);
  if ( a4 )
    sub_120CC0(v13, a4);
  if ( a5 )
    sub_120CC0(v9 + 64, a5);
  if ( (unsigned int)sub_163350(*(_QWORD *)(a1 + 16), v9, 6) && !*(_DWORD *)v9 )
  {
    if ( v9 )
    {
      sub_1188E0(v9 + 64);
      sub_1188E0(v13);
      sub_1188E0(v12);
      j__qfree(v9);
    }
    return 0;
  }
  else
  {
    v10 = sub_B0CD0(*(_QWORD **)(a1 + 16), v9);
    sub_32B9B0(*(_QWORD *)(a1 + 16), v8, *(unsigned __int16 *)(a1 + 50));
  }
  return v10;
}
