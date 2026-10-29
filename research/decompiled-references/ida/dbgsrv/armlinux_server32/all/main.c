/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: main
// Address: 0x00014B60

//----- (00014B60) --------------------------------------------------------
int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v6; // r7
  int v7; // r10
  void *v8; // r11
  void *src; // [sp+4h] [bp-40h] BYREF
  unsigned int v10; // [sp+8h] [bp-3Ch]
  int v11; // [sp+Ch] [bp-38h]
  char *v12[10]; // [sp+10h] [bp-34h] BYREF
  char v13; // [sp+38h] [bp-Ch]

  sub_3F9F4();
  if ( sub_18788() )
  {
    src = nullptr;
    v10 = 0;
    v11 = 0;
    if ( sub_7A894("IDA_DBGSRV_PASSWD", (int)&src) )
    {
      v6 = v10;
      if ( v10 && (v7 = v10 - 1, v10 != 1) )
      {
        v8 = src;
        if ( v10 > dword_D4B2C )
          dword_D4B24 = (int)sub_78018((int)&dword_D4B24, (void *)dword_D4B24, v10, 1u);
        dword_D4B28 = v6;
        memmove((void *)dword_D4B24, v8, v6 - 1);
        *(_BYTE *)(dword_D4B24 + v7) = 0;
      }
      else
      {
        dword_D4B28 = 0;
      }
    }
    sub_695E4("IDA ARM Linux 32-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    memset(v12, 0, 36);
    byte_D4B30 = byte_D4AD4;
    v13 = 1;
    v12[9] = (char *)sub_695E4;
    sub_5733C((int)&dword_D4AE8, v12, 1);
    sub_6D93C((int)v12, argc, (const void **)argv, (int)&dword_D4AE8);
    sub_65AE0((int)&dword_D4AE8);
    sub_661E0((int)&dword_D4AE8);
    sub_57310((int)v12);
    if ( src )
    {
      v10 = 0;
      sub_77F70(src);
    }
    return 0;
  }
  else
  {
    sub_695E4("Could not initialize subsystem!");
    return -1;
  }
}
// D4AD4: using guessed type char byte_D4AD4;
// D4AE8: using guessed type int dword_D4AE8;
// D4B24: using guessed type int dword_D4B24;
// D4B28: using guessed type int dword_D4B28;
// D4B2C: using guessed type int dword_D4B2C;
// D4B30: using guessed type char byte_D4B30;
