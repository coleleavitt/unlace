__int64 __fastcall sub_B71CE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(__int64 **)(v5 + 8);
  v7 = *v6;
  v8 = sub_983520(a2, v5, (__int64)v6);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( *(_QWORD *)(v4 + 856) != v7 )
    sub_15E1A70(v4);
  v10 = sub_15DE370(v4);
  return sub_15DE0E0(v4, v9, v10);
}

