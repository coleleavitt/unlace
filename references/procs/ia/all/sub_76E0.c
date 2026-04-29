__int64 __fastcall sub_76E0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int v4; // r9d
  int *v5; // rsi
  int *v6; // rdi
  __int64 v7; // r10
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rax

  v4 = 0;
  v5 = (int *)(a1 + 24);
  v6 = (int *)(a1 + 56);
  v7 = 0;
  do
  {
    v8 = *v5;
    if ( !*v5 )
      break;
    v9 = v5[1];
    v5 += 2;
    v10 = ~(-1LL << v8) & (a2 >> v9);
    LOBYTE(v9) = v4;
    v4 += v8;
    v7 |= v10 << v9;
  }
  while ( v6 != v5 );
  *a3 = v7;
  return 0;
}
