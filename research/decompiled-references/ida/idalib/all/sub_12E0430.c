__int64 __fastcall sub_12E0430(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 73) )
    return 0;
  sub_12DCD30(*(_QWORD *)(a1 + 24) + 32LL, a2 + 4);
  sub_12DD050(*(_QWORD *)(a1 + 24) + 56LL, a2 + 7);
  sub_11189B0(*(_QWORD *)(a1 + 24) + 600LL, a2 + 75);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 80);
  v6 = *(_QWORD *)(v5 + 8);
  v10[0] = v6;
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    v4 = *(_QWORD *)(a1 + 8);
  }
  sub_1304620(&v9, a2[75], (a2[76] - a2[75]) >> 5, *(_QWORD *)(v4 + 48), v10);
  v7 = v9;
  v8 = *(_QWORD *)(v5 + 8);
  v9 = 0;
  *(_QWORD *)(v5 + 8) = v7;
  if ( v8 )
  {
    sub_12E0400((volatile signed __int32 *)(v8 + 8));
    if ( v9 )
      sub_12E0400((volatile signed __int32 *)(v9 + 8));
  }
  if ( v10[0] )
    sub_12E0400((volatile signed __int32 *)(v10[0] + 8LL));
  *(_BYTE *)(a1 + 73) = 1;
  return 0;
}
