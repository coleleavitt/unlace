unsigned __int64 __fastcall sub_1B043B0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  unsigned int v9; // eax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_1B04070((__int64)a1, v3);
  if ( !v4 )
    return 1;
  v8 = v4;
  v9 = sub_C00A40(a2, v3, v5, v6, v7);
  return sub_190FFF0(*a1, v9, v8);
}
