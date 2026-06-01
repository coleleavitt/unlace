/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000EB00
// Address: 0x000000010000EB00

//----- (000000010000EB00) ----------------------------------------------------
_QWORD *__fastcall sub_10000EB00(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  void *v8; // x0
  _QWORD **v9; // x21
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  __int64 v14; // x24
  __int64 v15; // x25
  __int64 v16; // x8
  void *v17; // x0
  _QWORD *v18; // x26
  void *v19; // x0
  void *v20; // x0
  void *v21; // x0
  int v22; // w8
  _QWORD *result; // x0
  unsigned __int64 v24; // x22
  int v25; // w8
  __int64 v26; // x9
  unsigned __int64 v27; // x9
  char *v28; // x8
  char *v29; // x23
  __int32 v30; // w8
  int8x16_t v31; // q1
  int8x16_t v32; // q0
  unsigned __int32 v33; // w8
  unsigned __int64 v34; // x24
  unsigned __int64 v35; // x8
  char v36; // [xsp+6h] [xbp-4Ah] BYREF
  char v37; // [xsp+7h] [xbp-49h] BYREF

  v9 = (_QWORD **)(a1 + 136);
  v8 = *(void **)(a1 + 136);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v10 = *(void **)(a1 + 200);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v11 = *(void **)(a1 + 224);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v12 = *(void **)(a1 + 248);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v13 = *(void **)(a1 + 344);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 352);
    if ( v14 )
    {
      v15 = 0;
      do
      {
        v16 = *(_QWORD *)(a1 + 344);
        v17 = *(void **)(v16 + v15);
        if ( v17 )
        {
          v18 = (_QWORD *)(v16 + v15);
          *(_QWORD *)(v16 + v15 + 8) = 0;
          qfree(v17);
          *v18 = 0;
          v18[2] = 0;
        }
        v15 += 24;
        --v14;
      }
      while ( v14 );
      v13 = *(void **)(a1 + 344);
    }
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  v19 = *(void **)(a1 + 368);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v19);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  v20 = *(void **)(a1 + 392);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v20);
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v21 = *(void **)(a1 + 416);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 424) = 0;
    qfree(v21);
    *(_QWORD *)(a1 + 416) = 0;
    *(_QWORD *)(a1 + 432) = 0;
  }
  *(_BYTE *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = -1;
  v22 = sub_10000EF20(a1, a2, a3);
  result = nullptr;
  if ( v22 <= 1 )
  {
    if ( !v22 )
      return result;
    *(_BYTE *)(a1 + 161) = 0;
    v24 = 28;
    if ( (*(_BYTE *)(a1 + 44) & 1) == 0 )
      goto LABEL_33;
    v25 = 4;
    v26 = 16;
    goto LABEL_32;
  }
  if ( v22 != 2 )
  {
    if ( v22 == 3 )
      return sub_10000E870(a1, *(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
    return result;
  }
  *(_BYTE *)(a1 + 161) = 1;
  v24 = 32;
  if ( *(_BYTE *)(a1 + 44) == 1 )
  {
    v25 = 8;
    v26 = 24;
LABEL_32:
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + v26);
    *(_DWORD *)(a1 + 40) = v25;
  }
LABEL_33:
  v27 = *(_QWORD *)(a1 + 144);
  if ( v27 >= v24 )
  {
    if ( v27 != v24 )
    {
      v36 = 0;
      sub_100019CE4(v9, v24, &v36);
    }
  }
  else
  {
    v28 = *(char **)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) < v24 )
    {
      v28 = (char *)qvector_reserve(v9, *(_QWORD **)(a1 + 136), v24, 1u);
      *(_QWORD *)(a1 + 136) = v28;
      v27 = *(_QWORD *)(a1 + 144);
    }
    bzero(&v28[v27], v24 - v27);
    *(_QWORD *)(a1 + 144) = v24;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), *(void **)(a1 + 136), v24) != v24 )
    return nullptr;
  v29 = *(char **)(a1 + 136);
  memcpy((void *)(a1 + 164), v29, v24);
  if ( (*(_BYTE *)(a1 + 161) & 1) == 0 )
    *(_DWORD *)(a1 + 192) = 0;
  v30 = *(_DWORD *)(a1 + 164);
  *(_BYTE *)(a1 + 160) = (v30 & 0xFEFFFFFF) == -822415874;
  if ( (v30 | 0x1000000) == 0xCFFAEDFE )
  {
    v31.i32[0] = v30;
    v31.i32[1] = *(_DWORD *)(a1 + 168);
    v31.i64[1] = *(_QWORD *)(a1 + 172);
    *(int8x16_t *)(a1 + 164) = vrev32q_s8(v31);
    v32 = vrev32q_s8(*(int8x16_t *)(a1 + 180));
    *(int8x16_t *)(a1 + 180) = v32;
    v33 = v32.u32[1];
  }
  else
  {
    v33 = *(_DWORD *)(a1 + 184);
  }
  v34 = v24 + v33;
  if ( v34 > *(_QWORD *)(a1 + 128) )
    return nullptr;
  v35 = *(_QWORD *)(a1 + 144);
  if ( v35 >= v34 )
  {
    if ( v35 != v34 )
    {
      v37 = 0;
      sub_100019CE4(v9, v34, &v37);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 152) < v34 )
    {
      v29 = (char *)qvector_reserve(v9, v29, v34, 1u);
      *(_QWORD *)(a1 + 136) = v29;
      v35 = *(_QWORD *)(a1 + 144);
    }
    bzero(&v29[v35], v34 - v35);
    *(_QWORD *)(a1 + 144) = v34;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), (void *)(*(_QWORD *)(a1 + 136) + v24), *(unsigned int *)(a1 + 184)) == *(_DWORD *)(a1 + 184) )
    return (_QWORD *)sub_10000F1FC(a1, a4);
  result = *v9;
  if ( *v9 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(result);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
    return nullptr;
  }
  return result;
}
