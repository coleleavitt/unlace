__int64 __fastcall sub_B7AB90(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi

  v4 = *a2;
  if ( *a2 )
  {
    v5 = v4 + 40LL * *(unsigned int *)(v4 - 4);
    while ( v4 != v5 )
    {
      v6 = v4 + 8;
      v4 += 40;
      sub_1831620(qword_1C7F2C0, v6);
    }
  }
  return sub_1831620(qword_1C7F2C0, a3);
}

