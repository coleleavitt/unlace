/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048848
// Address: 0x0000000100048848

//----- (0000000100048848) ----------------------------------------------------
_BYTE *__fastcall sub_100048848(__int64 a1, __int64 a2, const void *a3, int a4)
{
  _BYTE *result; // x0
  _BYTE *v9; // x23
  __int64 v10; // x24
  size_t v11; // x0
  size_t v12; // x21
  unsigned __int64 v13; // x22
  _QWORD *v14; // x1

  result = qalloc((void *)(unsigned int)(a4 + 1));
  if ( result )
  {
    v9 = result;
    sub_100054340((char **)(a1 + 232), *(_QWORD *)(a1 + 240) + 1LL);
    v10 = *(_QWORD *)(a1 + 232) + 72LL * *(_QWORD *)(a1 + 240);
    *(_OWORD *)(v10 + 16) = 0u;
    *(_OWORD *)(v10 + 32) = 0u;
    *(_OWORD *)v10 = 0u;
    ++*(_QWORD *)(a1 + 240);
    *(_QWORD *)(v10 + 64) = a2;
    if ( a3 && (v11 = strlen((const char *)a3)) != 0 )
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = *(_QWORD **)(v10 + 24);
      if ( *(_QWORD *)(v10 + 40) < v11 + 1 )
      {
        v14 = qvector_reserve((_QWORD *)(v10 + 24), v14, v13, 1u);
        *(_QWORD *)(v10 + 24) = v14;
      }
      *(_QWORD *)(v10 + 32) = v13;
      memmove(v14, a3, v12);
      *(_BYTE *)(*(_QWORD *)(v10 + 24) + v12) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 32) = 0;
    }
    *(_DWORD *)(v10 + 48) = a4;
    *(_QWORD *)(v10 + 56) = v9;
    v9[a4] = 0;
    return v9;
  }
  return result;
}
