__int64 __fastcall sub_5F800(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r8

  v3 = a2[1];
  if ( !v3 )
    return 0;
  sub_5F350(a1, v3 - 1);
  v5 = *a1;
  v6 = *a2;
  v7 = (unsigned __int64)a2[1] >> 6;
  if ( !v7 )
    return 0;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = *(_QWORD *)(v6 + 8 * v8);
    v11 = ~*(_QWORD *)(v5 + 8 * v8);
    LOBYTE(v11) = (v10 & v11) != 0;
    *(_QWORD *)(v5 + 8 * v8++) |= v10;
    v9 |= v11;
  }
  while ( v7 != v8 );
  return v9;
}
