__int64 __fastcall sub_5740(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax

  v4 = qlsize();
  v6 = qlseek(a1, 0, 1, v5);
  if ( v4 < v6 )
    return 0;
  v7 = a3 * a2;
  if ( v4 - v6 < a3 * a2 )
    return 0;
  v8 = qalloc(v7);
  v9 = v8;
  if ( !v8 )
    sub_5680((__int64)"coff symbols");
  v10 = qlread(a1, v8, v7);
  if ( v10 != v7 )
    sub_53E0((__int64)"Read error (only %zu bytes of %zu could be read)", v10, v7);
  return v9;
}
