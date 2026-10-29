/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61B00
// Address: 0x00061B00

//----- (00061B00) --------------------------------------------------------
char **__fastcall sub_61B00(char **a1, char **a2)
{
  char *v3; // r0
  char *v4; // r2
  char *v5; // r3
  char *v6; // r1
  unsigned int v7; // r7
  int v8; // r6
  char *i; // r5
  void *v10; // r0
  unsigned int v12; // [sp+10h] [bp-18h]
  char *v13; // [sp+18h] [bp-10h]
  char *v14; // [sp+1Ch] [bp-Ch]
  char *v15; // [sp+20h] [bp-8h]

  v3 = *a2;
  v13 = *a2;
  *a2 = nullptr;
  v4 = a2[1];
  v14 = v4;
  a2[1] = nullptr;
  v5 = a2[2];
  v15 = v5;
  a2[2] = nullptr;
  if ( *a1 )
  {
    v6 = *a1;
    v12 = (unsigned int)a1[1];
    if ( v12 )
    {
      v7 = 1;
      v8 = 8;
      for ( i = *a1; ; i = *a1 )
      {
        v10 = *(void **)&i[v8 - 8];
        if ( v10 )
        {
          *(_DWORD *)&i[v8 - 4] = 0;
          qfree(v10);
          *(_DWORD *)&i[v8 - 8] = 0;
          *(_DWORD *)&i[v8] = 0;
        }
        if ( v7 >= v12 )
          break;
        v8 += 12;
        ++v7;
      }
      v6 = *a1;
    }
    a1[1] = nullptr;
    qfree(v6);
    a1[2] = nullptr;
    *a1 = nullptr;
    v3 = v13;
    v4 = v14;
    v5 = v15;
  }
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  return a1;
}
