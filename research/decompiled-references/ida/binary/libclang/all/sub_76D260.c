__int64 __fastcall sub_76D260(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)(v1 + 40);
  return (*(_DWORD *)v1 >> 14) & 0x1F;
}

