/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmake_full_path
// Address: 0x000AEA90

//----- (000AEA90) --------------------------------------------------------
unsigned int __cdecl qmake_full_path(unsigned int a1, int a2, char *name)
{
  char *v3; // eax
  int v5; // eax
  char resolved[4096]; // [esp+8h] [ebp-1014h] BYREF
  unsigned int v7; // [esp+1008h] [ebp-14h]

  v7 = __readgsdword(0x14u);
  v3 = realpath(name, resolved);
  if ( !v3 )
  {
    if ( *name == 47 || *name == 92 )
    {
      v3 = name;
    }
    else
    {
      if ( !getcwd(resolved, 0x1000u) )
      {
        v5 = qerrstr(-1);
        sub_1DE10("getcwd: %s", v5);
      }
      qmakepath(resolved, 4096, resolved, (int)name);
      v3 = resolved;
    }
  }
  qustrncpy(a1, (int)v3, a2);
  return a1;
}
