/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A2D0
// Address: 0x0045A2D0

//----- (0045A2D0) --------------------------------------------------------
char __stdcall sub_45A2D0(int *a1, unsigned __int8 **a2, unsigned int a3)
{
  int *v3; // edi
  unsigned __int8 **v4; // ebx
  unsigned int v5; // ebp
  unsigned __int8 *v6; // esi
  unsigned __int8 v7; // al
  int v9; // ecx
  int v10; // eax

  v3 = a1;
  if ( a1 )
    *a1 = -1;
  v4 = a2;
  v5 = (unsigned int)*a2;
  v6 = *a2 - 1;
  if ( (unsigned int)v6 < a3 )
    return 0;
  v7 = *v6;
  if ( (*v6 & 0x80u) != 0 )
  {
    if ( (v7 & 0xC0) == 0x80 )
    {
      v9 = 1;
      while ( 1 )
      {
        --v6;
        ++v9;
        if ( (unsigned int)v6 < a3 || v9 > 4 )
          break;
        if ( (*v6 & 0xC0) != 0x80 )
        {
          a1 = (int *)v6;
          v10 = sub_45A040((int *)&a1);
          if ( v10 == -1 || (unsigned int)a1 > v5 )
            return 0;
          if ( !v3 )
            goto LABEL_7;
          *v3 = v10;
          *v4 = v6;
          return 1;
        }
      }
    }
    return 0;
  }
  if ( v3 )
    *v3 = v7;
LABEL_7:
  *v4 = v6;
  return 1;
}
