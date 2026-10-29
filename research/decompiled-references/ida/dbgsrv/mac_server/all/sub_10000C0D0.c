/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C0D0
// Address: 0x000000010000C0D0

//----- (000000010000C0D0) ----------------------------------------------------
__int64 __fastcall sub_10000C0D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v2 = 4294901760LL;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1233LL) )
    v2 = 0x7FFFFFE00000LL;
  if ( *(_QWORD *)a2 == v2 )
  {
    v3 = *(_QWORD **)(a2 + 16);
    if ( *(_QWORD *)(a2 + 32) <= 8u )
    {
      v3 = qvector_reserve(a2 + 16, *(void **)(a2 + 16), 9u, 1u);
      *(_QWORD *)(a2 + 16) = v3;
    }
    *(_QWORD *)(a2 + 24) = 9;
    *v3 = 0x454741504D4D4F43LL;
    *(_BYTE *)(*(_QWORD *)(a2 + 16) + 8LL) = 0;
  }
  sub_10000C170(*(char ***)(a1 + 16), (__int128 *)a2);
  return 0;
}
