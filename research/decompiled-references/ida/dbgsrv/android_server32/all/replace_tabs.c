/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: replace_tabs
// Address: 0x00080424

//----- (00080424) --------------------------------------------------------
bool __fastcall replace_tabs(int a1, const char *a2, unsigned int a3)
{
  const char *v4; // r6
  _BOOL4 result; // r0
  int v7; // r5
  char *v8; // r0
  void **v9; // r4
  size_t v10; // r2
  int v11; // r7
  size_t v12; // r6
  unsigned int v13; // r5
  void *v14; // r1
  void *v15; // r0
  void *v16; // r0
  unsigned int v17; // r4
  int v18; // r6
  unsigned int v19; // r6
  size_t v20; // r6
  _DWORD *v21; // r2
  int v22; // r0
  int v23; // r5
  unsigned int v24; // r7
  _BYTE *v25; // r0
  unsigned int v26; // [sp+8h] [bp-20h]
  int v27; // [sp+Ch] [bp-1Ch]
  char *v28; // [sp+10h] [bp-18h]
  int v29; // [sp+14h] [bp-14h]
  size_t v30; // [sp+14h] [bp-14h]
  const char *v31; // [sp+18h] [bp-10h]
  const char *v32; // [sp+18h] [bp-10h]
  int v33; // [sp+1Ch] [bp-Ch]
  char v34[4]; // [sp+20h] [bp-8h] BYREF

  v4 = a2;
  result = 0;
  if ( a2 )
  {
    v29 = 0;
    v33 = a1;
    if ( !a3 )
      goto LABEL_18;
    v7 = *(_DWORD *)(a1 + 4);
    v27 = v7 - 1;
    if ( !v7 )
      v27 = 0;
    v8 = strchr(a2, 9);
    if ( !v8 )
      goto LABEL_18;
    v26 = a3;
    v9 = (void **)v33;
    while ( 1 )
    {
      v31 = v4;
      v10 = v8 - v4;
      v11 = v7 - 1;
      if ( !v7 )
        v11 = 0;
      v12 = v11 + v10;
      v13 = v11 + v10 + 1;
      v14 = *v9;
      v28 = v8;
      if ( (unsigned int)v9[2] < v13 )
      {
        v30 = v10;
        v15 = qvector_reserve((int)v9, v14, v11 + v10 + 1, 1u);
        v10 = v30;
        v9 = (void **)v33;
        v14 = v15;
        *(_DWORD *)v33 = v15;
      }
      v9[1] = (void *)v13;
      *((_BYTE *)v14 + v12) = 0;
      memmove((char *)*v9 + v11, v31, v10);
      v16 = v9[1];
      v34[0] = 32;
      v17 = (unsigned int)v16 - 1;
      v18 = (int)v16 - 1;
      if ( !v16 )
        v18 = 0;
      v19 = v18 + v26 - (v18 - v27) % v26;
      if ( v17 < v19 )
        *(_BYTE *)(*(_DWORD *)v33 + v17) = 32;
      v9 = (void **)v33;
      sub_37884((void **)v33, v19 + 1, v34);
      *(_BYTE *)(*(_DWORD *)v33 + v19) = 0;
      v4 = v28 + 1;
      v8 = strchr(v28 + 1, 9);
      if ( !v8 )
        break;
      v7 = *(_DWORD *)(v33 + 4);
    }
    v29 = 1;
    if ( v28 != (char *)-1 )
    {
LABEL_18:
      v32 = v4;
      v20 = strlen(v4);
      v21 = (_DWORD *)v33;
      v22 = *(_DWORD *)(v33 + 4);
      v23 = v22 - 1;
      if ( !v22 )
        v23 = 0;
      v24 = v23 + v20 + 1;
      if ( *(_DWORD *)(v33 + 8) >= v24 )
      {
        v25 = *(_BYTE **)v33;
      }
      else
      {
        v25 = qvector_reserve(v33, *(void **)v33, v23 + v20 + 1, 1u);
        v21 = (_DWORD *)v33;
        *(_DWORD *)v33 = v25;
      }
      v21[1] = v24;
      v25[v23 + v20] = 0;
      memmove((void *)(*v21 + v23), v32, v20);
    }
    return v29 != 0;
  }
  return result;
}
