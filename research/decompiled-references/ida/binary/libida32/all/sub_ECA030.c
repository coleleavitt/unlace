__int64 __fastcall sub_ECA030(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  if ( (v1 & 7) != 0 )
    BUG();
  return *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL;
}

