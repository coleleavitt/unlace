__int64 __fastcall mach_o::Fixups::forEachBind_Relocations(
        mach_o::Fixups *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // x9
  int *v9; // x27
  __int64 v10; // x24
  _BOOL4 v11; // w25
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x8
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  int *v19; // x6
  int v20; // w30
  unsigned int v21; // w11
  dyld3::MachOFile **v22; // x13
  unsigned __int64 v23; // x14
  unsigned __int64 v24; // x7
  unsigned __int64 v25; // x15
  dyld3::MachOFile *v26; // x12
  unsigned __int64 v27; // x16
  __int64 v28; // x10
  __int64 v29; // x24
  __int64 v30; // x16
  __int64 v31; // x17
  unsigned int *v32; // x14
  unsigned int v33; // w14
  unsigned __int16 *v34; // x15
  unsigned int v35; // w15
  _BYTE *v36; // x16
  _BYTE *v37; // x17
  char v38; // w13
  int v39; // w17
  unsigned int v40; // w0
  unsigned int v41; // w13
  __int64 v43; // x5
  __int64 v44; // x25
  __int64 v46; // [xsp+0h] [xbp-110h]
  int v47; // [xsp+3Ch] [xbp-D4h]
  unsigned __int64 v48; // [xsp+40h] [xbp-D0h]
  unsigned int v49; // [xsp+4Ch] [xbp-C4h]
  unsigned int v50; // [xsp+50h] [xbp-C0h]
  _BOOL4 v51; // [xsp+54h] [xbp-BCh]
  __int64 v52; // [xsp+58h] [xbp-B8h]
  __int64 v53; // [xsp+68h] [xbp-A8h]
  _QWORD v54[7]; // [xsp+70h] [xbp-A0h] BYREF
  int v55; // [xsp+A8h] [xbp-68h]
  int v56; // [xsp+ACh] [xbp-64h]
  char v57; // [xsp+B7h] [xbp-59h]

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 60LL) )
  {
    v53 = mach_o::Fixups::externalRelocBaseAddress(a1);
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    v9 = *(int **)(v8 + 40);
    v10 = *(unsigned int *)(v8 + 56);
    v11 = dyld3::MachOFile::is64(**(dyld3::MachOFile ***)a1);
    v12 = dyld3::MachOFile::pointerSize(**(dyld3::MachOFile ***)a1);
    v13 = dyld3::MachOFile::dependentDylibCount(**(dyld3::MachOFile ***)a1, nullptr);
    v14 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    v15 = *(_QWORD *)(v14 + 200);
    v16 = *(_QWORD *)(v14 + 232);
    v17 = *(unsigned int *)(v14 + 216);
    v18 = *(unsigned int *)(v14 + 240);
    v57 = 0;
    if ( (_DWORD)v10 )
    {
      v19 = &v9[2 * v10];
      if ( v11 )
        v20 = 3;
      else
        v20 = 2;
      while ( 1 )
      {
        v21 = v9[1];
        if ( ((v21 >> 25) & 3) != v20 )
        {
          Diagnostics::error(a2, "external relocation has wrong r_length", v15, v16, v17, v18, v19, v46);
          goto LABEL_37;
        }
        if ( v21 >> 28 )
        {
          Diagnostics::error(a2, "external relocation has wrong r_type", v15, v16, v17, v18, v19, v46);
          goto LABEL_37;
        }
        v22 = *(dyld3::MachOFile ***)a1;
        v23 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        if ( !v23 )
        {
LABEL_36:
          Diagnostics::error(a2, "local relocation has out of range r_address");
          goto LABEL_37;
        }
        v24 = 0;
        v25 = v53 + *v9;
        v26 = v22[1];
        while ( 1 )
        {
          v27 = *((_QWORD *)v26 + 6 * v24);
          v28 = v25 - v27;
          if ( v25 >= v27 && *((_QWORD *)v26 + 6 * v24 + 1) + v27 > v25 )
            break;
          v24 = (unsigned int)(v24 + 1);
          if ( v23 <= v24 )
            goto LABEL_36;
        }
        v29 = *(_QWORD *)&v21 & 0xFFFFFFLL;
        if ( (v21 & 0xFFFFFF) > (unsigned int)v17 )
        {
          Diagnostics::error(a2, "external relocation has out of range r_symbolnum", v15, v16, v17, v18, v19, v46);
          goto LABEL_37;
        }
        v30 = v15 + 16 * v29;
        v31 = v15 + 12 * v29;
        if ( v11 )
          v32 = (unsigned int *)(v15 + 16 * v29);
        else
          v32 = (unsigned int *)(v15 + 12 * v29);
        v33 = *v32;
        v34 = (unsigned __int16 *)(v30 + 6);
        if ( !v11 )
          v34 = (unsigned __int16 *)(v31 + 6);
        v35 = *v34;
        v36 = (_BYTE *)(v30 + 4);
        v37 = (_BYTE *)(v31 + 4);
        if ( !v11 )
          v36 = v37;
        v38 = *((_BYTE *)*v22 + 24);
        v39 = v35 >> 8;
        v40 = (unsigned __int8)(BYTE1(v35) + 2);
        if ( v40 < 3 )
          v39 = v40 - 2;
        v41 = v38 < 0 ? v39 : -2;
        if ( v33 >= (unsigned int)v18 )
          break;
        v52 = v15;
        v50 = v17;
        v51 = v11;
        v49 = v18;
        v48 = (unsigned __int64)v19;
        v47 = v20;
        if ( (v35 & 0x80) != 0 && (~*v36 & 0xF) == 0 )
          v43 = 4294967293LL;
        else
          v43 = v41;
        v46 = v28;
        v44 = v16;
        (*(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64, __int64, __int64))(a5 + 16))(
          a5,
          "external relocation",
          1,
          1,
          v13,
          v43,
          v12);
        v16 = v44;
        v9 += 2;
        v19 = (int *)v48;
        v15 = v52;
        v17 = v50;
        v11 = v51;
        v18 = v49;
        v20 = v47;
        if ( (unsigned __int64)v9 >= v48 )
          goto LABEL_37;
      }
      Diagnostics::error(
        a2,
        "external relocation has r_symbolnum=%d which has out of range n_strx",
        v15,
        v16,
        v17,
        v18,
        v19);
    }
LABEL_37:
    v54[0] = _NSConcreteStackBlock;
    v54[1] = 0x40000000;
    v54[2] = ___ZNK6mach_o6Fixups23forEachBind_RelocationsER11DiagnosticsblU13block_pointerFvPKcbbjijjyhS4_bbybRbE_block_invoke;
    v54[3] = &unk_97CC8;
    v54[4] = a5;
    v54[5] = a1;
    v55 = v13;
    v56 = v12;
    v54[6] = a2;
    mach_o::Fixups::forEachIndirectPointer(a1, a2, 0, v16, v54, v18);
  }
  return 0;
}
