/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61238
// Address: 0x00061238

//----- (00061238) --------------------------------------------------------
int __fastcall sub_61238(_DWORD *a1, int a2, __int16 a3)
{
  char *v4; // r1
  int v5; // r3
  unsigned int v6; // r7
  int v7; // r0
  unsigned int v8; // r2
  __int16 v9; // r2
  __int16 v12; // [sp+Ch] [bp-4h] BYREF

  v12 = a3;
  v4 = (char *)a1[16];
  v5 = a1[17];
  v6 = a1[18];
  v7 = (int)(a1 + 16);
  v8 = v5 + 1;
  if ( v4 <= (char *)&v12 && &v4[2 * v6] > (char *)&v12 )
  {
    if ( v6 < v8 )
    {
      v4 = (char *)qvector_reserve(v7, v4, v8, 2u);
      a1[16] = v4;
      v5 = a1[17];
    }
    goto LABEL_7;
  }
  if ( v6 >= v8 )
  {
LABEL_7:
    v9 = a3;
    goto LABEL_8;
  }
  v4 = (char *)qvector_reserve(v7, v4, v8, 2u);
  a1[16] = v4;
  v5 = a1[17];
  v9 = v12;
LABEL_8:
  *(_WORD *)&v4[2 * v5] = v9;
  ++a1[17];
  return 0;
}
