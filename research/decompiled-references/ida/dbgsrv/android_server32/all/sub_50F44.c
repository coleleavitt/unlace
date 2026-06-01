/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50F44
// Address: 0x00050F44

//----- (00050F44) --------------------------------------------------------
int __fastcall sub_50F44(char **a1, int a2, _BYTE *a3)
{
  int v3; // r6
  char *v5; // r1
  int *v6; // r0
  int v7; // r3
  int *v8; // r2
  char *v9; // r0
  char *v10; // r7
  int **v11; // r5
  const char *v12; // r4
  int *v13; // r6
  size_t v14; // r0
  const char *v15; // r0
  unsigned int v16; // r1
  _BYTE *v17; // r5
  int *v18; // r4
  int *v19; // r4
  void **v20; // r0
  int v21; // r1
  char *v22; // r3
  char *v23; // r0
  char **v24; // r7
  int v25; // r4
  int v26; // r1
  char *v27; // r2
  char *v28; // r3
  unsigned int v29; // r5
  char *v30; // r0
  char *v31; // r5
  unsigned int v32; // r6
  int i; // r7
  void *v34; // r0
  const char *v36; // [sp+4h] [bp-34h]
  _BYTE *v37; // [sp+8h] [bp-30h]
  int v38; // [sp+14h] [bp-24h]
  char *v40; // [sp+1Ch] [bp-1Ch]
  unsigned int v41; // [sp+1Ch] [bp-1Ch]
  char v42[4]; // [sp+24h] [bp-14h] BYREF
  char *v43; // [sp+28h] [bp-10h] BYREF
  unsigned int v44; // [sp+2Ch] [bp-Ch]
  int v45; // [sp+30h] [bp-8h]

  if ( *(_DWORD *)(a2 + 4) )
    v5 = *(char **)a2;
  else
    v5 = &byte_B3CBE;
  v36 = v5;
  v6 = sub_4F0A0((int)a1, v5);
  v7 = (int)a1;
  v8 = v6;
  v37 = a3;
  *a3 = 0;
  if ( !v6 )
    return 0;
  v9 = a1[8];
  v10 = v9 - 1;
  if ( (int)(v9 - 1) >= 0 )
  {
    v3 = -2;
    v11 = (int **)&a1[7][28 * (_DWORD)v9 - 8];
    do
    {
      if ( *v11 == v8 )
      {
        if ( !*((_BYTE *)v8 + 13) )
          return 0;
        v12 = &byte_B3CBE;
        if ( v8[1] )
          v12 = (const char *)*v8;
        v13 = v8;
        v14 = strlen(v12);
        v8 = v13;
        v15 = &v12[v14];
        v7 = (int)a1;
        v16 = (unsigned int)a1[1];
        v3 = -2;
        if ( (unsigned int)v12 <= v16 && v16 <= (unsigned int)v15 )
          return 0;
        if ( (int)a1[10] > (int)v11[1] )
          return 0;
      }
      v11 -= 7;
    }
    while ( (int)--v10 >= 0 );
  }
  v44 = 0;
  v43 = nullptr;
  v45 = 0;
  v17 = v37;
  if ( !*((_BYTE *)v8 + 13) )
    goto LABEL_20;
  v18 = v8;
  v3 = sub_50A30(v7, (int)&v43, v42);
  if ( v3 || !v42[0] )
  {
LABEL_24:
    v25 = 1;
    goto LABEL_31;
  }
  if ( v44 != *((unsigned __int8 *)v18 + 12) )
  {
    set_error_string(0, v36);
    v3 = set_qerrno(39);
    goto LABEL_24;
  }
  v8 = v18;
  v7 = (int)a1;
LABEL_20:
  if ( (unsigned int)v8[1] >= 2 )
  {
    v19 = v8;
    v20 = (void **)(v7 + 28);
    v21 = v7;
    v22 = *(char **)(v7 + 32);
    if ( *(_DWORD *)(v21 + 36) >= (unsigned int)(v22 + 1) )
    {
      v23 = (char *)*v20;
      v24 = a1;
    }
    else
    {
      v23 = (char *)qvector_reserve((int)v20, *v20, (unsigned int)(v22 + 1), 0x1Cu);
      v24 = a1;
      a1[7] = v23;
      v22 = a1[8];
    }
    v26 = 28 * (_DWORD)v22;
    *(_DWORD *)&v23[v26] = 0;
    v27 = &v23[28 * (_DWORD)v22];
    *((_DWORD *)v27 + 2) = 0;
    *((_DWORD *)v27 + 1) = 0;
    ++v24[8];
    *((_DWORD *)v27 + 3) = *v24;
    *((_DWORD *)v27 + 4) = v24[1];
    v28 = v24[10];
    *((_DWORD *)v27 + 5) = v19;
    *((_DWORD *)v27 + 6) = v28;
    v40 = v43;
    v43 = *(char **)&v23[v26];
    v29 = v44;
    v44 = *(_DWORD *)&v23[v26 + 4];
    v3 = v45;
    v45 = *(_DWORD *)&v23[v26 + 8];
    *(_DWORD *)&v23[v26] = v40;
    *((_DWORD *)v27 + 1) = v29;
    *((_DWORD *)v27 + 2) = v3;
    v24[10] = v24[8] - 1;
    if ( v19[1] )
      v30 = (char *)*v19;
    else
      v30 = &byte_B3CBE;
    v17 = v37;
    *v24 = v30;
    v24[1] = v30;
  }
  *v17 = 1;
  v25 = 0;
LABEL_31:
  v31 = v43;
  if ( v43 )
  {
    v41 = v44;
    if ( v44 )
    {
      v38 = v3;
      v32 = 1;
      for ( i = 8; ; i += 12 )
      {
        v34 = *(void **)&v31[i - 8];
        if ( v34 )
        {
          *(_DWORD *)&v31[i - 4] = 0;
          qfree(v34);
          *(_DWORD *)&v31[i - 8] = 0;
          *(_DWORD *)&v31[i] = 0;
        }
        if ( v32 >= v41 )
          break;
        ++v32;
        v31 = v43;
      }
      v31 = v43;
      v3 = v38;
    }
    v44 = 0;
    qfree(v31);
    v45 = 0;
    v43 = nullptr;
  }
  if ( !v25 )
    return 0;
  return v3;
}
// 510D4: variable 'v3' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
