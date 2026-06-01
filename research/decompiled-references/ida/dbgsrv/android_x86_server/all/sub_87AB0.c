/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87AB0
// Address: 0x00087AB0

//----- (00087AB0) --------------------------------------------------------
int __userpurge sub_87AB0@<eax>(int a1, int **a2, int a3, int a4, int *a5)
{
  int *v5; // edi
  const char *v6; // edx
  int *v7; // ecx
  const char *v8; // esi
  const char *v9; // edi
  int *v10; // eax
  int *v11; // edi
  _DWORD *v12; // edx
  char v13; // cl
  _DWORD *v14; // eax
  int v15; // ecx
  _DWORD *v16; // esi
  int v17; // eax
  void *v18; // eax
  int *v19; // eax
  int v20; // eax
  int *v22; // [esp+Ch] [ebp-20h]
  size_t v23; // [esp+Ch] [ebp-20h]
  const void **v24; // [esp+10h] [ebp-1Ch]
  int *v25; // [esp+14h] [ebp-18h]
  int *v26; // [esp+14h] [ebp-18h]
  const char *v27; // [esp+18h] [ebp-14h]

  v5 = a2[1];
  if ( !v5 )
  {
    v11 = (int *)(a2 + 1);
    v7 = (int *)(a2 + 1);
    goto LABEL_16;
  }
  v6 = byte_EF875;
  if ( *(_DWORD *)(a3 + 4) )
    v6 = *(const char **)a3;
  v7 = (int *)(a2 + 1);
  v27 = v6;
  while ( 1 )
  {
    v25 = v7;
    v8 = byte_EF875;
    if ( v5[5] )
      v8 = (const char *)v5[4];
    v22 = v5;
    v9 = v6;
    if ( strcmp(v6, v8) >= 0 )
      break;
    v10 = (int *)*v22;
    v7 = v22;
    v6 = v9;
    if ( !*v22 )
    {
      v7 = v22;
      v11 = v22;
      goto LABEL_16;
    }
LABEL_5:
    v5 = v10;
  }
  if ( strcmp(v8, v9) < 0 )
  {
    v11 = v22;
    v7 = v22 + 1;
    v10 = (int *)v22[1];
    if ( !v10 )
      goto LABEL_16;
    v6 = v27;
    goto LABEL_5;
  }
  v7 = v25;
  v11 = v22;
LABEL_16:
  v12 = (_DWORD *)*v7;
  if ( *v7 )
  {
    v13 = 0;
  }
  else
  {
    v26 = v7;
    v14 = operator new(0x28u);
    v15 = *a5;
    v16 = v14;
    v14[4] = 0;
    v14[5] = 0;
    v14[6] = 0;
    v17 = *(_DWORD *)(v15 + 4);
    if ( v17 )
    {
      v24 = (const void **)v15;
      v23 = *(_DWORD *)(v15 + 4);
      v18 = qalloc_or_throw(v17);
      v16[4] = v18;
      v16[6] = v23;
      memcpy(v18, *v24, v23);
      v16[5] = v23;
    }
    v16[7] = 0;
    v16[8] = 0;
    v16[9] = 0;
    *v16 = 0;
    v16[1] = 0;
    v16[2] = v11;
    *v26 = (int)v16;
    v19 = (int *)**a2;
    if ( v19 )
    {
      *a2 = v19;
      v20 = *v26;
    }
    else
    {
      v20 = (int)v16;
    }
    sub_2D500((int)a2[1], v20);
    a2[2] = (int *)((char *)a2[2] + 1);
    v13 = 1;
    v12 = v16;
  }
  *(_DWORD *)a1 = v12;
  *(_BYTE *)(a1 + 4) = v13;
  return a1;
}
