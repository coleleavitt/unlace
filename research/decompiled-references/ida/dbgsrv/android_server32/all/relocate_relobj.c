/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: relocate_relobj
// Address: 0x00083EF0

//----- (00083EF0) --------------------------------------------------------
int __fastcall relocate_relobj(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v5; // r4
  char *v6; // r2
  char v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r4
  unsigned int v10; // r0
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]
  _BYTE *v15; // [sp+18h] [bp-8h] BYREF

  result = 0;
  if ( a1 )
  {
    v5 = a1[5];
    if ( v5 )
    {
      v6 = (char *)a1[4];
      v7 = *v6;
      if ( (*v6 & 0x80) == 0 && 1 << (v7 & 0xF) <= 8 )
      {
        v12 = 1 << (v7 & 0xF);
        if ( (unsigned int)(a1[1] + a2) >= a1[1] )
        {
          v13 = a2 - a1[3];
          if ( v13 )
          {
            v15 = v6 + 1;
            v8 = (unsigned int)&v6[v5];
            if ( v6 + 1 >= &v6[v5] )
            {
LABEL_11:
              a1[3] = a2;
              return 1;
            }
            else
            {
              while ( 1 )
              {
                v9 = v8;
                v10 = unpack_dd((unsigned int *)&v15, v8);
                if ( v10 + v12 <= v10 || v10 + v12 >= a1[1] )
                  return 0;
                reloc_value(*a1 + v10, v12, v13, a3);
                v8 = v9;
                if ( (unsigned int)v15 >= v9 )
                  goto LABEL_11;
              }
            }
          }
          else
          {
            return 1;
          }
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
