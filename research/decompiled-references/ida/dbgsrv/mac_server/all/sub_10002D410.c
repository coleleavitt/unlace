/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D410
// Address: 0x000000010002D410

//----- (000000010002D410) ----------------------------------------------------
__int64 __fastcall sub_10002D410(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 368) + 16LL * *(_QWORD *)(a1 + 376);
  v6 = *(_OWORD *)(v1 - 16);
  v2 = *(void **)(a1 + 392);
  v3 = *(_QWORD *)(a1 + 400);
  if ( *(_QWORD *)(a1 + 408) < (unsigned __int64)(v3 + 1) )
  {
    v2 = qvector_reserve(a1 + 392, v2, v3 + 1, 0x10u);
    *(_QWORD *)(a1 + 392) = v2;
    v3 = *(_QWORD *)(a1 + 400);
  }
  *((_OWORD *)v2 + v3) = v6;
  ++*(_QWORD *)(a1 + 400);
  sub_100032CB0(
    *(void ***)(a1 + 200),
    (__int64 *)(unsigned int)(*(_DWORD *)(v1 - 12) - 4),
    *(_DWORD *)(a1 + 208) - *(_DWORD *)(v1 - 12));
  v4 = *(_QWORD *)(a1 + 376);
  if ( v4 )
    *(_QWORD *)(a1 + 376) = v4 - 1;
  return 0;
}
