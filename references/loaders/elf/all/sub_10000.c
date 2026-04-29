const char *__fastcall sub_10000(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned int *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v14; // eax
  unsigned int v16; // esi
  char v18; // [rsp+0h] [rbp-8h]

  v14 = *a10;
  v16 = *a10 & 0xFFFFFFF8;
  *a10 = v16;
  if ( (v14 & 8) != 0 )
  {
    *a10 = v14 & 0xFFFFFFF0;
    return "EF_ARM_APCS_26";
  }
  else if ( (v14 & 0x10) != 0 )
  {
    *a10 = v14 & 0xFFFFFFE8;
    return "EF_ARM_APCS_FLOAT";
  }
  else if ( (v14 & 0x20) != 0 )
  {
    *a10 = v14 & 0xFFFFFFD8;
    return "EF_ARM_PIC";
  }
  else if ( (v14 & 0x40) != 0 )
  {
    *a10 = v14 & 0xFFFFFFB8;
    return "EF_ARM_ALIGN8";
  }
  else if ( (v14 & 0x80u) != 0 )
  {
    LOBYTE(v14) = v14 & 0x78;
    *a10 = v14;
    return "EF_ARM_NEW_ABI";
  }
  else if ( (v14 & 0x100) != 0 )
  {
    *a10 = v14 & 0xFFFFFEF8;
    return "EF_ARM_OLD_ABI";
  }
  else if ( (v14 & 0x200) != 0 )
  {
    *a10 = v14 & 0xFFFFFDF8;
    return "EF_ARM_SOFT_FLOAT";
  }
  else if ( (v14 & 0x400) != 0 )
  {
    *a10 = v14 & 0xFFFFFBF8;
    return "EF_ARM_VFP_FLOAT";
  }
  else if ( (v14 & 0x800) != 0 )
  {
    *a10 = v14 & 0xFFFFF7F8;
    return "EF_ARM_MAVERICK_FLOAT";
  }
  else if ( (v14 & 0x400000) != 0 )
  {
    *a10 = v14 & 0xFFBFFFF8;
    return "EF_ARM_LE8";
  }
  else if ( (v14 & 0x800000) != 0 )
  {
    *a10 = v14 & 0xFF7FFFF8;
    return "--be8";
  }
  else
  {
    if ( v16 > 0xFFFFFF )
    {
      sub_F630((__int64)"EABI version: %u", HIBYTE(v16), a11, a12, a13, a14, a1, a2, a3, a4, a5, a6, a7, a8, v18);
      *a10 &= 0xFFFFFFu;
    }
    return nullptr;
  }
}
