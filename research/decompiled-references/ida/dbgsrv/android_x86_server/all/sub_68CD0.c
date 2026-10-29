/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68CD0
// Address: 0x00068CD0

//----- (00068CD0) --------------------------------------------------------
int __userpurge sub_68CD0@<eax>(int a1, int a2, int a3, int a4, int *a5)
{
  int v5; // edi
  const char *v6; // ecx
  _DWORD *v7; // edx
  const char *v8; // esi
  const char *v9; // edi
  int v10; // eax
  _DWORD *v11; // edi
  int result; // eax
  int v13; // esi
  char v14; // cl
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // [esp+8h] [ebp-34h]
  int *v18; // [esp+8h] [ebp-34h]
  _DWORD *v19; // [esp+Ch] [ebp-30h]
  const char *v20; // [esp+10h] [ebp-2Ch]
  _DWORD v21[9]; // [esp+18h] [ebp-24h] BYREF

  v21[4] = __readgsdword(0x14u);
  v5 = *(_DWORD *)(a2 + 4);
  if ( !v5 )
  {
    v11 = (_DWORD *)(a2 + 4);
    v7 = (_DWORD *)(a2 + 4);
    goto LABEL_16;
  }
  v6 = byte_EF875;
  if ( *(_DWORD *)(a3 + 4) )
    v6 = *(const char **)a3;
  v7 = (_DWORD *)(a2 + 4);
  v20 = v6;
  while ( 1 )
  {
    v17 = v7;
    v8 = byte_EF875;
    if ( *(_DWORD *)(v5 + 20) )
      v8 = *(const char **)(v5 + 16);
    v19 = (_DWORD *)v5;
    v9 = v6;
    if ( strcmp(v6, v8) >= 0 )
      break;
    v10 = *v19;
    v7 = v19;
    v6 = v9;
    if ( !*v19 )
    {
      v7 = v19;
      v11 = v19;
      goto LABEL_16;
    }
LABEL_5:
    v5 = v10;
  }
  if ( strcmp(v8, v9) < 0 )
  {
    v11 = v19;
    v7 = v19 + 1;
    v10 = v19[1];
    if ( !v10 )
      goto LABEL_16;
    v6 = v20;
    goto LABEL_5;
  }
  v7 = v17;
  v11 = v19;
LABEL_16:
  result = a1;
  v13 = *v7;
  if ( *v7 )
  {
    v14 = 0;
  }
  else
  {
    v18 = v7;
    sub_68E40((int)v21, a2, a4, a5);
    v15 = v21[0];
    *(_DWORD *)v21[0] = 0;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)(v15 + 8) = v11;
    *v18 = v15;
    v16 = **(_DWORD **)a2;
    if ( v16 )
    {
      *(_DWORD *)a2 = v16;
      v15 = *v18;
    }
    sub_2D500(*(_DWORD *)(a2 + 4), v15);
    ++*(_DWORD *)(a2 + 8);
    v13 = v21[0];
    v14 = 1;
    result = a1;
  }
  *(_DWORD *)result = v13;
  *(_BYTE *)(result + 4) = v14;
  return result;
}
