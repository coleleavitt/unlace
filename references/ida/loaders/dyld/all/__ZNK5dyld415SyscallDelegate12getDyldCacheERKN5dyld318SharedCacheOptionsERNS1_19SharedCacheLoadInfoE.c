DyldSharedCache *__fastcall dyld4::SyscallDelegate::getDyldCache(__int64 a1, __int128 *a2, __int64 a3)
{
  DyldSharedCache *result; // x0
  __n128 *v6; // x9
  const unsigned __int8 *v7; // x4
  __int128 v8; // [xsp+0h] [xbp-20h] BYREF

  v8 = *a2;
  BYTE5(v8) = 0;
  dyld3::loadDyldCache((__int64)&v8, (_QWORD *)a3);
  result = *(DyldSharedCache **)a3;
  if ( *(_QWORD *)a3 )
  {
    v6 = (__n128 *)gProcessInfo;
    *((_BYTE *)&dword_18 + (_QWORD)gProcessInfo) = *((_BYTE *)a2 + 4);
    *(_OWORD *)&stru_108.segname[(_QWORD)v6 + 8] = *(_OWORD *)(a3 + 32);
    *(_QWORD *)((char *)&stru_68.offset + (_QWORD)v6) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)((char *)&stru_68.reserved2 + (_QWORD)v6) = result;
    DyldSharedCache::getUUID(result, v6 + 10);
    return (DyldSharedCache *)dyld3::kdebug_trace_dyld_cache(
                                *(dyld3 **)(a3 + 40),
                                *(void **)(a3 + 32),
                                *(_QWORD *)((char *)&stru_68.reserved2 + (_QWORD)gProcessInfo),
                                (unsigned __int64)gProcessInfo + 160,
                                v7);
  }
  return result;
}
