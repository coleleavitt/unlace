/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433090
// Address: 0x00433090

//----- (00433090) --------------------------------------------------------
int __userpurge sub_433090@<eax>(const CHAR **a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, char *a4, _BYTE *a5)
{
  const char *v6; // eax
  int *v7; // ecx
  int v8; // edi
  int v9; // ebx
  int *v10; // eax
  char *v11; // eax
  __int8 *v12; // eax
  unsigned int v13; // ecx
  char *v14; // ebx
  int v15; // edi
  char *v16; // edi
  int v17; // ebx
  int v18; // esi
  void *v19; // eax
  const CHAR *v21; // eax
  int v22; // esi
  void *v23; // eax
  char *v24; // [esp+10h] [ebp-24h] BYREF
  int v25; // [esp+14h] [ebp-20h]
  int v26; // [esp+18h] [ebp-1Ch]
  int v27; // [esp+1Ch] [ebp-18h]
  const char *v28; // [esp+20h] [ebp-14h]
  int *v29; // [esp+24h] [ebp-10h]
  int v30; // [esp+30h] [ebp-4h]

  if ( *((_DWORD *)a4 + 1) )
    v6 = *(const char **)a4;
  else
    v6 = MultiByteStr;
  v28 = v6;
  v7 = sub_4341B0((int)a1, a2, v6);
  v29 = v7;
  *a5 = 0;
  if ( !v7 )
    return 0;
  v8 = (int)(a1[8] - 1);
  if ( v8 >= 0 )
  {
    v9 = 28 * v8;
    do
    {
      v27 = (int)&a1[7][v9];
      v10 = *(int **)(v27 + 20);
      if ( v10 == v7 )
      {
        if ( !*((_BYTE *)v7 + 13) )
          return 0;
        v11 = v10[1] ? (char *)*v10 : (char *)MultiByteStr;
        a4 = v11;
        v12 = sub_464F10(v11, 0);
        v13 = (unsigned int)a1[1];
        if ( (unsigned int)a4 <= v13 && v13 <= (unsigned int)v12 )
          return 0;
        if ( (int)a1[10] > *(_DWORD *)(v27 + 24) )
          return 0;
        v7 = v29;
      }
      v9 -= 28;
      --v8;
    }
    while ( v8 >= 0 );
  }
  v14 = nullptr;
  v15 = 0;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  if ( !*((_BYTE *)v7 + 13) )
  {
LABEL_31:
    if ( (unsigned int)v7[1] > 1 )
    {
      sub_437960(a1, (int)v7, (int *)&v24);
      a1[10] = a1[8] - 1;
      if ( v29[1] )
        v21 = (const CHAR *)*v29;
      else
        v21 = MultiByteStr;
      v15 = v25;
      v14 = v24;
      a1[1] = v21;
      *a1 = v21;
    }
    *a5 = 1;
    v30 = 4;
    if ( v14 )
    {
      if ( v15 )
      {
        v22 = 0;
        do
        {
          v23 = *(void **)&v14[v22];
          LOBYTE(v30) = 5;
          if ( v23 )
          {
            *(_DWORD *)&v14[v22 + 4] = 0;
            sub_453A20(v23);
            *(_DWORD *)&v14[v22] = 0;
            *(_DWORD *)&v14[v22 + 8] = 0;
            v14 = v24;
          }
          v22 += 12;
          LOBYTE(v30) = 4;
          --v15;
        }
        while ( v15 );
      }
      v25 = 0;
      sub_453A20(v14);
    }
    return 0;
  }
  v27 = sub_432050((int)a1, a3, (int)&v24, (_BYTE *)&a4 + 3);
  if ( v27 || !HIBYTE(a4) )
    goto LABEL_22;
  v7 = v29;
  v15 = v25;
  if ( v25 == *((unsigned __int8 *)v29 + 12) )
  {
    v14 = v24;
    goto LABEL_31;
  }
  sub_45CB10(0, v28);
  v27 = sub_45CC20(39);
LABEL_22:
  v16 = v24;
  v30 = 2;
  if ( v24 )
  {
    v17 = v25;
    if ( v25 )
    {
      v18 = 0;
      do
      {
        v19 = *(void **)&v16[v18];
        LOBYTE(v30) = 3;
        if ( v19 )
        {
          *(_DWORD *)&v16[v18 + 4] = 0;
          sub_453A20(v19);
          *(_DWORD *)&v16[v18] = 0;
          *(_DWORD *)&v16[v18 + 8] = 0;
          v16 = v24;
        }
        v18 += 12;
        LOBYTE(v30) = 2;
        --v17;
      }
      while ( v17 );
    }
    v25 = 0;
    sub_453A20(v16);
  }
  return v27;
}
