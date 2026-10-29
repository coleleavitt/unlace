/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DE8C
// Address: 0x0003DE8C

//----- (0003DE8C) --------------------------------------------------------
int __fastcall sub_3DE8C(void **a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned int v3; // r3
  unsigned int v5; // r7
  unsigned int v6; // r4
  unsigned int v7; // r6
  char *v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int v11; // r4
  unsigned int v12; // r7
  _BYTE *v13; // r0
  unsigned __int8 *v14; // r6
  unsigned int v16; // r6
  char *v17; // r0
  unsigned __int8 *v18; // r6
  unsigned int v19; // r6
  int v20; // r4
  _BYTE *v21; // r0
  unsigned __int8 *v22; // r7
  unsigned int v23; // [sp+4h] [bp-2Ch]
  unsigned int v24; // [sp+Ch] [bp-24h]
  unsigned __int8 v26[8]; // [sp+14h] [bp-1Ch] BYREF
  int v27; // [sp+1Ch] [bp-14h]
  int v28; // [sp+20h] [bp-10h]
  int v29; // [sp+24h] [bp-Ch]
  int v30; // [sp+28h] [bp-8h]
  int v31; // [sp+2Ch] [bp-4h]

  v3 = a2;
  v5 = (unsigned int)a1[1];
  if ( v5 > a2 )
  {
    v6 = 24 * a2;
    v24 = a2;
    v7 = a2;
    do
    {
      free_idcv((unsigned __int8 *)*a1 + v6);
      v6 += 24;
      ++v7;
    }
    while ( v7 < v5 );
LABEL_4:
    a1[1] = (void *)v24;
    return _stack_chk_guard - v31;
  }
  if ( v5 >= a2 )
    return _stack_chk_guard - v31;
  v23 = (unsigned int)a1[2];
  v8 = (char *)*a1;
  v24 = v3;
  if ( *a1 > a3 || (char *)*a1 + 24 * v23 <= (char *)a3 )
  {
    if ( v23 < v3 )
    {
      v16 = v3;
      v17 = (char *)qvector_reserve((int)a1, v8, v3, 0x18u);
      v3 = v16;
      v8 = v17;
      *a1 = v17;
      v5 = (unsigned int)a1[1];
    }
    if ( v5 < v3 )
    {
      v8[24 * v5] = 2;
      v18 = (unsigned __int8 *)&v8[24 * v5];
      memset(v18 + 8, 0, 0x10u);
      copy_idcv(v18, a3);
      if ( v5 + 1 != v24 )
      {
        v19 = v24 - 1 - v5;
        v20 = 24 * v5 + 24;
        do
        {
          v21 = *a1;
          v21[v20] = 2;
          v22 = &v21[v20];
          memset(&v21[v20 + 8], 0, 0x10u);
          copy_idcv(v22, a3);
          --v19;
          v20 += 24;
        }
        while ( v19 );
      }
    }
    goto LABEL_4;
  }
  v26[0] = 2;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  copy_idcv(v26, a3);
  v9 = v24;
  if ( (unsigned int)a1[2] < v24 )
  {
    *a1 = qvector_reserve((int)a1, *a1, v24, 0x18u);
    v9 = v24;
  }
  v10 = (unsigned int)a1[1];
  if ( v10 < v9 )
  {
    v11 = 24 * v10;
    v12 = v24 - v10;
    do
    {
      v13 = *a1;
      v13[v11] = 2;
      v14 = &v13[v11];
      memset(&v13[v11 + 8], 0, 0x10u);
      copy_idcv(v14, v26);
      v11 += 24;
      --v12;
    }
    while ( v12 );
  }
  a1[1] = (void *)v24;
  free_idcv(v26);
  return _stack_chk_guard - v31;
}
