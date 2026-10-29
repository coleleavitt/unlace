/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BF88
// Address: 0x000000000047BF88

//----- (000000000047BF88) ----------------------------------------------------
__int64 __fastcall sub_47BF88(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // w0
  const void *v4; // x19
  size_t v5; // x0
  size_t v6; // x22
  __int64 v8; // x21
  int v9; // w0
  size_t v10; // x0
  size_t v11; // x24
  size_t v12; // x23
  void *v13; // x0
  __int64 v14; // x21
  size_t v15; // x0
  size_t v16; // x24
  size_t v17; // x23
  size_t v18; // x0
  size_t v19; // x22
  unsigned __int64 v20; // x24
  void *v21; // x0
  unsigned __int64 v22; // x24
  void *v23; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v25; // [xsp+48h] [xbp-18h]
  __int64 v26; // [xsp+50h] [xbp-10h]

  if ( *a2 != 45 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(2756);
  }
  v3 = (unsigned __int8)a2[1];
  v4 = a2 + 2;
  if ( v3 == 104 )
  {
    v14 = a1 + 8;
    ptr = nullptr;
    v25 = 0;
    v26 = 0;
    if ( a2 != (_BYTE *)-2LL )
    {
      v15 = strlen(a2 + 2);
      v16 = v15 + 1;
      v17 = v15;
      ptr = sub_491288((__int64)&ptr, nullptr, v15 + 1, 1u);
      v25 = v16;
      memmove(ptr, v4, v17);
      *((_BYTE *)ptr + v17) = 0;
    }
    ((void (__fastcall *)(__int64, void **, __int64))loc_47B620)(v14, &ptr, 1);
    v13 = ptr;
    if ( !ptr )
      return 1;
    goto LABEL_16;
  }
  if ( v3 <= 0x68 )
  {
    if ( v3 != 80 )
      return 0;
    ptr = nullptr;
    v25 = 0;
    v8 = a1 + 88;
    v9 = *(_DWORD *)(v8 + 80);
    v26 = 0;
    *(_DWORD *)(v8 + 80) = v9 | 0x402;
    if ( a2 != (_BYTE *)-2LL )
    {
      v10 = strlen((const char *)v4);
      v11 = v10 + 1;
      v12 = v10;
      ptr = sub_491288((__int64)&ptr, nullptr, v10 + 1, 1u);
      v25 = v11;
      memmove(ptr, v4, v12);
      *((_BYTE *)ptr + v12) = 0;
    }
    ((void (__fastcall *)(__int64, void **, __int64))loc_47B620)(v8, &ptr, 1);
    v13 = ptr;
    if ( !ptr )
      return 1;
LABEL_16:
    v25 = 0;
    j__free(v13);
    return 1;
  }
  if ( v3 != 112 )
  {
    if ( v3 == 117 )
    {
      if ( a2 != (_BYTE *)-2LL && (v5 = strlen(a2 + 2), (v6 = v5) != 0) )
      {
        v22 = v5 + 1;
        v23 = *(void **)(a1 + 40);
        if ( v22 > *(_QWORD *)(a1 + 56) )
        {
          v23 = sub_491288(a1 + 40, *(void **)(a1 + 40), v22, 1u);
          *(_QWORD *)(a1 + 40) = v23;
        }
        *(_QWORD *)(a1 + 48) = v22;
        memmove(v23, v4, v6);
        *(_BYTE *)(*(_QWORD *)(a1 + 40) + v6) = 0;
        return 1;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        return 1;
      }
    }
    return 0;
  }
  if ( a2 != (_BYTE *)-2LL && (v18 = strlen(a2 + 2), (v19 = v18) != 0) )
  {
    v20 = v18 + 1;
    v21 = *(void **)(a1 + 64);
    if ( v20 > *(_QWORD *)(a1 + 80) )
    {
      v21 = sub_491288(a1 + 64, *(void **)(a1 + 64), v20, 1u);
      *(_QWORD *)(a1 + 64) = v21;
    }
    *(_QWORD *)(a1 + 72) = v20;
    memmove(v21, v4, v19);
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + v19) = 0;
    return 1;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
    return 1;
  }
}
// 47BF88: could not find valid save-restore pair for x22
// 47BF88: could not find valid save-restore pair for x23
// 47BF88: could not find valid save-restore pair for x24
// 52451C: using guessed type char under_debugger;
