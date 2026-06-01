__int64 *__fastcall sub_B876B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax

  v5 = sub_B685F0(a1);
  v8 = *(_QWORD *)(a1 + 120);
  if ( !v8 )
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v3, v4, v6, v7);
    v8 = *(_QWORD *)(a1 + 120);
  }
  v9 = 0;
  v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10 )
    v9 = *v10;
  return sub_A8D990(v5, v9, a2, v4, v6, v7);
}

