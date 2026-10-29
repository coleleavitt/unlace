/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D330
// Address: 0x0045D330

//----- (0045D330) --------------------------------------------------------
int __userpurge sub_45D330@<eax>(int a1@<ebx>, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // ecx
  unsigned int i; // edx
  char v7; // al
  _BYTE v9[32]; // [esp+8h] [ebp-24h] BYREF

  if ( (unsigned int)a4 > 0x20 )
    return -1;
  if ( a5 )
  {
    v5 = 0;
    for ( i = a4 + a3; v5 < a4; ++v5 )
    {
      v7 = *(_BYTE *)--i;
      v9[v5] = v7;
    }
  }
  else if ( a4 > 0 )
  {
    sub_464310((unsigned int)v9, a3, a4);
  }
  return -(a4 != sub_45D090(a1, a2, (char)v9, a4));
}
