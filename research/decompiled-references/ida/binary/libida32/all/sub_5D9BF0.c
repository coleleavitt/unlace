__int64 __fastcall sub_5D9BF0(__int64 a1)
{
  unsigned __int16 v1; // bp
  __int64 v2; // r12
  __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v7; // rbp
  size_t v8; // r13
  __int64 v9; // r12
  size_t v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *(_WORD *)(a1 + 64);
  if ( v1 == 4 )
  {
    sub_357520((__int64 *)(a1 + 504));
    return 0;
  }
  if ( v1 <= 4u )
  {
    if ( v1 == 3 )
    {
      sub_357520((__int64 *)(a1 + 504));
      return 0;
    }
LABEL_16:
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v7 != 1 )
      {
        v9 = *(_QWORD *)(a1 + 512);
        v10 = v7 - 1;
        if ( v9 )
        {
          --v9;
          v10 = v8 + v9;
          v7 += v9;
        }
        v11 = *(_QWORD *)(a1 + 504);
        if ( *(_QWORD *)(a1 + 520) < v7 )
        {
          v13 = qvector_reserve(a1 + 504, v11, v7, 1);
          *(_QWORD *)(a1 + 504) = v13;
          v11 = v13;
        }
        *(_QWORD *)(a1 + 512) = v7;
        *(_BYTE *)(v11 + v10) = 0;
        memcpy((void *)(v9 + *(_QWORD *)(a1 + 504)), *(const void **)(a1 + 40), v8);
      }
    }
    return 0;
  }
  if ( v1 != 44 )
  {
    if ( v1 > 0x2Cu )
    {
      if ( v1 == 58 )
        goto LABEL_6;
    }
    else if ( (unsigned __int16)(v1 - 40) <= 1u )
    {
      goto LABEL_6;
    }
    goto LABEL_16;
  }
LABEL_6:
  v2 = *(_QWORD *)(a1 + 512);
  if ( v2 )
  {
    v4 = v2 + 1;
    v3 = *(_QWORD *)(a1 + 512);
    --v2;
  }
  else
  {
    v3 = 1;
    v4 = 2;
  }
  v5 = *(_QWORD *)(a1 + 504);
  if ( *(_QWORD *)(a1 + 520) < v4 )
  {
    v12 = qvector_reserve(a1 + 504, v5, v4, 1);
    *(_QWORD *)(a1 + 504) = v12;
    v5 = v12;
  }
  *(_QWORD *)(a1 + 512) = v4;
  *(_BYTE *)(v5 + v2) = v1;
  *(_BYTE *)(*(_QWORD *)(a1 + 504) + v3) = 0;
  return 0;
}

