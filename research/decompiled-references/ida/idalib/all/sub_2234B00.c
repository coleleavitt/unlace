char __fastcall sub_2234B00(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  char v4; // di
  char *v5; // r14
  char v6; // di
  unsigned int v7; // eax
  unsigned int v8; // ebx
  size_t v9; // rbx
  size_t v10; // r12
  size_t v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rbx

  v3 = *(char **)a1;
  v4 = **(_BYTE **)a1;
  switch ( v4 )
  {
    case 'x':
      v5 = *(char **)a2;
      v6 = **(_BYTE **)a2;
      if ( v6 == 120 )
      {
        v8 = 192;
        v7 = 192;
        goto LABEL_9;
      }
      if ( v6 == 122 )
      {
        v8 = 192;
        goto LABEL_30;
      }
      LOBYTE(v7) = 0;
      v8 = 192;
      if ( v6 == 115 )
        return v7;
LABEL_20:
      v7 = 256;
      if ( *(_QWORD *)(a2 + 8) != 1 )
        goto LABEL_9;
      goto LABEL_21;
    case 'z':
      v8 = sub_2234AA0(v3[1]) | 0x40;
      goto LABEL_17;
    case 's':
      v8 = 128;
LABEL_17:
      v5 = *(char **)a2;
      v7 = 192;
      v6 = **(_BYTE **)a2;
      if ( v6 == 120 )
        goto LABEL_9;
      if ( v6 == 122 )
        goto LABEL_30;
      v7 = 128;
      if ( v6 == 115 )
        goto LABEL_9;
      goto LABEL_20;
  }
  if ( *(_QWORD *)(a1 + 8) == 1 )
  {
    v8 = sub_2234AA0(v4);
    goto LABEL_17;
  }
  v5 = *(char **)a2;
  v6 = **(_BYTE **)a2;
  if ( v6 == 120 )
  {
    v8 = 256;
    v7 = 192;
    goto LABEL_23;
  }
  if ( v6 == 122 )
  {
    v8 = 256;
LABEL_30:
    v7 = sub_2234AA0(v5[1]) | 0x40;
    goto LABEL_9;
  }
  LOBYTE(v7) = 0;
  v8 = 256;
  if ( v6 == 115 )
    return v7;
  v7 = 256;
  if ( *(_QWORD *)(a2 + 8) == 1 )
LABEL_21:
    v7 = sub_2234AA0(v6);
LABEL_9:
  if ( v7 != v8 )
  {
LABEL_23:
    LOBYTE(v7) = v7 > v8;
    return v7;
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a2 + 8);
  v11 = v10;
  if ( v9 <= v10 )
    v11 = v9;
  if ( v11 && (v12 = memcmp(v3, v5, v11)) != 0 )
  {
    return v12 >> 31;
  }
  else
  {
    v13 = v9 - v10;
    LOBYTE(v7) = 0;
    if ( v13 <= 0x7FFFFFFF )
    {
      if ( v13 < (__int64)0xFFFFFFFF80000000LL )
        LOBYTE(v7) = 1;
      else
        return (unsigned int)v13 >> 31;
    }
  }
  return v7;
}
