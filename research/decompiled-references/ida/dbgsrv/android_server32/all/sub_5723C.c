/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5723C
// Address: 0x0005723C

//----- (0005723C) --------------------------------------------------------
_DWORD *__fastcall sub_5723C(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  unsigned int v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  int v10; // r6
  _DWORD *v11; // r3
  int v12; // r1
  unsigned int v13; // r2
  char *v14; // r0
  char *v15; // r0
  _DWORD *v16; // r1
  int v17; // r1
  unsigned int v18; // r2
  char *v19; // r0
  int v20; // r1
  int *v22; // [sp+Ch] [bp-18h]
  void **v23; // [sp+10h] [bp-14h]
  void **v24; // [sp+1Ch] [bp-8h]

  v7 = 0;
  a1[1039] = 0;
  a1[1038] = 0;
  a1[1037] = 0;
  a1[1036] = 0;
  a1[1035] = 0;
  a1[1033] = 0;
  a1[1040] = 0;
  a1[1030] = -1;
  v8 = a1 + 1031;
  *v8 = v8;
  a1[1032] = v8;
  a1[1034] = -1;
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a4;
  a1[4] = a5;
  a1[5] = a6;
  *a1 = &off_D9E58;
  v9 = a1 + 1039;
  v24 = (void **)(a1 + 1038);
  v22 = a1 + 1036;
  v23 = (void **)(a1 + 1035);
  if ( a4[1] )
  {
    v10 = 16;
    do
    {
      if ( *(_DWORD *)(*a4 + v10 - 12) )
      {
        if ( *((unsigned __int8 *)a1 + 16) << 31 && !*(_DWORD *)(*a4 + v10) )
        {
          v11 = a1 + 1036;
          v12 = *v22;
          v13 = *v22 + 1;
          if ( a1[1037] >= v13 )
          {
            v14 = (char *)*v23;
          }
          else
          {
            v14 = (char *)qvector_reserve((int)v23, *v23, v13, 4u);
            *v23 = v14;
            v11 = a1 + 1036;
            v12 = *v22;
            v9 = a1 + 1039;
          }
          v15 = &v14[4 * v12];
          v16 = v11;
        }
        else
        {
          v17 = *v9;
          v18 = *v9 + 1;
          if ( a1[1040] >= v18 )
          {
            v19 = (char *)*v24;
          }
          else
          {
            v19 = (char *)qvector_reserve((int)v24, *v24, v18, 4u);
            *v24 = v19;
            v9 = a1 + 1039;
            v17 = a1[1039];
          }
          v15 = &v19[4 * v17];
          v16 = v9;
        }
        *(_DWORD *)v15 = v7;
        ++*v16;
      }
      v10 += 40;
      ++v7;
      a4 = (_DWORD *)a1[3];
    }
    while ( v7 < a4[1] );
  }
  memset(a1 + 6, 0, 0x1000u);
  qtime64();
  a1[1041] = v20;
  return a1;
}
// 5736A: variable 'v20' is possibly undefined
// D9E58: using guessed type _UNKNOWN *off_D9E58;
