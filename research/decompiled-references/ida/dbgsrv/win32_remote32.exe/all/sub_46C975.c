/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C975
// Address: 0x0046C975

//----- (0046C975) --------------------------------------------------------
int __usercall sub_46C975@<eax>(unsigned int a1@<ebx>, int a2@<edi>, _BYTE *a3, unsigned int a4, int *a5)
{
  _BYTE *v5; // esi
  int v6; // edx
  char *v7; // ebx
  int v8; // ebx
  _BYTE *v9; // esi
  char *v10; // ecx
  int v11; // edx
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax

  v5 = a3;
  if ( a3
    && a4
    && (*a3 = 0, a4 >= 0x1A)
    && (a2 = (int)a5) != 0
    && a5[5] >= 0
    && (unsigned int)a5[4] <= 0xB
    && (unsigned int)a5[2] <= 0x17
    && (unsigned int)a5[1] <= 0x3B
    && (unsigned int)*a5 <= 0x3C
    && (a1 = a5[6], a1 <= 6)
    && sub_46CB1F(a5[5], a5[4], a5[3]) )
  {
    v6 = 0;
    v7 = &aSunmontuewedth[3 * a1];
    if ( v7 < v7 + 3 )
    {
      do
        *v5++ = v7[v6++];
      while ( v6 != (v7 + 3 < v7 ? 0 : 3) );
    }
    *v5 = 32;
    v8 = 0;
    v9 = v5 + 1;
    v10 = &aJanfebmaraprma[3 * a5[4]];
    v11 = v10 + 3 < v10 ? 0 : 3;
    if ( v10 < v10 + 3 )
    {
      do
      {
        *v9++ = *v10++;
        ++v8;
      }
      while ( v8 != v11 );
    }
    *v9 = 32;
    v12 = sub_46CAE6(v9 + 1, a5[3], 0);
    *v12 = 32;
    v13 = sub_46CAE6(v12 + 1, a5[2], 1);
    *v13 = 58;
    v14 = sub_46CAE6(v13 + 1, a5[1], 1);
    *v14 = 58;
    v15 = sub_46CAE6(v14 + 1, *a5, 1);
    *v15 = 32;
    v16 = sub_46CAE6(v15 + 1, (a5[5] + 1900) / 100, 1);
    *(_WORD *)sub_46CAE6(v16, (a5[5] + 1900) % 100, 1) = 10;
    return 0;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
}
