__int64 __fastcall lsl::PersistentAllocator::MagazineAllocator<256u,256u>::deallocate_buffer(
        __int64 result,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x9

  v3 = *(_QWORD *)(result + 80);
  v4 = *(_QWORD *)(v3 + 224);
  *a2 = a3;
  a2[1] = v4;
  *(_QWORD *)(v3 + 224) = a2;
  return result;
}
