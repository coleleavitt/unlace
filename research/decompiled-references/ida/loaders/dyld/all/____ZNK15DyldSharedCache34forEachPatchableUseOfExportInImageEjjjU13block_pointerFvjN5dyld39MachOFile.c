void __fastcall ___ZNK15DyldSharedCache34forEachPatchableUseOfExportInImageEjjjU13block_pointerFvjN5dyld39MachOFile15PointerMetaDataEybE_block_invoke(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x10
  unsigned __int64 v14; // x9
  __int64 v15; // x10
  unsigned __int64 *v16; // x11
  _QWORD v17[6]; // [xsp+0h] [xbp-50h] BYREF

  v17[0] = _NSConcreteStackBlock;
  v17[1] = 0x40000000;
  v17[2] = ___ZNK15DyldSharedCache34forEachPatchableUseOfExportInImageEjjjU13block_pointerFvjN5dyld39MachOFile15PointerMetaDataEybE_block_invoke_2;
  v17[3] = &unk_96F28;
  v11 = *(_QWORD *)(a1 + 56);
  v17[4] = *(_QWORD *)(a1 + 32);
  v17[5] = v11;
  dyld3::MachOFile::forEachSegment(a2, (__int64)v17);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  v13 = *(_QWORD *)(v12 + 56);
  if ( v13 )
  {
    v14 = **(unsigned int **)(a1 + 64);
    v15 = 16 * v13;
    v16 = (unsigned __int64 *)(*(_QWORD *)(v12 + 40) + 8LL);
    while ( *(v16 - 1) > v14 || *v16 <= v14 )
    {
      v16 += 2;
      v15 -= 16;
      if ( !v15 )
        goto LABEL_6;
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL) = a2;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 24LL) = a4;
    *a7 = 1;
  }
  else
  {
LABEL_6:
    *(_QWORD *)(v12 + 56) = 0;
  }
}
