void __fastcall sub_233E40(__int64 a1)
{
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
}

