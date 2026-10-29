/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8096470
// Address: 0x08096470

//----- (08096470) --------------------------------------------------------
int __cdecl sub_8096470(int a1)
{
  char v1; // al
  char *i; // edx
  char v3; // al
  unsigned int v4; // eax
  __m128i v5; // xmm0
  int result; // eax
  unsigned __int64 v7; // xmm0_8
  char v8; // al
  char v9; // al
  int v10; // ecx
  char v11; // al
  int v12; // [esp+0h] [ebp-14h] BYREF
  unsigned int v13; // [esp+4h] [ebp-10h]

  v13 = __readgsdword(0x14u);
  v1 = *(_BYTE *)(a1 + 76);
  for ( i = *(char **)(a1 + 4); ; i = *(char **)(a1 + 4) )
  {
    if ( !v1 )
      goto LABEL_3;
LABEL_18:
    while ( 2 )
    {
      v9 = *i;
      do
      {
        ++i;
        if ( v9 != 42 )
        {
          if ( !v9 )
            goto LABEL_9;
          goto LABEL_17;
        }
        *(_DWORD *)(a1 + 4) = i;
        v9 = *i;
        if ( *i == 47 )
        {
          if ( (*(_BYTE *)(a1 + 408) & 1) != 0 )
            goto LABEL_25;
LABEL_23:
          ++i;
LABEL_17:
          *(_DWORD *)(a1 + 4) = i;
          goto LABEL_18;
        }
      }
      while ( v9 != 41 );
      if ( (*(_BYTE *)(a1 + 408) & 2) == 0 )
        goto LABEL_23;
LABEL_25:
      ++i;
      *(_BYTE *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 4) = i;
LABEL_3:
      while ( 1 )
      {
        v3 = *i;
        if ( (unsigned __int8)(*i - 9) > 4u )
          break;
LABEL_15:
        *(_DWORD *)(a1 + 4) = ++i;
      }
LABEL_4:
      if ( v3 == 32 )
        goto LABEL_15;
      if ( v3 == 59 )
      {
        result = *(_DWORD *)(a1 + 408) & 8;
        if ( !result )
          goto LABEL_27;
      }
      else
      {
        if ( v3 == 47 )
        {
          v10 = *(_DWORD *)(a1 + 408);
          if ( (v10 & 1) == 0 )
            goto LABEL_33;
          v11 = i[1];
          if ( v11 == 42 )
            goto LABEL_38;
        }
        else
        {
          if ( v3 != 40 )
          {
            if ( v3 )
              goto LABEL_33;
            break;
          }
          v10 = *(_DWORD *)(a1 + 408);
          result = v10 & 2;
          if ( (v10 & 2) == 0 )
            goto LABEL_27;
          v11 = i[1];
          if ( v11 == 42 )
          {
LABEL_38:
            *(_BYTE *)(a1 + 76) = 1;
            continue;
          }
        }
        if ( v11 != 47 )
        {
LABEL_33:
          result = 0;
          goto LABEL_27;
        }
        result = v10 & 4;
        if ( (v10 & 4) == 0 )
          goto LABEL_27;
      }
      break;
    }
LABEL_9:
    if ( !*(_DWORD *)(a1 + 32) )
      break;
    sub_80925F0((_DWORD *)a1);
    v1 = *(_BYTE *)(a1 + 76);
  }
  *(_BYTE *)(a1 + 172) = 0;
  v4 = sub_80957C0(a1, &v12);
  v5 = _mm_cvtsi32_si128(v4);
  i = (char *)v4;
  result = v12;
  v7 = _mm_unpacklo_epi32(v5, v5).m128i_u64[0];
  switch ( v12 )
  {
    case -1:
      result = 34;
      goto LABEL_27;
    case 34:
      goto LABEL_27;
    case 0:
      v8 = *(_BYTE *)(a1 + 76);
      *(_DWORD *)(a1 + 8) = i;
      *(_BYTE *)(a1 + 172) = 1;
      *(_QWORD *)a1 = v7;
      if ( v8 )
        goto LABEL_18;
      v3 = *i;
      if ( (unsigned __int8)(*i - 9) <= 4u )
        goto LABEL_15;
      goto LABEL_4;
  }
  result = sub_80C7880(v12);
LABEL_27:
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
