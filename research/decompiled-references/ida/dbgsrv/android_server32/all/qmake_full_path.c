/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmake_full_path
// Address: 0x0007D5FC

//----- (0007D5FC) --------------------------------------------------------
unsigned int __fastcall qmake_full_path(unsigned int a1, int a2, char *name)
{
  char *v5; // r0
  int v6; // r2
  char *v7; // r7
  int v8; // r6
  int v9; // r0
  const char *v11; // r0
  char resolved[4100]; // [sp+1Ch] [bp-1004h] BYREF

  v5 = realpath(name, resolved);
  v6 = a2;
  v7 = v5;
  if ( !v5 )
  {
    v8 = v6;
    v9 = (unsigned __int8)*name;
    if ( v9 == 47 || v9 == 92 )
    {
      v7 = name;
    }
    else
    {
      if ( !getcwd(resolved, 0x1000u) )
      {
        v11 = (const char *)qerrstr(-1);
        sub_1C9E4("getcwd: %s", v11);
      }
      v7 = resolved;
      qmakepath(resolved, 4096, resolved);
    }
    v6 = v8;
  }
  qustrncpy(a1, (int)v7, v6);
  return a1;
}
