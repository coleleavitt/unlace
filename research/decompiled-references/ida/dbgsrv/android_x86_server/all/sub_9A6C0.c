/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A6C0
// Address: 0x0009A6C0

//----- (0009A6C0) --------------------------------------------------------
unsigned int __cdecl sub_9A6C0(int a1, char *file, char a3)
{
  char v3; // cl
  char v4; // al
  bool v5; // al
  bool v6; // al
  int v7; // eax
  int v9[3]; // [esp+8h] [ebp-64h] BYREF
  char v10; // [esp+14h] [ebp-58h]
  unsigned int v11; // [esp+58h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  if ( !file || !*file )
    sub_9AE60(-1, "Missing %s path\n");
  v3 = a3;
  v4 = a3 & 0xF;
  if ( (a3 & 0xF) == 3 )
  {
    v7 = qstat(file, (int)v9);
    v3 = a3;
    if ( !v7 )
      sub_9AE60(-1, "The %s path %s already exists", a1, file);
  }
  else if ( v4 == 2 )
  {
    v6 = qisdir(file);
    v3 = a3;
    if ( !v6 )
      sub_9AE60(-1, "The %s directory \"%s\" does not exist\n", a1, file);
  }
  else if ( v4 == 1 )
  {
    v5 = qfileexist(file);
    v3 = a3;
    if ( !v5 )
      sub_9AE60(-1, "The %s file \"%s\" does not exist\n", a1, file);
  }
  if ( (v3 & 0x10) != 0 )
  {
    if ( qstat(file, (int)v9) )
    {
      qerrstr(-1);
      sub_9AE60(-1, "The %s file \"%s\" could not be queried: %s\n", a1);
    }
    if ( (v10 & 7) != 0 )
      sub_9AE60(-1, "The %s file \"%s\" is world-accessible; exiting\n", a1, file);
  }
  return __readgsdword(0x14u);
}
