/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46EE88
// Address: 0x000000000046EE88

//----- (000000000046EE88) ----------------------------------------------------
__int64 __fastcall sub_46EE88(__int64 a1, __int64 a2, const char *a3)
{
  _QWORD *v5; // x0
  __int64 v6; // x19
  __int64 v7; // x2
  const char *v8; // x0
  const char *v9; // x1
  size_t v10; // x0
  size_t v11; // x21
  _QWORD *v13; // x26
  _QWORD *v14; // x0
  const char **v15; // x24
  size_t v16; // x25
  _QWORD *v17; // x0
  __int64 v18; // x1
  _QWORD *v19; // x24
  _QWORD *v20; // x2
  int v21; // w0
  unsigned __int64 v22; // x24
  void *v23; // x0
  void *v24; // x0
  void *v25; // x1
  void *v26; // x0
  void *v27; // x0
  void *v28; // x0
  const char *v29; // x0
  const char *v30; // x1
  unsigned int v31; // w0
  _QWORD *v32; // [xsp+58h] [xbp-28h]
  void *ptr; // [xsp+60h] [xbp-20h] BYREF
  size_t v34; // [xsp+68h] [xbp-18h]
  __int64 v35; // [xsp+70h] [xbp-10h]
  __int64 v36; // [xsp+78h] [xbp-8h]

  if ( !a3 )
    return v36 ^ _stack_chk_guard;
  ptr = nullptr;
  v34 = 0;
  v35 = 0;
  sub_46B060(a2, (__int64)&ptr);
  v5 = sub_462A90(*(_QWORD **)(a1 + 16), (_QWORD *)(a1 + 8), (__int64)&ptr);
  v6 = (__int64)v5;
  if ( (_QWORD *)(a1 + 8) == v5 )
    goto LABEL_13;
  v7 = v5[5];
  v8 = (const char *)ptr;
  v9 = (const char *)&qword_4B2D48;
  if ( !v34 )
    v8 = (const char *)&qword_4B2D48;
  if ( v7 )
    v9 = *(const char **)(v6 + 32);
  if ( strcmp(v8, v9) < 0 )
  {
LABEL_13:
    v13 = (_QWORD *)v6;
    v14 = sub_49E050(0x50u);
    v15 = (const char **)(v14 + 4);
    v16 = v34;
    v6 = (__int64)v14;
    v14[4] = 0;
    v14[5] = 0;
    v14[6] = 0;
    if ( v16 )
    {
      v24 = sub_491248(v16);
      v25 = ptr;
      *(_QWORD *)(v6 + 32) = v24;
      v15[2] = (const char *)v16;
      memcpy(v24, v25, v16);
      *(_QWORD *)(v6 + 40) = v16;
    }
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *(_QWORD *)(v6 + 72) = 0;
    v17 = sub_46EC98((_QWORD *)a1, v13, v15);
    v19 = v17;
    v20 = (_QWORD *)v18;
    if ( v18 )
    {
      v21 = v17 != nullptr;
      if ( a1 + 8 == v18 )
        v21 = 1;
      if ( !v21 )
      {
        if ( *(_QWORD *)(v6 + 40) )
          v29 = *(const char **)(v6 + 32);
        else
          v29 = (const char *)&qword_4B2D48;
        if ( *(_QWORD *)(v18 + 40) )
          v30 = *(const char **)(v18 + 32);
        else
          v30 = (const char *)&qword_4B2D48;
        v32 = v20;
        v31 = strcmp(v29, v30);
        v20 = v32;
        v21 = v31 >> 31;
      }
      sub_49F830(v21, v6, v20, (_QWORD *)(a1 + 8));
      ++*(_QWORD *)(a1 + 40);
      v10 = strlen(a3);
      v11 = v10;
      if ( !v10 )
        goto LABEL_9;
LABEL_20:
      v22 = v10 + 1;
      v23 = *(void **)(v6 + 56);
      if ( v22 > *(_QWORD *)(v6 + 72) )
      {
        v23 = sub_491288(v6 + 56, *(void **)(v6 + 56), v22, 1u);
        *(_QWORD *)(v6 + 56) = v23;
      }
      *(_QWORD *)(v6 + 64) = v22;
      memmove(v23, a3, v11);
      *(_BYTE *)(*(_QWORD *)(v6 + 56) + v11) = 0;
      goto LABEL_10;
    }
    v26 = *(void **)(v6 + 56);
    if ( v26 )
    {
      *(_QWORD *)(v6 + 64) = 0;
      j__free(v26);
    }
    v27 = *(void **)(v6 + 32);
    if ( v27 )
    {
      *(_QWORD *)(v6 + 40) = 0;
      j__free(v27);
    }
    v28 = (void *)v6;
    v6 = (__int64)v19;
    j__free_0(v28);
  }
  v10 = strlen(a3);
  v11 = v10;
  if ( v10 )
    goto LABEL_20;
LABEL_9:
  *(_QWORD *)(v6 + 64) = 0;
LABEL_10:
  if ( ptr )
  {
    v34 = 0;
    j__free(ptr);
  }
  return v36 ^ _stack_chk_guard;
}
// 46EFA8: variable 'v18' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
