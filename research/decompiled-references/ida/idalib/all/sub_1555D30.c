__int64 __fastcall sub_1555D30(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned int v7; // edx
  unsigned __int16 v8; // cx
  __int64 j; // rax
  char v10; // al
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int16 v15; // cx
  __int64 i; // rdx
  unsigned int v17; // eax
  unsigned __int16 v18; // cx
  __int64 v19; // rdx
  _BYTE v20[25]; // [rsp+Fh] [rbp-19h] BYREF

  v5 = *(_WORD *)(a3 + 16);
  if ( v5 == 66 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
      v10 = sub_15612F0(a1, 1, v20);
    else
      v10 = sub_147F1B0(a1);
    if ( !v10 || !(unsigned __int8)sub_1555AD0((const __m128i *)a1, *(_QWORD *)a2, *(_DWORD *)(a2 + 8)) )
    {
      v5 = *(_WORD *)(a3 + 16);
      goto LABEL_2;
    }
    v14 = *(_DWORD *)(a1 + 2792);
    if ( !v14 )
      return 1;
    v15 = *(_WORD *)(a1 + 88);
    for ( i = *(_QWORD *)(a1 + 2784) + 24LL * v14 - 24; ; i -= 24 )
    {
      if ( v15 == *(_WORD *)(i + 14) )
      {
        if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_31;
      }
      else if ( v15 > *(_WORD *)(i + 14) )
      {
        goto LABEL_31;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(i + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(i + 18) )
        return 1;
LABEL_31:
      *(_DWORD *)(a1 + 2792) = --v14;
      if ( !v14 )
        return 1;
    }
  }
LABEL_2:
  if ( v5 != 52 )
  {
LABEL_3:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0 || v5 != 75 && v5 != 53 )
      return 0;
    goto LABEL_8;
  }
  if ( *(_WORD *)(a1 + 32) != 22 )
  {
LABEL_8:
    v7 = *(_DWORD *)(a1 + 2792);
    if ( !v7 )
      return 0;
    v8 = *(_WORD *)(a1 + 88);
    for ( j = *(_QWORD *)(a1 + 2784) + 24LL * v7 - 24; ; j -= 24 )
    {
      if ( v8 == *(_WORD *)(j + 14) )
      {
        if ( *(_DWORD *)(j + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_11;
      }
      else if ( v8 > *(_WORD *)(j + 14) )
      {
        goto LABEL_11;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(j + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(j + 18) )
        return 0;
LABEL_11:
      *(_DWORD *)(a1 + 2792) = --v7;
      if ( !v7 )
        return 0;
    }
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 2944);
  if ( v12 >= *(unsigned int *)(v11 + 2912) )
    v13 = sub_14180A0(v11, 1u);
  else
    v13 = *(_QWORD *)(v11 + 2904) + 24 * v12;
  if ( *(_WORD *)(v13 + 16) != 23 )
  {
    v5 = *(_WORD *)(a3 + 16);
    if ( v5 != 52 )
      goto LABEL_3;
    goto LABEL_8;
  }
  sub_1CC6660(*(_QWORD *)(a1 + 96));
  v17 = *(_DWORD *)(a1 + 2792);
  if ( v17 )
  {
    v18 = *(_WORD *)(a1 + 88);
    v19 = *(_QWORD *)(a1 + 2784) + 24LL * v17 - 24;
    do
    {
      if ( v18 == *(_WORD *)(v19 + 14) )
      {
        if ( *(_DWORD *)(v19 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_41;
      }
      else if ( v18 > *(_WORD *)(v19 + 14) )
      {
        goto LABEL_41;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v19 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v19 + 18) )
        return 1;
LABEL_41:
      --v17;
      v19 -= 24;
      *(_DWORD *)(a1 + 2792) = v17;
    }
    while ( v17 );
  }
  return 1;
}
