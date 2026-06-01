/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D7D0
// Address: 0x0006D7D0

//----- (0006D7D0) --------------------------------------------------------
int __fastcall sub_6D7D0(int a1, int a2, const void **a3, int a4)
{
  const void *v4; // r4
  const void **v5; // r7
  size_t v7; // r0
  size_t v8; // r5
  int v9; // r6
  int v10; // r5
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r10
  int v13; // r0
  char *v14; // r4
  const void **v15; // r11
  int v16; // r9
  _BYTE *v17; // r4
  int v18; // r1
  char *v19; // r4
  int v20; // r0
  int result; // r0
  unsigned int v22; // r6
  void *v23; // r0

  v4 = *a3;
  v5 = a3;
  if ( *a3 && (v7 = strlen((const char *)v4), (v8 = v7) != 0) )
  {
    v22 = v7 + 1;
    v23 = *(void **)(a1 + 12);
    if ( v22 > *(_DWORD *)(a1 + 20) )
    {
      v23 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v22, 1u);
      *(_DWORD *)(a1 + 12) = v23;
    }
    *(_DWORD *)(a1 + 16) = v22;
    memmove(v23, v4, v8);
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v8) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  v9 = a2;
  v10 = 1;
  while ( 1 )
  {
    v10 ^= 1u;
    if ( v9 <= 1 )
      v10 |= 1u;
    if ( v10 )
      return a2 - v9;
    v17 = v5[1];
    if ( (*v17 & 0xFD) != 0x2D )
      return a2 - v9;
    v18 = (unsigned __int8)v17[1];
    if ( v18 == 45 )
      break;
    v11 = sub_6D310((unsigned __int8 **)a1, v18);
    v12 = v11;
    if ( !v11 )
      goto LABEL_27;
    v13 = *((_DWORD *)v11 + 4);
    v14 = v17 + 2;
    v15 = v5 + 1;
    v16 = v9 - 1;
    if ( !v13 )
    {
LABEL_19:
      v10 = 1;
      (*((void (**)(void))v12 + 3))();
      goto LABEL_11;
    }
LABEL_7:
    if ( v13 == 1 )
    {
      if ( !*v14 )
      {
        if ( v16 == 1 )
          goto LABEL_28;
        v16 = v9 - 2;
        v15 = v5 + 2;
        v14 = (char *)v5[2];
      }
      v10 = 1;
      (*((void (__fastcall **)(char *, int))v12 + 3))(v14, a4);
    }
    else if ( v13 == -1 )
    {
      (*((void (__fastcall **)(int, const void **, int))v12 + 3))(v16, v15, a4);
    }
    else
    {
      v10 = 1;
    }
LABEL_11:
    v5 = v15;
    v9 = v16;
  }
  v19 = v17 + 2;
  v20 = sub_6D340((int *)a1, v19);
  v12 = (unsigned __int8 *)v20;
  if ( v20 )
  {
    v15 = v5 + 1;
    v14 = &v19[strlen(*(const char **)(v20 + 4))];
    v13 = *((_DWORD *)v12 + 4);
    v16 = v9 - 1;
    if ( !v13 )
      goto LABEL_19;
    goto LABEL_7;
  }
LABEL_27:
  result = *(unsigned __int8 *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 40) )
LABEL_28:
    sub_6D59C(a1, 1);
  return result;
}
