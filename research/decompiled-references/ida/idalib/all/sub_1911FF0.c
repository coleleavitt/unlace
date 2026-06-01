void __fastcall sub_1911FF0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v4 = *(_QWORD **)(a1 + 24);
  v5 = 8LL * *(_QWORD *)(a1 + 32);
  v6 = (__int64)&v4[(unsigned __int64)v5 / 8];
  v7 = v5 >> 5;
  v8 = v5 >> 3;
  if ( v7 <= 0 )
  {
    v9 = *(_QWORD **)(a1 + 24);
LABEL_14:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
          goto LABEL_18;
        goto LABEL_17;
      }
      if ( a2 == *v9 )
        goto LABEL_20;
      ++v9;
    }
    if ( a2 == *v9 )
      goto LABEL_20;
    ++v9;
LABEL_17:
    if ( a2 == *v9 )
      goto LABEL_20;
LABEL_18:
    sub_1911C50(a1, a2, (__int64)v4, (__int64)v9, v8, v6, a3, a4);
    return;
  }
  if ( *v4 == a2 )
  {
    v9 = *(_QWORD **)(a1 + 24);
  }
  else
  {
    v9 = v4 + 1;
    if ( a2 != v4[1] )
    {
      v9 = v4 + 2;
      if ( v4[2] != a2 )
      {
        v9 = v4 + 3;
        v10 = &v4[4 * v7];
        if ( a2 != v4[3] )
        {
          while ( 1 )
          {
            v9 = v4 + 4;
            if ( v4 + 4 == v10 )
            {
              v8 = (v6 - (__int64)v10) >> 3;
              goto LABEL_14;
            }
            if ( a2 == v4[4] )
              goto LABEL_20;
            if ( a2 == v4[5] )
            {
              v9 = v4 + 5;
              goto LABEL_20;
            }
            if ( a2 == v4[6] )
            {
              v9 = v4 + 6;
              goto LABEL_20;
            }
            if ( a2 == v4[7] )
              break;
            v4 += 4;
          }
          v9 = v4 + 7;
        }
      }
    }
  }
LABEL_20:
  if ( (_QWORD *)v6 == v9 )
    goto LABEL_18;
}
