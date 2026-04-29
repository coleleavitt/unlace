dyld4::RuntimeState *__fastcall ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_3(
        dyld4::RuntimeState *result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 *v6; // x19
  unsigned __int64 v7; // x20

  if ( (a6 & 1) == 0 && *(_BYTE *)(a5 + 36) && (*(_BYTE *)(a5 + 32) & 1) == 0 )
  {
    v6 = (unsigned __int64 *)(*((_QWORD *)result + 5) + a4 - *((_QWORD *)result + 4));
    v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL | 2;
    result = *((dyld4::RuntimeState **)result + 6);
    if ( *(_BYTE *)(*((_QWORD *)result + 1) + 182LL) )
      result = (dyld4::RuntimeState *)dyld4::RuntimeState::log(
                                        result,
                                        "fixup: *0x%012lX = 0x%012lX <mark swift stable>\n",
                                        v6,
                                        v7);
    *v6 = v7;
  }
  return result;
}
