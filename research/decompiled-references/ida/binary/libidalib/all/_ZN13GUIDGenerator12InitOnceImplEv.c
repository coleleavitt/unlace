void __fastcall GUIDGenerator::InitOnceImpl(GUIDGenerator *this)
{
  int v1; // eax

  v1 = time(nullptr);
  srand(v1 | ((unsigned __int64)GUIDGenerator::once_control >> 4));
}

