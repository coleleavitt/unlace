/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37778
// Address: 0x00037778

//----- (00037778) --------------------------------------------------------
int __fastcall sub_37778(char **a1, unsigned int a2, char *a3)
{
  unsigned int v5; // r0
  char *v7; // r1
  unsigned int v8; // r2
  int v9; // r2
  char *v10; // r1
  unsigned int v11; // r0
  int v12; // r2
  char *v13; // r1
  char *v14; // r1
  int v16; // r2
  char *v17; // r1
  unsigned int v18; // r0
  int v19; // r2
  char *v20; // r1
  char *v21; // r1
  int v22; // [sp+14h] [bp-14h]
  int v23; // [sp+18h] [bp-10h]
  int v24; // [sp+1Ch] [bp-Ch]
  int v25; // [sp+20h] [bp-8h]
  int v26; // [sp+24h] [bp-4h]

  v5 = (unsigned int)a1[1];
  if ( v5 > a2 )
  {
LABEL_2:
    a1[1] = (char *)a2;
    return _stack_chk_guard - v26;
  }
  if ( v5 >= a2 )
    return _stack_chk_guard - v26;
  v7 = *a1;
  v8 = (unsigned int)a1[2];
  if ( *a1 > a3 || &(*a1)[16 * v8] <= a3 )
  {
    if ( v8 < a2 )
    {
      v7 = (char *)qvector_reserve((int)a1, v7, a2, 0x10u);
      *a1 = v7;
      v5 = (unsigned int)a1[1];
    }
    if ( v5 < a2 )
    {
      v16 = 16 * v5;
      *(_DWORD *)&v7[16 * v5] = *(_DWORD *)a3;
      v17 = &v7[16 * v5];
      *((_DWORD *)v17 + 3) = *((_DWORD *)a3 + 3);
      *((_DWORD *)v17 + 2) = *((_DWORD *)a3 + 2);
      *((_DWORD *)v17 + 1) = *((_DWORD *)a3 + 1);
      if ( v5 + 1 != a2 )
      {
        v18 = a2 - 1 - v5;
        v19 = v16 + 16;
        do
        {
          v20 = *a1;
          *(_DWORD *)&v20[v19] = *(_DWORD *)a3;
          v21 = &v20[v19];
          *((_DWORD *)v21 + 3) = *((_DWORD *)a3 + 3);
          *((_DWORD *)v21 + 2) = *((_DWORD *)a3 + 2);
          *((_DWORD *)v21 + 1) = *((_DWORD *)a3 + 1);
          --v18;
          v19 += 16;
        }
        while ( v18 );
      }
    }
    goto LABEL_2;
  }
  v25 = *((_DWORD *)a3 + 3);
  v24 = *((_DWORD *)a3 + 2);
  v23 = *((_DWORD *)a3 + 1);
  v22 = *(_DWORD *)a3;
  if ( v8 < a2 )
  {
    v7 = (char *)qvector_reserve((int)a1, v7, a2, 0x10u);
    *a1 = v7;
    v5 = (unsigned int)a1[1];
  }
  if ( v5 < a2 )
  {
    v9 = 16 * v5;
    *(_DWORD *)&v7[16 * v5] = v22;
    v10 = &v7[16 * v5 + 4];
    *(_DWORD *)v10 = v23;
    *((_DWORD *)v10 + 1) = v24;
    *((_DWORD *)v10 + 2) = v25;
    if ( v5 + 1 != a2 )
    {
      v11 = a2 - 1 - v5;
      v12 = v9 + 16;
      do
      {
        v13 = *a1;
        *(_DWORD *)&v13[v12] = v22;
        v14 = &v13[v12];
        *((_DWORD *)v14 + 1) = v23;
        *((_DWORD *)v14 + 2) = v24;
        *((_DWORD *)v14 + 3) = v25;
        --v11;
        v12 += 16;
      }
      while ( v11 );
    }
  }
  a1[1] = (char *)a2;
  return _stack_chk_guard - v26;
}
// 3781E: variable 'v26' is possibly undefined
