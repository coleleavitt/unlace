__int64 __fastcall sub_4BED20(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rsi

  v3 = *(_QWORD *)(a2 + 40);
  v4 = v3 + 24LL * *(_QWORD *)(a2 + 48);
  if ( v4 != v3 )
  {
    v5 = a1 + 136;
    do
    {
      v6 = sub_3D80D0(v5, v3);
      if ( v6 != (_QWORD *)(a1 + 144) )
        sub_4BA530(v5, (__int64)v6, 133);
      v3 += 24;
    }
    while ( v4 != v3 );
  }
  return sub_4BE9C0(a1 + 88, a2, 136);
}

