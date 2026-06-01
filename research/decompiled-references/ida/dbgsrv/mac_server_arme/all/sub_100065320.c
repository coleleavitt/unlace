/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065320
// Address: 0x0000000100065320

//----- (0000000100065320) ----------------------------------------------------
__int64 __fastcall sub_100065320(__int64 a1, char *__s, char *a3, __int128 *a4)
{
  _QWORD *v7; // x19
  size_t v9; // x24
  unsigned __int64 v10; // x25
  void *v11; // x0
  size_t v12; // x24
  unsigned __int64 v13; // x25
  void *v14; // x0
  __int128 v15; // q0
  __int128 v16; // q1

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = (_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  if ( __s )
  {
    v9 = strlen(__s);
    v10 = v9 + 1;
    if ( v9 == -1 )
    {
      v11 = nullptr;
    }
    else
    {
      v11 = qvector_reserve(v7, nullptr, v10, 1u);
      *v7 = v11;
    }
    *(_QWORD *)(a1 + 32) = v10;
    memmove(v11, __s, v9);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( a3 )
  {
    v12 = strlen(a3);
    v13 = v12 + 1;
    if ( v12 == -1 )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = qvector_reserve((_QWORD *)(a1 + 48), nullptr, v13, 1u);
      *(_QWORD *)(a1 + 48) = v14;
    }
    *(_QWORD *)(a1 + 56) = v13;
    memmove(v14, a3, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v12) = 0;
  }
  v15 = *a4;
  v16 = a4[1];
  *(_OWORD *)(a1 + 104) = a4[2];
  *(_OWORD *)(a1 + 88) = v16;
  *(_OWORD *)(a1 + 72) = v15;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 8) = qmutex_create();
  *(_QWORD *)(a1 + 16) = qsem_create(nullptr, 0);
  return a1;
}
