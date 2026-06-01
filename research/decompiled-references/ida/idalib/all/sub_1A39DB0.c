__int64 __fastcall sub_1A39DB0(_QWORD **a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned __int8 v8; // al

  v3 = *a2;
  v4 = *a2 + 8LL * *((unsigned int *)a2 + 2);
  if ( *a2 != v4 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 - 8);
      if ( !v7 )
        goto LABEL_5;
      v8 = *(_BYTE *)(v7 + 8) & 0x7F;
      if ( v8 == 24 )
      {
        if ( v7 != 48 )
        {
          ++v6;
          *a3 = (__int64)sub_E91C40(*a1, *a3, v7 - 48);
        }
        goto LABEL_5;
      }
      if ( (unsigned int)v8 - 58 > 3 || v7 == 64 )
      {
LABEL_5:
        v4 -= 8;
        if ( v3 == v4 )
          return v6;
      }
      else
      {
        v4 -= 8;
        ++v6;
        *a3 = (__int64)sub_E91A00(*a1, *a3, *(_QWORD *)(v7 - 16));
        if ( v3 == v4 )
          return v6;
      }
    }
  }
  return 0;
}
