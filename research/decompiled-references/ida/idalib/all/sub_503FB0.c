__int64 __fastcall sub_503FB0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 **v9; // r8

  v3 = *(__int64 **)(a1 + 32);
  if ( !v3 )
    return 0;
  v4 = v3[1];
  v5 = 0;
  if ( a2 < (unsigned int)v4 )
  {
    v6 = *v3;
    v7 = 16 * v4;
    v8 = 16LL * a2;
    v9 = (unsigned __int64 **)(v6 + v8);
    if ( v7 != v8 && **v9 < a3 )
    {
      v5 = 1;
      if ( (*v9)[1] < a3 && v9 + 2 != (unsigned __int64 **)(v7 + v6) )
        LOBYTE(v5) = *v9[2] >= a3;
    }
  }
  return v5;
}
