unsigned __int64 __fastcall sub_B8F2F0(__int64 *a1)
{
  __int64 v1; // r12
  unsigned __int64 i; // rbx
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  unsigned int v5; // eax
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  double v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *a1;
  for ( i = a1[1]; ; i = v11 * ((i != -4) + (i + 4 - (i != -4)) / v11) )
  {
    while ( 1 )
    {
      v3 = v1;
      if ( (v1 & 0xF) != 0 )
        break;
      v4 = *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      switch ( v4 )
      {
        case 0x35u:
          goto LABEL_14;
        case 0x28u:
          if ( !v1 )
            goto LABEL_34;
          v7 = i + 8;
          goto LABEL_17;
        case 8u:
          if ( !v1 )
            goto LABEL_34;
          v9 = i + 8;
          goto LABEL_20;
        case 9u:
          if ( !v1 )
            goto LABEL_34;
          v7 = i + 1;
          goto LABEL_17;
        case 0x1Bu:
          if ( !v1 )
            goto LABEL_34;
          v7 = i + 16;
LABEL_17:
          v8 = sub_F6C520(*(_QWORD *)(v1 + 32));
          v1 = *(_QWORD *)(v1 + 32);
          i = ((v7 != 0) + (v7 - (v7 != 0)) / v8) * v8;
          break;
        case 0x18u:
          if ( !v1 )
            goto LABEL_34;
          v9 = i;
          if ( (unsigned __int8)(*(_WORD *)(v1 + 18) >> 3) != 6 || *(_QWORD *)(v1 + 32) )
            v9 = i + 16;
LABEL_20:
          v10 = sub_F6C520(*(_QWORD *)(v1 + 40));
          v1 = *(_QWORD *)(v1 + 40);
          i = ((v9 != 0) + (v9 - (v9 != 0)) / v10) * v10;
          break;
        default:
          if ( v4 > 1u )
            goto LABEL_30;
          if ( !v1 )
            goto LABEL_37;
          v5 = sub_F6C520(*(_QWORD *)(v1 + 32));
          v1 = *(_QWORD *)(v1 + 32);
          i = v5 * ((i - (i != 0)) / v5 + (i != 0));
          break;
      }
    }
    if ( (v1 & 7) != 0 )
      goto LABEL_13;
LABEL_30:
    if ( (v1 & 8) != 0 )
      goto LABEL_31;
LABEL_34:
    if ( *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 30 )
    {
LABEL_31:
      if ( (v1 & 8) == 0 )
        goto LABEL_32;
      goto LABEL_13;
    }
    if ( !v1 )
      break;
    v11 = sub_F6C520(*(_QWORD *)(v1 + 24));
    v1 = *(_QWORD *)(v1 + 24);
  }
LABEL_37:
  v3 = 0;
LABEL_32:
  if ( *(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 53 )
LABEL_13:
    i = 0;
LABEL_14:
  *(_QWORD *)&v12[0] = i;
  return _mm_loadh_ps(v12).m128_u64[0];
}
