__int64 __fastcall sub_20B4330(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbx

  if ( a2 > 0xF )
  {
    v5 = 32;
    v6 = 16;
  }
  else
  {
    v4 = 2LL * (a3 != 0);
    if ( v4 < a2 )
      v4 = a2;
    v5 = 8 * v4 + 16;
    v6 = 8 * v4;
  }
  v7 = operator new(v5 + a1);
  sub_20B4250((char *)(v7 + v6), a2, a3);
  return v7 + v5;
}
