unsigned __int64 __fastcall sub_F6E7D0(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int8 v5; // dl
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  _BOOL8 v9; // rdi
  unsigned __int64 v10; // rdx
  __int128 v11; // [rsp+0h] [rbp-18h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v3 = *a1;
  v4 = *a1 & 7;
  if ( (*a1 & 0xF) == 0 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v5 == 22 )
        goto LABEL_12;
      if ( v5 == 40 )
        break;
      if ( v5 != 8 )
      {
        switch ( v5 )
        {
          case 9u:
            if ( !v1 )
              goto LABEL_31;
            ++v2;
            break;
          case 0x1Bu:
            if ( !v1 )
              goto LABEL_31;
            v2 += 16LL;
            break;
          case 0x18u:
            if ( v1 )
            {
              v10 = v2;
              if ( (unsigned __int8)(*(_WORD *)(v1 + 18) >> 3) != 6 || *(_QWORD *)(v1 + 32) )
                v10 = v2 + 16;
              v1 = *(_QWORD *)(v1 + 40);
              v7 = 1;
              if ( (v1 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v1 & 0xF) == 0 )
                v7 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
              v2 = v10;
              v9 = v10 != 0;
              goto LABEL_19;
            }
LABEL_31:
            if ( *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 30 )
              goto LABEL_29;
            if ( !v1 )
            {
LABEL_10:
              v3 = 0;
              goto LABEL_11;
            }
            v1 = *(_QWORD *)(v1 + 24);
            v2 += 4LL;
            v7 = 1;
            v8 = v1 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (v1 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
              goto LABEL_18;
LABEL_16:
            if ( (v1 & 0xF) == 0 )
              v7 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)v8 + 16LL)];
            goto LABEL_18;
          default:
            if ( v5 > 1u )
              goto LABEL_31;
            if ( !v1 )
              goto LABEL_10;
            break;
        }
        goto LABEL_15;
      }
      if ( !v1 )
        goto LABEL_31;
      v1 = *(_QWORD *)(v1 + 40);
      v2 += 8LL;
      v7 = 1;
      v8 = v1 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v1 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_16;
LABEL_18:
      v9 = v2 != 0;
LABEL_19:
      v4 = v1 & 7;
      v2 = v7 * (v9 + (v2 - v9) / v7);
      v3 = v1;
      if ( (v1 & 0xF) != 0 )
        goto LABEL_20;
    }
    if ( !v1 )
      goto LABEL_31;
    v2 += 8LL;
LABEL_15:
    v1 = *(_QWORD *)(v1 + 32);
    v7 = 1;
    v8 = v1 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_16;
    goto LABEL_18;
  }
LABEL_20:
  if ( v4 )
    goto LABEL_21;
LABEL_29:
  if ( (v1 & 8) != 0 )
  {
LABEL_21:
    v2 = 0;
    goto LABEL_12;
  }
LABEL_11:
  if ( *(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 22 )
    goto LABEL_21;
LABEL_12:
  *(_QWORD *)&v11 = v2;
  return _mm_loadh_ps((const double *)&v11).m128_u64[0];
}
