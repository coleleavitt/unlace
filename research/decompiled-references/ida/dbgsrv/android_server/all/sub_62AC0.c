/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62AC0
// Address: 0x0000000000062AC0

//----- (0000000000062AC0) ----------------------------------------------------
__int64 __fastcall sub_62AC0(__int64 a1)
{
  __int64 v2; // x22
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x23
  _BYTE *v6; // x0
  __int64 v7; // x8
  size_t v8; // x20
  __int64 v9; // x21
  __int64 v10; // x9
  __int64 v11; // x23
  __int64 v12; // x22
  _BYTE *v13; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    v5 = v4 - 1;
  else
    v5 = 0;
  if ( *(_QWORD *)(v3 + 16) >= (unsigned __int64)(v5 + 2) )
  {
    v6 = *(_BYTE **)v3;
  }
  else
  {
    v6 = qvector_reserve(*(pthread_mutex_t **)(v2 + 16), *(void **)v3, v5 + 2, 1u);
    *(_QWORD *)v3 = v6;
  }
  *(_QWORD *)(v3 + 8) = v5 + 2;
  v6[v5] = 46;
  *(_BYTE *)(*(_QWORD *)v3 + v5 + 1) = 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v7 != 1 )
    {
      v9 = *(_QWORD *)(v2 + 16);
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
        v11 = v10 - 1;
      else
        v11 = 0;
      v12 = v11 + v7;
      if ( *(_QWORD *)(v9 + 16) >= (unsigned __int64)(v11 + v7) )
      {
        v13 = *(_BYTE **)v9;
      }
      else
      {
        v13 = qvector_reserve((pthread_mutex_t *)v9, *(void **)v9, v11 + v7, 1u);
        *(_QWORD *)v9 = v13;
      }
      *(_QWORD *)(v9 + 8) = v12;
      v13[v11 + v8] = 0;
      memcpy((void *)(*(_QWORD *)v9 + v11), *(const void **)(a1 + 40), v8);
    }
  }
  return 0;
}
