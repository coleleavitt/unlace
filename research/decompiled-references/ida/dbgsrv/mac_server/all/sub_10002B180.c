/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B180
// Address: 0x000000010002B180

//----- (000000010002B180) ----------------------------------------------------
__int64 __fastcall sub_10002B180(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  const char *v3; // rsi
  int v4; // r14d
  __int64 v5; // rcx
  _DWORD *v6; // rax
  void *v7; // rax
  __int64 v8; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  if ( *(_DWORD *)v1 == 1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    if ( *(_QWORD *)(v2 + 8) )
      v3 = *(const char **)v2;
    else
      v3 = _s1;
  }
  else
  {
    v3 = &_s;
  }
  sub_10002B270(a1 + 160, v3);
  v4 = *(_DWORD *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 256);
  v6 = *(_DWORD **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v5 + 1) )
  {
    v6 = qvector_reserve(a1 + 248, *(void **)(a1 + 248), v5 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v6;
    v5 = *(_QWORD *)(a1 + 256);
  }
  v6[v5] = v4;
  ++*(_QWORD *)(a1 + 256);
  v7 = *(void **)(a1 + 320);
  v8 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(a1 + 320, v7, v8 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v7;
    v8 = *(_QWORD *)(a1 + 328);
  }
  *((_WORD *)v7 + v8) = 0;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
