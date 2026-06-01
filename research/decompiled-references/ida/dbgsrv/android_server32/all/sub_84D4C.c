/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84D4C
// Address: 0x00084D4C

//----- (00084D4C) --------------------------------------------------------
int __fastcall sub_84D4C(int a1, unsigned int a2)
{
  int v4; // r5
  unsigned int v5; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r3
  int v13; // r6
  unsigned int i; // r7
  int v15; // r0
  int v16; // r6
  unsigned int v17; // r7
  int v18; // r0
  int v19; // r0
  unsigned int v21; // [sp+Ch] [bp-14h]
  int v22; // [sp+10h] [bp-10h]
  int pipedes[2]; // [sp+14h] [bp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 4) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v4);
      if ( v6 != -1 )
        close(v6);
      v7 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + v4);
      if ( v7 != -1 )
        close(v7);
      v4 += 4;
      ++v5;
    }
    while ( v5 < *(_DWORD *)(a1 + 4) );
  }
  qfree(*(void **)(a1 + 8));
  v8 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  qfree(*(void **)(a1 + 12));
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = qcalloc(a2, 4u);
  *(_DWORD *)(a1 + 12) = qcalloc(*(_DWORD *)(a1 + 4), 4u);
  if ( *(_DWORD *)(a1 + 4) )
  {
    v9 = 0;
    v10 = -1;
    v11 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + v9) = -1;
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + v9) = -1;
      v9 += 4;
      ++v11;
      v12 = *(_DWORD *)(a1 + 4);
    }
    while ( v11 < v12 );
    v8 = 0;
    if ( v12 )
    {
      v13 = 0;
      for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
      {
        v21 = v11;
        v22 = v10;
        v15 = pipe(pipedes);
        if ( v15 )
        {
          v8 = *(_DWORD *)_errno(v15);
          v10 = v22;
          v11 = v21;
          if ( v8 )
          {
            if ( *(_DWORD *)(a1 + 4) )
            {
              v16 = 0;
              v17 = 0;
              do
              {
                v18 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v16);
                if ( v18 != -1 )
                  close(v18);
                v19 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + v16);
                if ( v19 != -1 )
                  close(v19);
                v16 += 4;
                ++v17;
              }
              while ( v17 < *(_DWORD *)(a1 + 4) );
            }
            qfree(*(void **)(a1 + 8));
            *(_DWORD *)(a1 + 8) = 0;
            qfree(*(void **)(a1 + 12));
            *(_DWORD *)(a1 + 4) = 0;
            *(_DWORD *)(a1 + 12) = 0;
            return v8;
          }
        }
        else
        {
          v11 = pipedes[1];
          v10 = pipedes[0];
        }
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + v13) = v10;
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + v13) = v11;
        v13 += 4;
        v8 = 0;
      }
    }
  }
  return v8;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
