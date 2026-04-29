void __fastcall sub_11A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rsi
  void *v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 200);
  if ( v6 )
  {
    v7 = (__int64 *)(v6 + 64);
    v9 = (__int64 *)(v6 + 224);
    do
    {
      v10 = *v7;
      v7 += 5;
      callui(128, v10, a3, a4, a5, a6, v12);
    }
    while ( v7 != v9 );
    v11 = *(void **)(a1 + 200);
    if ( v11 )
      operator delete(v11, 0xE0u);
    *(_QWORD *)(a1 + 200) = 0;
  }
}
