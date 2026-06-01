/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D418
// Address: 0x000000000043D418

//----- (000000000043D418) ----------------------------------------------------
__int64 __fastcall sub_43D418(__int64 a1, __int64 *a2)
{
  __int16 v2; // w3
  __int64 v5; // x2
  _BYTE *v7; // x0
  size_t v8; // x20
  int v9; // w24
  int v10; // w2
  __int64 v11; // x19
  int v12; // w28
  __int64 v13; // x23
  __int64 v14; // x19
  _DWORD *v15; // x20
  _BYTE *v16; // x0
  _BYTE *v17; // x0
  _BYTE *v18; // x0
  _BYTE *v19; // x0
  unsigned __int64 v20; // x19
  unsigned __int64 v21; // x22
  __int64 v22; // x3
  char *v23; // x0
  __int16 v24; // [xsp+6Eh] [xbp-22h] BYREF
  _BYTE v25[5]; // [xsp+70h] [xbp-20h] BYREF
  _BYTE v26[3]; // [xsp+75h] [xbp-1Bh] BYREF
  _BYTE v27[12]; // [xsp+84h] [xbp-Ch] BYREF

  v2 = 0;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
  v5 = a2[1];
  if ( !v5 )
    goto LABEL_2;
  v7 = sub_48E2D8(v25, (unsigned __int64)v26, v5);
  v8 = v7 - v25;
  if ( v7 != v25 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v21 = v8 + v20;
    if ( v20 <= v8 + v20 )
    {
      if ( v20 >= v8 + v20 )
      {
LABEL_14:
        memcpy((void *)(*(_QWORD *)a1 + v20), v25, v8);
        goto LABEL_4;
      }
    }
    else
    {
      if ( v20 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v20 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_14;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(char **)a1;
    if ( v21 > *(_QWORD *)(a1 + 16) )
    {
      v23 = (char *)sub_491288(a1, *(void **)a1, v21, 1u);
      *(_QWORD *)a1 = v23;
      v22 = *(_QWORD *)(a1 + 8);
    }
    memset(&v23[v22], 0, v21 - v22);
    *(_QWORD *)(a1 + 8) = v21;
    goto LABEL_14;
  }
LABEL_4:
  if ( a2[1] )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = *a2;
        v14 = 16 * v11;
        v15 = (_DWORD *)(*a2 + v14);
        v16 = sub_48E2D8(v25, (unsigned __int64)v27, *v15 - v10);
        v17 = sub_48E2D8(v16, (unsigned __int64)v27, v15[1] - v12);
        v18 = sub_48E2D8(v17, (unsigned __int64)v27, v15[2]);
        v19 = sub_48E2D8(v18, (unsigned __int64)v27, v15[3]);
        if ( v19 != v25 )
          break;
        ++v9;
        v10 = *(_DWORD *)(v13 + v14);
        v11 = v9;
        v12 = v15[1];
        if ( v9 >= (unsigned __int64)a2[1] )
          goto LABEL_9;
      }
      ++v9;
      sub_43C8D0((void **)a1, v25, v19 - v25);
      v10 = *(_DWORD *)(v13 + v14);
      v11 = v9;
      v12 = v15[1];
    }
    while ( v9 < (unsigned __int64)a2[1] );
LABEL_9:
    v2 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 24);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 24);
  }
LABEL_2:
  v24 = v2;
  sub_43C8D0((void **)a1, &v24, 2u);
  return *(_QWORD *)&v27[4] ^ _stack_chk_guard;
}
// 43D418: could not find valid save-restore pair for x22
// 43D418: could not find valid save-restore pair for x23
// 43D418: could not find valid save-restore pair for x24
// 43D418: could not find valid save-restore pair for x28
