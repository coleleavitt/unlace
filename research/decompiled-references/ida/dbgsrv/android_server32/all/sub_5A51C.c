/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A51C
// Address: 0x0005A51C

//----- (0005A51C) --------------------------------------------------------
int __fastcall sub_5A51C(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  int *v5; // r1
  const char *v6; // r7
  int *v7; // r4
  const char *v8; // r0
  int v9; // r0
  int *v10; // r1
  const char *v11; // r1
  int v13; // [sp+8h] [bp-20h]
  int *v14; // [sp+14h] [bp-14h]
  char *v15; // [sp+18h] [bp-10h] BYREF
  int v16; // [sp+1Ch] [bp-Ch]
  int v17; // [sp+20h] [bp-8h]

  v3 = 0;
  v16 = 0;
  v15 = nullptr;
  v17 = 0;
  sub_5A030(a2, (int)&v15);
  v4 = *(_DWORD *)(a1 + 4);
  v5 = (int *)(a1 + 4);
  if ( v4 )
  {
    v13 = a1;
    v6 = &byte_B3CBE;
    if ( v16 )
      v6 = v15;
    v14 = v5;
    v7 = v5;
    do
    {
      v8 = &byte_B3CBE;
      if ( *(_DWORD *)(v4 + 20) )
        v8 = *(const char **)(v4 + 16);
      v9 = strcmp(v8, v6);
      if ( v9 >= 0 )
        v7 = (int *)v4;
      v10 = (int *)(v4 + 4);
      if ( v9 >= 0 )
        v10 = (int *)v4;
      v4 = *v10;
    }
    while ( *v10 );
    if ( v7 == v14 || (!v7[5] ? (v11 = &byte_B3CBE) : (v11 = (const char *)v7[4]), strcmp(v6, v11) < 0) )
    {
      v3 = 0;
    }
    else
    {
      v3 = 1;
      sub_63448(v13, v7);
    }
  }
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
    v17 = 0;
    v15 = nullptr;
  }
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
