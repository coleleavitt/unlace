__int64 __fastcall sub_78D0(__int64 a1, unsigned __int64 a2, _QWORD *a3, char a4)
{
  char v5; // r10
  int *v6; // rdx
  int *v7; // rdi
  __int64 v9; // rsi
  int v11; // r8d
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v5 = 0;
  v6 = (int *)(a1 + 24);
  v7 = (int *)(a1 + 56);
  v9 = 0;
  do
  {
    v11 = *v6;
    if ( !*v6 )
      break;
    v12 = v6[1];
    v6 += 2;
    v13 = a2 >> v12;
    LOBYTE(v12) = v5;
    v5 += v11;
    result = (~(-1LL << v11) & v13) << v12;
    v9 |= result;
  }
  while ( v7 != v6 );
  *a3 = v9 << (64 - v5) >> (64 - v5) << a4;
  return result;
}
