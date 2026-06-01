/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053DA8
// Address: 0x0000000100053DA8

//----- (0000000100053DA8) ----------------------------------------------------
void __fastcall sub_100053DA8(__int64 a1, __int64 a2)
{
  void *v4; // x0
  unsigned __int64 v5; // x8
  char *v6; // x9
  char *v7; // x1
  __int64 v9; // x21
  int v10; // w9
  int v11; // w10
  unsigned int v12; // w9
  size_t v13; // x2
  char *v14; // x9
  int v16; // w0
  int v17; // w8
  char *v18; // x9
  char *v19; // x1
  unsigned __int64 v20; // x8
  int v21; // w9
  int v22; // w10
  unsigned int v23; // w9
  __int64 v24; // x22
  size_t v25; // x2
  char *v26; // x9
  int v28; // w0
  size_t v29; // x22
  unsigned __int64 v30; // x9
  char *v31; // x8
  char *v32; // x1
  size_t v33; // x8
  void *v34; // x0
  char *v35; // [xsp+8h] [xbp-38h] BYREF
  char v36; // [xsp+13h] [xbp-2Dh] BYREF
  _BYTE v37[4]; // [xsp+14h] [xbp-2Ch] BYREF

  if ( *(int *)a1 >= -1 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v4);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
  v6 = *(char **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v7 = (char *)(*(_QWORD *)a2 + 1LL);
  if ( (unsigned __int64)v7 < *(_QWORD *)a2 || (unsigned __int64)v7 > v5 )
  {
    v36 = 0;
    v9 = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    v10 = *v6;
    v36 = v10;
    if ( v10 < 0 )
    {
      v11 = v10 & 0xC0;
      if ( (~(unsigned __int8)v10 & 0xE0) != 0 )
        v12 = 4;
      else
        v12 = 5;
      if ( v11 == 192 )
        v9 = v12;
      else
        v9 = 2;
      if ( v11 == 192 )
        v13 = v12 - 1;
      else
        v13 = 1;
      v14 = &v7[v13];
      if ( &v7[v13] >= v7 && (unsigned __int64)v14 <= v5 )
      {
        *(_QWORD *)a2 = v14;
        memcpy(v37, v7, v13);
      }
    }
    else
    {
      v9 = 1;
    }
  }
  v35 = &v36;
  v16 = unpack_dd((unsigned __int64 *)&v35, (unsigned __int64)&v37[v9 - 1]);
  v17 = v16 - 3;
  *(_DWORD *)a1 = v16 - 3;
  if ( v16 == 1 )
  {
    *(_QWORD *)(a1 + 8) = sub_10005406C((char **)a2) - 1;
    return;
  }
  if ( v16 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)a1 = v17;
    if ( v17 <= -2 )
    {
      if ( under_debugger != 1 )
        goto LABEL_63;
      while ( 1 )
      {
        __break(1u);
LABEL_63:
        interr(3216);
      }
    }
    v18 = *(char **)a2;
    v19 = (char *)(*(_QWORD *)a2 + 1LL);
    if ( (unsigned __int64)v19 < *(_QWORD *)a2 || (v20 = *(_QWORD *)(a2 + 8), (unsigned __int64)v19 > v20) )
    {
      v36 = 0;
    }
    else
    {
      *(_QWORD *)a2 = v19;
      v21 = *v18;
      v36 = v21;
      if ( v21 < 0 )
      {
        v22 = v21 & 0xC0;
        if ( (~(unsigned __int8)v21 & 0xE0) != 0 )
          v23 = 4;
        else
          v23 = 5;
        if ( v22 == 192 )
          v24 = v23;
        else
          v24 = 2;
        if ( v22 == 192 )
          v25 = v23 - 1;
        else
          v25 = 1;
        v26 = &v19[v25];
        if ( &v19[v25] >= v19 && (unsigned __int64)v26 <= v20 )
        {
          *(_QWORD *)a2 = v26;
          memcpy(v37, v19, v25);
        }
        goto LABEL_50;
      }
    }
    v24 = 1;
LABEL_50:
    v35 = &v36;
    v28 = unpack_dd((unsigned __int64 *)&v35, (unsigned __int64)&v37[v24 - 1]);
    v29 = v28;
    v30 = *(_QWORD *)(a1 + 16);
    if ( v30 >= v28 )
    {
      if ( v30 != v28 )
      {
        LOBYTE(v35) = 0;
        sub_100019CE4((_QWORD **)(a1 + 8), v28, &v35);
      }
    }
    else
    {
      v31 = *(char **)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)v28 )
      {
        v31 = (char *)qvector_reserve((_QWORD *)(a1 + 8), *(_QWORD **)(a1 + 8), v28, 1u);
        *(_QWORD *)(a1 + 8) = v31;
        v30 = *(_QWORD *)(a1 + 16);
      }
      bzero(&v31[v30], v29 - v30);
      *(_QWORD *)(a1 + 16) = v29;
    }
    if ( (_DWORD)v29 )
    {
      v32 = *(char **)a2;
      v33 = *(_QWORD *)a2 + v29;
      if ( v33 >= *(_QWORD *)a2 && v33 <= *(_QWORD *)(a2 + 8) )
      {
        v34 = *(void **)(a1 + 8);
        *(_QWORD *)a2 = v33;
        memcpy(v34, v32, v29);
      }
    }
  }
}
// 10009D90D: using guessed type char under_debugger;
