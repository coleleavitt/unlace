unsigned __int64 __fastcall sub_778F50(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rax

  v1 = a1[4];
  if ( !v1 )
  {
    v3 = a1[3];
    if ( !a1[5] )
    {
      v5 = qvector_reserve(a1 + 3, v3, 1, 32);
      v1 = a1[4];
      a1[3] = v5;
      v3 = v5;
    }
    v4 = 32 * v1 + v3;
    *(_BYTE *)v4 = 2;
    *(_QWORD *)(v4 + 24) = 0;
    *(_OWORD *)(v4 + 8) = 0;
    v1 = a1[4] + 1LL;
    a1[4] = v1;
  }
  sub_778DE0(a1[3] + 32 * v1 - 32);
  return sub_778AF0((__int64)a1);
}

