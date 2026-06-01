/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_665C2
// Address: 0x000665C2

//----- (000665C2) --------------------------------------------------------
int __fastcall sub_665C2(int a1, int *a2, unsigned int *a3, int a4)
{
  int v4; // r6
  int **v5; // r5
  int v6; // r0
  int *v7; // r7
  unsigned int v8; // r4
  int *v9; // r1
  unsigned int v10; // r0
  int **v11; // r3
  unsigned int *v12; // r4
  int **v13; // r6
  unsigned int v14; // r0
  int *v15; // r0
  int *v16; // r5
  _DWORD *v17; // r0
  int *v18; // r1
  void **v19; // r4
  unsigned int v20; // r1
  const void *v21; // r3
  unsigned int v22; // r7
  void *v23; // r0
  unsigned int *v24; // r4
  const void *v27; // [sp+8h] [bp-24h]
  _DWORD *v28; // [sp+10h] [bp-1Ch]
  size_t v29; // [sp+14h] [bp-18h]
  _DWORD **v30; // [sp+18h] [bp-14h]
  unsigned int *v32; // [sp+20h] [bp-Ch]
  unsigned int *v33; // [sp+20h] [bp-Ch]
  int **v34; // [sp+24h] [bp-8h]
  int v35; // [sp+28h] [bp-4h]

  v4 = a4;
  if ( a4 >= 1 )
  {
    v28 = (_DWORD *)(a1 + 180);
    v5 = (int **)(a1 + 176);
    v30 = (_DWORD **)(a1 + 172);
    v6 = 0;
    v34 = v5;
    do
    {
      v35 = v6;
      v7 = *v5;
      v8 = *a3;
      if ( a3[2] > 1 )
      {
        if ( v7 )
        {
          v13 = v5;
          while ( 1 )
          {
            v14 = v7[4];
            if ( v8 >= v14 )
            {
              if ( v14 >= v8 )
                goto LABEL_24;
              v15 = (int *)v7[1];
              v13 = (int **)(v7 + 1);
              if ( !v15 )
                goto LABEL_24;
              ++v7;
            }
            else
            {
              v15 = (int *)*v7;
              if ( !*v7 )
              {
                v13 = (int **)v7;
                goto LABEL_24;
              }
            }
            v13 = (int **)v7;
            v7 = v15;
          }
        }
        v7 = (int *)v5;
        v13 = v5;
LABEL_24:
        v16 = *v13;
        if ( *v13 )
        {
          v4 = a4;
        }
        else
        {
          v32 = a3;
          v16 = (int *)operator new(0x114u);
          v16[4] = v8;
          memset(v16 + 5, 0, 0x100u);
          v16[13] = -1;
          v16[14] = -1;
          v16[15] = -1;
          memset(v16 + 16, 0, 0xCCu);
          *v16 = 0;
          v16[1] = 0;
          v16[2] = (int)v7;
          *v13 = v16;
          v17 = (_DWORD *)**v30;
          if ( v17 )
          {
            *v30 = v17;
            v18 = *v13;
          }
          else
          {
            v18 = v16;
          }
          v4 = a4;
          sub_261FA(*v34, v18);
          ++*v28;
          a3 = v32;
          v8 = *v32;
        }
        v16[5] = v8;
        v19 = (void **)(v16 + 6);
        if ( v16 + 5 != (int *)a3 )
        {
          v20 = a3[2];
          if ( v20 < 2 )
          {
            v16[7] = 0;
          }
          else
          {
            v21 = (const void *)a3[1];
            v33 = a3;
            v29 = v20 - 1;
            if ( v16[8] >= v20 )
            {
              v23 = *v19;
            }
            else
            {
              v22 = a3[2];
              v27 = (const void *)a3[1];
              v23 = qvector_reserve((int)(v16 + 6), *v19, v20, 1u);
              v21 = v27;
              v20 = v22;
              *v19 = v23;
            }
            v16[7] = v20;
            memmove(v23, v21, v29);
            *(_BYTE *)(v16[6] + v29) = 0;
            a3 = v33;
          }
        }
        v16[9] = a3[4];
        v24 = a3;
        sub_63C9C((int)(v16 + 10), (int)(a3 + 5));
        qmemcpy(v16 + 13, v24 + 8, 0xE0u);
        a3 = v24;
        v5 = v34;
      }
      else if ( v7 )
      {
        v9 = (int *)v5;
        do
        {
          v10 = v7[4];
          if ( v10 >= v8 )
            v9 = v7;
          v11 = (int **)(v7 + 1);
          if ( v10 >= v8 )
            v11 = (int **)v7;
          v7 = *v11;
        }
        while ( *v11 );
        if ( v9 != (int *)v5 && v8 >= v9[4] )
        {
          v12 = a3;
          sub_67494((int)v30, v9);
          a3 = v12;
        }
      }
      a3 += 64;
      v6 = v35 + 1;
    }
    while ( v35 + 1 != v4 );
  }
  if ( a2 )
    *a2 = v4;
  return 1;
}
