/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EE24
// Address: 0x000000000005EE24

//----- (000000000005EE24) ----------------------------------------------------
_BYTE *__fastcall sub_5EE24(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  __int16 v3; // w20
  __int64 v5; // x21
  char v6; // w8
  __int64 v7; // x21
  char v8; // w22
  __int64 v9; // x8
  _BYTE *v10; // x0
  __int64 v11; // x21
  char v12; // w22
  __int64 v13; // x8
  _BYTE *v14; // x0
  __int64 v15; // x8
  _BYTE *result; // x0

  v3 = a3;
  if ( a3 <= 0xFu )
  {
    v5 = *(_QWORD *)(a1 + 200);
    LOBYTE(v3) = a3 + a2;
    *(_BYTE *)(a1 + 212) = a3 + a2;
LABEL_10:
    v15 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v15 + 1) )
    {
      result = *(_BYTE **)v5;
    }
    else
    {
      result = qvector_reserve((pthread_mutex_t *)v5, *(void **)v5, v15 + 1, 1u);
      v15 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)v5 = result;
    }
    result[v15] = v3;
    ++*(_QWORD *)(v5 + 8);
    ++*(_DWORD *)(a1 + 208);
    return result;
  }
  v6 = a2 >> 3;
  if ( a3 <= 0xFFu )
  {
    v7 = *(_QWORD *)(a1 + 200);
    v8 = v6 | 0x80;
    *(_BYTE *)(a1 + 212) = v6 | 0x80;
    v9 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v9 + 1) )
    {
      v10 = *(_BYTE **)v7;
    }
    else
    {
      v10 = qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v9 + 1, 1u);
      v9 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)v7 = v10;
    }
    v10[v9] = v8;
    ++*(_QWORD *)(v7 + 8);
    v5 = *(_QWORD *)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(a1 + 200);
  v12 = v6 - 127;
  *(_BYTE *)(a1 + 212) = v6 - 127;
  v13 = *(_QWORD *)(v11 + 8);
  if ( *(_QWORD *)(v11 + 16) >= (unsigned __int64)(v13 + 1) )
  {
    v14 = *(_BYTE **)v11;
  }
  else
  {
    v14 = qvector_reserve((pthread_mutex_t *)v11, *(void **)v11, v13 + 1, 1u);
    v13 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)v11 = v14;
  }
  v14[v13] = v12;
  ++*(_QWORD *)(v11 + 8);
  ++*(_DWORD *)(a1 + 208);
  return sub_5EB14(a1, v3);
}
