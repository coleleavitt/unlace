__int64 __fastcall sub_5495D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdi

  v5 = 2 * a4;
  v6 = (a2 - a1) >> 7;
  v8 = a1;
  if ( 2 * a4 <= v6 )
  {
    v9 = a4 << 8;
    v10 = -128 * a4;
    do
    {
      v11 = v8;
      v8 += v9;
      a3 = sub_549120(v11, v8 + v10, v8 + v10, v8, a3);
      v6 = (a2 - v8) >> 7;
    }
    while ( v5 <= v6 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_549120(v8, v8 + (v6 << 7), v8 + (v6 << 7), a2, a3);
}

