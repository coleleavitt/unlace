__int64 __fastcall sub_77B5F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)(v2 + 8);
  return sub_79BBC0(v2);
}

