void __fastcall DyldSharedCache::forEachPatchableUseOfExportInImage(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  int *v5; // x9
  __int64 v9; // x8
  __int64 v10; // x24
  bool v11; // cc
  __int64 v12; // x8
  unsigned int *v13; // x0
  __int64 v14; // x8
  _QWORD *v15; // x13
  __int64 v16; // x9
  unsigned int *v17; // x14
  int *v18; // x15
  int v19; // w8
  __int64 v20; // x25
  int v21; // w16
  __int64 v22; // x17
  __int64 v23; // x27
  __int64 v24; // x9
  __int64 v25; // x28
  unsigned int v26; // w9
  unsigned int *v27; // x28
  unsigned int v28; // t1
  unsigned int v29; // w10
  __int64 v30; // x20
  __int64 v31; // x19
  _DWORD *v32; // x22
  __int64 *v33; // x8
  __int64 v34; // x9
  __int64 *v35; // x10
  __int64 v36; // x12
  unsigned __int64 v37; // x11
  __int64 v38; // x12
  unsigned __int64 *v39; // x13
  int v40; // w9
  int v41; // w22
  __int64 v42; // x22
  unsigned __int64 v43; // x9
  __int64 v44; // [xsp+8h] [xbp-218h]
  int v45; // [xsp+14h] [xbp-20Ch]
  int *v46; // [xsp+18h] [xbp-208h]
  unsigned int *v47; // [xsp+20h] [xbp-200h]
  _QWORD *v48; // [xsp+28h] [xbp-1F8h]
  int v51; // [xsp+48h] [xbp-1D8h] BYREF
  _QWORD v52[9]; // [xsp+50h] [xbp-1D0h] BYREF
  __int64 v53; // [xsp+98h] [xbp-188h] BYREF
  __int64 *v54; // [xsp+A0h] [xbp-180h]
  __int64 v55; // [xsp+A8h] [xbp-178h]
  int v56; // [xsp+B0h] [xbp-170h]
  __int64 v57; // [xsp+B8h] [xbp-168h] BYREF
  __int64 *v58; // [xsp+C0h] [xbp-160h]
  __int64 v59; // [xsp+C8h] [xbp-158h]
  __int64 v60; // [xsp+D0h] [xbp-150h]
  __int64 v61; // [xsp+D8h] [xbp-148h] BYREF
  __int64 *v62; // [xsp+E0h] [xbp-140h]
  __int64 v63; // [xsp+E8h] [xbp-138h]
  __int64 (__fastcall *v64)(); // [xsp+F0h] [xbp-130h]
  __int64 (__fastcall *v65)(); // [xsp+F8h] [xbp-128h]
  int **v66; // [xsp+100h] [xbp-120h]
  __int64 v67; // [xsp+108h] [xbp-118h]
  __int64 v68; // [xsp+110h] [xbp-110h]
  vm_address_t address; // [xsp+118h] [xbp-108h]
  vm_size_t size; // [xsp+120h] [xbp-100h]
  int *v71[17]; // [xsp+128h] [xbp-F8h] BYREF

  v5 = *(int **)(a1 + 152);
  if ( v5 )
  {
    v9 = *(unsigned int *)(a1 + 16);
    if ( (unsigned int)v9 > 0x180 )
    {
      v10 = *(_QWORD *)(a1 + v9);
      if ( *(int *)((char *)v5 + a1 - v10) != 1 )
      {
        v71[0] = (int *)((char *)v5 + a1 - v10);
        v71[1] = v5;
        PatchTable::forEachPatchableUseOfExportInImage(v71, a2, a3, a4);
        return;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + v9);
    }
    v11 = (unsigned int)v9 > 0x1C3;
    v12 = 24;
    if ( v11 )
      v12 = 448;
    v13 = (unsigned int *)dyld3::MachOFile::preferredLoadAddress((dyld3::MachOFile *)(a1
                                                                                    + *(_QWORD *)(a1
                                                                                                + *(unsigned int *)(a1 + v12)
                                                                                                + 32LL * a2)
                                                                                    - v10));
    v14 = *(_QWORD *)(a1 + *(unsigned int *)(a1 + 16));
    v15 = (_QWORD *)(*(_QWORD *)(a1 + 152) + a1 - v14);
    if ( v15[1] >= (unsigned __int64)a2 )
    {
      v16 = a1 - v14;
      v17 = (unsigned int *)(a1 - v14 + *v15 + 8LL * a2);
      v18 = (int *)(v17 + 1);
      if ( v15[3] >= (unsigned __int64)(v17[1] + *v17) )
      {
        v61 = 0;
        v62 = &v61;
        v63 = 0x5002000000LL;
        v64 = __Block_byref_object_copy__10;
        v65 = __Block_byref_object_dispose__10;
        v66 = v71;
        v67 = 8;
        v68 = 0;
        address = 0;
        size = 0;
        v57 = 0;
        v58 = &v57;
        v59 = 0x2000000000LL;
        v60 = 0;
        v53 = 0;
        v54 = &v53;
        v55 = 0x2000000000LL;
        v56 = -1;
        v19 = *v18;
        if ( *v18 )
        {
          v20 = 0;
          v21 = (_DWORD)v13 - v10 + a3;
          v22 = v16 + v15[2];
          v23 = v16 + v15[4];
          v47 = v17;
          v48 = v15;
          v46 = (int *)(v17 + 1);
          v45 = v21;
          v44 = v22;
          do
          {
            v24 = v20 + *v17;
            if ( *(_DWORD *)(v22 + 16 * v24) == v21 )
            {
              v25 = v22 + 16 * v24;
              v28 = *(_DWORD *)(v25 + 4);
              v27 = (unsigned int *)(v25 + 4);
              v26 = v28;
              v29 = v27[1];
              if ( v15[5] < (unsigned __int64)(v29 + v28) )
                break;
              if ( v29 )
              {
                v30 = 0;
                while ( 1 )
                {
                  v31 = v30 + v26;
                  v32 = (_DWORD *)(v23 + 8 * v31);
                  v33 = v58;
                  v34 = v58[3];
                  v35 = v62;
                  if ( v34 && (v36 = v62[7]) != 0 )
                  {
                    v37 = (unsigned int)*v32;
                    v38 = 16 * v36;
                    v39 = (unsigned __int64 *)(v62[5] + 8);
                    while ( *(v39 - 1) > v37 || *v39 <= v37 )
                    {
                      v39 += 2;
                      v38 -= 16;
                      if ( !v38 )
                        goto LABEL_21;
                    }
                  }
                  else
                  {
LABEL_21:
                    v58[3] = 0;
                    *((_DWORD *)v54 + 6) = -1;
                    v35[7] = 0;
                    v52[0] = _NSConcreteStackBlock;
                    v52[1] = 0x40000000;
                    v52[2] = ___ZNK15DyldSharedCache34forEachPatchableUseOfExportInImageEjjjU13block_pointerFvjN5dyld39MachOFile15PointerMetaDataEybE_block_invoke;
                    v52[3] = &unk_96F50;
                    v52[7] = v10;
                    v52[8] = v23 + 8 * v31;
                    v52[4] = &v61;
                    v52[5] = &v57;
                    v52[6] = &v53;
                    v13 = DyldSharedCache::forEachDylib((unsigned int *)a1, (__int64)v52);
                    v33 = v58;
                    v34 = v58[3];
                  }
                  if ( !v34 )
                    DyldSharedCache::forEachPatchableUseOfExportInImage(v13);
                  v40 = *((_DWORD *)v54 + 6);
                  if ( v40 == -1 )
                    DyldSharedCache::forEachPatchableUseOfExportInImage(v13);
                  if ( !v62[7] )
                    DyldSharedCache::forEachPatchableUseOfExportInImage(v13);
                  if ( v40 == a4 )
                  {
                    v41 = v10 + *v32;
                    v42 = v41 - (unsigned int)dyld3::MachOFile::preferredLoadAddress((dyld3::MachOFile *)v33[3]);
                    dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v51);
                    v43 = *(unsigned int *)(v23 + 8 * v31 + 4);
                    v51 = ((_DWORD)v43 << 17) & 0xFE0000
                        | v51 & 0xF0000000
                        | (v43 >> 16)
                        | ((_DWORD)v43 << 12) & 0x1000000
                        | ((_DWORD)v43 << 11) & 0x6000000
                        | ((_DWORD)v43 << 14) & 0x8000000;
                    v13 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64))(a5 + 16))(a5, v42);
                  }
                  if ( ++v30 == v27[1] )
                    break;
                  v26 = *v27;
                }
                v17 = v47;
                v19 = *v46;
                v15 = v48;
                v21 = v45;
                v22 = v44;
              }
            }
            ++v20;
          }
          while ( v20 != v19 );
        }
        _Block_object_dispose(&v53, 8);
        _Block_object_dispose(&v57, 8);
        _Block_object_dispose(&v61, 8);
        v68 = 0;
        if ( address )
          vm_deallocate(mach_task_self_, address, size);
      }
    }
  }
}
