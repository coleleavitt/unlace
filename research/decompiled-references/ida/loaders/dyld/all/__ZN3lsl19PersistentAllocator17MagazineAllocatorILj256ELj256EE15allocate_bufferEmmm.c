__int64 __fastcall lsl::PersistentAllocator::MagazineAllocator<256u,256u>::allocate_buffer(__int64 a1)
{
  __int64 v1; // x9
  __int64 v2; // x8
  __int64 v3; // x9
  __int128 v4; // q1

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    lsl::PersistentAllocator::MagazineAllocator<256u,256u>::allocate_buffer();
  v2 = *(_QWORD *)(a1 + 8);
  v3 = v1 - 256;
  *(_QWORD *)(a1 + 8) = v2 + 256;
  *(_QWORD *)(a1 + 16) = v3;
  if ( !v3 )
  {
    v4 = *(_OWORD *)(a1 + 40);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a1 + 24);
    *(_OWORD *)(a1 + 24) = v4;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    --*(_BYTE *)(a1 + 72);
  }
  return v2;
}
