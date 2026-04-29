void __fastcall dyld3::MachOAnalyzer::withChainStarts(dyld3::MachOFile *a1, Diagnostics *a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v6)(__int64, char *); // x4
  __int64 LinkEditContent; // x0
  __int64 Address; // x23
  __int64 v10; // x12
  char *v11; // x24
  __int64 v12; // x8
  char *v13; // x26
  __int64 v14; // x27
  _QWORD v16[10]; // [xsp+8h] [xbp-158h] BYREF
  _QWORD v17[4]; // [xsp+58h] [xbp-108h] BYREF
  _QWORD v18[3]; // [xsp+78h] [xbp-E8h] BYREF
  char v19; // [xsp+90h] [xbp-D0h]
  __int64 v20; // [xsp+98h] [xbp-C8h] BYREF
  __int64 v21; // [xsp+A8h] [xbp-B8h]
  __int64 v22; // [xsp+E0h] [xbp-80h] BYREF
  unsigned int v23; // [xsp+100h] [xbp-60h]
  __int64 vars8; // [xsp+168h] [xbp+8h]

  if ( a3 )
  {
    v6 = *(void (__fastcall **)(__int64, char *))(a4 + 16);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    v6(a4, (char *)a1 + a3);
  }
  else
  {
    dyld3::MachOLoaded::getLinkEditPointers(a1, a2, &v20);
    if ( (Diagnostics::hasError(a2) & 1) == 0 )
    {
      if ( v21 )
      {
        LinkEditContent = dyld3::MachOLoaded::getLinkEditContent(a1, &v22, *(unsigned int *)(v21 + 8));
        (*(void (__fastcall **)(__int64, __int64))(a4 + 16))(
          a4,
          LinkEditContent + *(unsigned int *)(LinkEditContent + 4));
      }
      else if ( v20 && *((_DWORD *)a1 + 1) == 16777228 && (unsigned int)dyld3::MachOFile::maskedCpuSubtype(a1) == 2 )
      {
        Address = dyld3::MachOFile::preferredLoadAddress(a1);
        dyld3::MachOFile::mappedSize(a1);
        __chkstk_darwin();
        v11 = (char *)&v16[-1] - v10;
        v13 = (char *)&v16[-1] + v12 - v10;
        v14 = v23;
        *(_DWORD *)((char *)&v16[-1] - v10) = v23;
        if ( (_DWORD)v14 )
          __bzero(v11 + 4, 4 * v14);
        else
          v14 = 0;
        v18[0] = 0;
        v18[1] = v18;
        v18[2] = 0x2000000000LL;
        v19 = 0;
        v17[0] = 0;
        v17[1] = v17;
        v17[2] = 0x2000000000LL;
        v17[3] = &v11[4 * v14 + 4];
        v16[0] = _NSConcreteStackBlock;
        v16[1] = 0x40000000;
        v16[2] = ___ZNK5dyld313MachOAnalyzer15withChainStartsER11DiagnosticsyU13block_pointerFvPK28dyld_chained_starts_in_imageE_block_invoke;
        v16[3] = &unk_98000;
        v16[4] = v18;
        v16[5] = v17;
        v16[6] = v11;
        v16[7] = v11;
        v16[8] = v13;
        v16[9] = Address;
        dyld3::MachOAnalyzer::parseOrgArm64eChainedFixups(a1, a2, 0, 0, v16);
        (*(void (__fastcall **)(__int64, char *))(a4 + 16))(a4, v11);
        _Block_object_dispose(v17, 8);
        _Block_object_dispose(v18, 8);
      }
      else
      {
        Diagnostics::error(a2, "image does not use chained fixups");
      }
    }
  }
}
