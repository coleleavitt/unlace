__int64 __fastcall dyld4::FileManager::reloadFSInfos(dyld4::SyscallDelegate **this)
{
  __int64 result; // x0
  int v3; // w21
  statfs *v4; // x20
  unsigned __int64 v5; // x22
  unsigned __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // [xsp+10h] [xbp-250h]
  __int64 v17; // [xsp+20h] [xbp-240h] BYREF
  __int128 v18; // [xsp+28h] [xbp-238h]
  __int128 v19; // [xsp+38h] [xbp-228h]
  __int128 v20; // [xsp+48h] [xbp-218h]
  __int128 v21; // [xsp+58h] [xbp-208h]
  __int128 v22; // [xsp+68h] [xbp-1F8h]
  __int128 v23; // [xsp+78h] [xbp-1E8h]
  __int128 v24; // [xsp+88h] [xbp-1D8h]
  __int64 v25; // [xsp+98h] [xbp-1C8h]
  _BYTE v26[15]; // [xsp+A0h] [xbp-1C0h] BYREF
  char v27; // [xsp+AFh] [xbp-1B1h]
  unsigned __int64 v28; // [xsp+B8h] [xbp-1A8h] BYREF
  __int128 v29; // [xsp+C0h] [xbp-1A0h]
  __int64 v30; // [xsp+D0h] [xbp-190h] BYREF
  __int128 v31; // [xsp+D8h] [xbp-188h]
  __int128 v32; // [xsp+E8h] [xbp-178h]
  _OWORD v33[5]; // [xsp+F8h] [xbp-168h]
  __int64 v34; // [xsp+148h] [xbp-118h]
  _BYTE v35[15]; // [xsp+150h] [xbp-110h]
  char v36; // [xsp+15Fh] [xbp-101h]
  _BYTE v37[32]; // [xsp+160h] [xbp-100h] BYREF
  __int128 v38; // [xsp+180h] [xbp-E0h]
  __int128 v39; // [xsp+190h] [xbp-D0h]
  __int128 v40; // [xsp+1A0h] [xbp-C0h]
  __int128 v41; // [xsp+1B0h] [xbp-B0h]
  __int128 v42; // [xsp+1C0h] [xbp-A0h]
  _BYTE v43[23]; // [xsp+1D0h] [xbp-90h] BYREF

  result = dyld4::SyscallDelegate::getfsstat(*this, nullptr, 0, 2);
  if ( (_DWORD)result != -1 )
  {
    v3 = result;
    while ( 1 )
    {
      v4 = (statfs *)lsl::Allocator::malloc(*(this + 1), 2168 * v3);
      if ( (unsigned int)dyld4::SyscallDelegate::getfsstat(*this, v4, 2168 * v3, 2) == v3 )
        break;
      lsl::Allocator::free(*(this + 1), v4);
      result = dyld4::SyscallDelegate::getfsstat(*this, nullptr, 0, 2);
      v3 = result;
      if ( (_DWORD)result == -1 )
        return result;
    }
    if ( v3 >= 1 )
    {
      v5 = 0;
      v16 = 2168LL * (unsigned int)v3;
      do
      {
        _X24 = &v4[v5 / 0x878];
        __asm { PRFM            #0, [X24,#0x1998] }
        v12 = (unsigned int)v4[v5 / 0x878].f_fsid.val[0];
        v13 = (__int64)*(this + 2);
        *(_QWORD *)&v37[16] = 0;
        *(_OWORD *)v37 = v12;
        lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::find(
          &v17,
          v13,
          v37);
        v30 = v17;
        v33[2] = v22;
        v33[3] = v23;
        v33[4] = v24;
        v34 = v25;
        v31 = v18;
        v32 = v19;
        v33[0] = v20;
        v33[1] = v21;
        *(_QWORD *)&v35[7] = *(_QWORD *)&v26[7];
        *(_QWORD *)v35 = *(_QWORD *)v26;
        v36 = v27;
        v14 = (__int64)*(this + 2);
        v42 = 0u;
        memset(v43, 0, sizeof(v43));
        v40 = 0u;
        v41 = 0u;
        v38 = 0u;
        v39 = 0u;
        memset(v37, 0, sizeof(v37));
        v17 = v14;
        v18 = 0u;
        v19 = 0u;
        v20 = 0u;
        v21 = 0u;
        v22 = 0u;
        v23 = 0u;
        v24 = 0u;
        v25 = 0;
        memset(v26, 0, sizeof(v26));
        v27 = 0;
        if ( !(unsigned __int8)lsl::BTree<std::pair<unsigned long long,lsl::UUID>,lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::value_compare,false>::const_iterator::operator<=>(
                                 &v30,
                                 &v17) )
        {
          *(_DWORD *)v37 = 5;
          *(_DWORD *)&v37[12] = 0;
          *(_QWORD *)&v37[16] = 0;
          *(_QWORD *)&v37[4] = 0x8006000000000006LL;
          if ( !(unsigned int)dyld4::SyscallDelegate::getattrlist(
                                *this,
                                _X24->f_mntonname,
                                (attrlist *)v37,
                                &v30,
                                0x40u,
                                0)
            && (BYTE8(v31) & 1) != 0 )
          {
            v15 = (__int64)*(this + 2);
            v28 = v12;
            v29 = *(_OWORD *)((char *)v33 + 8);
          }
          else
          {
            v15 = (__int64)*(this + 2);
            v29 = 0u;
            v28 = v12;
          }
          lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>::insert(&v17, v15, &v28);
        }
        v5 += 2168LL;
      }
      while ( v16 != v5 );
    }
    return lsl::Allocator::free(*(this + 1), v4);
  }
  return result;
}
