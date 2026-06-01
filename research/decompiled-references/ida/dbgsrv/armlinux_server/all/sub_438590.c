/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438590
// Address: 0x0000000000438590

//----- (0000000000438590) ----------------------------------------------------
__int64 __fastcall sub_438590(__int64 a1, int a2)
{
  __int64 v4; // x0
  __int64 v5; // x2
  int v6; // w24
  int v7; // w21
  _DWORD *v8; // x22
  unsigned __int64 v9; // x21
  void **v10; // x0
  unsigned __int64 v11; // x3
  __int64 v12; // x20
  __int64 v13; // x1
  __int64 v14; // x0
  unsigned int v15; // w0
  char *v16; // x0
  unsigned __int64 v18; // x25
  unsigned __int64 v19; // x26
  __int64 v20; // x27
  char *v21; // x3
  char *v22; // x0

  v5 = *(_QWORD *)(a1 + 248);
  v4 = *(_QWORD *)(a1 + 256);
  v6 = *(_DWORD *)(v5 + 4 * v4 - 4);
  if ( v4 )
    *(_QWORD *)(a1 + 256) = v4 - 1;
  v7 = *(_DWORD *)(a1 + 208);
  v8 = sub_49E050(0x20u);
  v9 = (unsigned int)(v7 - v6);
  *v8 = a2;
  v8[6] = 0;
  v10 = (void **)sub_491248(24);
  *v10 = nullptr;
  v10[1] = nullptr;
  v12 = (__int64)v10;
  v10[2] = nullptr;
  *((_QWORD *)v8 + 1) = v10;
  if ( (_DWORD)v9 )
  {
    v18 = (unsigned __int64)v10[1];
    v19 = (int)v9 + v18;
    v20 = **(_QWORD **)(a1 + 200);
    if ( v18 <= v19 )
    {
      if ( v18 >= (int)v9 + v18 )
      {
LABEL_20:
        memcpy((void *)(*(_QWORD *)v12 + v18), (const void *)(v20 + v6), (int)v9);
        goto LABEL_4;
      }
    }
    else
    {
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v18 & 0x8000000000000000LL) != 0 )
          v10[1] = (void *)0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_20;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = (char *)v10[1];
    v22 = (char *)*v10;
    if ( v19 > *(_QWORD *)(v12 + 16) )
    {
      v22 = (char *)sub_491288(v12, *(void **)v12, v19, 1u);
      *(_QWORD *)v12 = v22;
      v21 = *(char **)(v12 + 8);
    }
    memset(&v21[(_QWORD)v22], 0, v19 - (_QWORD)v21);
    *(_QWORD *)(v12 + 8) = v19;
    goto LABEL_20;
  }
LABEL_4:
  v13 = *(_QWORD *)(a1 + 344);
  v14 = 8LL * *(_QWORD *)(a1 + 352) - 8;
  *((_QWORD *)v8 + 2) = *(_QWORD *)(v13 + v14);
  *(_QWORD *)(v13 + v14) = v8;
  if ( !(_DWORD)v9 )
    goto LABEL_11;
  v15 = *(_DWORD *)(a1 + 208);
  if ( (unsigned int)v9 > v15 )
  {
    if ( !under_debugger )
      sub_492270(708);
    __break(0x3E8u);
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(a1 + 200);
  v9 = v15 - (unsigned int)v9;
  *(_DWORD *)(a1 + 208) = v9;
  v11 = *(_QWORD *)(v12 + 8);
  if ( v9 > v11 )
  {
LABEL_8:
    v16 = *(char **)v12;
    if ( v9 > *(_QWORD *)(v12 + 16) )
    {
      v16 = (char *)sub_491288(v12, *(void **)v12, v9, 1u);
      *(_QWORD *)v12 = v16;
      v11 = *(_QWORD *)(v12 + 8);
    }
    memset(&v16[v11], 0, v9 - v11);
    *(_QWORD *)(v12 + 8) = v9;
    goto LABEL_11;
  }
  if ( v9 < v11 )
    *(_QWORD *)(v12 + 8) = v9;
LABEL_11:
  *(_BYTE *)(a1 + 212) = -87;
  return 0;
}
// 438674: variable 'v11' is possibly undefined
// 52451C: using guessed type char under_debugger;
