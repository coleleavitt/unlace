__int64 __fastcall sub_4D5DE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rsi

  v3 = a2[5];
  v4 = v3 + 24LL * a2[6];
  if ( v4 != v3 )
  {
    v5 = a1 + 144;
    do
    {
      v6 = sub_4D3F70(v5, v3);
      if ( v6 != (_QWORD *)(a1 + 152) )
        sub_4D1360(v5, v6, 133);
      v3 += 24;
    }
    while ( v4 != v3 );
  }
  return sub_4D5A80(a1 + 96, a2, 136);
}
