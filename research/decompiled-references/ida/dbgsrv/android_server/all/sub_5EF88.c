/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EF88
// Address: 0x000000000005EF88

//----- (000000000005EF88) ----------------------------------------------------
_BYTE *__fastcall sub_5EF88(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // x21
  char v5; // w20
  __int64 v6; // x8
  _BYTE *result; // x0
  __int64 v8; // x21
  __int64 v9; // x8
  _BYTE *v10; // x0
  __int64 v11; // x21
  __int64 v12; // x8
  _BYTE *v13; // x0
  __int64 v14; // x8
  __int64 v15; // x0
  unsigned __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x8
  _BYTE *v19; // x0

  if ( a2 <= 0xF )
  {
    v4 = *(_QWORD *)(a1 + 200);
    v5 = a2 - 32;
    *(_BYTE *)(a1 + 212) = a2 - 32;
    v6 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v6 + 1) )
    {
      result = *(_BYTE **)v4;
    }
    else
    {
      result = qvector_reserve((pthread_mutex_t *)v4, *(void **)v4, v6 + 1, 1u);
      v6 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)v4 = result;
    }
    result[v6] = v5;
LABEL_18:
    ++*(_QWORD *)(v4 + 8);
    ++*(_DWORD *)(a1 + 208);
    return result;
  }
  if ( a2 <= 0xFF )
  {
    v8 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -96;
    v9 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v8 + 16) >= (unsigned __int64)(v9 + 1) )
    {
      v10 = *(_BYTE **)v8;
    }
    else
    {
      v10 = qvector_reserve((pthread_mutex_t *)v8, *(void **)v8, v9 + 1, 1u);
      v9 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)v8 = v10;
    }
    v10[v9] = -96;
    ++*(_QWORD *)(v8 + 8);
    v4 = *(_QWORD *)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    v14 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v14 + 1) )
    {
      result = *(_BYTE **)v4;
    }
    else
    {
      result = qvector_reserve((pthread_mutex_t *)v4, *(void **)v4, v14 + 1, 1u);
      v14 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)v4 = result;
    }
    result[v14] = a2;
    goto LABEL_18;
  }
  if ( (__int16)a2 == a2 )
  {
    v11 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -95;
    v12 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(v11 + 16) >= (unsigned __int64)(v12 + 1) )
    {
      v13 = *(_BYTE **)v11;
    }
    else
    {
      v13 = qvector_reserve((pthread_mutex_t *)v11, *(void **)v11, v12 + 1, 1u);
      v12 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)v11 = v13;
    }
    v13[v12] = -95;
    v15 = a1;
    LOWORD(v16) = a2;
    ++*(_QWORD *)(v11 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -45;
    v18 = *(_QWORD *)(v17 + 8);
    if ( *(_QWORD *)(v17 + 16) >= (unsigned __int64)(v18 + 1) )
    {
      v19 = *(_BYTE **)v17;
    }
    else
    {
      v19 = qvector_reserve((pthread_mutex_t *)v17, *(void **)v17, v18 + 1, 1u);
      v18 = *(_QWORD *)(v17 + 8);
      *(_QWORD *)v17 = v19;
    }
    v19[v18] = -45;
    ++*(_QWORD *)(v17 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_5EB14(a1, a2);
    sub_5EB14(a1, SWORD1(a2));
    sub_5EB14(a1, SWORD2(a2));
    v16 = HIWORD(a2);
    v15 = a1;
  }
  return sub_5EB14(v15, v16);
}
