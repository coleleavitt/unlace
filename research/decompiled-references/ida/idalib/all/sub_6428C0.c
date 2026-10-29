__int64 __fastcall sub_6428C0(__int64 a1, signed __int64 a2)
{
  int v3; // eax
  int v4; // r13d
  unsigned int v5; // r14d
  unsigned __int64 *v6; // rbx
  int v7; // eax
  signed __int64 v8; // rdx
  int v9; // ecx
  bool v10; // sf
  int v11; // eax
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx

  v3 = sub_503DD0(a1 + 2872);
  if ( v3 <= 0 )
    return -1;
  v4 = v3;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_505DE0(a1 + 2872, v5);
    v7 = nbits(*v6);
    v8 = v6[2];
    if ( v8 <= a2 )
    {
      v9 = v7 + 14;
      v10 = v7 + 7 < 0;
      v11 = v7 + 7;
      v12 = *v6;
      if ( !v10 )
        v9 = v11;
      v13 = v9 >> 3;
      if ( (__int64)(v8 + v13 * (v6[1] - v12)) > a2 )
        break;
    }
    if ( v4 == ++v5 )
      return -1;
  }
  return v12 + (a2 - v8) / v13;
}
