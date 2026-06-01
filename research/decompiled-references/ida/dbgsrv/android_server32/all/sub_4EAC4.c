/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EAC4
// Address: 0x0004EAC4

//----- (0004EAC4) --------------------------------------------------------
int __fastcall sub_4EAC4(int a1)
{
  char *v2; // r5
  char *v3; // r6
  void *v4; // r0

  v2 = *(char **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = *(char **)v2;
      sub_55EE0((char **)v2 + 5);
      if ( (unsigned __int8)v2[8] << 31 )
        operator delete(*((void **)v2 + 4));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}
