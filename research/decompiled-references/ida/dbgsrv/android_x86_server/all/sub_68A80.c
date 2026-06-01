/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68A80
// Address: 0x00068A80

//----- (00068A80) --------------------------------------------------------
int __userpurge sub_68A80@<eax>(int a1, int **a2, int a3, int a4, _DWORD **a5)
{
  int v5; // edi
  int *v6; // esi
  const char *v7; // edx
  int *v8; // edi
  const char *v9; // edi
  const char *v10; // esi
  int *v11; // eax
  int *v12; // eax
  int *v13; // esi
  _DWORD *v14; // ecx
  char v15; // al
  int *v16; // edi
  _DWORD *v17; // eax
  _DWORD *v18; // edx
  int *v19; // edx
  int *v21; // [esp+Ch] [ebp-20h]
  _DWORD *v22; // [esp+Ch] [ebp-20h]
  const char *v23; // [esp+10h] [ebp-1Ch]
  int *v24; // [esp+14h] [ebp-18h]

  v5 = a1;
  v6 = a2[1];
  if ( !v6 )
  {
    v13 = (int *)(a2 + 1);
    v12 = (int *)(a2 + 1);
    goto LABEL_17;
  }
  v7 = byte_EF875;
  if ( *(_DWORD *)(a3 + 4) )
    v7 = *(const char **)a3;
  v8 = (int *)(a2 + 1);
  v23 = v7;
  while ( 1 )
  {
    v24 = v8;
    v9 = byte_EF875;
    if ( v6[5] )
      v9 = (const char *)v6[4];
    v21 = v6;
    v10 = v7;
    if ( strcmp(v7, v9) >= 0 )
      break;
    v11 = (int *)*v21;
    v8 = v21;
    v7 = v10;
    if ( !*v21 )
    {
      v12 = v21;
      v5 = a1;
      v13 = v21;
      goto LABEL_17;
    }
LABEL_5:
    v6 = v11;
  }
  if ( strcmp(v9, v10) >= 0 )
  {
    v5 = a1;
    v12 = v24;
    v13 = v21;
    goto LABEL_17;
  }
  v13 = v21;
  v8 = v21 + 1;
  v11 = (int *)v21[1];
  if ( v11 )
  {
    v7 = v23;
    goto LABEL_5;
  }
  v12 = v21 + 1;
  v5 = a1;
LABEL_17:
  v14 = (_DWORD *)*v12;
  if ( *v12 )
  {
    v15 = 0;
  }
  else
  {
    v16 = v12;
    v17 = operator new(0x30u);
    v18 = *a5;
    v17[4] = **a5;
    *v18 = 0;
    v17[5] = v18[1];
    v18[1] = 0;
    v17[6] = v18[2];
    v18[2] = 0;
    *((_BYTE *)v17 + 28) = 2;
    *v17 = 0;
    v17[1] = 0;
    v17[9] = 0;
    v17[8] = 0;
    v17[11] = 0;
    v17[10] = 0;
    v17[2] = v13;
    *v16 = (int)v17;
    v19 = (int *)**a2;
    v22 = v17;
    if ( v19 )
    {
      *a2 = v19;
      v17 = (_DWORD *)*v16;
    }
    v5 = a1;
    sub_2D500((int)a2[1], (int)v17);
    a2[2] = (int *)((char *)a2[2] + 1);
    v15 = 1;
    v14 = v22;
  }
  *(_DWORD *)v5 = v14;
  *(_BYTE *)(v5 + 4) = v15;
  return v5;
}
