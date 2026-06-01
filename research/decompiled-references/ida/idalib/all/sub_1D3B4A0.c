void __fastcall sub_1D3B4A0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned __int64 *a5)
{
  __int64 v6; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi

  if ( a3 )
  {
    v6 = a2 + 24LL * (unsigned int)(a3 - 1) + 24;
    v8 = a2;
    do
    {
      v9 = v8;
      v8 += 24;
      sub_1D3A850(*(_QWORD *)(a1 + 248), v9, 0, a4, a5);
    }
    while ( v6 != v8 );
  }
}
