/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473B88
// Address: 0x00473B88

//----- (00473B88) --------------------------------------------------------
unsigned int __cdecl sub_473B88(int a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // ecx
  char *v4; // esi
  unsigned int v5; // edx
  int v6; // eax
  int v8; // [esp-8h] [ebp-10h]

  v3 = a2;
  v4 = (char *)a2;
  v5 = (unsigned int)&a2[a3];
  if ( (unsigned int)a2 < v5 )
  {
    while ( 1 )
    {
      v6 = *v3;
      if ( v6 == 26 )
        break;
      if ( v6 == 13 && (unsigned int)(v3 + 1) < v5 && (LOWORD(v6) = *v3, v3[1] == 10) )
      {
        LOWORD(v6) = 10;
        v8 = 4;
      }
      else
      {
        v8 = 2;
      }
      v3 = (unsigned __int16 *)((char *)v3 + v8);
      *(_WORD *)v4 = v6;
      v4 += 2;
      if ( (unsigned int)v3 >= v5 )
        return (v4 - (char *)a2) & 0xFFFFFFFE;
    }
    *((_BYTE *)&(*(&dword_4B7B38 + (a1 >> 6)))[1].LockSemaphore + 56 * (a1 & 0x3F)) |= 2u;
  }
  return (v4 - (char *)a2) & 0xFFFFFFFE;
}
