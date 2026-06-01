/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47754E
// Address: 0x0047754E

//----- (0047754E) --------------------------------------------------------
BOOL __cdecl sub_47754E(unsigned int a1, double *a2, __int16 a3)
{
  int v3; // esi
  int v4; // eax
  double *v5; // ecx
  double v6; // st7
  double v7; // st7
  int v8; // edi
  double v9; // st7
  int v10; // edx
  double v11; // st7
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  double v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+24h] [ebp-4h] BYREF

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a3 & 1) != 0 )
  {
    sub_47E18A();
    v3 = a1 & 0x17;
    goto LABEL_44;
  }
  if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 4) != 0 )
  {
    sub_47E18A();
    v3 = a1 & 0x1B;
    goto LABEL_44;
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
  {
    sub_47E18A();
    v4 = a3 & 0xC00;
    if ( (a3 & 0xC00) != 0 )
    {
      if ( v4 != 1024 )
      {
        if ( v4 != 2048 )
        {
          if ( v4 != 3072 )
          {
LABEL_23:
            v3 = a1 & 0x1E;
            goto LABEL_44;
          }
          v5 = a2;
          v6 = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_21;
LABEL_22:
          *v5 = v6;
          goto LABEL_23;
        }
        v5 = a2;
        if ( *a2 <= 0.0 )
        {
          v6 = 1.797693134862316e308;
LABEL_21:
          v6 = -v6;
          goto LABEL_22;
        }
LABEL_19:
        v6 = INFINITY;
        goto LABEL_22;
      }
      v5 = a2;
      if ( *a2 > 0.0 )
      {
        v6 = 1.797693134862316e308;
        goto LABEL_22;
      }
    }
    else
    {
      v5 = a2;
      if ( *a2 > 0.0 )
        goto LABEL_19;
    }
    v6 = INFINITY;
    goto LABEL_21;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 )
  {
    v7 = *a2;
    v8 = (a1 >> 4) & 1;
    if ( 0.0 == v7 )
    {
      v8 = 1;
    }
    else
    {
      v9 = sub_47DF72(v7, &v17);
      v10 = v17 - 1536;
      v16 = v9;
      if ( v17 - 1536 >= -1074 )
      {
        v17 = v9 < 0.0;
        HIWORD(v16) = BYTE6(v16) & 0xF | 0x10;
        if ( v10 < -1021 )
        {
          v12 = LODWORD(v16);
          v13 = -1021 - v10;
          v14 = HIDWORD(v16);
          do
          {
            if ( (LOBYTE(v16) & 1) != 0 && !v8 )
              v8 = 1;
            v12 >>= 1;
            LODWORD(v16) = v12;
            if ( (BYTE4(v16) & 1) != 0 )
            {
              v12 |= 0x80000000;
              LODWORD(v16) = v12;
            }
            v14 >>= 1;
            HIDWORD(v16) = v14;
            --v13;
          }
          while ( v13 );
        }
        v11 = v16;
        if ( v17 )
          v11 = -v16;
      }
      else
      {
        v11 = v9 * 0.0;
        v8 = 1;
      }
      *a2 = v11;
    }
    if ( v8 )
      sub_47E18A();
    v3 = a1 & 0x1D;
  }
LABEL_44:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    sub_47E18A();
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
