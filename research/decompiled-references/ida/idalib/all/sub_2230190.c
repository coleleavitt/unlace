int __fastcall sub_2230190(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 24;
  if ( *(_QWORD *)(v1 + 8) )
    return posix_madvise(*(void **)(v1 + 8), *(_QWORD *)v1, 4);
  else
    return nullsub_1559();
}
