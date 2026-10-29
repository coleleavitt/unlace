/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77230
// Address: 0x00077230

//----- (00077230) --------------------------------------------------------
__suseconds_t __cdecl sub_77230(_DWORD *a1, int a2, int a3, int *a4, int a5, int a6)
{
  int *v6; // eax
  _DWORD *v7; // edx
  void **v8; // ebx
  unsigned int v9; // esi
  int v10; // edi
  int v11; // ecx
  char *v12; // eax
  char *v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // ecx
  char *v17; // eax
  _DWORD *v18; // ebx
  _DWORD *v19; // esi
  __suseconds_t result; // eax
  int v21; // edx
  void **v22; // [esp+4h] [ebp-28h]

  v6 = a4;
  *a1 = &off_1381FC;
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a4;
  a1[4] = a5;
  v7 = a1;
  a1[5] = a6;
  a1[1030] = -1;
  a1[1031] = a1 + 1031;
  a1[1032] = a1 + 1031;
  a1[1033] = 0;
  a1[1034] = -1;
  v22 = (void **)(a1 + 1035);
  a1[1036] = 0;
  a1[1035] = 0;
  a1[1038] = 0;
  a1[1037] = 0;
  a1[1040] = 0;
  a1[1039] = 0;
  v8 = (void **)(a1 + 1038);
  if ( a4[1] )
  {
    v9 = 0;
    v10 = 16;
    while ( 1 )
    {
      v15 = *v6;
      if ( *(_DWORD *)(v15 + v10 - 12) )
        break;
LABEL_15:
      ++v9;
      v6 = (int *)v7[3];
      v10 += 40;
      if ( v9 >= v6[1] )
        goto LABEL_16;
    }
    if ( (v7[4] & 1) != 0 && !*(_DWORD *)(v15 + v10) )
    {
      v11 = *(_DWORD *)((char *)v7 + (_DWORD)(&dword_13BD08 - 322358));
      if ( *(_DWORD *)((char *)v7 + (_DWORD)(&dword_13BD0C - 322358)) >= (unsigned int)(v11 + 1) )
      {
        v13 = (char *)*v22 + 4 * v11;
        v14 = a1 + 1036;
LABEL_14:
        *(_DWORD *)v13 = v9;
        ++*v14;
        goto LABEL_15;
      }
      v12 = (char *)qvector_reserve((int)v22, *v22, v11 + 1, 4u);
      *v22 = v12;
      v13 = &v12[4 * a1[1036]];
      v14 = a1 + 1036;
      v7 = a1;
    }
    else
    {
      v16 = *(_DWORD *)((char *)v7 + (_DWORD)(&dword_13BD14 - 322358));
      if ( *(_DWORD *)((char *)v7 + (_DWORD)(&dword_13BD18 - 322358)) >= (unsigned int)(v16 + 1) )
      {
        v17 = (char *)*v8;
        v18 = a1 + 1039;
      }
      else
      {
        v17 = (char *)qvector_reserve((int)v8, *v8, v16 + 1, 4u);
        a1[1038] = v17;
        v18 = a1 + 1039;
        v16 = a1[1039];
        v7 = a1;
      }
      v13 = &v17[4 * v16];
      v14 = v18;
    }
    v8 = (void **)(a1 + 1038);
    goto LABEL_14;
  }
LABEL_16:
  v19 = v7;
  memset(v7 + 6, 0, 0x1000u);
  result = qtime64();
  v19[1041] = v21;
  return result;
}
// 77400: variable 'v21' is possibly undefined
// 1381FC: using guessed type int (__cdecl *off_1381FC)(int);
// 13BD08: using guessed type int dword_13BD08;
// 13BD0C: using guessed type int dword_13BD0C;
// 13BD14: using guessed type int dword_13BD14;
// 13BD18: using guessed type int dword_13BD18;
