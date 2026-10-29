/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A95C
// Address: 0x0006A95C

//----- (0006A95C) --------------------------------------------------------
int __fastcall sub_6A95C(const char *a1, const char *a2, char a3)
{
  int result; // r0
  int v6; // r3
  const char *v8; // r0
  _BYTE v9[12]; // [sp+8h] [bp-5Ch] BYREF
  int v10; // [sp+14h] [bp-50h]

  result = (int)&GLOBAL_OFFSET_TABLE_;
  if ( !a2 || !*a2 )
    sub_6A92C(-1, "Missing %s path\n", a1);
  v6 = a3 & 0xF;
  switch ( v6 )
  {
    case 2:
      result = sub_77448((int)a2);
      if ( !result )
        sub_6A92C(-1, "The %s directory \"%s\" does not exist\n", a1, a2);
      break;
    case 3:
      result = sub_77334((int)a2, (int)v9);
      if ( !result )
        sub_6A92C(-1, "The %s path %s already exists", a1, a2);
      break;
    case 1:
      result = sub_77404((int)a2);
      if ( !result )
        sub_6A92C(-1, "The %s file \"%s\" does not exist\n", a1, a2);
      break;
  }
  if ( (a3 & 0x10) != 0 )
  {
    result = sub_77334((int)a2, (int)v9);
    if ( result )
    {
      v8 = (const char *)sub_70EB4(-1);
      sub_6A92C(-1, "The %s file \"%s\" could not be queried: %s\n", a1, a2, v8);
    }
    if ( v10 << 29 )
      sub_6A92C(-1, "The %s file \"%s\" is world-accessible; exiting\n", a1, a2);
  }
  return result;
}
// D2000: using guessed type Elf32_Dyn *GLOBAL_OFFSET_TABLE_;
