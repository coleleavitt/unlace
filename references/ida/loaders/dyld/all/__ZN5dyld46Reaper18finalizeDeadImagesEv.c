void __fastcall dyld4::Reaper::finalizeDeadImages(dyld4::Reaper *this)
{
  __int64 v2; // x12
  __int64 *v3; // x21
  __int64 v4; // x9
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x22
  __int64 v8; // x25
  _DWORD *v9; // x0
  __int64 v10; // x2
  _QWORD v12[6]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v13; // [xsp+38h] [xbp-A8h] BYREF
  __int64 *v14; // [xsp+40h] [xbp-A0h]
  __int64 v15; // [xsp+48h] [xbp-98h]
  __int64 (__fastcall *v16)(); // [xsp+50h] [xbp-90h]
  __int64 (__fastcall *v17)(); // [xsp+58h] [xbp-88h]
  char *v18; // [xsp+60h] [xbp-80h]
  __int64 v19; // [xsp+68h] [xbp-78h]
  __int64 v20; // [xsp+70h] [xbp-70h]
  vm_address_t v21; // [xsp+78h] [xbp-68h]
  vm_size_t v22; // [xsp+80h] [xbp-60h]

  if ( *((_DWORD *)this + 4) && *(_QWORD *)(*(_QWORD *)this + 120LL) )
  {
    __chkstk_darwin();
    v3 = &v13;
    v13 = 0;
    v14 = &v13;
    v15 = 0x5002000000LL;
    v16 = __Block_byref_object_copy__56;
    v4 = *((unsigned int *)this + 4);
    v17 = __Block_byref_object_dispose__57;
    v18 = (char *)&v12[-1] - ((v2 + 23) & 0x1FFFFFFFF0LL);
    v21 = 0;
    v22 = 0;
    v19 = v4;
    v20 = 0;
    v5 = *((__int64 **)this + 1);
    v6 = v5[2];
    if ( v6 )
    {
      v7 = *v5;
      v8 = 16 * v6;
      do
      {
        if ( !*(_BYTE *)(v7 + 8) )
        {
          v9 = (_DWORD *)dyld4::Loader::analyzer(*(dyld4::Loader **)v7, *(dyld4::RuntimeState **)this);
          if ( (*(_WORD *)(*(_QWORD *)v7 + 4LL) & 2) == 0 )
          {
            v12[0] = _NSConcreteStackBlock;
            v12[1] = 0x40000000;
            v12[2] = ___ZN5dyld46Reaper18finalizeDeadImagesEv_block_invoke;
            v12[3] = &unk_957E8;
            v12[4] = &v13;
            v12[5] = v9;
            dyld3::MachOFile::forEachSegment(v9, (__int64)v12);
          }
        }
        v7 += 16;
        v8 -= 16;
      }
      while ( v8 );
      v3 = v14;
      v10 = *((unsigned int *)v14 + 14);
    }
    else
    {
      v10 = 0;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)this + 120LL) + 88LL))(
      *(_QWORD *)(*(_QWORD *)this + 120LL),
      v3[5],
      v10);
    _Block_object_dispose(&v13, 8);
    v20 = 0;
    if ( v21 )
      vm_deallocate(mach_task_self_, v21, v22);
  }
}
