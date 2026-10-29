/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E680
// Address: 0x000000000043E680

//----- (000000000043E680) ----------------------------------------------------
__int64 __fastcall sub_43E680(__int64 a1, const char *a2, __int64 a3)
{
  pthread_mutex_t *v6; // x23
  __int64 v7; // x19
  __int64 v9; // x24
  size_t v10; // x0
  size_t v11; // x24
  int v12; // w0
  __int64 v13; // x3
  _QWORD *v14; // x0
  size_t v15; // x26
  void *v16; // x0

  if ( !a2 )
    return 0;
  v6 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v7 = sub_43E590(a1, a2);
  if ( !v7 )
  {
    v9 = *(_QWORD *)(a1 + 72);
    v7 = (__int64)sub_49E050(0x60u);
    *(_DWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = v7 + 8;
    *(_QWORD *)(v7 + 32) = v7 + 8;
    *(_QWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 52) = v9;
    *(_QWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *(_QWORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 80) = -1;
    *(_DWORD *)(v7 + 88) = -1;
    v10 = strlen(a2);
    v11 = v10;
    if ( v10 )
    {
      v15 = v10 + 1;
      v16 = sub_491288(v7 + 56, nullptr, v10 + 1, 1u);
      *(_QWORD *)(v7 + 56) = v16;
      *(_QWORD *)(v7 + 64) = v15;
      memmove(v16, a2, v11);
      *(_BYTE *)(*(_QWORD *)(v7 + 56) + v11) = 0;
    }
    v12 = 0;
    if ( a3 )
      v12 = *(_DWORD *)(a3 + 52);
    *(_DWORD *)(v7 + 48) = v12;
    v13 = *(_QWORD *)(a1 + 72);
    if ( (unsigned __int64)(v13 + 1) > *(_QWORD *)(a1 + 80) )
    {
      v14 = sub_491288(a1 + 64, *(void **)(a1 + 64), v13 + 1, 8u);
      *(_QWORD *)(a1 + 64) = v14;
      v14[*(_QWORD *)(a1 + 72)] = v7;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v13) = v7;
    }
    ++*(_QWORD *)(a1 + 72);
  }
  sub_494760(v6);
  return v7;
}
// 522288: using guessed type __int64 qword_522288;
