/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDE30
// Address: 0x080CDE30

//----- (080CDE30) --------------------------------------------------------
int __cdecl sub_80CDE30(unsigned int *a1, unsigned int a2)
{
  int v2; // edx
  unsigned __int8 *v3; // eax
  int v4; // edx
  unsigned __int8 *v5; // ebx
  int v7; // edx

  v2 = 0;
  v3 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
    goto LABEL_6;
  v4 = *v3;
  v5 = v3 + 1;
  if ( (v4 & 0x80u) != 0 )
  {
    if ( (~(_BYTE)v4 & 0xC0) == 0 )
    {
      if ( (unsigned int)v5 >= a2 )
      {
        ++v3;
        v2 = 0;
      }
      else if ( (unsigned int)(v3 + 2) >= a2 )
      {
        v7 = v3[1];
        v3 += 2;
        v2 = v7 << 8;
      }
      else
      {
        v2 = *(unsigned __int16 *)(v3 + 1);
        v3 += 3;
        LOWORD(v2) = __ROL2__(v2, 8);
      }
      goto LABEL_6;
    }
    if ( (unsigned int)v5 < a2 )
    {
      v2 = *(unsigned __int16 *)v3;
      v3 += 2;
      LOWORD(v2) = __ROL2__(v2, 8) & 0x7FFF;
LABEL_6:
      *a1 = (unsigned int)v3;
      return v2;
    }
  }
  *a1 = (unsigned int)v5;
  return v4;
}
