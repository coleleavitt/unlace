__int64 __fastcall lsl::PersistentAllocator::MagazineAllocator<256u,256u>::refill(
        __int64 result,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x8

  if ( !a3 )
    lsl::PersistentAllocator::MagazineAllocator<256u,256u>::refill();
  if ( !a2 )
    lsl::PersistentAllocator::MagazineAllocator<256u,256u>::refill();
  v3 = *(unsigned __int8 *)(result + 72);
  *(_BYTE *)(result + 72) = v3 + 1;
  v4 = result + 16 * v3;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 16) = a3;
  return result;
}
