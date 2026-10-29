/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F79C
// Address: 0x0005F79C

//----- (0005F79C) --------------------------------------------------------
void **__fastcall sub_5F79C(void **a1)
{
  void **v1; // r4
  char *v2; // r0
  int i; // r6
  char *v4; // r0
  char *v5; // r4
  char *v6; // r5
  void *v7; // r0
  void **v9; // [sp+0h] [bp-14h]
  unsigned int v10; // [sp+4h] [bp-10h]
  char *v11; // [sp+8h] [bp-Ch]
  unsigned int v12; // [sp+10h] [bp-4h]

  v1 = a1;
  v2 = (char *)*a1;
  if ( v2 )
  {
    v10 = (unsigned int)v1[1];
    if ( v10 )
    {
      v9 = v1;
      v12 = 1;
      for ( i = 16; ; i += 24 )
      {
        v11 = v2;
        v4 = &v2[i];
        v5 = v4 - 8;
        v6 = v4 - 16;
        if ( *((int *)v4 - 4) >= -1 )
        {
          v7 = *((void **)v4 - 2);
          if ( v7 )
          {
            *((_DWORD *)v5 + 1) = 0;
            qfree(v7);
            *(_DWORD *)v5 = 0;
            *(_DWORD *)&v11[i] = 0;
          }
          *(_DWORD *)v6 = -2;
        }
        if ( v12 >= v10 )
          break;
        ++v12;
        v2 = (char *)*v9;
      }
      v1 = v9;
      v2 = (char *)*v9;
    }
    v1[1] = nullptr;
    qfree(v2);
    v1[2] = nullptr;
    *v1 = nullptr;
  }
  return v1;
}
