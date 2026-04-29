void __fastcall dyld4::RuntimeState::notifyDtrace(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  dof_ioctl_data *v5; // x20
  __int64 v6; // x8
  dyld4::Loader **v7; // x25
  __int64 v8; // x28
  dyld4::Loader *v9; // t1
  __int64 v10; // x0
  __int64 v11; // x8
  dyld4::Loader **v12; // x25
  __int64 v13; // x26
  dyld4::Loader *v14; // x22
  __int64 v15; // x0
  uint64_t dofiod_count; // x8
  __int64 v17; // x23
  uint64_t v18; // x24
  __int64 *v19; // x28
  __int64 v20; // x27
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  _QWORD v24[2]; // [xsp+0h] [xbp-F0h] BYREF
  _QWORD v25[9]; // [xsp+10h] [xbp-E0h] BYREF
  vm_address_t v26; // [xsp+58h] [xbp-98h] BYREF
  __int64 v27; // [xsp+60h] [xbp-90h] BYREF
  __int64 *v28; // [xsp+68h] [xbp-88h]
  __int64 v29; // [xsp+70h] [xbp-80h]
  char v30; // [xsp+78h] [xbp-78h]

  if ( (unsigned int)dyld4::SyscallDelegate::dtraceUserProbesEnabled(*(dyld4::SyscallDelegate **)(a1 + 8)) )
  {
    v24[1] = v24;
    __chkstk_darwin();
    v5 = (dof_ioctl_data *)((char *)v24 - ((v4 + 1295) & 0xFFFFFFFFFFFFFFF0LL));
    v5->dofiod_count = 0;
    v27 = 0;
    v28 = &v27;
    v29 = 0x2000000000LL;
    v30 = 0;
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      v7 = *(dyld4::Loader ***)a2;
      v8 = 8 * v6;
      do
      {
        v9 = *v7++;
        Diagnostics::Diagnostics((Diagnostics *)&v26);
        v10 = dyld4::Loader::analyzer(v9, (dyld4::RuntimeState *)a1);
        v25[0] = _NSConcreteStackBlock;
        v25[1] = 0x40000000;
        v25[2] = ___ZN5dyld412RuntimeState12notifyDtraceERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke;
        v25[3] = &unk_95878;
        v25[6] = v5;
        v25[7] = v10;
        v25[8] = v9;
        v25[4] = &v27;
        v25[5] = a1;
        dyld3::MachOFile::forEachDOFSection(v10, &v26, v25);
        Diagnostics::~Diagnostics(&v26);
        v8 -= 8;
      }
      while ( v8 );
      if ( v5->dofiod_count )
      {
        dyld4::SyscallDelegate::dtraceRegisterUserProbes(*(dyld4::SyscallDelegate **)(a1 + 8), v5);
        if ( *((_BYTE *)v28 + 24) )
        {
          v11 = *(_QWORD *)(a2 + 8);
          if ( v11 )
          {
            v12 = *(dyld4::Loader ***)a2;
            v13 = *(_QWORD *)a2 + 8 * v11;
            v24[0] = &v5->dofiod_helpers[0].dofhp_dof;
            do
            {
              v14 = *v12;
              if ( (*((_WORD *)*v12 + 2) & 0x20) == 0 )
              {
                v15 = dyld4::Loader::analyzer(*v12, (dyld4::RuntimeState *)a1);
                dofiod_count = v5->dofiod_count;
                if ( v5->dofiod_count )
                {
                  v17 = v15;
                  v18 = 0;
                  v19 = (__int64 *)v24[0];
                  do
                  {
                    if ( *(v19 - 1) == v17 )
                    {
                      v20 = *v19;
                      lsl::Vector<dyld4::RuntimeState::RegisteredDOF>::reserve(a1 + 560, *(_QWORD *)(a1 + 576) + 1LL);
                      v21 = *(_QWORD *)(a1 + 568);
                      v22 = *(_QWORD *)(a1 + 576);
                      *(_QWORD *)(a1 + 576) = v22 + 1;
                      v23 = v21 + 16 * v22;
                      *(_QWORD *)v23 = v14;
                      *(_DWORD *)(v23 + 8) = v20;
                      dofiod_count = v5->dofiod_count;
                    }
                    ++v18;
                    v19 += 10;
                  }
                  while ( v18 < dofiod_count );
                }
              }
              ++v12;
            }
            while ( v12 != (dyld4::Loader **)v13 );
          }
        }
      }
    }
    _Block_object_dispose(&v27, 8);
  }
}
