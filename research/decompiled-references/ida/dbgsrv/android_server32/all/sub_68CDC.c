/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68CDC
// Address: 0x00068CDC

//----- (00068CDC) --------------------------------------------------------
_DWORD *__fastcall sub_68CDC(int a1, unsigned int *a2)
{
  _DWORD *v2; // r5
  unsigned int v5; // r2
  unsigned int v6; // r3
  __int64 v7; // r0
  _DWORD *v8; // r0
  int v9; // r6
  void *v10; // r0
  void *v11; // r0
  const char *v12; // r1
  size_t v13; // r7
  _DWORD *v14; // r5
  const char *v15; // r7
  _BYTE *v16; // r1
  _BYTE *v17; // r2
  bool v18; // zf
  size_t v19; // r0
  unsigned int v20; // r3
  const char *v21; // r7
  _BYTE *v22; // r1
  _BYTE *v23; // r2
  size_t v24; // r0
  size_t v25; // r2
  size_t v26; // r3
  unsigned int v28; // [sp+4h] [bp-18h]
  size_t v29; // [sp+4h] [bp-18h]
  size_t v30; // [sp+8h] [bp-14h]
  size_t v31; // [sp+8h] [bp-14h]
  void **v32; // [sp+Ch] [bp-10h]
  void **v33; // [sp+Ch] [bp-10h]
  int v34; // [sp+10h] [bp-Ch]
  _DWORD *v35; // [sp+14h] [bp-8h]
  int v36; // [sp+18h] [bp-4h]

  v2 = nullptr;
  if ( a1 >= 1 )
  {
    if ( (unsigned int)a1 >> 27 )
    {
      v2 = qalloc_or_throw(0x7FFFFFFF);
    }
    else
    {
      v7 = 32LL * (unsigned int)a1;
      v5 = v7;
      v6 = v7 + 8;
      LODWORD(v7) = -1;
      if ( v6 < v5 )
        v6 = -1;
      if ( !HIDWORD(v7) )
        LODWORD(v7) = v6;
      v8 = (_DWORD *)operator new[](v7);
      *v8 = 32;
      v8[1] = a1;
      v2 = v8 + 2;
      memset(v8 + 2, 0, 32 * a1);
    }
    v9 = 0;
    v34 = a1;
    v35 = v2;
    do
    {
      v2[8 * v9] = unpack_dd(a2, a2[1]);
      v36 = 8 * v9;
      v14 = &v2[8 * v9];
      v14[1] = unpack_dd(a2, a2[1]);
      v15 = (const char *)*a2;
      v16 = (_BYTE *)*a2;
      do
      {
        if ( (unsigned int)v16 >= a2[1] )
          goto LABEL_22;
        v17 = v16 + 1;
        v18 = *v16++ == 0;
      }
      while ( !v18 );
      *a2 = (unsigned int)v17;
      if ( !v15 || (v32 = (void **)(v14 + 2), (v19 = strlen(v15)) == 0) )
      {
LABEL_22:
        v14[3] = 0;
        goto LABEL_23;
      }
      v30 = v19;
      v20 = v19 + 1;
      if ( v14[4] >= v19 + 1 )
      {
        v10 = *v32;
      }
      else
      {
        v28 = v19 + 1;
        v10 = qvector_reserve((int)v32, *v32, v20, 1u);
        v20 = v28;
        *v32 = v10;
      }
      v35[v36 + 3] = v20;
      memmove(v10, v15, v30);
      *((_BYTE *)*v32 + v30) = 0;
LABEL_23:
      v21 = (const char *)*a2;
      v22 = (_BYTE *)*a2;
      do
      {
        if ( (unsigned int)v22 >= a2[1] )
          goto LABEL_31;
        v23 = v22 + 1;
        v18 = *v22++ == 0;
      }
      while ( !v18 );
      *a2 = (unsigned int)v23;
      if ( !v21 || (v33 = (void **)(v14 + 5), (v24 = strlen(v21)) == 0) )
      {
LABEL_31:
        v14[6] = 0;
        v2 = v35;
        goto LABEL_32;
      }
      v25 = v24;
      v26 = v24 + 1;
      if ( v14[7] >= v24 + 1 )
      {
        v11 = *v33;
      }
      else
      {
        v31 = v24 + 1;
        v29 = v24;
        v11 = qvector_reserve((int)v33, *v33, v24 + 1, 1u);
        v26 = v31;
        v25 = v29;
        *v33 = v11;
      }
      v2 = v35;
      v35[v36 + 6] = v26;
      v12 = v21;
      v13 = v25;
      memmove(v11, v12, v25);
      *((_BYTE *)*v33 + v13) = 0;
LABEL_32:
      ++v9;
    }
    while ( v9 != v34 );
  }
  return v2;
}
