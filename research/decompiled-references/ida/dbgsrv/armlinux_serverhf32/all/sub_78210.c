/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78210
// Address: 0x00078210

//----- (00078210) --------------------------------------------------------
char *__fastcall sub_78210(char *result, char *a2)
{
  char *v2; // r6
  int v3; // r5
  unsigned int v4; // r8
  int v5; // r12
  _BOOL4 v6; // r3
  char *v7; // r7
  int v8; // lr
  int v9; // r2
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r1

  if ( result != a2 )
  {
    v2 = result;
    result += 8;
    if ( a2 != result )
    {
      v3 = 8;
      v4 = ((a2 - (v2 + 16)) & 0xFFFFFFF8) + 16;
      do
      {
        v5 = *(_DWORD *)&v2[v3];
        if ( v5 == *(_DWORD *)v2 )
          v6 = *((_DWORD *)result + 1) < *((_DWORD *)v2 + 1);
        else
          v6 = v5 < *(_DWORD *)v2;
        v7 = result + 8;
        if ( v6 )
        {
          v8 = *((_DWORD *)result + 1);
          v9 = v3 >> 3;
          if ( v3 > 0 )
          {
            v10 = result + 8;
            do
            {
              --v9;
              v11 = *(v10 - 4);
              v12 = *(v10 - 3);
              v10 -= 2;
              *v10 = v11;
              v10[1] = v12;
            }
            while ( v9 );
          }
          *(_DWORD *)v2 = v5;
          *((_DWORD *)v2 + 1) = v8;
        }
        else
        {
          sub_781D0(result);
        }
        v3 += 8;
        result = v7;
      }
      while ( v3 != v4 );
    }
  }
  return result;
}
