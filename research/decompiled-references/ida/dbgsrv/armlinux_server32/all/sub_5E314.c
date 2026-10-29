/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E314
// Address: 0x0005E314

//----- (0005E314) --------------------------------------------------------
unsigned int __fastcall sub_5E314(char **a1)
{
  __int64 v1; // kr00_8
  char *v2; // r1
  int v3; // r5
  size_t v5; // r2
  int v6; // r3
  char *v7; // r7
  _BOOL4 v8; // r3
  int v9; // r6
  char *v10; // [sp+0h] [bp-14h] BYREF
  char v11; // [sp+4h] [bp-10h] BYREF
  char dest[7]; // [sp+5h] [bp-Fh] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *a1 + 1;
  if ( a1[1] < v2 )
  {
    v3 = 1;
    v11 = 0;
  }
  else
  {
    *a1 = v2;
    v11 = *(_BYTE *)v1;
    if ( v11 < 0 )
    {
      if ( (v11 & 0xC0) == 0xC0 )
      {
        v6 = v11 & 0xE0;
        if ( v6 == 224 )
          v3 = 5;
        else
          v3 = 4;
        if ( v6 == 224 )
          v5 = 4;
        else
          v5 = 3;
      }
      else
      {
        v3 = 2;
        v5 = 1;
      }
      v7 = &v2[v5];
      v8 = __CFADD__(v2, v5);
      if ( HIDWORD(v1) < (unsigned int)v7 )
        v9 = v8 | 1;
      else
        v9 = v8;
      if ( !v9 )
      {
        *a1 = v7;
        memcpy(dest, v2, v5);
      }
    }
    else
    {
      v3 = 1;
    }
  }
  v10 = &v11;
  return sub_762E4((unsigned __int8 **)&v10, (unsigned int)&dest[v3 - 1]);
}
