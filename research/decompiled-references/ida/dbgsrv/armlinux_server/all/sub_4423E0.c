/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4423E0
// Address: 0x00000000004423E0

//----- (00000000004423E0) ----------------------------------------------------
__int64 __fastcall sub_4423E0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // x22
  _QWORD *v7; // x0
  _QWORD *v8; // x19
  const char *v9; // x0
  const char *v10; // x1
  __int64 v11; // x22
  __int64 result; // x0
  __int64 v13; // x19
  unsigned __int64 v14; // x19
  unsigned __int64 v15; // x25
  void *v16; // x0
  unsigned __int64 v17; // x22
  void *v18; // x0
  char *v19; // x0
  __int64 v20; // x23
  __int64 i; // x21
  char *v22; // x1
  void *v23; // x0
  void *v24; // x0
  char *v25; // x0
  __int64 v26; // x23
  __int64 j; // x21
  __int64 *v28; // x0
  void *v29; // x0
  const void *v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x0
  size_t v33; // x22
  size_t v34; // x26
  unsigned __int64 v35; // x19
  void *v36; // x0
  char *v37; // x1
  int v38; // w0
  size_t v39; // x22
  int v40; // w19
  void *v41; // x0
  const char *v42; // x1
  void *v43; // [xsp+50h] [xbp-40h] BYREF
  unsigned __int64 v44; // [xsp+58h] [xbp-38h]
  unsigned __int64 v45; // [xsp+60h] [xbp-30h]
  void *ptr; // [xsp+68h] [xbp-28h] BYREF
  size_t v47; // [xsp+70h] [xbp-20h]
  size_t v48; // [xsp+78h] [xbp-18h]
  int v49; // [xsp+80h] [xbp-10h]

  v3 = (_QWORD *)(a1 + 8);
  v7 = sub_43C700(*(_QWORD **)(a1 + 16), (_QWORD *)(a1 + 8), a3);
  if ( v3 == v7 )
    goto LABEL_8;
  v8 = v7;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v9 = *(const char **)a3;
    if ( v8[5] )
      goto LABEL_4;
  }
  else
  {
    v9 = (const char *)&qword_4B2D48;
    if ( v8[5] )
    {
LABEL_4:
      v10 = (const char *)v8[4];
      goto LABEL_5;
    }
  }
  v10 = (const char *)&qword_4B2D48;
LABEL_5:
  if ( (strcmp(v9, v10) & 0x80000000) == 0 )
  {
    v11 = *((int *)v8 + 14);
    result = -1;
    v13 = *(_QWORD *)(*a2 + 8 * v11);
    if ( !*(_DWORD *)(v13 + 136) )
    {
      v18 = *(void **)(v13 + 32);
      if ( v18 )
      {
        *(_QWORD *)(v13 + 40) = 0;
        j__free(v18);
        *(_QWORD *)(v13 + 32) = 0;
        *(_QWORD *)(v13 + 48) = 0;
      }
      v19 = *(char **)(v13 + 88);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v13 + 96);
        if ( v20 )
        {
          for ( i = 0; i != v20; ++i )
          {
            v22 = &v19[32 * i];
            v23 = *((void **)v22 + 1);
            if ( v23 )
            {
              *((_QWORD *)v22 + 2) = 0;
              j__free(v23);
            }
            v19 = *(char **)(v13 + 88);
          }
        }
        *(_QWORD *)(v13 + 96) = 0;
        j__free(v19);
        *(_QWORD *)(v13 + 88) = 0;
        *(_QWORD *)(v13 + 104) = 0;
      }
      v24 = *(void **)(v13 + 112);
      if ( v24 )
      {
        *(_QWORD *)(v13 + 120) = 0;
        j__free(v24);
        *(_QWORD *)(v13 + 112) = 0;
        *(_QWORD *)(v13 + 128) = 0;
      }
      v25 = *(char **)(v13 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v13 + 72);
        if ( v26 )
        {
          for ( j = 0; j != v26; ++j )
          {
            v28 = (__int64 *)&v25[32 * j];
            sub_448310(v28);
            v25 = *(char **)(v13 + 64);
          }
        }
        *(_QWORD *)(v13 + 72) = 0;
        j__free(v25);
        *(_QWORD *)(v13 + 64) = 0;
        *(_QWORD *)(v13 + 80) = 0;
      }
      *(_DWORD *)(v13 + 24) = 0;
      *(_DWORD *)(v13 + 136) = -1;
      return v11;
    }
    return result;
  }
LABEL_8:
  v43 = nullptr;
  v44 = 0;
  v14 = *(_QWORD *)(a1 + 64);
  v45 = 0;
  if ( !v14 )
  {
    v15 = 2;
    v16 = nullptr;
    v17 = 0;
LABEL_10:
    v16 = sub_491288((__int64)&v43, v16, v15, 1u);
    v43 = v16;
    goto LABEL_31;
  }
  v29 = sub_491248(v14);
  v30 = *(const void **)(a1 + 56);
  v43 = v29;
  v15 = v14 + 1;
  v45 = v14;
  v17 = v14 - 1;
  memcpy(v29, v30, v14);
  v44 = v14;
  v16 = v43;
  if ( v14 + 1 > v14 )
    goto LABEL_10;
LABEL_31:
  v44 = v15;
  *((_BYTE *)v16 + v17) = 46;
  *((_BYTE *)v43 + v17 + 1) = 0;
  v31 = *(_QWORD *)(a3 + 8);
  v32 = v44;
  if ( v31 )
  {
    v33 = v31 - 1;
    if ( v31 != 1 )
    {
      if ( v44 )
      {
        v35 = v44 - 1;
        v34 = v33 + v44 - 1;
      }
      else
      {
        v34 = v31 - 1;
        v35 = 0;
      }
      v36 = v43;
      if ( v34 + 1 > v45 )
      {
        v36 = sub_491288((__int64)&v43, v43, v34 + 1, 1u);
        v43 = v36;
      }
      v44 = v34 + 1;
      *((_BYTE *)v36 + v34) = 0;
      memcpy((char *)v43 + v35, *(const void **)a3, v33);
      v32 = v44;
    }
  }
  v37 = (char *)v43;
  if ( !v32 )
    v37 = (char *)&qword_4B2D48;
  v38 = sub_43DEC8(a2, v37);
  v39 = *(_QWORD *)(a3 + 8);
  v40 = v38;
  ptr = nullptr;
  v47 = 0;
  v48 = 0;
  if ( v39 )
  {
    v41 = sub_491248(v39);
    v42 = *(const char **)a3;
    ptr = v41;
    v48 = v39;
    memcpy(v41, v42, v39);
    v47 = v39;
  }
  v49 = v40;
  sub_442338(a1, (__int64)&ptr);
  if ( ptr )
  {
    v47 = 0;
    j__free(ptr);
  }
  if ( v43 )
  {
    v44 = 0;
    j__free(v43);
  }
  return v40;
}
// 4423E0: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
