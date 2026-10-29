dyld4::RuntimeState *__fastcall ___ZNK5dyld46Loader21makeSegmentsReadWriteERNS_12RuntimeStateE_block_invoke(
        dyld4::RuntimeState *result,
        __int64 a2)
{
  dyld4::RuntimeState *v2; // x20
  size_t v3; // x21
  char *v4; // x19

  if ( (*(_BYTE *)(a2 + 56) & 2) != 0 )
  {
    v2 = result;
    v3 = *(_QWORD *)(a2 + 24);
    v4 = (char *)(*((_QWORD *)result + 4) + *(_QWORD *)(a2 + 16));
    dyld4::SyscallDelegate::mprotect(*(dyld4::SyscallDelegate **)(*((_QWORD *)result + 5) + 8LL), v4, v3, 3);
    result = *((dyld4::RuntimeState **)v2 + 5);
    if ( *(_BYTE *)(*((_QWORD *)result + 1) + 181LL) )
      return (dyld4::RuntimeState *)dyld4::RuntimeState::log(
                                      result,
                                      "mprotect 0x%012lX->0x%012lX to read-write\n",
                                      v4,
                                      &v4[v3]);
  }
  return result;
}
