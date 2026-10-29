/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4866D8
// Address: 0x00000000004866D8

//----- (00000000004866D8) ----------------------------------------------------
__int64 __fastcall sub_4866D8(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  int v4; // w22
  unsigned __int64 v5; // x0
  _BOOL4 v6; // w23
  int v7; // w21
  __int64 v8; // x1
  __int16 v9; // w20
  unsigned __int64 v10; // x27
  __int64 v11; // x28
  __int64 v12; // x4
  char *v13; // x0
  bool v14; // cc
  unsigned int v15; // w0
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x27
  __int64 v18; // x4
  __int64 v19; // x5
  char *v20; // x0
  __int64 v21; // x27
  __int64 v22; // x28
  __int64 v24; // [xsp+68h] [xbp-18h]
  __int64 v25; // [xsp+68h] [xbp-18h]
  __int64 v26; // [xsp+70h] [xbp-10h]
  unsigned __int8 *v27; // [xsp+78h] [xbp-8h] BYREF

  v4 = a3;
  v27 = a2;
  v5 = *(_QWORD *)(a1 + 16);
  if ( (int)a3 <= 0 )
  {
    if ( v5 > 0xF )
      goto LABEL_27;
    a3 = 16;
LABEL_26:
    *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, a3, 2u);
LABEL_27:
    v6 = v4 >= 0;
    if ( !v4 )
      return 1;
    goto LABEL_4;
  }
  a3 = (int)a3;
  if ( v5 < (int)a3 )
    goto LABEL_26;
  v6 = 1;
LABEL_4:
  v7 = 0;
  while ( 1 )
  {
    v15 = sub_485C28(&v27);
    if ( !v15 )
    {
      if ( v4 < 0 )
        return 1;
      v8 = *(_QWORD *)(a1 + 8);
      ++v27;
LABEL_7:
      v9 = v15;
      if ( !v8 )
        goto LABEL_29;
      v10 = v8 + 1;
      v11 = 2 * (v8 - 1);
      v12 = v11 + 2;
      goto LABEL_9;
    }
    if ( v15 == -1 )
      return 0;
    v8 = *(_QWORD *)(a1 + 8);
    if ( v15 <= 0xFFFF )
      goto LABEL_7;
    v16 = v15 - 0x10000;
    if ( v8 )
    {
      v17 = v8 + 1;
      v18 = 2 * (v8 - 1);
      v19 = v18 + 2;
    }
    else
    {
      v19 = 2;
      v18 = 0;
      v17 = 2;
    }
    v20 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v17 )
    {
      v25 = v18;
      v26 = v19;
      v20 = (char *)sub_491288(a1, *(void **)a1, v17, 2u);
      v18 = v25;
      v19 = v26;
      *(_QWORD *)a1 = v20;
    }
    *(_QWORD *)(a1 + 8) = v17;
    *(_WORD *)&v20[v18] = (v16 >> 10) & 0x3FF | 0xD800;
    v9 = v16 & 0x3FF | 0xDC00;
    *(_WORD *)(*(_QWORD *)a1 + v19) = 0;
    v21 = *(_QWORD *)(a1 + 8);
    if ( !v21 )
    {
LABEL_29:
      v12 = 2;
      v11 = 0;
      v10 = 2;
      goto LABEL_9;
    }
    v22 = v21 - 1;
    v10 = v21 + 1;
    v11 = 2 * v22;
    v12 = v11 + 2;
LABEL_9:
    v13 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v10 )
    {
      v24 = v12;
      v13 = (char *)sub_491288(a1, *(void **)a1, v10, 2u);
      v12 = v24;
      *(_QWORD *)a1 = v13;
    }
    *(_QWORD *)(a1 + 8) = v10;
    ++v7;
    *(_WORD *)&v13[v11] = v9;
    v14 = v6 && v4 <= v7;
    *(_WORD *)(*(_QWORD *)a1 + v12) = 0;
    if ( v14 )
      return 1;
  }
}
