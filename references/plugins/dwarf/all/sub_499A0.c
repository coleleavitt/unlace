__int64 __fastcall sub_499A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi

  v5 = 2 * a4;
  v6 = a1;
  v7 = 0x8E38E38E38E38E39LL * ((a2 - a1) >> 4);
  if ( 2 * a4 <= v7 )
  {
    v8 = 288 * a4;
    v9 = -144 * a4;
    do
    {
      v10 = v6;
      v6 += v8;
      a3 = sub_49440(v10, v6 + v9, v6 + v9, v6, a3, a5);
      v7 = 0x8E38E38E38E38E39LL * ((a2 - v6) >> 4);
    }
    while ( v7 >= v5 );
  }
  if ( a4 <= v7 )
    v7 = a4;
  return sub_49440(v6, v6 + 144 * v7, v6 + 144 * v7, a2, a3, a5);
}
