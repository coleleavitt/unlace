/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: main
// Address: 0x000149B8

//----- (000149B8) --------------------------------------------------------
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

  sub_3F864();
  if ( sub_185E4() )
  {
    src = nullptr;
    v10 = 0;
    v11 = 0;
    if ( sub_7A72C("IDA_DBGSRV_PASSWD", (int)&src) )
    {
      v6 = v10;
      if ( v10 && (v7 = v10 - 1, v10 != 1) )
      {
        v8 = src;
        if ( v10 > dword_D3B0C )
          dword_D3B04 = (int)sub_77EB0((int)&dword_D3B04, (void *)dword_D3B04, v10, 1u);
        dword_D3B08 = v6;
        memmove((void *)dword_D3B04, v8, v6 - 1);
        *(_BYTE *)(dword_D3B04 + v7) = 0;
      }
      else
      {
        dword_D3B08 = 0;
      }
    }
    sub_6946C("IDA ARM Linux 32-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    memset(v12, 0, 36);
    byte_D3B10 = byte_D3AB4;
    v13 = 1;
    v12[9] = (char *)sub_6946C;
    sub_571B8((int)&dword_D3AC8, v12, 1);
    sub_6D7D0((int)v12, argc, (const void **)argv, (int)&dword_D3AC8);
    sub_65960((int)&dword_D3AC8);
    sub_66060((int)&dword_D3AC8);
    sub_5718C((int)v12);
    if ( src )
    {
      v10 = 0;
      sub_77E08(src);
    }
    return 0;
  }
  else
  {
    sub_6946C("Could not initialize subsystem!");
    return -1;
  }
}
// D3AB4: using guessed type char byte_D3AB4;
// D3AC8: using guessed type int dword_D3AC8;
// D3B04: using guessed type int dword_D3B04;
// D3B08: using guessed type int dword_D3B08;
// D3B0C: using guessed type int dword_D3B0C;
// D3B10: using guessed type char byte_D3B10;
