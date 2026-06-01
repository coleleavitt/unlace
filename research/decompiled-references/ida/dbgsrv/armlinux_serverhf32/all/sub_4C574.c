/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C574
// Address: 0x0004C574

//----- (0004C574) --------------------------------------------------------
char *__fastcall sub_4C574(int a1, unsigned __int8 *a2, int a3, unsigned __int8 *a4, char a5, unsigned __int8 a6)
{
  int v10; // r4
  char v11; // r4
  int v12; // r7
  const char *v13; // r5
  int *v14; // r0
  char *v15; // r2
  char *v17; // r0
  int v18; // r5
  int v19; // r3
  unsigned int v20; // r7
  int v21; // r5
  char *v22; // r2
  char *v23; // r0
  int v24; // r3
  char *v25; // r0
  _BOOL4 v26; // r0
  char *v27; // [sp+Ch] [bp-1010h]
  char v28[4076]; // [sp+14h] [bp-1008h] BYREF

  v10 = *(_DWORD *)(a1 + 192) & 4;
  if ( sub_76C54(a4) )
  {
    v25 = sub_79524(a2, a4, a3);
    v15 = v25;
    if ( v10 )
    {
      v27 = v25;
      v26 = sub_4B098(a2, a3);
      v15 = v27;
      if ( !v26 )
        return nullptr;
    }
  }
  else
  {
    v11 = v10 != 0;
    if ( a5 == 34 )
      v12 = (a6 ^ 1) & 1;
    else
      v12 = 0;
    if ( !v12 )
    {
      if ( a6 )
      {
        v13 = v28;
        if ( sub_76A6C(v28, 0x1000u, *(char **)(a1 + 152)) )
          goto LABEL_8;
      }
      goto LABEL_7;
    }
    v17 = sub_4B22C((char *)a2, a3, *(char **)(a1 + 152), (int)a4, v11);
    v18 = *(_DWORD *)(a1 + 140);
    v19 = (int)v17;
    if ( v17 )
      v19 = 1;
    v15 = v17;
    v20 = v18 - 1;
    if ( !(v19 | ((unsigned int)(v18 - 1) >> 31)) )
    {
      v21 = 24 * v18 - 24;
      do
      {
        --v20;
        v22 = *(char **)(*(_DWORD *)(a1 + 136) + v21);
        v21 -= 24;
        v23 = sub_4B22C((char *)a2, a3, v22, (int)a4, v11);
        v24 = v20 >> 31;
        if ( v23 )
          v24 = 1;
      }
      while ( !v24 );
      v15 = v23;
    }
    if ( !v15 )
    {
LABEL_7:
      v13 = nullptr;
LABEL_8:
      v14 = ((int *(__fastcall *)())off_D2D44)();
      return sub_4C3E8((int)v14, (char *)a2, a3, (int)a4, v13, v11);
    }
  }
  return v15;
}
// D2D44: using guessed type int (__fastcall *off_D2D44)(_DWORD);
