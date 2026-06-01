/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75F14
// Address: 0x00075F14

//----- (00075F14) --------------------------------------------------------
bool __fastcall sub_75F14(_DWORD *a1, const char *a2, unsigned int a3, int a4, int a5)
{
  FILE *v8; // r0
  FILE *v9; // r11
  __int64 v10; // r0
  signed int v11; // r5
  __int64 v12; // r6
  _BOOL1 v13; // cf
  _BOOL4 v14; // r8
  unsigned int v15; // r2
  const char *v16; // r0
  const char *v17; // r6
  size_t v18; // r0
  size_t v19; // r5
  void *v20; // r5
  const char *v22; // r0
  const char *v23; // r6
  size_t v24; // r0
  size_t v25; // r5
  unsigned int v26; // r7
  void *v27; // r0
  unsigned int v28; // r7
  void *v29; // r0

  v8 = sub_75E84(a2);
  if ( v8 )
  {
    v9 = v8;
    v10 = sub_71108((int)v8);
    v11 = v10;
    v12 = v10;
    v13 = a3 >= (unsigned int)v10;
    v14 = v10 >= 1;
    if ( a4 - (HIDWORD(v10) + !v13) < 0 != __OFSUB__(a4, HIDWORD(v10), v13) )
      v14 = 0;
    if ( v14 )
    {
      v15 = a1[1];
      HIDWORD(v10) = *a1;
      if ( (unsigned int)v10 > v15 )
      {
        if ( (unsigned int)v10 > a1[2] )
        {
          LODWORD(v10) = sub_78018((int)a1, (void *)HIDWORD(v10), v10, 1u);
          v15 = a1[1];
          HIDWORD(v10) = v10;
          *a1 = v10;
        }
        memset((void *)(HIDWORD(v10) + v15), 0, v11 - v15);
        a1[1] = v11;
        HIDWORD(v10) = *a1;
      }
      else if ( (unsigned int)v10 < a1[1] )
      {
        a1[1] = v10;
      }
      if ( sub_77788(v9, (void *)HIDWORD(v10), v11) == v12 )
        goto LABEL_18;
      if ( a5 )
      {
        v16 = sub_79980(-1);
        v17 = v16;
        if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
        {
          v28 = v18 + 1;
          v29 = *(void **)a5;
          if ( v28 > *(_DWORD *)(a5 + 8) )
          {
            v29 = sub_78018(a5, *(void **)a5, v28, 1u);
            *(_DWORD *)a5 = v29;
          }
          *(_DWORD *)(a5 + 4) = v28;
          memmove(v29, v17, v19);
          v14 = 0;
          *(_BYTE *)(*(_DWORD *)a5 + v19) = 0;
        }
        else
        {
          *(_DWORD *)(a5 + 4) = 0;
          v14 = 0;
        }
        goto LABEL_18;
      }
    }
    else if ( a5 )
    {
      v20 = *(void **)a5;
      if ( *(_DWORD *)(a5 + 8) <= 0xFu )
      {
        v20 = sub_78018(a5, *(void **)a5, 0x10u, 1u);
        *(_DWORD *)a5 = v20;
      }
      *(_DWORD *)(a5 + 4) = 16;
      qmemcpy(v20, "wrong file size", 15);
      *(_BYTE *)(*(_DWORD *)a5 + 15) = 0;
      goto LABEL_18;
    }
    v14 = 0;
LABEL_18:
    sub_778BC(v9);
    return v14;
  }
  v14 = a5;
  if ( !a5 )
    return v14;
  v22 = sub_79980(-1);
  v23 = v22;
  if ( v22 )
  {
    v24 = strlen(v22);
    v25 = v24;
    if ( v24 )
    {
      v26 = v24 + 1;
      v27 = *(void **)a5;
      if ( v26 > *(_DWORD *)(a5 + 8) )
      {
        v27 = sub_78018(a5, *(void **)a5, v26, 1u);
        *(_DWORD *)a5 = v27;
      }
      *(_DWORD *)(a5 + 4) = v26;
      memmove(v27, v23, v25);
      v14 = 0;
      *(_BYTE *)(*(_DWORD *)a5 + v25) = 0;
      return v14;
    }
  }
  *(_DWORD *)(a5 + 4) = 0;
  return 0;
}
