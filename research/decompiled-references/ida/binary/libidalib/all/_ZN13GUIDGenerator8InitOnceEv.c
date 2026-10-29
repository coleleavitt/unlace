int __fastcall GUIDGenerator::InitOnce(GUIDGenerator *this)
{
  return pthread_once(GUIDGenerator::once_control, (void (*)(void))GUIDGenerator::InitOnceImpl);
}

