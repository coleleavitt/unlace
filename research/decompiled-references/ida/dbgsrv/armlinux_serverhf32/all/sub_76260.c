/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76260
// Address: 0x00076260

//----- (00076260) --------------------------------------------------------
int __fastcall sub_76260(unsigned __int8 **a1, unsigned int a2, int a3)
{
  unsigned int v6; // r0
  unsigned __int8 *v7; // r6
  int v8; // r4
  size_t v9; // r5
  signed int v10; // r0
  void *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3

  v6 = sub_7617C(a1, a2);
  v7 = &(*a1)[v6];
  v8 = *a1 > v7;
  if ( a2 < (unsigned int)v7 )
    v8 = 1;
  if ( !v8 )
  {
    v9 = v6;
    if ( !a3 )
    {
      v10 = v6 + 1;
      if ( v10 <= 0 )
      {
        v9 = 0;
        v10 = 1;
      }
      goto LABEL_7;
    }
    if ( v6 && **a1 )
    {
      v10 = v6 + 1;
      if ( v10 <= 0 )
        return v8;
LABEL_7:
      v11 = sub_77D94(v10);
      v8 = (int)v11;
      if ( !v11 )
        sub_3E310((int)"unpack_ds", v12, v13, v14);
      memcpy(v11, *a1, v9);
      *(_BYTE *)(v8 + v9) = 0;
      *a1 = v7;
      return v8;
    }
  }
  return 0;
}
// 762CC: variable 'v12' is possibly undefined
// 762CC: variable 'v13' is possibly undefined
// 762CC: variable 'v14' is possibly undefined
