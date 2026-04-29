__int64 __fastcall ___ZNK5dyld311MachOLoaded21fixupAllChainedFixupsER11DiagnosticsPK28dyld_chained_starts_in_imagemNS_5ArrayIPKvEEU13block_pointerFvPvSA_E_block_invoke(
        __int64 a1,
        mach_o::ChainedFixupPointerOnDisk::Arm64e *this,
        __int64 a3,
        _BYTE *a4)
{
  unsigned int v6; // w8
  __int64 v8; // x22
  __int64 v9; // x9
  __int64 v10; // x0
  __int64 v11; // x9
  __int64 v12; // x21
  mach_o::ChainedFixupPointerOnDisk::Arm64e *v13; // x2
  bool v14; // zf
  __int64 v15; // x8
  unsigned __int64 v16; // x8
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 result; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x8
  Diagnostics *v22; // x0
  __int64 v23; // x0

  v6 = *(unsigned __int16 *)(a3 + 6);
  if ( v6 > 0xC )
    goto LABEL_18;
  v8 = *(_QWORD *)(a1 + 40);
  if ( ((1 << v6) & 0x1282) == 0 )
  {
    if ( ((1 << v6) & 0x44) != 0 )
    {
      v11 = *(_QWORD *)this;
      if ( (*(_QWORD *)this & 0x8000000000000000LL) == 0 )
      {
        if ( v6 == 2 )
        {
          v10 = mach_o::ChainedFixupPointerOnDisk::Generic64::unpackedTarget(this);
          goto LABEL_11;
        }
        v23 = mach_o::ChainedFixupPointerOnDisk::Generic64::unpackedTarget(this);
LABEL_30:
        v12 = v23 + v8;
        goto LABEL_31;
      }
      if ( (v11 & 0xFFFFFFuLL) < *(_QWORD *)(a1 + 64) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * (v11 & 0xFFFFFF));
        v18 = mach_o::ChainedFixupPointerOnDisk::Generic64::signExtendedAddend(this);
        goto LABEL_21;
      }
      v22 = *(Diagnostics **)(a1 + 72);
      goto LABEL_35;
    }
LABEL_18:
    result = Diagnostics::error(*(Diagnostics **)(a1 + 72), "unsupported pointer chain format: 0x%04X");
LABEL_36:
    *a4 = 1;
    return result;
  }
  v9 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 0x8000000000000000LL) != 0 )
  {
    if ( (v9 & 0x4000000000000000LL) != 0 )
    {
      v14 = v6 == 12;
      v20 = 0xFFFF;
      if ( v14 )
        v20 = 0xFFFFFF;
      v21 = v9 & v20;
      if ( v21 >= *(_QWORD *)(a1 + 64) )
      {
LABEL_27:
        v22 = *(Diagnostics **)(a1 + 72);
LABEL_35:
        result = Diagnostics::error(v22, "out of range bind ordinal %d (max %lu)");
        goto LABEL_36;
      }
      v13 = *(mach_o::ChainedFixupPointerOnDisk::Arm64e **)(*(_QWORD *)(a1 + 48) + 8 * v21);
      if ( !v13 )
      {
        v12 = 0;
        goto LABEL_31;
      }
    }
    else
    {
      v13 = (mach_o::ChainedFixupPointerOnDisk::Arm64e *)(v8 + (unsigned int)v9);
    }
    v12 = mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer(this, this, v13);
    goto LABEL_31;
  }
  if ( (v9 & 0x4000000000000000LL) != 0 )
  {
    v14 = v6 == 12;
    v15 = 0xFFFF;
    if ( v14 )
      v15 = 0xFFFFFF;
    v16 = v9 & v15;
    if ( v16 < *(_QWORD *)(a1 + 64) )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v16);
      v18 = mach_o::ChainedFixupPointerOnDisk::Arm64e::signExtendedAddend(this);
LABEL_21:
      v12 = v18 + v17;
      goto LABEL_31;
    }
    goto LABEL_27;
  }
  if ( v6 != 1 )
  {
    v23 = mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget(this);
    goto LABEL_30;
  }
  v10 = mach_o::ChainedFixupPointerOnDisk::Arm64e::unpackTarget(this);
LABEL_11:
  v12 = *(_QWORD *)(a1 + 80) + v10;
LABEL_31:
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    result = (*(__int64 (__fastcall **)(__int64, mach_o::ChainedFixupPointerOnDisk::Arm64e *, __int64))(result + 16))(
               result,
               this,
               v12);
  *(_QWORD *)this = v12;
  return result;
}
