/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61BBC
// Address: 0x00061BBC

//----- (00061BBC) --------------------------------------------------------
_DWORD *__fastcall sub_61BBC(char **a1)
{
  _DWORD *v1; // r3
  char *v2; // r5
  unsigned int v3; // r7
  int i; // r6
  void *v5; // r0
  _DWORD *v6; // r7
  _DWORD *v7; // r4
  unsigned int v9; // [sp+4h] [bp-8h]
  unsigned int v10; // [sp+8h] [bp-4h]

  v1 = a1;
  v2 = *a1;
  if ( *a1 )
  {
    v9 = (unsigned int)a1[1];
    if ( v9 )
    {
      v3 = 1;
      for ( i = 8; ; i += 12 )
      {
        v5 = *(void **)&v2[i - 8];
        if ( v5 )
        {
          v10 = v3;
          v6 = v1;
          *(_DWORD *)&v2[i - 4] = 0;
          qfree(v5);
          *(_DWORD *)&v2[i - 8] = 0;
          *(_DWORD *)&v2[i] = 0;
          v1 = v6;
          v3 = v10;
        }
        if ( v3 >= v9 )
          break;
        ++v3;
        v2 = (char *)*v1;
      }
      v2 = (char *)*v1;
    }
    v1[1] = 0;
    v7 = v1;
    qfree(v2);
    v7[2] = 0;
    *v7 = 0;
    return v7;
  }
  return v1;
}
