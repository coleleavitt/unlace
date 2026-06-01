const os_unfair_lock *__usercall lsl::MemoryManager::lockGuard@<X0>(
        lsl::Lock **__return_ptr a1@<X8>,
        lsl::Lock *this@<X0>)
{
  *a1 = this;
  return lsl::Lock::lock(this);
}
