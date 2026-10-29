unsigned __int64 __fastcall sub_13D19E0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v6; // rbx
  __int16 v7; // ax
  unsigned __int8 *v8; // r13
  unsigned __int64 v9; // rbp
  __int64 i; // r15
  __int64 v11; // rax
  unsigned __int8 v12; // dl
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rax
  unsigned __int8 *v17; // rax
  void *v18; // rdi
  unsigned __int8 *v19; // rsi
  size_t v20; // rdx

  v6 = a2;
  v7 = *(_WORD *)(a1 + 16);
  v8 = &a2[*(unsigned int *)(a1 + 4)];
  if ( (unsigned __int16)(v7 - 14) <= 1u || v7 == 17 )
  {
    if ( a2 >= v8 )
      return 0;
  }
  else
  {
    v9 = 0;
    if ( (unsigned __int16)(v7 - 18) > 1u )
    {
LABEL_13:
      while ( v8 > v6 )
      {
        while ( 1 )
        {
          v14 = *v6;
          if ( *v6 != 63 && v14 != 92 )
            break;
          ++v9;
          v15 = sub_13D18F0(v6, a3);
          *(_BYTE *)(a4 + v9 - 1) = v15;
          v6 += HIDWORD(v15);
          if ( v8 <= v6 )
            return v9;
        }
        ++v9;
        ++v6;
        *(_BYTE *)(a4 + v9 - 1) = v14;
      }
      return v9;
    }
    if ( a2 >= v8 )
      return v9;
  }
  for ( i = 0; ; ++i )
  {
    v12 = *v6;
    if ( *v6 == 63 || (v11 = 1, v12 == 92) )
    {
      v13 = sub_13D18F0(v6, a3);
      v12 = v13;
      v11 = HIDWORD(v13);
    }
    v9 = i + 1;
    v6 += v11;
    *(_BYTE *)(a4 + i) = v12;
    if ( v12 == 34 )
    {
      if ( v9 > 1 && *(_BYTE *)(a4 + i - 1) == 82 )
      {
        v17 = v8;
        do
          --v17;
        while ( *v17 != 34 );
        v18 = (void *)(a4 + v9);
        v19 = v6;
        v20 = v17 - v6 + 1;
        v9 += v20;
        v6 = v17 + 1;
        memcpy(v18, v19, v20);
      }
      goto LABEL_13;
    }
    if ( v8 <= v6 )
      break;
  }
  if ( v9 > 1 )
    goto LABEL_13;
  return v9;
}
