/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21230
// Address: 0x00021230

//----- (00021230) --------------------------------------------------------
char __cdecl sub_21230(int a1, int a2, int a3, unsigned int *a4, unsigned int a5, char a6)
{
  unsigned int v6; // edx
  char result; // al
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // [esp+14h] [ebp-18h]

  v6 = a5;
  result = 1;
  if ( a5 )
  {
    while ( 1 )
    {
      v10 = 4096 - (a3 & 0xFFF);
      v14 = v6;
      if ( v10 >= v6 )
        v10 = v6;
      v11 = v10;
      if ( a6 != 1 )
        v11 = 128;
      if ( v10 <= 128 )
        v11 = v10;
      v12 = sub_21300(a1, a2, a3, a4, v11, a6);
      if ( v12 < 0 )
        return 0;
      if ( v12 )
      {
        v13 = 0;
        while ( *((_BYTE *)a4 + v13) )
        {
          if ( ++v13 >= v12 )
            goto LABEL_13;
        }
        return 1;
      }
LABEL_13:
      a3 += v12;
      a4 = (unsigned int *)((char *)a4 + v12);
      v6 = v14 - v12;
      if ( v14 == v12 )
        return 1;
    }
  }
  return result;
}
