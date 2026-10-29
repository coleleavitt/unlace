/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433780
// Address: 0x0000000000433780

//----- (0000000000433780) ----------------------------------------------------
__int64 __fastcall sub_433780(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 *v4; // x21
  size_t v5; // x24
  unsigned __int64 v6; // x25
  void **v7; // x0
  __int64 v8; // x3
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x2
  void **v11; // x1
  int v12; // w20
  _DWORD *v13; // x0
  __int64 v14; // x3
  __int64 v15; // x1
  _WORD *v16; // x0
  void *v18; // x21
  unsigned __int64 v19; // x24
  void *v20; // x23
  void **v21; // x1
  void *v22; // x0
  __int64 v23; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  unsigned __int64 v25; // [xsp+48h] [xbp-18h]
  void *v26; // [xsp+50h] [xbp-10h]

  v2 = a1 + 160;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  if ( *(_DWORD *)v3 != 1 )
  {
    v4 = (__int64 *)&byte_4B31F0;
    v5 = 0;
    ptr = nullptr;
    v25 = 0;
    v6 = 1;
    v26 = nullptr;
LABEL_3:
    ptr = sub_491288((__int64)&ptr, nullptr, v6, 1u);
    v25 = v6;
    memmove(ptr, v4, v5);
    *((_BYTE *)ptr + v5) = 0;
    goto LABEL_4;
  }
  v23 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v23 + 8) )
    v4 = *(__int64 **)v23;
  else
    v4 = &qword_4B2D48;
  ptr = nullptr;
  v25 = 0;
  v26 = nullptr;
  if ( v4 )
  {
    v5 = strlen((const char *)v4);
    v6 = v5 + 1;
    goto LABEL_3;
  }
LABEL_4:
  v7 = *(void ***)(a1 + 160);
  v8 = *(_QWORD *)(v2 + 8);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = v8 + 1;
  if ( v7 <= &ptr && &ptr < &v7[3 * v9] )
  {
    v18 = ptr;
    v19 = v25;
    ptr = nullptr;
    v25 = 0;
    v20 = v26;
    v26 = nullptr;
    if ( v9 < v10 )
    {
      v7 = (void **)sub_491288(v2, v7, v10, 0x18u);
      *(_QWORD *)(a1 + 160) = v7;
      v8 = *(_QWORD *)(v2 + 8);
    }
    v21 = &v7[3 * v8];
    *v21 = v18;
    v21[1] = (void *)v19;
    v21[2] = v20;
    v22 = ptr;
    ++*(_QWORD *)(v2 + 8);
    if ( v22 )
    {
      v25 = 0;
      j__free(v22);
    }
  }
  else
  {
    if ( v9 < v10 )
    {
      v7 = (void **)sub_491288(v2, *(void **)(a1 + 160), v10, 0x18u);
      *(_QWORD *)(a1 + 160) = v7;
      v8 = *(_QWORD *)(v2 + 8);
    }
    v11 = &v7[3 * v8];
    *v11 = ptr;
    v11[1] = (void *)v25;
    v11[2] = v26;
    ++*(_QWORD *)(v2 + 8);
  }
  v12 = *(_DWORD *)(a1 + 208);
  v13 = *(_DWORD **)(a1 + 248);
  v14 = *(_QWORD *)(a1 + 256);
  if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(a1 + 264) )
  {
    v13 = sub_491288(a1 + 248, *(void **)(a1 + 248), v14 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v13;
    v14 = *(_QWORD *)(a1 + 256);
  }
  v13[v14] = v12;
  ++*(_QWORD *)(a1 + 256);
  v15 = *(_QWORD *)(a1 + 328);
  if ( (unsigned __int64)(v15 + 1) > *(_QWORD *)(a1 + 336) )
  {
    v16 = sub_491288(a1 + 320, *(void **)(a1 + 320), v15 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v16;
    v15 = *(_QWORD *)(a1 + 328);
  }
  else
  {
    v16 = *(_WORD **)(a1 + 320);
  }
  v16[v15] = 0;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
// 433780: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
