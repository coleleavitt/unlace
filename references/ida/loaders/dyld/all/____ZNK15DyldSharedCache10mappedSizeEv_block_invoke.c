__int64 __fastcall ___ZNK15DyldSharedCache10mappedSizeEv_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // x8
  __int64 v5; // x9

  v4 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  if ( !*(_QWORD *)(v4 + 24) )
    *(_QWORD *)(v4 + 24) = a3;
  v5 = *(_QWORD *)(*(_QWORD *)(result + 40) + 8LL);
  if ( (unsigned __int64)(a4 + a3) > *(_QWORD *)(v5 + 24) )
    *(_QWORD *)(v5 + 24) = a4 + a3;
  return result;
}
