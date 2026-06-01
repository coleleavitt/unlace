/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481668
// Address: 0x0000000000481668

//----- (0000000000481668) ----------------------------------------------------
__int64 __fastcall sub_481668(__int64 a1, char *s)
{
  unsigned int v4; // w21
  size_t v6; // x0
  size_t v7; // x23
  size_t v8; // x21
  const char *v9; // x21
  __int64 v10; // x0
  void *v11; // x4
  __int64 v12; // x19
  char *v13; // x0
  const void *v14; // x25
  size_t v15; // x0
  size_t v16; // x27
  size_t v17; // x0
  size_t v18; // x25
  unsigned __int64 v19; // x28
  void *v20; // x0
  unsigned __int64 v21; // x26
  void *v22; // x0
  const char *v23; // [xsp+68h] [xbp-28h] BYREF
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  size_t v25; // [xsp+78h] [xbp-18h]
  __int64 v26; // [xsp+80h] [xbp-10h]

  if ( !s )
    return 0;
  v4 = 0;
  if ( *s )
  {
    ptr = nullptr;
    v25 = 0;
    v26 = 0;
    v6 = strlen(s);
    v7 = v6 + 1;
    v8 = v6;
    ptr = sub_491288((__int64)&ptr, nullptr, v6 + 1, 1u);
    v25 = v7;
    memmove(ptr, s, v8);
    *((_BYTE *)ptr + v8) = 0;
    v9 = sub_4930F8((char *)ptr, ":", &v23);
    if ( !v9 )
    {
LABEL_14:
      v4 = 1;
      if ( ptr )
      {
        v25 = 0;
        j__free(ptr);
      }
      return v4;
    }
    while ( 1 )
    {
      v11 = *(void **)a1;
      v10 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(a1 + 16) )
      {
        v11 = sub_491288(a1, *(void **)a1, v10 + 1, 0x30u);
        v10 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v11;
      }
      v12 = (__int64)v11 + 48 * v10;
      *(_QWORD *)v12 = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
      *(_QWORD *)(v12 + 40) = 0;
      ++*(_QWORD *)(a1 + 8);
      v13 = strchr(v9, 61);
      if ( !v13 )
        goto LABEL_11;
      *v13 = 0;
      v14 = v13 + 1;
      if ( v13 == (char *)-1LL )
        break;
      v15 = strlen(v13 + 1);
      v16 = v15;
      if ( !v15 )
        break;
      v19 = v15 + 1;
      v20 = *(void **)(v12 + 24);
      if ( v19 > *(_QWORD *)(v12 + 40) )
      {
        v20 = sub_491288(v12 + 24, *(void **)(v12 + 24), v19, 1u);
        *(_QWORD *)(v12 + 24) = v20;
      }
      *(_QWORD *)(v12 + 32) = v19;
      memmove(v20, v14, v16);
      *(_BYTE *)(*(_QWORD *)(v12 + 24) + v16) = 0;
      v17 = strlen(v9);
      v18 = v17;
      if ( v17 )
      {
LABEL_19:
        v21 = v17 + 1;
        v22 = *(void **)v12;
        if ( v21 > *(_QWORD *)(v12 + 16) )
        {
          v22 = sub_491288(v12, *(void **)v12, v21, 1u);
          *(_QWORD *)v12 = v22;
        }
        *(_QWORD *)(v12 + 8) = v21;
        memmove(v22, v9, v18);
        *(_BYTE *)(*(_QWORD *)v12 + v18) = 0;
        goto LABEL_13;
      }
LABEL_12:
      *(_QWORD *)(v12 + 8) = 0;
LABEL_13:
      v9 = sub_4930F8(nullptr, ":", &v23);
      if ( !v9 )
        goto LABEL_14;
    }
    *(_QWORD *)(v12 + 32) = 0;
LABEL_11:
    v17 = strlen(v9);
    v18 = v17;
    if ( v17 )
      goto LABEL_19;
    goto LABEL_12;
  }
  return v4;
}
// 481668: could not find valid save-restore pair for x23
