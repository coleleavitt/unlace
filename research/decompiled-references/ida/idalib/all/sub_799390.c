unsigned __int64 __fastcall sub_799390(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rax

  v1 = a1[4];
  if ( !v1 )
  {
    v4 = a1[3];
    if ( !a1[5] )
    {
      v6 = qvector_reserve(a1 + 3, v4, 1, 32);
      v1 = a1[4];
      a1[3] = v6;
      v4 = v6;
    }
    v5 = 32 * v1 + v4;
    *(_BYTE *)v5 = 2;
    *(_QWORD *)(v5 + 24) = 0;
    *(_OWORD *)(v5 + 8) = 0;
    v1 = a1[4] + 1LL;
    a1[4] = v1;
  }
  v2 = a1[3] + 32 * v1 - 32;
  sub_799220(v2);
  return sub_798F30((__int64)a1, v2);
}
