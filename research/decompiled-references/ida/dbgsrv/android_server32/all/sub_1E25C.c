/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E25C
// Address: 0x0001E25C

//----- (0001E25C) --------------------------------------------------------
char *__fastcall sub_1E25C(int a1, int a2)
{
  int v3; // r2
  void **v4; // r7
  void **v5; // r5
  int v6; // r0
  void **v7; // r0
  _BYTE *v8; // r6
  _DWORD *v9; // r0
  int *v10; // r1
  int v12; // [sp+4h] [bp-38h]
  _DWORD **v13; // [sp+8h] [bp-34h]
  __int16 v14; // [sp+14h] [bp-28h]
  char v15; // [sp+24h] [bp-18h]
  __int16 v16; // [sp+25h] [bp-17h]

  v3 = a1;
  v4 = (void **)(a1 + 916);
  v13 = (_DWORD **)(a1 + 912);
  v5 = *(void ***)(a1 + 916);
  if ( v5 )
  {
    v4 = (void **)(a1 + 916);
    while ( 1 )
    {
      v6 = (int)v5[4];
      if ( v6 <= a2 )
      {
        if ( v6 >= a2 )
          goto LABEL_11;
        v7 = (void **)v5[1];
        v4 = v5 + 1;
        if ( !v7 )
          goto LABEL_11;
        ++v5;
      }
      else
      {
        v7 = (void **)*v5;
        if ( !*v5 )
        {
          v4 = v5;
          goto LABEL_11;
        }
      }
      v4 = v5;
      v5 = v7;
    }
  }
  v5 = (void **)(a1 + 916);
LABEL_11:
  v8 = *v4;
  if ( !*v4 )
  {
    v12 = v3;
    v8 = operator new(0x40u);
    v8[36] = 0;
    *((_DWORD *)v8 + 4) = a2;
    *((_DWORD *)v8 + 5) = a2;
    *((_DWORD *)v8 + 6) = 0;
    *((_DWORD *)v8 + 7) = 0;
    *((_DWORD *)v8 + 8) = 0;
    *((_WORD *)v8 + 19) = v16;
    v8[37] = v15;
    *((_DWORD *)v8 + 10) = 1;
    *((_WORD *)v8 + 22) = 0;
    *((_WORD *)v8 + 25) = 0;
    *((_WORD *)v8 + 24) = 0;
    *((_DWORD *)v8 + 13) = 0;
    *((_DWORD *)v8 + 14) = 0;
    *((_DWORD *)v8 + 15) = 0;
    *(_DWORD *)v8 = 0;
    *((_DWORD *)v8 + 1) = 0;
    *((_DWORD *)v8 + 2) = v5;
    *((_WORD *)v8 + 23) = v14;
    *v4 = v8;
    v9 = (_DWORD *)**v13;
    if ( v9 )
    {
      *v13 = v9;
      v10 = (int *)*v4;
    }
    else
    {
      v10 = (int *)v8;
    }
    sub_261FA(*(int **)(v12 + 916), v10);
    v3 = v12;
    ++*(_DWORD *)(v12 + 920);
  }
  sub_1E438(v3, (_DWORD *)v8 + 13, a2);
  return v8 + 20;
}
// 1E306: variable 'v16' is possibly undefined
// 1E30C: variable 'v15' is possibly undefined
// 1E32E: variable 'v14' is possibly undefined
