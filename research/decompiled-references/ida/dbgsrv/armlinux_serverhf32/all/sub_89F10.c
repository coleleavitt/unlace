/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89F10
// Address: 0x00089F10

//----- (00089F10) --------------------------------------------------------
int __fastcall sub_89F10(int result, int a2, int *********a3, int a4)
{
  int v5; // r5
  int *********v7; // r4
  int ********v8; // r9
  unsigned int v9; // r11
  int ********v10; // r3
  int v11; // r10
  int v12; // r8
  int v13; // r2
  int v14; // r1
  int v15; // r2
  void (__fastcall *v16)(int, int, int); // r3
  int v17; // r2
  unsigned int *v18; // r4
  unsigned int v19; // r0
  int v20; // r3
  const char *v21; // r9
  int v22; // r1
  char v23; // r6
  char v24; // t1
  int v25; // r2
  void (__fastcall *v26)(int, int, int); // r3
  bool v27; // zf
  int v28; // r3
  char *v29; // r6
  int v30; // r1
  char v31; // r11
  char v32; // t1
  int v33; // r2
  void (__fastcall *v34)(int, int, int); // r3
  char *v35; // r6
  size_t v36; // r0
  int v37; // r3
  char *v38; // r8
  int v39; // r1
  char v40; // r11
  char v41; // t1
  int v42; // r2
  void (__fastcall *v43)(int, int, int); // r3
  int v44; // r6
  const char *v45; // r11
  int v46; // r1
  char v47; // r8
  char v48; // t1
  int v49; // r2
  void (__fastcall *v50)(int, int, int); // r3
  char s[68]; // [sp+4h] [bp-44h] BYREF

  if ( !a3 )
    return result;
  v5 = result;
  if ( *(_DWORD *)(result + 280) )
    return result;
  v7 = a3;
  while ( 1 )
  {
    if ( v7[2] )
      goto LABEL_12;
    v8 = v7[1];
    v9 = (unsigned int)*v8;
    if ( !a4 )
    {
      result = sub_84258((unsigned int)*v8);
      if ( result )
        goto LABEL_12;
    }
    v10 = v7[3];
    v7[2] = (int ********)1;
    v11 = *(_DWORD *)(v5 + 272);
    *(_DWORD *)(v5 + 272) = v10;
    if ( v9 == 41 )
    {
      result = sub_89D44(v5, a2, (int *)v8 + 3, (int *********)*v7);
      *(_DWORD *)(v5 + 272) = v11;
      return result;
    }
    if ( v9 == 42 )
    {
      result = sub_8A178(v5, a2, (int *)v8 + 2, (int **********)*v7);
      *(_DWORD *)(v5 + 272) = v11;
      return result;
    }
    if ( v9 == 2 )
      break;
    result = sub_8973C(v5, a2, v8);
    *(_DWORD *)(v5 + 272) = v11;
LABEL_12:
    v7 = (int *********)*v7;
    if ( !v7 || *(_DWORD *)(v5 + 280) )
      return result;
  }
  v12 = *(_DWORD *)(v5 + 276);
  v13 = (int)v8[2];
  *(_DWORD *)(v5 + 276) = 0;
  sub_86B38(v5, a2, v13);
  *(_DWORD *)(v5 + 276) = v12;
  if ( (a2 & 4) != 0 )
  {
    v14 = *(_DWORD *)(v5 + 256);
    if ( v14 == 255 )
    {
      v16 = *(void (__fastcall **)(int, int, int))(v5 + 264);
      v17 = *(_DWORD *)(v5 + 268);
      *(_BYTE *)(v5 + 255) = 0;
      v16(v5, 255, v17);
      v15 = 1;
      v14 = 0;
      ++*(_DWORD *)(v5 + 292);
    }
    else
    {
      v15 = v14 + 1;
    }
    *(_DWORD *)(v5 + 256) = v15;
    *(_BYTE *)(v5 + v14) = 46;
    *(_BYTE *)(v5 + 260) = 46;
  }
  else
  {
    v20 = *(_DWORD *)(v5 + 256);
    v21 = "::";
    do
    {
      v22 = v20;
      v24 = *v21++;
      v23 = v24;
      if ( v20 == 255 )
      {
        v25 = *(_DWORD *)(v5 + 268);
        v26 = *(void (__fastcall **)(int, int, int))(v5 + 264);
        *(_BYTE *)(v5 + 255) = 0;
        v26(v5, 255, v25);
        v20 = 1;
        v22 = 0;
        ++*(_DWORD *)(v5 + 292);
      }
      else
      {
        ++v20;
      }
      v27 = v9 == 1;
      *(_DWORD *)(v5 + 256) = v20;
      v9 = 1;
      *(_BYTE *)(v5 + v22) = v23;
      *(_BYTE *)(v5 + 260) = v23;
    }
    while ( !v27 );
  }
  v18 = (unsigned int *)v7[1][3];
  v19 = *v18;
  if ( *v18 != 70 )
    goto LABEL_24;
  v28 = *(_DWORD *)(v5 + 256);
  v29 = &byte_B637F;
  do
  {
    v30 = v28;
    v32 = *++v29;
    v31 = v32;
    if ( v28 == 255 )
    {
      v33 = *(_DWORD *)(v5 + 268);
      v34 = *(void (__fastcall **)(int, int, int))(v5 + 264);
      *(_BYTE *)(v5 + 255) = 0;
      v34(v5, 255, v33);
      v28 = 1;
      v30 = 0;
      ++*(_DWORD *)(v5 + 292);
    }
    else
    {
      ++v28;
    }
    *(_DWORD *)(v5 + 256) = v28;
    *(_BYTE *)(v5 + v30) = v31;
    *(_BYTE *)(v5 + 260) = v31;
  }
  while ( "#" != v29 );
  v35 = s;
  sprintf(s, "%d", v18[3] + 1);
  v36 = strlen(s);
  v37 = *(_DWORD *)(v5 + 256);
  if ( v36 )
  {
    v38 = &s[v36];
    do
    {
      v39 = v37;
      v41 = *v35++;
      v40 = v41;
      if ( v37 == 255 )
      {
        v42 = *(_DWORD *)(v5 + 268);
        v43 = *(void (__fastcall **)(int, int, int))(v5 + 264);
        *(_BYTE *)(v5 + 255) = 0;
        v43(v5, 255, v42);
        v37 = 1;
        v39 = 0;
        ++*(_DWORD *)(v5 + 292);
      }
      else
      {
        ++v37;
      }
      *(_DWORD *)(v5 + 256) = v37;
      *(_BYTE *)(v5 + v39) = v40;
      *(_BYTE *)(v5 + 260) = v40;
    }
    while ( v35 != v38 );
  }
  v44 = 3;
  v45 = "}::";
  do
  {
    v46 = v37;
    v48 = *v45++;
    v47 = v48;
    if ( v37 == 255 )
    {
      v49 = *(_DWORD *)(v5 + 268);
      v50 = *(void (__fastcall **)(int, int, int))(v5 + 264);
      *(_BYTE *)(v5 + 255) = 0;
      v50(v5, 255, v49);
      v37 = 1;
      v46 = 0;
      ++*(_DWORD *)(v5 + 292);
    }
    else
    {
      ++v37;
    }
    --v44;
    *(_DWORD *)(v5 + 256) = v37;
    *(_BYTE *)(v5 + v46) = v47;
    *(_BYTE *)(v5 + 260) = v47;
  }
  while ( v44 );
  do
  {
    v18 = (unsigned int *)v18[2];
    v19 = *v18;
LABEL_24:
    ;
  }
  while ( sub_84258(v19) );
  result = sub_86B38(v5, a2, (int)v18);
  *(_DWORD *)(v5 + 272) = v11;
  return result;
}
// B637F: using guessed type char byte_B637F;
