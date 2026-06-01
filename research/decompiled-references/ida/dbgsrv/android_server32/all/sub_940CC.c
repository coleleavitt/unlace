/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_940CC
// Address: 0x000940CC

//----- (000940CC) --------------------------------------------------------
_DWORD *__fastcall sub_940CC(int a1)
{
  __int64 v2; // kr00_8
  _DWORD *result; // r0
  _BYTE *v4; // r1
  unsigned int v5; // r5
  int v6; // r0
  _DWORD *v7; // r11
  __int64 v8; // r0
  void *v9; // r8
  size_t v10; // r10
  int v11; // r5
  char *v12; // r9
  __int64 v13; // r0
  char *v14; // r0
  int v15; // [sp+0h] [bp-28h]
  int v16; // [sp+4h] [bp-24h] BYREF

  v2 = *(_QWORD *)a1;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return nullptr;
  result = nullptr;
  if ( *(_BYTE *)v2 != 84 )
    return result;
  v4 = (_BYTE *)(v2 + 1);
  *(_DWORD *)a1 = v2 + 1;
  v16 = 0;
  if ( (_DWORD)v2 + 1 != HIDWORD(v2) && *v4 == 95 )
  {
    v5 = 0;
    goto LABEL_9;
  }
  if ( sub_946E6(a1, &v16) )
    return nullptr;
  v5 = ++v16;
  v4 = *(_BYTE **)a1;
  if ( *(_DWORD *)a1 == *(_DWORD *)(a1 + 4) || *v4 != 95 )
    return nullptr;
LABEL_9:
  v6 = *(unsigned __int8 *)(a1 + 362);
  *(_DWORD *)a1 = v4 + 1;
  if ( v6 )
    return sub_94746(a1, (int)"auto");
  if ( !*(_BYTE *)(a1 + 361) )
  {
    v13 = *(_QWORD *)(a1 + 288);
    if ( v5 < (HIDWORD(v13) - (int)v13) >> 2 )
      return *(_DWORD **)(v13 + 4 * v5);
    return nullptr;
  }
  v7 = sub_93AC6(a1 + 368, 20);
  *v7 = &off_DBC8C;
  v7[1] = 33686047;
  v7[2] = v5;
  v7[3] = 0;
  *((_BYTE *)v7 + 16) = 0;
  v8 = *(_QWORD *)(a1 + 336);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    v9 = *(void **)(a1 + 332);
    v10 = v8 - (_DWORD)v9;
    v11 = ((int)v8 - (int)v9) >> 2;
    v15 = ((int)v8 - (int)v9) >> 1;
    if ( (void *)(a1 + 344) == v9 )
    {
      v14 = (char *)malloc(2 * v10);
      v12 = v14;
      if ( v10 )
        memmove(v14, v9, v10);
      *(_DWORD *)(a1 + 332) = v12;
    }
    else
    {
      v12 = (char *)realloc(v9, 2 * v10);
      *(_DWORD *)(a1 + 332) = v12;
    }
    HIDWORD(v8) = &v12[4 * v15];
    LODWORD(v8) = &v12[4 * v11];
    *(_QWORD *)(a1 + 336) = v8;
  }
  *(_DWORD *)(a1 + 336) = v8 + 4;
  *(_DWORD *)v8 = v7;
  return *(_DWORD **)(*(_DWORD *)(a1 + 336) - 4);
}
// DBC8C: using guessed type _UNKNOWN *off_DBC8C;
