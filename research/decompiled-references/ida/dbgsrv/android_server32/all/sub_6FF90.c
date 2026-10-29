/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FF90
// Address: 0x0006FF90

//----- (0006FF90) --------------------------------------------------------
int __fastcall sub_6FF90(int a1, const char *a2, char a3)
{
  int v5; // r0
  char *v6; // r1
  _DWORD v8[3]; // [sp+8h] [bp-54h] BYREF
  unsigned __int8 v9; // [sp+14h] [bp-48h]
  int v10; // [sp+58h] [bp-4h]

  if ( !a2 || !*a2 )
    sub_70460(-1, "Missing %s path\n");
  v5 = a3 & 0xF;
  if ( v5 == 3 )
  {
    if ( !qstat(a2, v8) )
    {
      v6 = "The %s path %s already exists";
      goto LABEL_19;
    }
  }
  else if ( v5 == 2 )
  {
    if ( !qisdir(a2) )
    {
      v6 = "The %s directory \"%s\" does not exist\n";
      goto LABEL_19;
    }
  }
  else if ( v5 == 1 && !qfileexist(a2) )
  {
    v6 = "The %s file \"%s\" does not exist\n";
    goto LABEL_19;
  }
  if ( (a3 & 0x10) != 0 )
  {
    if ( qstat(a2, v8) )
    {
      qerrstr(-1);
      v6 = "The %s file \"%s\" could not be queried: %s\n";
    }
    else
    {
      if ( !(v9 << 29) )
        return _stack_chk_guard - v10;
      v6 = "The %s file \"%s\" is world-accessible; exiting\n";
    }
LABEL_19:
    sub_70460(-1, v6);
  }
  return _stack_chk_guard - v10;
}
