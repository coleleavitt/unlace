/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5ECDC
// Address: 0x000000000005ECDC

//----- (000000000005ECDC) ----------------------------------------------------
_BYTE *__fastcall sub_5ECDC(__int64 a1, char a2, unsigned __int16 a3)
{
  __int64 v6; // x22
  __int64 v7; // x8
  _BYTE *v8; // x0
  __int64 v9; // x22
  char v10; // w21
  __int64 v11; // x8
  _BYTE *v12; // x0
  __int64 v13; // x21
  __int64 v14; // x8
  _BYTE *result; // x0

  if ( a3 > 0xFFu )
  {
    v9 = *(_QWORD *)(a1 + 200);
    v10 = a2 + 1;
    *(_BYTE *)(a1 + 212) = a2 + 1;
    v11 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v9 + 16) >= (unsigned __int64)(v11 + 1) )
    {
      v12 = *(_BYTE **)v9;
    }
    else
    {
      v12 = qvector_reserve((pthread_mutex_t *)v9, *(void **)v9, v11 + 1, 1u);
      v11 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)v9 = v12;
    }
    v12[v11] = v10;
    ++*(_QWORD *)(v9 + 8);
    ++*(_DWORD *)(a1 + 208);
    return sub_5EB14(a1, a3);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = a2;
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 16) >= (unsigned __int64)(v7 + 1) )
    {
      v8 = *(_BYTE **)v6;
    }
    else
    {
      v8 = qvector_reserve((pthread_mutex_t *)v6, *(void **)v6, v7 + 1, 1u);
      v7 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)v6 = v8;
    }
    v8[v7] = a2;
    ++*(_QWORD *)(v6 + 8);
    v13 = *(_QWORD *)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    v14 = *(_QWORD *)(v13 + 8);
    if ( *(_QWORD *)(v13 + 16) >= (unsigned __int64)(v14 + 1) )
    {
      result = *(_BYTE **)v13;
    }
    else
    {
      result = qvector_reserve((pthread_mutex_t *)v13, *(void **)v13, v14 + 1, 1u);
      v14 = *(_QWORD *)(v13 + 8);
      *(_QWORD *)v13 = result;
    }
    result[v14] = a3;
    ++*(_QWORD *)(v13 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return result;
}
