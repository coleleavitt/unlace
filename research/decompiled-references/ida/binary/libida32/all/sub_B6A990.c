unsigned __int64 __fastcall sub_B6A990(double *a1, __int64 a2, char a3)
{
  double *v3; // rsi
  double v4; // rax
  double v5; // rcx
  double v7; // rcx
  double v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = &a1[a2];
  if ( a1 == v3 )
  {
    v8[0] = 0.0;
    v4 = 0.0;
  }
  else
  {
    if ( a3 )
    {
      v8[0] = 0.0;
      v4 = 0.0;
      while ( 1 )
      {
        v5 = *a1;
        if ( (*(_BYTE *)(*(_QWORD *)a1 + 28LL) & 0x7Fu) - 49 <= 2 )
          goto LABEL_5;
        if ( v4 == 0.0 )
        {
          ++a1;
          v4 = v5;
          v8[0] = v5;
          if ( v3 == a1 )
            goto LABEL_9;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)&v4 + 8LL) = *(_QWORD *)&v5 | *(_QWORD *)(*(_QWORD *)&v4 + 8LL) & 7LL;
          v4 = v5;
LABEL_5:
          if ( v3 == ++a1 )
            goto LABEL_9;
        }
      }
    }
    v8[0] = 0.0;
    v7 = 0.0;
    do
    {
      v4 = *a1;
      if ( v7 == 0.0 )
        v8[0] = *a1;
      else
        *(_QWORD *)(*(_QWORD *)&v7 + 8LL) = *(_QWORD *)&v4 | *(_QWORD *)(*(_QWORD *)&v7 + 8LL) & 7LL;
      ++a1;
      v7 = v4;
    }
    while ( v3 != a1 );
  }
LABEL_9:
  v8[0] = v4;
  return _mm_loadh_ps(v8).m128_u64[0];
}

