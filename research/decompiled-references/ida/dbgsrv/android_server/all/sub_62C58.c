/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62C58
// Address: 0x0000000000062C58

//----- (0000000000062C58) ----------------------------------------------------
__int64 __fastcall sub_62C58(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x8
  char *v4; // x1
  __int64 v5; // x8
  int v6; // w20
  pthread_mutex_t *v7; // x0
  _DWORD *align; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  pthread_mutex_t *v11; // x0
  _WORD *v12; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  if ( *(_DWORD *)v2 == 1 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v3 + 8) )
      v4 = *(char **)v3;
    else
      v4 = &byte_F154B;
  }
  else
  {
    v4 = "";
  }
  sub_62D40(a1 + 160, v4);
  v5 = *(_QWORD *)(a1 + 256);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = (pthread_mutex_t *)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) >= (unsigned __int64)(v5 + 1) )
  {
    align = (_DWORD *)v7->__align;
  }
  else
  {
    align = qvector_reserve(v7, *(void **)(a1 + 248), v5 + 1, 4u);
    v5 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(a1 + 248) = align;
  }
  align[v5] = v6;
  v9 = *(_QWORD *)(a1 + 328);
  v10 = *(_QWORD *)(a1 + 336);
  v11 = (pthread_mutex_t *)(a1 + 320);
  ++*(_QWORD *)(a1 + 256);
  if ( v10 >= v9 + 1 )
  {
    v12 = (_WORD *)v11->__align;
  }
  else
  {
    v12 = qvector_reserve(v11, *(void **)(a1 + 320), v9 + 1, 2u);
    v9 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 320) = v12;
  }
  v12[v9] = 0;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
// F154B: using guessed type char byte_F154B;
