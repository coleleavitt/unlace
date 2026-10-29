__int64 __fastcall sub_3FACB0(__int64 a1, double a2, __m128 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r14
  int v8; // r12d
  __int64 v9; // r13

  v3 = sub_3FA4D0((__int64 *)a1);
  if ( !(_BYTE)v3 )
    return v3;
  v5 = *(_QWORD *)a1;
  v6 = *(int *)(a1 + 8);
  v7 = *(_QWORD *)a1 + 40 * v6 + 64;
  v8 = sub_3F9DC0(*(_QWORD *)a1, v6, *(_DWORD *)(a1 + 12), a2);
  if ( v8 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 832LL) + 468LL) )
  {
    if ( !under_debugger )
      sub_383060(0xC8C0u, a2);
    BUG();
  }
  *(_QWORD *)(*(_QWORD *)a1 + 880LL) = *(_QWORD *)(v5 + 40);
  v9 = *(_QWORD *)a1;
  sub_3FA390(*(_QWORD *)a1, v7);
  sub_3F7230(v9, v8, *(_DWORD *)(a1 + 12), a2, a3);
  *(_BYTE *)(a1 + 16) = 1;
  return v3;
}
