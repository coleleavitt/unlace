/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A3DC
// Address: 0x0005A3DC

//----- (0005A3DC) --------------------------------------------------------
int __fastcall sub_5A3DC(int a1, int a2, int a3)
{
  int v5; // r4
  const char *v6; // r7
  _DWORD *v7; // r6
  const char *v8; // r0
  int v9; // r0
  int *v10; // r1
  const char *v11; // r1
  int v12; // r5
  unsigned int v13; // r2
  size_t v14; // r7
  const void *v15; // r1
  void *v16; // r0
  const void *v18; // [sp+4h] [bp-24h]
  int v19; // [sp+8h] [bp-20h]
  unsigned int v20; // [sp+Ch] [bp-1Ch]
  char *v21; // [sp+18h] [bp-10h] BYREF
  int v22; // [sp+1Ch] [bp-Ch]
  int v23; // [sp+20h] [bp-8h]

  v22 = 0;
  v21 = nullptr;
  v23 = 0;
  sub_5A030(a3, (int)&v21);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 )
  {
    v19 = a2;
    v6 = &byte_B3CBE;
    if ( v22 )
      v6 = v21;
    v7 = (_DWORD *)(a1 + 4);
    do
    {
      v8 = &byte_B3CBE;
      if ( *(_DWORD *)(v5 + 20) )
        v8 = *(const char **)(v5 + 16);
      v9 = strcmp(v8, v6);
      if ( v9 >= 0 )
        v7 = (_DWORD *)v5;
      v10 = (int *)(v5 + 4);
      if ( v9 >= 0 )
        v10 = (int *)v5;
      v5 = *v10;
    }
    while ( *v10 );
    if ( v7 == (_DWORD *)(a1 + 4)
      || (!v7[5] ? (v11 = &byte_B3CBE) : (v11 = (const char *)v7[4]), strcmp(v6, v11) < 0 || !v19) )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      if ( v7 + 7 != (_DWORD *)v19 )
      {
        v13 = v7[8];
        v14 = v13 - 1;
        if ( v13 < 2 )
        {
          *(_DWORD *)(v19 + 4) = 0;
        }
        else
        {
          v15 = (const void *)v7[7];
          if ( *(_DWORD *)(v19 + 8) >= v13 )
          {
            v16 = *(void **)v19;
          }
          else
          {
            v18 = (const void *)v7[7];
            v20 = v7[8];
            v16 = qvector_reserve(v19, *(void **)v19, v13, 1u);
            *(_DWORD *)v19 = v16;
            v13 = v20;
            v15 = v18;
          }
          *(_DWORD *)(v19 + 4) = v13;
          memmove(v16, v15, v14);
          *(_BYTE *)(*(_DWORD *)v19 + v14) = 0;
        }
      }
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v21 )
  {
    v22 = 0;
    qfree(v21);
    v23 = 0;
    v21 = nullptr;
  }
  return v12;
}
// B3CBE: using guessed type char byte_B3CBE;
