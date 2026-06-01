/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpdir
// Address: 0x000AE6E0

//----- (000AE6E0) --------------------------------------------------------
unsigned int __cdecl qtmpdir(unsigned int a1, int a2)
{
  char *v2; // eax
  int v4; // [esp+10h] [ebp-18h] BYREF
  int v5; // [esp+14h] [ebp-14h]
  int v6; // [esp+18h] [ebp-10h]
  unsigned int v7; // [esp+1Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)qgetenv("TMPDIR", (int)&v4) )
  {
    if ( v5 )
      v2 = (char *)v4;
    else
      v2 = byte_EF875;
    qustrncpy(a1, (int)v2, a2);
  }
  else
  {
    qustrncpy(a1, (int)"/tmp", a2);
  }
  if ( v4 )
  {
    v5 = 0;
    qfree((void *)v4);
    v4 = 0;
    v6 = 0;
  }
  return a1;
}
