/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481D80
// Address: 0x0000000000481D80

//----- (0000000000481D80) ----------------------------------------------------
__int64 __fastcall sub_481D80(__int64 a1, int a2, const char **a3, __int64 a4)
{
  const char **v7; // x26
  const char *v8; // x19
  size_t v9; // x0
  size_t v10; // x20
  int v11; // w25
  int v12; // w20
  unsigned __int8 *v13; // x0
  __int64 v14; // x24
  int v15; // w1
  char *v16; // x0
  unsigned int v17; // w27
  const char **v18; // x19
  const char *v19; // x19
  int v20; // w1
  char *v21; // x19
  __int64 v22; // x0
  __int64 result; // x0
  unsigned __int64 v24; // x25
  void *v25; // x0

  v7 = a3;
  v8 = *a3;
  if ( *a3 && (v9 = strlen(*a3), (v10 = v9) != 0) )
  {
    v24 = v9 + 1;
    v25 = *(void **)(a1 + 24);
    if ( v24 > *(_QWORD *)(a1 + 40) )
    {
      v25 = sub_491288(a1 + 24, *(void **)(a1 + 24), v24, 1u);
      *(_QWORD *)(a1 + 24) = v25;
    }
    *(_QWORD *)(a1 + 32) = v24;
    memmove(v25, v8, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v10) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  v11 = a2;
  v12 = 1;
  while ( 1 )
  {
    v12 = (v11 <= 1) | v12 ^ 1;
    if ( v12 )
      return (unsigned int)(a2 - v11);
    v19 = v7[1];
    if ( (*v19 & 0xFD) != 0x2D )
      return (unsigned int)(a2 - v11);
    v20 = *((unsigned __int8 *)v19 + 1);
    if ( v20 == 45 )
      break;
    v13 = sub_481588((unsigned __int8 **)a1, v20);
    v14 = (__int64)v13;
    if ( !v13 )
      goto LABEL_25;
    v15 = *((_DWORD *)v13 + 8);
    v16 = (char *)(v19 + 2);
    v17 = v11 - 1;
    v18 = v7 + 1;
    if ( !v15 )
    {
LABEL_16:
      v12 = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(0, a4);
      goto LABEL_10;
    }
LABEL_7:
    if ( v15 == 1 )
    {
      if ( !*v16 )
      {
        if ( v17 == 1 )
          goto LABEL_26;
        v17 = v11 - 2;
        v18 = v7 + 2;
      }
      v12 = 1;
      (*(void (**)(void))(v14 + 24))();
    }
    else if ( v15 == -1 )
    {
      (*(void (__fastcall **)(_QWORD, const char **, __int64))(v14 + 24))(v17, v18, a4);
    }
    else
    {
      v12 = 1;
    }
LABEL_10:
    v7 = v18;
    v11 = v17;
  }
  v21 = (char *)(v19 + 2);
  v22 = sub_4815D8((__int64 *)a1, v21);
  v14 = v22;
  if ( v22 )
  {
    v17 = v11 - 1;
    v16 = &v21[strlen(*(const char **)(v22 + 8))];
    v15 = *(_DWORD *)(v14 + 32);
    v18 = v7 + 1;
    if ( !v15 )
      goto LABEL_16;
    goto LABEL_7;
  }
LABEL_25:
  result = *(unsigned __int8 *)(a1 + 80);
  if ( *(_BYTE *)(a1 + 80) )
LABEL_26:
    sub_481A20(a1, 1u);
  return result;
}
