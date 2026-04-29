__int64 __fastcall dyld3::kdebug_trace_dyld_image(
        dyld3 *this,
        int a2,
        const char *a3,
        const unsigned __int8 (*a4)[16],
        fsobj_id a5,
        fsid a6,
        const mach_header *a7,
        __int64 a8,
        const void *a9)
{
  return dyld3::kdebug_trace_dyld_region(
           this,
           *(_DWORD *)(*(_QWORD *)&a6 + 4LL),
           *(_DWORD *)(*(_QWORD *)&a6 + 8LL),
           a2,
           a3,
           a4,
           a5,
           a6,
           a9);
}
