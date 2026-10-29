/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A2C4
// Address: 0x0008A2C4

//----- (0008A2C4) --------------------------------------------------------
int __fastcall sub_8A2C4(int result, int a2, int *a3, int **********a4)
{
  int v4; // r4
  int *********v7; // r9
  int v8; // r3
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r2
  int (__fastcall *v14)(int, int, int); // r3
  int v15; // r2
  int v16; // r3
  int v17; // r8
  int v18; // r3
  char *v19; // r11
  int v20; // r1
  char v21; // r10
  char v22; // t1
  int v23; // r2
  void (__fastcall *v24)(int, int, int); // r3
  int v25; // r1
  int v26; // r2

  v4 = result;
  if ( !a4 )
  {
LABEL_6:
    v8 = *(_DWORD *)(v4 + 256);
    goto LABEL_7;
  }
  v7 = (int *********)a4;
  while ( a4[2] )
  {
    a4 = (int **********)*a4;
    if ( !a4 )
    {
      result = sub_8A05C(result, a2, v7, 0);
      goto LABEL_6;
    }
  }
  if ( *a4[1] == (int ********)42 )
  {
    result = sub_8A05C(result, a2, v7, 0);
    v10 = *(_DWORD *)(v4 + 256);
    goto LABEL_15;
  }
  v17 = 2;
  v18 = *(_DWORD *)(result + 256);
  v19 = " (";
  while ( 1 )
  {
    v20 = v18;
    v22 = *v19++;
    v21 = v22;
    if ( v18 == 255 )
    {
      v23 = *(_DWORD *)(v4 + 268);
      v24 = *(void (__fastcall **)(int, int, int))(v4 + 264);
      *(_BYTE *)(v4 + 255) = 0;
      v24(v4, 255, v23);
      v18 = 1;
      v20 = 0;
      ++*(_DWORD *)(v4 + 292);
    }
    else
    {
      ++v18;
    }
    *(_DWORD *)(v4 + 256) = v18;
    *(_BYTE *)(v4 + v20) = v21;
    *(_BYTE *)(v4 + 260) = v21;
    if ( v17 == 1 )
      break;
    v17 = 1;
  }
  result = sub_8A05C(v4, a2, v7, 0);
  v25 = *(_DWORD *)(v4 + 256);
  if ( v25 != 255 )
  {
    v8 = v25 + 1;
    *(_DWORD *)(v4 + 256) = v25 + 1;
    *(_BYTE *)(v4 + v25) = 41;
    *(_BYTE *)(v4 + 260) = 41;
LABEL_7:
    if ( v8 == 255 )
    {
      *(_BYTE *)(v4 + 255) = 0;
      result = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
      v9 = *(_DWORD *)(v4 + 292);
      *(_BYTE *)v4 = 32;
      v10 = 1;
      *(_DWORD *)(v4 + 292) = v9 + 1;
      goto LABEL_9;
    }
    goto LABEL_27;
  }
  *(_BYTE *)(v4 + 255) = 0;
  result = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  v26 = *(_DWORD *)(v4 + 292);
  v8 = 1;
  *(_BYTE *)v4 = 41;
  *(_DWORD *)(v4 + 292) = v26 + 1;
LABEL_27:
  v10 = v8 + 1;
  *(_DWORD *)(v4 + 256) = v8 + 1;
  *(_BYTE *)(v4 + v8) = 32;
  *(_BYTE *)(v4 + 260) = 32;
LABEL_15:
  if ( v10 != 255 )
  {
LABEL_9:
    v11 = v10 + 1;
    *(_DWORD *)(v4 + 256) = v10 + 1;
    *(_BYTE *)(v4 + v10) = 91;
    *(_BYTE *)(v4 + 260) = 91;
    v12 = *a3;
    if ( !*a3 )
      goto LABEL_10;
    goto LABEL_17;
  }
  *(_BYTE *)(v4 + 255) = 0;
  result = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  v16 = *(_DWORD *)(v4 + 292);
  *(_BYTE *)v4 = 91;
  v11 = 1;
  *(_BYTE *)(v4 + 260) = 91;
  v12 = *a3;
  *(_DWORD *)(v4 + 292) = v16 + 1;
  *(_DWORD *)(v4 + 256) = 1;
  if ( !v12 )
    goto LABEL_18;
LABEL_17:
  result = sub_86C84(v4, a2, v12);
  v11 = *(_DWORD *)(v4 + 256);
LABEL_10:
  if ( v11 != 255 )
  {
LABEL_18:
    v15 = v11 + 1;
    goto LABEL_12;
  }
  v13 = *(_DWORD *)(v4 + 268);
  v14 = *(int (__fastcall **)(int, int, int))(v4 + 264);
  *(_BYTE *)(v4 + 255) = 0;
  result = v14(v4, 255, v13);
  v15 = 1;
  v11 = 0;
  ++*(_DWORD *)(v4 + 292);
LABEL_12:
  *(_DWORD *)(v4 + 256) = v15;
  *(_BYTE *)(v4 + v11) = 93;
  *(_BYTE *)(v4 + 260) = 93;
  return result;
}
