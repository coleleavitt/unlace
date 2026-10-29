void __fastcall sub_1FEB8B0(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int8 *a4)
{
  __m128i *v4; // rbx
  char v5; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int32 v8; // ecx

  *(_BYTE *)a1 = a2;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_BYTE *)(a1 + 1) = 11;
  *(_DWORD *)(a1 + 4) = a3;
  *(_WORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 10) = 0;
  *(_QWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 20) = 1;
  *(_BYTE *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = a1 + 144;
  *(_QWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  if ( a2 == 8 )
  {
    *(_DWORD *)(a1 + 12) = 64;
    *(_BYTE *)(a1 + 1) = 6;
  }
  else if ( a2 <= 8u )
  {
    switch ( a2 )
    {
      case 2u:
        *(_DWORD *)(a1 + 12) = 16;
        *(_BYTE *)(a1 + 1) = 6;
        break;
      case 4u:
        *(_DWORD *)(a1 + 12) = 32;
        *(_BYTE *)(a1 + 1) = 6;
        break;
      case 1u:
        *(_DWORD *)(a1 + 12) = 8;
        *(_BYTE *)(a1 + 1) = 6;
        break;
      default:
        goto LABEL_28;
    }
  }
  else if ( a2 == 32 )
  {
    *(_DWORD *)(a1 + 12) = 16;
    *(_BYTE *)(a1 + 1) = 8;
  }
  else if ( a2 <= 0x20u )
  {
    if ( a2 != 16 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 12) = 16;
    *(_BYTE *)(a1 + 1) = 9;
  }
  else if ( a2 == 64 )
  {
    *(_DWORD *)(a1 + 12) = 32;
    *(_BYTE *)(a1 + 1) = 8;
  }
  else
  {
    if ( a2 != 0x80 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 12) = 64;
    *(_BYTE *)(a1 + 1) = 8;
  }
  v4 = (__m128i *)a1;
  sub_1FE4540(a1, a4);
  v5 = *(_BYTE *)(a1 + 1);
  if ( v5 == 10 || !*(_BYTE *)(a1 + 20) )
    goto LABEL_18;
  a3 = *(_DWORD *)(a1 + 16);
  if ( a3 )
  {
    if ( v5 == 8 )
    {
      if ( *(_DWORD *)(a1 + 12) == 8 )
        goto LABEL_18;
      if ( !*(_BYTE *)(a1 + 25) )
      {
LABEL_13:
        v6 = v4->m128i_u32[3];
        if ( v6 != 16 )
        {
          if ( v6 <= 0x10 )
          {
            if ( v6 != 1 && v6 != 8 || a3 > 0x40 )
              goto LABEL_18;
          }
          else if ( v6 == 32 )
          {
            if ( a3 > 0x10 )
              goto LABEL_18;
          }
          else if ( v6 != 64 || a3 > 8 )
          {
            goto LABEL_18;
          }
LABEL_31:
          if ( (a3 & (a3 - 1)) == 0 )
            goto LABEL_32;
LABEL_18:
          v4[1].m128i_i8[8] = 0;
          return;
        }
LABEL_30:
        if ( a3 > 0x20 )
          goto LABEL_18;
        goto LABEL_31;
      }
LABEL_36:
      v7 = v4[1].m128i_u32[3];
      if ( v7 == 1 || v7 > 8 )
        goto LABEL_18;
      LOBYTE(v8) = 0;
      if ( v4->m128i_i32[1] >= 0 )
        v8 = v4->m128i_i32[1];
      if ( v7 << v8 > 8 )
        goto LABEL_18;
      goto LABEL_13;
    }
    if ( v5 != 9 )
    {
      if ( !*(_BYTE *)(a1 + 25) )
        goto LABEL_13;
      goto LABEL_36;
    }
LABEL_28:
    if ( v4->m128i_i32[3] != 16 )
      goto LABEL_18;
    if ( !v4[1].m128i_i8[9] )
      goto LABEL_30;
    goto LABEL_36;
  }
LABEL_32:
  v4[1].m128i_i8[8] = 1;
  sub_1FEA760(v4);
  sub_1FE7E50((__int64)v4);
  if ( v4[1].m128i_i8[4] )
  {
    if ( v4[1].m128i_i32[0] )
      sub_1FE8680((__int64)v4);
  }
}
