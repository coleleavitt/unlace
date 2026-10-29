__int64 __fastcall btoa_width(int a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  Elf64_Rela *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rbp
  unsigned int radix; // eax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // edx

  result = 0;
  if ( a1 >= 0 )
  {
    v5 = a2;
    if ( (a2 & 0x600) == 0x400 && ((a2 & 0xE0000000) == 0x80000000 || (a2 & 0xF0000000) == 0x40000000) )
      goto LABEL_18;
    if ( a3 )
      v5 = a2 >> 4;
    v6 = (Elf64_Rela *)(v5 & 0xF00000);
    if ( v6 == (Elf64_Rela *)((char *)&loc_2FFFFC + 4) )
      return ((*(_BYTE *)(qword_2CA1698 + 904) & 0x10) == 0) + a1 + 1;
    if ( (unsigned __int64)v6 > 0x300000 )
    {
      if ( v6 != (Elf64_Rela *)&loc_700000 )
      {
        if ( v6 == (Elf64_Rela *)((char *)&loc_BFFFFE + 2) )
        {
LABEL_18:
          v10 = *(_DWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 364LL);
          if ( v10 )
            return v10 + 5;
          if ( a1 == *(_QWORD *)(qword_2CA1698 + 880) )
            return 28;
          return *(char *)(qword_2CA1698 + (a1 >> 2) + 888);
        }
        if ( v6 == (Elf64_Rela *)&loc_600000 )
        {
          v7 = *(_DWORD *)(qword_2CA1698 + 904) & 0xE0000;
          if ( v7 != (_DWORD)&stru_40000 )
          {
            if ( v7 > (unsigned int)&stru_40000 )
              v8 = 2LL * (((v7 - 393216) & 0xFFFC0000) == 0);
            else
              v8 = 1 - ((v7 == 0) - 1LL);
            goto LABEL_14;
          }
          goto LABEL_42;
        }
        return 0;
      }
      v11 = *(_DWORD *)(qword_2CA1698 + 904);
      v12 = v11 & 0x1C000;
      if ( (v11 & 0x1C000) != 0x10000 )
      {
        if ( v12 > 0x10000 )
        {
          v8 = 2;
          if ( v12 != 114688 )
            v8 = ((v12 - 81920) & 0xFFFF8000) == 0;
          goto LABEL_14;
        }
        if ( (v11 & 0x18000) != 0 )
        {
          v8 = v12 == 49152;
          goto LABEL_14;
        }
LABEL_42:
        v8 = 1;
        goto LABEL_14;
      }
LABEL_44:
      v8 = 2;
      goto LABEL_14;
    }
    if ( v6 != &stru_100000 )
    {
      if ( v6 == (Elf64_Rela *)&stru_1FFFF0.r_addend )
      {
        v8 = (((*(_DWORD *)(qword_2CA1698 + 904) & 0x3000) - 4096) & 0xFFFFE000) == 0;
        goto LABEL_14;
      }
      if ( (v5 & 0xF00000) != 0 )
        return 0;
    }
    v13 = *(_DWORD *)(qword_2CA1698 + 904) & 0xE00;
    if ( v13 == 1536 )
      goto LABEL_44;
    if ( v13 <= 0x600 )
    {
      if ( v13 != 512 )
      {
        v8 = 1;
        if ( v13 != 1024 )
          v8 = 2LL * (v13 == 0);
        goto LABEL_14;
      }
      goto LABEL_44;
    }
    if ( v13 == 2048 )
      goto LABEL_42;
    result = 7;
    v8 = 0;
    if ( v13 == 2560 )
      return result;
LABEL_14:
    radix = get_radix(v5, 0);
    return v8 + b2a_width((unsigned int)a1, radix);
  }
  return result;
}

