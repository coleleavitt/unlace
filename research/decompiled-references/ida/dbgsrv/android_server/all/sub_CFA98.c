/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFA98
// Address: 0x00000000000CFA98

//----- (00000000000CFA98) ----------------------------------------------------
char *__fastcall sub_CFA98(char *result, const void *a2, size_t n, unsigned __int16 a4)
{
  int v4; // w10
  int v6; // w9
  __int64 v7; // x10
  __int64 v8; // x11
  __int64 v9; // x9
  __int64 v10; // x11
  int v11; // w8
  _QWORD *v12; // x8
  __int64 v13; // x10
  __int64 v14; // x11
  _QWORD *v15; // x20
  __int64 v16; // x9
  __int64 v17; // x11
  bool v18; // cc
  __int64 v19; // x10
  __int64 v20; // x11
  __int64 v21; // x9
  __int64 v22; // x10
  __int64 v23; // x9
  __int64 v24; // x10
  __int64 v25; // x9
  __int64 v26; // x10
  __int64 v27; // x9
  __int64 v28; // x10

  v4 = *((_DWORD *)result + 1485);
  LOWORD(v6) = *((_WORD *)result + 2968) | (a4 << v4);
  *((_WORD *)result + 2968) = v6;
  if ( v4 < 14 )
  {
    v11 = v4 + 3;
  }
  else
  {
    v7 = *((_QWORD *)result + 5);
    v8 = *((_QWORD *)result + 2);
    *((_QWORD *)result + 5) = v7 + 1;
    *(_BYTE *)(v8 + v7) = v6;
    v9 = *((_QWORD *)result + 5);
    LOBYTE(v7) = result[5937];
    v10 = *((_QWORD *)result + 2);
    *((_QWORD *)result + 5) = v9 + 1;
    *(_BYTE *)(v10 + v9) = v7;
    LODWORD(v7) = *((_DWORD *)result + 1485);
    v6 = a4 >> (16 - v7);
    *((_WORD *)result + 2968) = v6;
    v11 = v7 - 13;
  }
  *((_DWORD *)result + 1485) = v11;
  if ( v11 < 9 )
  {
    v18 = v11 <= 0;
    v12 = result + 16;
    if ( v18 )
    {
      v15 = result + 40;
    }
    else
    {
      v15 = result + 40;
      v19 = *((_QWORD *)result + 5);
      v20 = *((_QWORD *)result + 2);
      *((_QWORD *)result + 5) = v19 + 1;
      *(_BYTE *)(v20 + v19) = v6;
    }
  }
  else
  {
    v12 = result + 16;
    v13 = *((_QWORD *)result + 2);
    v15 = result + 40;
    v14 = *((_QWORD *)result + 5);
    *((_QWORD *)result + 5) = v14 + 1;
    *(_BYTE *)(v13 + v14) = v6;
    v16 = *((_QWORD *)result + 5);
    LOBYTE(v13) = result[5937];
    v17 = *((_QWORD *)result + 2);
    *((_QWORD *)result + 5) = v16 + 1;
    *(_BYTE *)(v17 + v16) = v13;
  }
  v21 = *((_QWORD *)result + 5);
  v22 = *((_QWORD *)result + 2);
  *((_WORD *)result + 2968) = 0;
  *((_DWORD *)result + 1485) = 0;
  *((_QWORD *)result + 5) = v21 + 1;
  *(_BYTE *)(v22 + v21) = n;
  v23 = *((_QWORD *)result + 5);
  v24 = *((_QWORD *)result + 2);
  *((_QWORD *)result + 5) = v23 + 1;
  *(_BYTE *)(v24 + v23) = BYTE1(n);
  v25 = *((_QWORD *)result + 5);
  v26 = *((_QWORD *)result + 2);
  *((_QWORD *)result + 5) = v25 + 1;
  *(_BYTE *)(v26 + v25) = ~(_BYTE)n;
  v27 = *((_QWORD *)result + 5);
  v28 = *((_QWORD *)result + 2);
  *((_QWORD *)result + 5) = v27 + 1;
  *(_BYTE *)(v28 + v27) = (unsigned __int16)~(_WORD)n >> 8;
  if ( n )
    result = (char *)memcpy((void *)(*v12 + *v15), a2, n);
  *v15 += n;
  return result;
}
