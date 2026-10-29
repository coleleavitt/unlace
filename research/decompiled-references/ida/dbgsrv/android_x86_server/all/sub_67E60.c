/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67E60
// Address: 0x00067E60

//----- (00067E60) --------------------------------------------------------
int __userpurge sub_67E60@<eax>(int a1, int **a2, int a3, _DWORD *a4)
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
  _DWORD *v13; // ecx
  char v14; // al
  _DWORD *v15; // eax
  int *v16; // edx
  int *v18; // [esp+Ch] [ebp-20h]
  _DWORD *v19; // [esp+Ch] [ebp-20h]
  int *v20; // [esp+10h] [ebp-1Ch]
  int *v21; // [esp+10h] [ebp-1Ch]
  const char *v22; // [esp+14h] [ebp-18h]

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
    v20 = v7;
    v8 = byte_EF875;
    if ( v5[5] )
      v8 = (const char *)v5[4];
    v18 = v5;
    v9 = v6;
    if ( strcmp(v6, v8) >= 0 )
      break;
    v10 = (int *)*v18;
    v7 = v18;
    v6 = v9;
    if ( !*v18 )
    {
      v11 = v18;
      v4 = a1;
      v12 = v18;
      goto LABEL_17;
    }
LABEL_5:
    v5 = v10;
  }
  if ( strcmp(v8, v9) >= 0 )
  {
    v4 = a1;
    v11 = v20;
    v12 = v18;
    goto LABEL_17;
  }
  v12 = v18;
  v7 = v18 + 1;
  v10 = (int *)v18[1];
  if ( v10 )
  {
    v6 = v22;
    goto LABEL_5;
  }
  v11 = v18 + 1;
  v4 = a1;
LABEL_17:
  v13 = (_DWORD *)*v11;
  if ( *v11 )
  {
    v14 = 0;
  }
  else
  {
    v21 = v11;
    v15 = operator new(0x1Cu);
    v15[4] = *a4;
    *a4 = 0;
    v15[5] = a4[1];
    a4[1] = 0;
    v15[6] = a4[2];
    a4[2] = 0;
    *v15 = 0;
    v15[1] = 0;
    v15[2] = v12;
    *v21 = (int)v15;
    v16 = (int *)**a2;
    v19 = v15;
    if ( v16 )
    {
      *a2 = v16;
      v15 = (_DWORD *)*v21;
    }
    v4 = a1;
    sub_2D500((int)a2[1], (int)v15);
    a2[2] = (int *)((char *)a2[2] + 1);
    v14 = 1;
    v13 = v19;
  }
  *(_DWORD *)v4 = v13;
  *(_BYTE *)(v4 + 4) = v14;
  return v4;
}
