const char *__fastcall sub_23500(__int64 a1, unsigned int *a2)
{
  const char *v2; // rcx
  unsigned int v4; // edx
  unsigned int v5; // esi
  const char *v6; // rcx

  v2 = nullptr;
  if ( !*(_BYTE *)(a1 + 350) )
    return v2;
  v4 = *a2;
  v5 = *a2 & 0xFFF00000;
  if ( v5 == 100663296 )
  {
    v6 = "-cpu=v850e2r";
    goto LABEL_29;
  }
  if ( v5 > 0x6000000 )
  {
    if ( v5 == -267386880 )
    {
      v6 = "-cpu=rh850";
      goto LABEL_29;
    }
    if ( v5 <= 0xF0100000 )
    {
      if ( v5 == 0x10000000 )
      {
        v6 = "-cpu=v850e";
      }
      else
      {
        v6 = "-cpu=v850";
        if ( v5 != 0x20000000 )
          goto LABEL_8;
      }
      goto LABEL_29;
    }
    v6 = "-cpu=rh850g4mh";
    if ( v5 == -265289728 )
      goto LABEL_29;
LABEL_8:
    if ( (v4 & 1) != 0 )
    {
      v2 = "-fpu=double";
      *a2 = v4 & 0xFFFFFFFE;
    }
    else if ( (v4 & 2) != 0 )
    {
      v2 = "-fpu=single";
      *a2 = v4 & 0xFFFFFFFD;
    }
    else if ( (v4 & 0x20) != 0 )
    {
      v2 = "-registermode=22";
      *a2 = v4 & 0xFFFFFFDF;
    }
    else if ( (v4 & 0x40) != 0 )
    {
      v2 = "-registermode=32";
      *a2 = v4 & 0xFFFFFFBF;
    }
    else if ( (v4 & 0x100) != 0 )
    {
      BYTE1(v4) &= ~1u;
      v2 = "-r4=fix";
      *a2 = v4;
    }
    else if ( (v4 & 0x200) != 0 )
    {
      BYTE1(v4) &= ~2u;
      v2 = "-r4=none";
      *a2 = v4;
    }
    else if ( (v4 & 0x400) != 0 )
    {
      BYTE1(v4) &= ~4u;
      v2 = "-Xep=fix";
      *a2 = v4;
    }
    else if ( (v4 & 0x800) != 0 )
    {
      BYTE1(v4) &= ~8u;
      v2 = "-Xep=none";
      *a2 = v4;
    }
    else if ( (v4 & 0x1000) != 0 )
    {
      BYTE1(v4) &= ~0x10u;
      v2 = "-r5=fix";
      *a2 = v4;
    }
    else if ( (v4 & 0x2000) != 0 )
    {
      BYTE1(v4) &= ~0x20u;
      v2 = "-r5=none";
      *a2 = v4;
    }
    else if ( (v4 & 0x4000) != 0 )
    {
      BYTE1(v4) &= ~0x40u;
      v2 = "-reserve_r2";
      *a2 = v4;
    }
    else if ( (v4 & 0x8000) != 0 )
    {
      BYTE1(v4) &= ~0x80u;
      v2 = "-noreserve_r2";
      *a2 = v4;
    }
    else if ( v4 > 0xFFFFFFF )
    {
      v2 = "-mrh850-abi";
      *a2 = v4 & 0xFFFFFFF;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v2 = "-mv850e3v5";
      *a2 = v4 & 0xFFEFFFFF;
    }
    else
    {
      v2 = nullptr;
      if ( (v4 & 0x300000) != 0 )
      {
        v2 = "-cpu=rh850g4mh";
        *a2 = v4 & 0xFFCFFFFF;
      }
    }
    return v2;
  }
  if ( v5 == 0x2000000 )
  {
    v6 = "-cpu=v850e2";
    goto LABEL_29;
  }
  if ( v5 > 0x2000000 )
  {
    v6 = "-cpu=v850e1f";
    if ( v5 == 0x4000000 )
      goto LABEL_29;
    goto LABEL_8;
  }
  if ( v5 == 0x400000 )
  {
    v6 = "-cpu=v850e2n";
    goto LABEL_29;
  }
  v6 = "-cpu=v850e2v3";
  if ( v5 != 0x800000 )
    goto LABEL_8;
LABEL_29:
  *a2 = v4 & 0xFFFFF;
  return v6;
}

