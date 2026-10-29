/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BA30
// Address: 0x0008BA30

//----- (0008BA30) --------------------------------------------------------
int __fastcall sub_8BA30(_BYTE *a1, int a2, unsigned __int8 *a3, unsigned int *a4)
{
  unsigned int v5; // r6
  _BYTE *v7; // r4
  int v8; // r2
  int v9; // r1
  char *v10; // r1
  char v11; // r2
  int v12; // t1
  unsigned int *v14; // r8
  int v15; // r0

  v5 = (unsigned int)&a1[a2 - 1];
  v7 = a1;
  while ( 1 )
  {
    v8 = *a3;
    if ( !*a3 )
      break;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= v5 )
        goto LABEL_21;
      if ( v8 != 37 )
        goto LABEL_2;
      v9 = a3[1];
      if ( v9 != 115 )
        break;
      v10 = (char *)*a4++;
      v11 = *v10;
      if ( *v10 )
      {
        while ( 1 )
        {
          *v7++ = v11;
          v12 = (unsigned __int8)*++v10;
          v11 = v12;
          if ( !v12 )
            break;
          if ( (_BYTE *)v5 == v7 )
            sub_8B97C(a1, v5);
        }
      }
      a3 += 2;
      v8 = *a3;
      if ( !*a3 )
        goto LABEL_16;
    }
    if ( v9 == 122 )
    {
      if ( a3[2] != 117 )
        goto LABEL_2;
      v14 = a4 + 1;
      v15 = sub_8B9D0(v7, v5 - (_DWORD)v7, *a4, (int)a4);
      if ( v15 <= 0 )
LABEL_21:
        sub_8B97C(a1, (int)v7);
      v7 += v15;
      a3 += 3;
      a4 = v14;
    }
    else
    {
      if ( v9 == 37 )
        ++a3;
LABEL_2:
      *v7 = v8;
      ++a3;
      ++v7;
    }
  }
LABEL_16:
  *v7 = v8;
  return v7 - a1;
}
