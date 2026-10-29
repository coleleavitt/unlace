/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56B90
// Address: 0x00056B90

//----- (00056B90) --------------------------------------------------------
int __userpurge sub_56B90@<eax>(int a1, int **a2, int a3, __int128 *a4)
{
  int v4; // edi
  int *v5; // esi
  const char *v6; // edx
  int *v7; // edi
  const char *v8; // edi
  const char *v9; // esi
  int *v10; // eax
  int *v11; // eax
  int *v12; // esi
  _OWORD *v13; // ecx
  char v14; // al
  int *v15; // edi
  _OWORD *v16; // eax
  __int128 v17; // xmm0
  int *v18; // edx
  int *v20; // [esp+Ch] [ebp-20h]
  _OWORD *v21; // [esp+Ch] [ebp-20h]
  const char *v22; // [esp+10h] [ebp-1Ch]
  int *v23; // [esp+14h] [ebp-18h]

  v4 = a1;
  v5 = a2[1];
  if ( !v5 )
  {
    v12 = (int *)(a2 + 1);
    v11 = (int *)(a2 + 1);
    goto LABEL_17;
  }
  v6 = byte_EF875;
  if ( *(_DWORD *)(a3 + 4) )
    v6 = *(const char **)a3;
  v7 = (int *)(a2 + 1);
  v22 = v6;
  while ( 1 )
  {
    v23 = v7;
    v8 = byte_EF875;
    if ( v5[5] )
      v8 = (const char *)v5[4];
    v20 = v5;
    v9 = v6;
    if ( strcmp(v6, v8) >= 0 )
      break;
    v10 = (int *)*v20;
    v7 = v20;
    v6 = v9;
    if ( !*v20 )
    {
      v11 = v20;
      v4 = a1;
      v12 = v20;
      goto LABEL_17;
    }
LABEL_5:
    v5 = v10;
  }
  if ( strcmp(v8, v9) >= 0 )
  {
    v4 = a1;
    v11 = v23;
    v12 = v20;
    goto LABEL_17;
  }
  v12 = v20;
  v7 = v20 + 1;
  v10 = (int *)v20[1];
  if ( v10 )
  {
    v6 = v22;
    goto LABEL_5;
  }
  v11 = v20 + 1;
  v4 = a1;
LABEL_17:
  v13 = (_OWORD *)*v11;
  if ( *v11 )
  {
    v14 = 0;
  }
  else
  {
    v15 = v11;
    v16 = operator new(0x20u);
    v17 = *a4;
    *(_DWORD *)a4 = 0;
    *((_DWORD *)a4 + 1) = 0;
    *((_DWORD *)a4 + 2) = 0;
    v16[1] = v17;
    *(_DWORD *)v16 = 0;
    *((_DWORD *)v16 + 1) = 0;
    *((_DWORD *)v16 + 2) = v12;
    *v15 = (int)v16;
    v18 = (int *)**a2;
    v21 = v16;
    if ( v18 )
    {
      *a2 = v18;
      v16 = (_OWORD *)*v15;
    }
    v4 = a1;
    sub_2D500((int)a2[1], (int)v16);
    a2[2] = (int *)((char *)a2[2] + 1);
    v14 = 1;
    v13 = v21;
  }
  *(_DWORD *)v4 = v13;
  *(_BYTE *)(v4 + 4) = v14;
  return v4;
}
