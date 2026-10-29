/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442938
// Address: 0x0000000000442938

//----- (0000000000442938) ----------------------------------------------------
__int64 __fastcall sub_442938(__int64 a1, char *s)
{
  char *v4; // x0
  char *v5; // x20
  pthread_mutex_t *v6; // x23
  __int64 *v7; // x0
  int v8; // w21
  const char *v9; // x20
  size_t v10; // x0
  size_t v11; // x26
  size_t v12; // x24
  _QWORD *v13; // x0
  __int64 v14; // x20
  __int64 v15; // x2
  const char *v16; // x0
  void *v17; // x0
  unsigned int v18; // w20
  void *v20; // x24
  __int64 v21; // x1
  size_t v22; // x3
  _QWORD *v23; // x0
  _QWORD *v24; // x1
  void *v25; // x0
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  size_t v27; // [xsp+58h] [xbp-18h]
  __int64 v28; // [xsp+60h] [xbp-10h]

  v4 = strchr(s, 46);
  if ( !v4 )
    return 0;
  v5 = v4;
  v6 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v7 = (__int64 *)sub_43CF60();
  v8 = sub_43E818(v7, s);
  if ( v8 != 0x7FFFFFFF )
  {
    v9 = v5 + 1;
    ptr = nullptr;
    v27 = 0;
    v28 = 0;
    if ( v9 )
    {
      v10 = strlen(v9);
      v11 = v10 + 1;
      v12 = v10;
      ptr = sub_491288((__int64)&ptr, nullptr, v10 + 1, 1u);
      v27 = v11;
      memmove(ptr, v9, v12);
      *((_BYTE *)ptr + v12) = 0;
    }
    v13 = sub_43C700(*(_QWORD **)(a1 + 16), (_QWORD *)(a1 + 8), (__int64)&ptr);
    v14 = (__int64)v13;
    if ( (_QWORD *)(a1 + 8) != v13 )
    {
      v15 = v13[5];
      v16 = (const char *)ptr;
      if ( !v27 )
        v16 = (const char *)&qword_4B2D48;
      if ( v15 )
      {
        if ( (strcmp(v16, *(const char **)(v14 + 32)) & 0x80000000) == 0 )
          goto LABEL_10;
      }
      else if ( (strcmp(v16, (const char *)&qword_4B2D48) & 0x80000000) == 0 )
      {
LABEL_10:
        v17 = ptr;
        *(_DWORD *)(v14 + 56) = v8;
        if ( v17 )
        {
          v27 = 0;
          j__free(v17);
        }
        v18 = 1;
        goto LABEL_13;
      }
    }
    v20 = sub_49E050(0x40u);
    v21 = v28;
    v22 = v27;
    *((_QWORD *)v20 + 4) = ptr;
    *((_QWORD *)v20 + 5) = v22;
    *((_QWORD *)v20 + 6) = v21;
    *((_DWORD *)v20 + 14) = 0;
    ptr = nullptr;
    v27 = 0;
    v28 = 0;
    v23 = sub_442748((_QWORD *)a1, (_QWORD *)v14, (const char **)v20 + 4);
    v14 = (__int64)v23;
    if ( v24 )
    {
      v14 = sub_4422A8(a1, (__int64)v23, v24, (__int64)v20);
    }
    else
    {
      v25 = *((void **)v20 + 4);
      if ( v25 )
      {
        *((_QWORD *)v20 + 5) = 0;
        j__free(v25);
      }
      j__free_0(v20);
    }
    goto LABEL_10;
  }
  v18 = 0;
LABEL_13:
  sub_494760(v6);
  return v18;
}
// 442938: could not find valid save-restore pair for x24
// 442938: could not find valid save-restore pair for x26
// 442AF0: variable 'v24' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522288: using guessed type __int64 qword_522288;
