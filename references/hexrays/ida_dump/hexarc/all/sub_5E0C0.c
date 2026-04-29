__int64 __fastcall sub_5E0C0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // r8
  __int64 i; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx

  v6 = a1[1];
  v8 = a2[1];
  if ( v6 <= v8 )
    v8 = a1[1];
  v10 = 0;
  if ( v8 )
  {
    v11 = v8 >> 6;
    v12 = *a2;
    v13 = *a1;
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v15 = *(_QWORD *)(v13 + 8 * i);
        v16 = *(_QWORD *)(v12 + 8 * i);
        LOBYTE(a6) = (v16 & v15) != 0;
        *(_QWORD *)(v13 + 8 * i) = v15 & ~v16;
        v10 |= a6;
      }
      v6 = a1[1];
    }
    if ( v6 )
    {
      v17 = *a1;
      v18 = (v6 >> 6) - 1;
      if ( v6 >> 6 )
      {
        v19 = v6;
        do
        {
          if ( *(_QWORD *)(v17 + 8 * v18) )
            break;
          v19 -= 64LL;
          a1[1] = v19;
        }
        while ( v18-- != 0 );
        LOBYTE(v18) = v6 != v19;
        v10 |= v18;
      }
    }
  }
  return v10;
}
