// attributes: thunk
__int64 __fastcall dyld4::APIs::_tlv_atexit(dyld4::APIs *this, void (__fastcall *a2)(void *), void *a3)
{
  return dyld4::RuntimeState::addTLVTerminationFunc(this, a2, a3);
}
