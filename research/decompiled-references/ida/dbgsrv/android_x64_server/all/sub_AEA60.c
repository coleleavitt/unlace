/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEA60
// Address: 0x00000000000AEA60

//----- (00000000000AEA60) ----------------------------------------------------
unsigned __int64 __fastcall sub_AEA60(const char *a1, const char *a2, char a3)
{
  char v4; // al
  const char *v6; // rax
  _BYTE v7[80]; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    sub_AF190(-1, "Missing %s path\n", a1);
  v4 = a3 & 0xF;
  if ( (a3 & 0xF) == 3 )
  {
    if ( !(unsigned int)qstat(a2, (__int64)v7) )
      sub_AF190(-1, "The %s path %s already exists", a1, a2);
  }
  else if ( v4 == 2 )
  {
    if ( !qisdir(a2) )
      sub_AF190(-1, "The %s directory \"%s\" does not exist\n", a1, a2);
  }
  else if ( v4 == 1 && !qfileexist(a2) )
  {
    sub_AF190(-1, "The %s file \"%s\" does not exist\n", a1, a2);
  }
  if ( (a3 & 0x10) != 0 )
  {
    if ( (unsigned int)qstat(a2, (__int64)v7) )
    {
      v6 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_AF190(-1, "The %s file \"%s\" could not be queried: %s\n", a1, a2, v6);
    }
    if ( (v7[12] & 7) != 0 )
      sub_AF190(-1, "The %s file \"%s\" is world-accessible; exiting\n", a1, a2);
  }
  return __readfsqword(0x28u);
}
