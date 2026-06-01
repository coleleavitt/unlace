/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56BCC
// Address: 0x00056BCC

//----- (00056BCC) --------------------------------------------------------
void __fastcall sub_56BCC(int a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v11; // r4
  int v12; // r6
  unsigned int v13; // r0
  int v14; // r1
  int v15; // r2
  int *v16; // r0
  _DWORD *v17; // r3
  int *v18; // r7
  int *v19; // r2
  unsigned int v20; // r1
  unsigned int v21; // r0
  unsigned int v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // [sp+Ch] [bp-14h]
  unsigned int v25; // [sp+18h] [bp-8h]
  int *v26; // [sp+1Ch] [bp-4h]

  v11 = a2[1];
  v12 = (v11 - 1) & v11;
  v13 = a3[1];
  v24 = v11 - 1;
  if ( v12 )
  {
    if ( v13 >= v11 )
      v13 %= v11;
  }
  else
  {
    v13 &= v11 - 1;
  }
  v25 = v13;
  v14 = 4 * v13;
  v26 = a2;
  v15 = *a2;
  v16 = *(int **)(v15 + 4 * v13);
  v17 = (_DWORD *)(v15 + v14);
  do
  {
    v18 = v16;
    v16 = (int *)*v16;
  }
  while ( v16 != a3 );
  v19 = v26;
  v20 = v25;
  if ( v18 == v26 + 2 )
    goto LABEL_14;
  v21 = v18[1];
  if ( !v12 )
  {
    if ( (v21 & v24) == v25 )
      goto LABEL_20;
LABEL_14:
    if ( *a3 )
    {
      v22 = *(_DWORD *)(*a3 + 4);
      if ( v12 )
      {
        if ( v22 >= v11 )
        {
          v19 = v26;
          v22 %= v11;
          v20 = v25;
        }
        if ( v22 == v20 )
          goto LABEL_20;
      }
      else if ( (v22 & v24) == v20 )
      {
        goto LABEL_20;
      }
    }
    *v17 = 0;
    goto LABEL_20;
  }
  if ( v21 >= v11 )
  {
    v19 = v26;
    v21 %= v11;
    v20 = v25;
  }
  if ( v21 != v20 )
    goto LABEL_14;
LABEL_20:
  if ( !*a3 )
    goto LABEL_30;
  v23 = *(_DWORD *)(*a3 + 4);
  if ( !v12 )
  {
    v17 = (_DWORD *)(v11 - 1);
    v23 &= v24;
    if ( v23 != v20 )
      goto LABEL_25;
LABEL_30:
    JUMPOUT(0x56C9A);
  }
  if ( v23 >= v11 )
  {
    v19 = v26;
    v23 %= v11;
    v20 = v25;
  }
  if ( v23 == v20 )
    goto LABEL_30;
LABEL_25:
  sub_56C98(4 * v23, *v19, (int)v19, (int)v17, a5, a6, a7, a8, a9);
}
// 56C78: control flows out of bounds to 56C9A
